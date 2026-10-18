#version 450
layout(set = 0, binding = 8) uniform sampler2D t;
layout(location = 0) in vec2 v_uv;
layout(location = 0) out vec4 o_color;
void main() { o_color = texture(t, v_uv); }
