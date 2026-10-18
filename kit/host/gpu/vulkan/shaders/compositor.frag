#version 450
struct Quad { vec4 rect; vec4 uv; vec2 drawable; uint opaque; uint pad; };
layout(std430, set = 0, binding = 4) readonly buffer QuadBlock { Quad q; };
layout(set = 0, binding = 8) uniform sampler2D tex;
layout(location = 0) in vec2 v_uv;
layout(location = 0) out vec4 o_color;
void main() {
    vec4 c = texture(tex, v_uv);
    if (q.opaque != 0u) c.a = 1;
    o_color = c;
}
