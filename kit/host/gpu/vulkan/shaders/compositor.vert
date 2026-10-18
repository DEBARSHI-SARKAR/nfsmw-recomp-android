#version 450
struct Quad { vec4 rect; vec4 uv; vec2 drawable; uint opaque; uint pad; };
layout(std430, set = 0, binding = 0) readonly buffer QuadBlock { Quad q; };
layout(location = 0) out vec2 v_uv;
void main() {
    const vec2 corners[4] = vec2[4](vec2(0, 0), vec2(1, 0), vec2(0, 1), vec2(1, 1));
    vec2 c = corners[gl_VertexIndex];
    vec2 p = q.rect.xy + c * q.rect.zw;
    gl_Position = vec4(p.x / q.drawable.x * 2 - 1, 1 - p.y / q.drawable.y * 2, 0, 1);
    v_uv = q.uv.xy + c * q.uv.zw;
}
