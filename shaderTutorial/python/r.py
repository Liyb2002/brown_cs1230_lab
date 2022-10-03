import numpy as np
import time


MAX_MARCHING_STEPS = 255
MIN_DIST = 0.0
MAX_DIST = 100.0
PRECISION = 0.001

class vec3():
    def __init__(self, x, y, z):
        (self.x, self.y, self.z) = (x, y, z)
    def __mul__(self, other):
        return vec3(self.x * other, self.y * other, self.z * other)
    def __add__(self, other):
        return vec3(self.x + other.x, self.y + other.y, self.z + other.z)
    def __sub__(self, other):
        return vec3(self.x - other.x, self.y - other.y, self.z - other.z)
    def dot(self, other):
        return (self.x * other.x) + (self.y * other.y) + (self.z * other.z)
    def __abs__(self):
        return self.dot(self)
    def norm(self):
        mag = np.sqrt(abs(self))
        return self * (1.0 / np.where(mag == 0, 1, mag))
    def components(self):
        return (self.x, self.y, self.z)

def rayMarch(ro, rd, start, end):
    dist = start
    for i in range(MAX_MARCHING_STEPS):
        pos = ro + rd * dist
        d = scene(pos)
        dist += d
        if d < PRECISION or dist > end:
            break
    return dist


def calcNormal(p):
    eps = 0.001
    n = vec3(0, 0, 0)
    n.x = scene(p + vec3(eps, 0, 0)) - scene(p - vec3(eps, 0, 0))
    n.y = scene(p + vec3(0, eps, 0)) - scene(p - vec3(0, eps, 0))
    n.z = scene(p + vec3(0, 0, eps)) - scene(p - vec3(0, 0, eps))
    return vec3(n.norm().x, n.norm().y, n.norm().z)

def scene(p):
    offset = vec3(0, 0, -1) 
    radius = 0.7
    #print(p.x, p.y, p.z)
    return np.sqrt((p.x-offset.x) * (p.x-offset.x) 
                + (p.y-offset.y) * (p.y-offset.y) 
                + (p.z-offset.z) * (p.z-offset.z)) - radius


t0 = time.time()
random_colors = np.zeros((512, 512, 3), dtype=np.uint8)

# Camera
ro = vec3(0, 0, 3)
lookAtPoint = vec3(0, 0, 0)
rd = vec3(0, 0,-1)

#light Pos
lp = vec3(3, 2, 4)

# Screen
(w, h) = (512, 512)
(fov, aspect) = (np.pi / 2, w / h)
(cx, cy) = (np.tan(fov / 2) * aspect, np.tan(fov / 2))
# Render
for y in range(h):
    for x in range(w):
        rd.x = cx * (2 * (x + 0.5) / w - 1)
        rd.y = cy * (2 * (y + 0.5) / h - 1)
        rd.z = -1
        rd = rd.norm()
        dist = rayMarch(ro, rd, MIN_DIST, MAX_DIST)
        if dist > MAX_DIST:
            random_colors[x,y] = [0,0,0]
        else:
            p = ro + rd * dist
            n = calcNormal(p)
            lightDirection = (lp - p).norm()
            dif = n.dot(lightDirection)
            dif = max(0.01, dif)
            random_colors[x,y] = [dif * 255, dif * 25, dif * 55]
            #print("{} {} {}".format(n.x, n.y, n.z))

print("Took", time.time() - t0, "seconds")

import matplotlib.pyplot as plt
plt.imshow(random_colors)
plt.colorbar()
plt.show()
