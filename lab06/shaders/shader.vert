#version 400

layout(location = 0) in vec3 position;

uniform mat4 model;
uniform mat4 view;
uniform mat4 perspective;

void main() {
    gl_Position = vec4(position, 1.0);
    // TODO: Add 0.5 to gl_Position.y (Task 2)
    gl_Position.y += 0.5;

    // TODO: Transform gl_Position using the model matrix uniform (Task 3)
    gl_Position.x += 0.5;

    // TODO: Transform the position using all three matrix uniforms. (Task 4)

}
