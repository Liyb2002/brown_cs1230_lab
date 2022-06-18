#version 400
// TODO: Declare a "color" uniform (Task 10)
uniform vec3 color;

out vec3 fragColor;

void main() {
 //   myUniform= vec3(1,0,0);
    fragColor = color;
    // TODO: Set fragColor to a color uniform. (Task 10)

}
