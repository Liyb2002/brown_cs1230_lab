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
    n = np.array([0., 0., 0.])
    n[0] = scene(p + np.array([eps, 0, 0])) - scene(p - np.array([eps, 0, 0]))
    n[1] = scene(p + np.array([0, eps, 0])) - scene(p - np.array([0, eps, 0]))
    n[2] = scene(p + np.array([0, 0, eps])) - scene(p - np.array([0, 0, eps]))
    return n / np.linalg.norm(n)

def scene(p):
    offset = np.array([0, 0, -1])
    radius = 0.7
    return np.sqrt((p[0]-offset[0]) * (p[0]-offset[0]) 
                + (p[1]-offset[1]) * (p[1]-offset[1]) 
                + (p[2]-offset[2]) * (p[2]-offset[2])) - radius


def camera(cameraPos, lookAtPoint):
  cd = (lookAtPoint - cameraPos) / np.linalg.norm(lookAtPoint - cameraPos)
  cr = np.cross(np.array([0, 1, 0]), cd)
  cu = (np.cross(cd, cr)) / np.linalg.norm(np.cross(cd, cr))
  return np.column_stack((-cr, cu, -cd))

t0 = time.time()
random_colors = np.zeros((512, 512, 3), dtype=np.uint8)

ro = np.array([0., 0., 3.])
lookAtPoint = np.array([0., 0., 0.])
#rd = np.array([0., 0., -1.])
my_camera = camera(ro, lookAtPoint)

#light Pos
lp = np.array([-3, 2, 4])

(w, h) = (512, 512)
(fov, aspect) = (np.pi / 2., w / h)
(cx, cy) = (np.tan(fov / 2.) * aspect, np.tan(fov / 2.))
# Render
for y in range(h):
    for x in range(w):
        raw_rd = np.array([x, y, -1])
        raw_rd = (raw_rd) / np.linalg.norm(raw_rd)
        rd = np.dot(my_camera , raw_rd)
        rd[0] = cx * ( 2* (x + 0.5) / w - 1)
        rd[1] = cy * (1 - 2 * (y + 0.5) / h )
        rd[2] = -1.
        rd = rd / np.linalg.norm(rd)
        dist = rayMarch(ro, rd, MIN_DIST, MAX_DIST)
        if dist > MAX_DIST:
            random_colors[x,y] = [0,0,0]
        else:
            p = ro + rd * dist
            n = calcNormal(p)
            lightDirection = (lp - p) / np.linalg.norm(lp - p)
            dif = n.dot(lightDirection)
            dif = max(0.01, dif)
            random_colors[x,y] = [dif * 255, dif * 25, dif * 55]
            #print("{} {} {}".format(n.x, n.y, n.z))
print("Took", time.time() - t0, "seconds")

import matplotlib.pyplot as plt
plt.imshow(random_colors)
plt.colorbar()
plt.show()
