#version 400

layout(location = 0) in vec3 position;
// TODO: Add a new in variable for the color attribute (Task 12)

in vec3 color;
// TODO: Declare a new out vec3 to send the color attribute (Task 13)
out vec3 Gradientcolor;


void main() {
    gl_Position = vec4(position, 1.0);

    // TODO: Set the output variable you created to a per-vertex
    // color attribute (the incoming color). (Task 13)
    Gradientcolor=gl_Position;

}
