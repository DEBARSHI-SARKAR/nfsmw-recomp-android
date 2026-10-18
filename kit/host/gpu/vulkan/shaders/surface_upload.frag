#version 450
// Bytes come from a uint array: GLSL has no 8-bit storage without an extension.
layout(std430, set = 0, binding = 4) readonly buffer Pixels { uint words[]; };
layout(std430, set = 0, binding = 5) readonly buffer Params { uvec4 p[5]; };
layout(std430, set = 0, binding = 6) readonly buffer Palette { uint palette[256]; };
layout(location = 0) out vec4 o_color;
uint byte_at(uint off) { return (words[off >> 2] >> ((off & 3u) * 8u)) & 255u; }
void main() {
    uvec2 xy = uvec2(gl_FragCoord.xy) * p[0].xy / p[0].zw;
    uint bpp = p[1].y;
    uint offset = xy.y * p[1].x + xy.x * (bpp == 8u ? 1u : (bpp <= 16u ? 2u : 4u));
    uvec3 rgb;
    if (bpp == 8u) {
        uint index = byte_at(offset);
        uint c = p[1].z != 0u ? palette[index] : index * 0x010101u;
        rgb = uvec3((c >> 16) & 255u, (c >> 8) & 255u, c & 255u);
    } else {
        uint value = byte_at(offset) | (byte_at(offset + 1u) << 8);
        if (bpp > 16u) value |= (byte_at(offset + 2u) << 16) | (byte_at(offset + 3u) << 24);
        rgb = ((uvec3(value) & p[2].xyz) >> p[3].xyz) * 255u / p[4].xyz;
    }
    o_color = vec4(vec3(rgb) / 255.0, 1);
}
