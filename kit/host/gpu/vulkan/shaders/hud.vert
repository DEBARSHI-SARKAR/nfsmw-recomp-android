#version 450
layout(std430, set = 0, binding = 0) readonly buffer RectBlock { vec4 r; };
layout(location = 0) out vec2 v_uv;
void main() {
    vec2 q = vec2(gl_VertexIndex & 1, gl_VertexIndex >> 1);
    gl_Position = vec4(r.xy + q * r.zw, 0, 1);
    v_uv = q;
}
