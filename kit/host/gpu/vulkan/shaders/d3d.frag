#version 450
// A line-for-line translation of d3d_fragment in gpu/metal/shaders_msl.h.
struct Uniforms {
    mat4 mvp;
    uint pretransformed, textured, texblend, alphatest, alphafunc;
    float alpharef;
    uint specular, texture_has_alpha, fogmode;
    float fogstart, fogend, fogdensity, fogr, fogg, fogb, pointsize;
    uint terrain_detail;
};
layout(std430, set = 0, binding = 5) readonly buffer UniformBlock { Uniforms u; };
layout(set = 0, binding = 8) uniform sampler2D tex;
layout(set = 0, binding = 9) uniform sampler2D detail;
layout(location = 0) in vec2 v_uv;
layout(location = 1) in vec4 v_color;
layout(location = 2) in vec4 v_spec;
layout(location = 3) in float v_fogdist;
layout(location = 0) out vec4 o_color;
layout(location = 1) out float o_coverage;
vec3 sat3(vec3 x) { return clamp(x, vec3(0.0), vec3(1.0)); }
void main() {
    vec4 c = v_color;
    if (u.textured != 0u) {
        vec4 t = texture(tex, v_uv);
        if (u.terrain_detail != 0u) {
            vec3 chroma = t.rgb / max(max(t.r, t.g), max(t.b, 0.01));
            float land = 1.0 - smoothstep(0.02, 0.22, chroma.b - chroma.r);
            float grass = smoothstep(-0.03, 0.16, chroma.g - chroma.r);
            float stone = 1.0 - smoothstep(0.06, 0.28, max(chroma.r, chroma.g) - min(chroma.r, min(chroma.g, chroma.b)));
            float sand = smoothstep(0.28, 0.62, max(t.r, t.g));
            vec4 structure = (texture(detail, v_uv) * 255.0 - 128.0) / 128.0;
            float material = mix(structure.a, structure.g, sand);
            material = mix(material, structure.b, stone);
            material = mix(material, structure.r, grass);
            t.rgb = sat3(t.rgb * (1.0 + material * 0.85 * land));
        }
        switch (u.texblend) {
        case 1u: case 7u: c = t; break;
        case 2u: c = vec4(t.rgb * v_color.rgb, u.texture_has_alpha != 0u ? t.a : v_color.a); break;
        case 3u: c = vec4(mix(v_color.rgb, t.rgb, t.a), v_color.a); break;
        case 5u: c = vec4(t.rgb, v_color.a); break;
        case 8u: c = vec4(sat3(t.rgb + v_color.rgb), v_color.a); break;
        case 4u: c = vec4(t.rgb * v_color.rgb, t.a * v_color.a); break;
        default: c = vec4(t.rgb * v_color.rgb, u.texture_has_alpha != 0u ? t.a : v_color.a); break;
        }
    }
    if (u.specular != 0u) c = vec4(sat3(c.rgb + v_spec.rgb), c.a);
    if (u.alphatest != 0u) {
        bool pass;
        switch (u.alphafunc) {
        case 1u: pass = false; break;
        case 2u: pass = c.a < u.alpharef; break;
        case 3u: pass = c.a == u.alpharef; break;
        case 4u: pass = c.a <= u.alpharef; break;
        case 5u: pass = c.a > u.alpharef; break;
        case 6u: pass = c.a != u.alpharef; break;
        case 7u: pass = c.a >= u.alpharef; break;
        default: pass = true; break;
        }
        if (!pass) discard;
    }
    if (u.fogmode != 0u) {
        float f = 1.0;
        float d = v_fogdist;
        switch (u.fogmode) {
        case 1u: f = v_spec.a; break;
        case 2u: f = exp(-u.fogdensity * d); break;
        case 3u: f = exp(-(u.fogdensity * d) * (u.fogdensity * d)); break;
        default: f = (u.fogend - d) / max(u.fogend - u.fogstart, 1e-6); break;
        }
        f = clamp(f, 0.0, 1.0);
        c = vec4(mix(vec3(u.fogr, u.fogg, u.fogb), c.rgb, f), c.a);
    }
    o_color = c;
    o_coverage = 1.0;
}
