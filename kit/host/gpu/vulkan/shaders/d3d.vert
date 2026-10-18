#version 450
struct HVertex { float x, y, z, w; float u, v; float r, g, b, a; float sr, sg, sb, sa; };
struct Uniforms {
    mat4 mvp;
    uint pretransformed, textured, texblend, alphatest, alphafunc;
    float alpharef;
    uint specular, texture_has_alpha, fogmode;
    float fogstart, fogend, fogdensity, fogr, fogg, fogb, pointsize;
    uint terrain_detail;
};
layout(std430, set = 0, binding = 0) readonly buffer Vertices { HVertex v[]; };
layout(std430, set = 0, binding = 1) readonly buffer UniformBlock { Uniforms u; };
layout(location = 0) out vec2 v_uv;
layout(location = 1) out vec4 v_color;
layout(location = 2) out vec4 v_spec;
layout(location = 3) out float v_fogdist;
void main() {
    HVertex s = v[gl_VertexIndex];
    vec4 pos = u.pretransformed != 0u ? vec4(s.x, s.y, s.z, s.w) : u.mvp * vec4(s.x, s.y, s.z, 1.0);
    gl_Position = pos;
    gl_PointSize = u.pointsize;
    v_uv = vec2(s.u, s.v);
    v_color = vec4(s.r, s.g, s.b, s.a);
    v_spec = vec4(s.sr, s.sg, s.sb, s.sa);
    v_fogdist = abs(pos.w); // table fog uses eye distance, the clip w
}
