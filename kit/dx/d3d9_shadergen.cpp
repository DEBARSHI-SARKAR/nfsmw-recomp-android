// d3d9_shadergen.cpp - Direct3D 9 shaders as source text for the GPU
// backends: Metal Shading Language (d3d9_msl.h), Vulkan GLSL (d3d9_glsl.h)
// and WGSL (d3d9_wgsl.h). One walk over the decoded program writes each
// language; they differ in spelling, which the Lang switches below choose.
#include "d3d9_glsl.h"
#include "d3d9_msl.h"
#include "d3d9_wgsl.h"

#include <cstdio>
#include <set>
#include <vector>

using namespace d9sh;

namespace d9msl {
namespace {

enum class Lang { MSL, GLSL, WGSL };

const char *kPrelude = R"MSL(#include <metal_stdlib>
using namespace metal;
struct D9V2F {
    float4 pos [[position]];
    float4 d0;
    float4 d1;
    float4 t0; float4 t1; float4 t2; float4 t3;
    float4 t4; float4 t5; float4 t6; float4 t7;
    float fog;
    float fogz;
};
struct D9VSParams { float4 halfpix; float4 ascale[16]; };
struct D9PSParams {
    float alpha_ref; int alpha_func; int fog_mode; int pad0;
    float4 fog_color;
    float fog_start; float fog_end; float fog_density; float pad1;
};
static inline float4 d9_dz(float4 v) { return float4(v.x / v.z, v.y / v.z, v.z, v.w); }
static inline float4 d9_dw(float4 v) { return float4(v.x / v.w, v.y / v.w, v.z, v.w); }
static inline float4 d9_lit(float4 a) {
    float4 o = float4(1.0, max(a.x, 0.0), 0.0, 1.0);
    if (a.x > 0.0 && a.y > 0.0)
        o.z = pow(a.y, clamp(a.w, -127.9961, 127.9961));
    return o;
}
static inline float4 d9_nrm(float4 a) {
    float l = length(a.xyz);
    return l > 0.0 ? a / l : float4(0.0);
}
static inline bool d9_cmp(int f, float a, float b) {
    switch (f) {
    case 1: return false;
    case 2: return a < b;
    case 3: return a == b;
    case 4: return a <= b;
    case 5: return a > b;
    case 6: return a != b;
    case 7: return a >= b;
    default: return true;
    }
}
)MSL";

const char *kGlslPrelude = R"GLSL(#version 450
vec4 d9_dz(vec4 v) { return vec4(v.x / v.z, v.y / v.z, v.z, v.w); }
vec4 d9_dw(vec4 v) { return vec4(v.x / v.w, v.y / v.w, v.z, v.w); }
vec4 d9_lit(vec4 a) {
    vec4 o = vec4(1.0, max(a.x, 0.0), 0.0, 1.0);
    if (a.x > 0.0 && a.y > 0.0)
        o.z = pow(a.y, clamp(a.w, -127.9961, 127.9961));
    return o;
}
vec4 d9_nrm(vec4 a) {
    float l = length(a.xyz);
    return l > 0.0 ? a / l : vec4(0.0);
}
vec4 d9_round(vec4 v) { return sign(v) * floor(abs(v) + 0.5); }
bool d9_cmp(int f, float a, float b) {
    switch (f) {
    case 1: return false;
    case 2: return a < b;
    case 3: return a == b;
    case 4: return a <= b;
    case 5: return a > b;
    case 6: return a != b;
    case 7: return a >= b;
    default: return true;
    }
}
)GLSL";

const char *kWgslPrelude = R"WGSL(diagnostic(off, derivative_uniformity);
fn d9_dz(v: vec4f) -> vec4f { return vec4f(v.x / v.z, v.y / v.z, v.z, v.w); }
fn d9_dw(v: vec4f) -> vec4f { return vec4f(v.x / v.w, v.y / v.w, v.z, v.w); }
fn d9_lit(a: vec4f) -> vec4f {
    var o = vec4f(1.0, max(a.x, 0.0), 0.0, 1.0);
    if (a.x > 0.0 && a.y > 0.0) {
        o.z = pow(a.y, clamp(a.w, -127.9961, 127.9961));
    }
    return o;
}
fn d9_nrm(a: vec4f) -> vec4f {
    let l = length(a.xyz);
    if (l > 0.0) { return a / l; }
    return vec4f(0.0);
}
fn d9_round(v: vec4f) -> vec4f { return sign(v) * floor(abs(v) + 0.5); }
fn d9_alpha(v: vec4f) -> vec4f { return vec4f(0.0, 0.0, 0.0, v.r); }
fn d9_cmp(f: i32, a: f32, b: f32) -> bool {
    switch (f) {
        case 1: { return false; }
        case 2: { return a < b; }
        case 3: { return a == b; }
        case 4: { return a <= b; }
        case 5: { return a > b; }
        case 6: { return a != b; }
        case 7: { return a >= b; }
        default: { return true; }
    }
}
struct VSP { halfpix: vec4f, ascale: array<vec4f, 16>, bgra: vec4i };
struct PSP {
    alpha_ref: f32, alpha_func: i32, fog_mode: i32, pad0: i32,
    fog_color: vec4f,
    fog_start: f32, fog_end: f32, fog_density: f32, pad1: f32,
};
struct V2F {
    @builtin(position) pos: vec4f,
    @location(0) d0: vec4f,
    @location(1) d1: vec4f,
    @location(2) t0: vec4f, @location(3) t1: vec4f, @location(4) t2: vec4f, @location(5) t3: vec4f,
    @location(6) t4: vec4f, @location(7) t5: vec4f, @location(8) t6: vec4f, @location(9) t7: vec4f,
    @location(10) fog: f32,
    @location(11) fogz: f32,
};
)WGSL";

const char kComp[] = "xyzw";

std::string swizzle(uint32_t swz) {
    std::string s = ".";
    for (int k = 0; k < 4; ++k)
        s += kComp[(swz >> (2 * k)) & 3];
    return s;
}

std::string mask_of(uint32_t mask) {
    std::string s = ".";
    for (int k = 0; k < 4; ++k)
        if (mask >> k & 1)
            s += kComp[k];
    return s;
}

struct Gen {
    const Program &p;
    const Lang lang;
    const std::string F4; // the four-float vector type
    std::string body;
    std::string why;
    bool failed = false;
    std::set<uint32_t> stages; // sampler stages read
    uint32_t color_outputs = 0;
    bool writes_depth = false;
    PixelVariant variant;
    int depth = 0;      // open loops and ifs
    int loop_depth = 0; // open rep/loop blocks, for break
    std::string indent() const {
        return std::string(4 + 4 * (size_t)depth, ' ');
    }

    bool glsl() const {
        return lang == Lang::GLSL;
    }
    bool wgsl() const {
        return lang == Lang::WGSL;
    }
    // A four-float vector of one value, as a comparison's right-hand side.
    std::string splat(const char *v) const {
        return glsl()   ? std::string("vec4(") + v + ")"
               : wgsl() ? std::string("vec4f(") + v + ")"
                        : std::string(v);
    }
    std::string saturate(const std::string &v) const {
        return glsl() ? "clamp" + v.substr(0, v.size() - 1) + ", 0.0, 1.0)" : "saturate" + v;
    }
    // `f` where `cond` is false, `t` where it is true; `cond` is written with
    // the vector comparison `op` between `a` and `b`.
    std::string choose(const std::string &f, const std::string &t, const std::string &a,
                       const char *op, const std::string &b) const {
        if (!glsl())
            return "select(" + f + ", " + t + ", " + a + " " + op + " " + b + ")";
        return "mix(" + f + ", " + t + ", " + vector_compare(a, op, b) + ")";
    }
    static const char *glsl_compare(const char *op) {
        std::string o = op;
        return o == "<"    ? "lessThan"
               : o == "<=" ? "lessThanEqual"
               : o == ">"  ? "greaterThan"
               : o == ">=" ? "greaterThanEqual"
               : o == "==" ? "equal"
                           : "notEqual";
    }
    std::string vector_compare(const std::string &a, const char *op, const std::string &b) const {
        return std::string(glsl_compare(op)) + "(" + a + ", " + b + ")";
    }

    // A 3.0 pixel shader's vN, found through its dcl.
    std::string sm3_input(uint32_t index) {
        for (const DclIn &d : p.inputs)
            if (d.type == R_INPUT && d.index == index) {
                char buf[32];
                if (d.usage == 10) { // D3DDECLUSAGE_COLOR
                    snprintf(buf, sizeof buf, "iv[%u]", d.usage_index & 1);
                    return buf;
                }
                if (d.usage == 5) { // TEXCOORD
                    snprintf(buf, sizeof buf, "t[%u]", d.usage_index & 7);
                    return buf;
                }
                fail("pixel shader input usage " + std::to_string(d.usage));
                return F4 + "(0.0)";
            }
        fail("pixel shader input v" + std::to_string(index) + " has no dcl");
        return F4 + "(0.0)";
    }
    // A 3.0 vertex shader's oN, found through its dcl.
    std::string sm3_output(uint32_t index) {
        for (const DclIn &d : p.outputs)
            if (d.index == index) {
                char buf[32];
                switch (d.usage) {
                case 0: // POSITION
                case 9: // POSITIONT
                    return "opos";
                case 10: // COLOR
                    snprintf(buf, sizeof buf, "od[%u]", d.usage_index & 1);
                    return buf;
                case 5: // TEXCOORD
                    snprintf(buf, sizeof buf, "ot[%u]", d.usage_index & 7);
                    return buf;
                case 11: // FOG
                    return "ofog";
                case 4: // PSIZE
                    return "opsize";
                default:
                    fail("vertex shader output usage " + std::to_string(d.usage));
                    return "junk";
                }
            }
        fail("vertex shader output o" + std::to_string(index) + " has no dcl");
        return "junk";
    }

    // GLSL declares as many constant registers as the program reads.
    uint32_t const_limit = 256;

    Gen(const Program &prog, Lang l)
        : p(prog), lang(l), F4(l == Lang::GLSL   ? "vec4"
                               : l == Lang::WGSL ? "vec4f"
                                                 : "float4") {
        if (glsl() || wgsl())
            const_limit = d9glsl::constant_registers(prog);
    }

    void fail(const std::string &w) {
        if (!failed)
            why = w;
        failed = true;
    }

    std::string base(const Src &s) {
        char buf[96];
        switch (s.type) {
        case R_TEMP:
            snprintf(buf, sizeof buf, "r[%u]", s.index & 31);
            return buf;
        case R_INPUT:
            if (!p.pixel) {
                snprintf(buf, sizeof buf, "vv[%u]", s.index & 15);
                return buf;
            }
            if (p.major >= 3)
                return sm3_input(s.index);
            snprintf(buf, sizeof buf, "iv[%u]", s.index & 1);
            return buf;
        case R_CONST:
            if (s.rel && !p.pixel) {
                snprintf(buf, sizeof buf, "c[clamp(%s(a0.x) + %u, 0, %u)]", wgsl() ? "i32" : "int",
                         s.index, glsl() || wgsl() ? const_limit - 1 : 255);
                return buf;
            }
            snprintf(buf, sizeof buf, "c[%u]", s.index);
            return buf;
        case R_ADDR:
            if (!p.pixel)
                return "a0";
            snprintf(buf, sizeof buf, "t[%u]", s.index & 7);
            return buf;
        case R_CONSTINT: {
            // defi values; the integer constants a game sets are not plumbed.
            auto it = p.idefs.find(s.index);
            if (it == p.idefs.end()) {
                fail("integer constant i" + std::to_string(s.index) + " without defi");
                return F4 + "(0.0)";
            }
            snprintf(buf, sizeof buf, "%s(%d.0, %d.0, %d.0, %d.0)", F4.c_str(), it->second[0],
                     it->second[1], it->second[2], it->second[3]);
            return buf;
        }
        case R_CONSTBOOL: {
            auto it = p.bdefs.find(s.index);
            if (it == p.bdefs.end()) {
                fail("boolean constant b" + std::to_string(s.index) + " without defb");
                return F4 + "(0.0)";
            }
            return it->second ? F4 + "(1.0)" : F4 + "(0.0)";
        }
        case R_LOOP:
            return F4 + (wgsl() ? "(f32(aL))" : "(float(aL))");
        default:
            fail("source register type " + std::to_string(s.type));
            return F4 + "(0.0)";
        }
    }

    std::string src(const Src &s) {
        std::string v = "(" + base(s) + swizzle(s.swz) + ")";
        switch (s.mod) {
        case 0:
            return v;
        case 1:
            return "(-" + v + ")";
        case 2:
            return "(" + v + " - 0.5)";
        case 3:
            return "(-(" + v + " - 0.5))";
        case 4:
            return "(2.0 * " + v + " - 1.0)";
        case 5:
            return "(-(2.0 * " + v + " - 1.0))";
        case 6:
            return "(1.0 - " + v + ")";
        case 7:
            return "(2.0 * " + v + ")";
        case 8:
            return "(-(2.0 * " + v + "))";
        case 9:
            return "d9_dz" + v;
        case 10:
            return "d9_dw" + v;
        case 11:
            return "abs" + v;
        case 12:
            return "(-abs" + v + ")";
        default:
            fail("source modifier " + std::to_string(s.mod));
            return v;
        }
    }

    std::string dst_name(const Dst &d) {
        char buf[48];
        switch (d.type) {
        case R_TEMP:
            snprintf(buf, sizeof buf, "r[%u]", d.index & 31);
            return buf;
        case R_ADDR:
            if (!p.pixel)
                return "a0";
            snprintf(buf, sizeof buf, "t[%u]", d.index & 7);
            return buf;
        case R_RASTOUT:
            if (p.pixel)
                break;
            return d.index == 0 ? "opos" : d.index == 1 ? "ofog" : "opsize";
        case R_ATTROUT:
            if (p.pixel)
                break;
            snprintf(buf, sizeof buf, "od[%u]", d.index & 1);
            return buf;
        case R_TEXCRDOUT:
            if (p.pixel)
                break;
            if (p.major >= 3)
                return sm3_output(d.index);
            snprintf(buf, sizeof buf, "ot[%u]", d.index & 7);
            return buf;
        case R_COLOROUT:
            if (!p.pixel)
                break;
            color_outputs |= 1u << (d.index & 3);
            snprintf(buf, sizeof buf, "oc[%u]", d.index & 3);
            return buf;
        case R_DEPTHOUT:
            if (!p.pixel)
                break;
            writes_depth = true;
            return "odepth";
        default:
            break;
        }
        fail("destination register type " + std::to_string(d.type));
        return "junk";
    }

    void write(const Dst &d, const std::string &value) {
        std::string name = dst_name(d);
        std::string v = "(" + value + ")";
        if (d.shift > 0)
            v = "(" + v + " * " + std::to_string(1 << d.shift) + ".0)";
        else if (d.shift < 0)
            v = "(" + v + " / " + std::to_string(1 << -d.shift) + ".0)";
        if (d.saturate)
            v = saturate(v);
        // The address register holds integers, rounded half away from zero.
        if (!p.pixel && d.type == R_ADDR)
            v = (glsl() || wgsl() ? "d9_round" : "round") + v;
        uint32_t mask = d.mask & 0xf;
        if (mask == 0)
            return;
        if (mask == 0xf) {
            body += indent() + name + " = " + v + ";\n";
        } else if (wgsl()) {
            // WGSL assigns one component at a time.
            std::string line = indent() + "{ let w_ = " + v + ";";
            for (int k = 0; k < 4; ++k)
                if (mask >> k & 1)
                    line += std::string(" ") + name + "." + kComp[k] + " = w_." + kComp[k] + ";";
            body += line + " }\n";
        } else {
            body += indent() + "{ " + F4 + " w_ = " + v + "; " + name + mask_of(mask) + " = w_" +
                    mask_of(mask) + "; }\n";
        }
    }

    // ifc/breakc comparison.
    static const char *comparison(uint32_t ctrl) {
        switch (ctrl) {
        case 1:
            return ">";
        case 2:
            return "==";
        case 3:
            return ">=";
        case 4:
            return "<";
        case 5:
            return "!=";
        case 6:
            return "<=";
        default:
            return nullptr;
        }
    }

    // A sample from stage `stage` at `coord` (a four-float expression).
    std::string sample(uint32_t stage, const std::string &coord, bool projected, bool bias,
                       bool lod = false) {
        stage &= 15;
        stages.insert(stage);
        const std::string n = std::to_string(stage);
        std::string c = projected ? "(" + coord + " / (" + coord + ").w)" : coord;
        if (is_depth(stage))
            return wgsl() ? "d9_shadow(tx" + n + ", sm" + n + ", " + c + ")"
                          : "d9_shadow(tx" + n + ", " + c + ")";
        std::string lookup = kind_of(stage) == S_CUBE ? "(" + c + ").xyz" : "(" + c + ").xy";
        if (wgsl()) {
            std::string s = lod ? "textureSampleLevel(tx" + n + ", sm" + n + ", " + lookup + ", (" +
                                      coord + ").w)"
                            : bias ? "textureSampleBias(tx" + n + ", sm" + n + ", " + lookup +
                                         ", (" + coord + ").w)"
                                   : "textureSample(tx" + n + ", sm" + n + ", " + lookup + ")";
            return (variant.alpha_mask >> stage & 1) ? "d9_alpha(" + s + ")" : s;
        }
        if (glsl()) {
            if (lod)
                return "textureLod(tx" + n + ", " + lookup + ", (" + coord + ").w)";
            return "texture(tx" + n + ", " + lookup + (bias ? ", (" + coord + ").w)" : ")");
        }
        std::string extra = bias  ? ", bias((" + coord + ").w)"
                            : lod ? ", level((" + coord + ").w)"
                                  : "";
        return "tx" + n + ".sample(sm" + n + ", " + lookup + extra + ")";
    }

    bool is_depth(uint32_t stage) const {
        return kind_of(stage) == S_2D && (variant.depth_mask >> stage & 1);
    }

    uint32_t kind_of(uint32_t stage) const {
        if (p.major >= 2) {
            auto it = p.samplers.find(stage);
            return it != p.samplers.end() ? it->second : (uint32_t)S_2D;
        }
        return (variant.cube_mask >> stage & 1) ? (uint32_t)S_CUBE : (uint32_t)S_2D;
    }

    void matrix_op(const Inst &in) {
        int cols = (in.op == OP_M4X4 || in.op == OP_M4X3) ? 4 : 3;
        int rows = (in.op == OP_M4X4 || in.op == OP_M3X4) ? 4 : in.op == OP_M3X2 ? 2 : 3;
        std::string a = src(in.src[0]);
        std::string v = F4 + "(";
        for (int row = 0; row < 4; ++row) {
            if (row)
                v += ", ";
            if (row >= rows) {
                v += "0.0";
                continue;
            }
            Src m = in.src[1];
            m.index += (uint32_t)row;
            std::string line = src(m);
            v += cols == 4 ? "dot(" + a + ", " + line + ")"
                           : "dot((" + a + ").xyz, (" + line + ").xyz)";
        }
        v += ")";
        write(in.dst, v);
    }

    std::string discard() const {
        return glsl() ? "discard" : "discard_fragment()";
    }

    void instruction(const Inst &in) {
        auto S = [&](int i) { return src(in.src[i]); };
        switch (in.op) {
        case OP_NOP:
            return;
        case OP_MOV:
        case OP_MOVA:
            write(in.dst, S(0));
            return;
        case OP_ADD:
            write(in.dst, S(0) + " + " + S(1));
            return;
        case OP_SUB:
            write(in.dst, S(0) + " - " + S(1));
            return;
        case OP_MUL:
            write(in.dst, S(0) + " * " + S(1));
            return;
        case OP_MAD:
            write(in.dst, S(0) + " * " + S(1) + " + " + S(2));
            return;
        case OP_MIN:
            write(in.dst, "min(" + S(0) + ", " + S(1) + ")");
            return;
        case OP_MAX:
            write(in.dst, "max(" + S(0) + ", " + S(1) + ")");
            return;
        case OP_SLT:
            write(in.dst, choose(F4 + "(0.0)", F4 + "(1.0)", S(0), "<", S(1)));
            return;
        case OP_SGE:
            write(in.dst, choose(F4 + "(0.0)", F4 + "(1.0)", S(0), ">=", S(1)));
            return;
        case OP_DP3:
            write(in.dst, F4 + "(dot((" + S(0) + ").xyz, (" + S(1) + ").xyz))");
            return;
        case OP_DP4:
            write(in.dst, F4 + "(dot(" + S(0) + ", " + S(1) + "))");
            return;
        case OP_DP2ADD:
            write(in.dst, F4 + "(dot((" + S(0) + ").xy, (" + S(1) + ").xy) + (" + S(2) + ").x)");
            return;
        case OP_RCP:
            write(in.dst, F4 + "(1.0 / (" + S(0) + ").x)");
            return;
        case OP_RSQ:
            write(in.dst, F4 +
                              (glsl()   ? "(inversesqrt(abs(("
                               : wgsl() ? "(inverseSqrt(abs(("
                                        : "(rsqrt(abs((") +
                              S(0) + ").x)))");
            return;
        case OP_FRC:
            write(in.dst, "fract(" + S(0) + ")");
            return;
        case OP_ABS:
            write(in.dst, "abs(" + S(0) + ")");
            return;
        case OP_EXP:
        case OP_EXPP:
            write(in.dst, F4 + "(exp((" + S(0) + ").x))");
            return;
        case OP_LOG:
        case OP_LOGP:
            write(in.dst, F4 + "(log2(abs((" + S(0) + ").x)))");
            return;
        case OP_POW:
            write(in.dst, F4 + "(pow(abs((" + S(0) + ").x), (" + S(1) + ").x))");
            return;
        case OP_NRM:
            write(in.dst, "d9_nrm(" + S(0) + ")");
            return;
        case OP_CRS:
            write(in.dst, F4 + "(cross((" + S(0) + ").xyz, (" + S(1) + ").xyz), 0.0)");
            return;
        case OP_SGN:
            write(in.dst, "sign(" + S(0) + ")");
            return;
        case OP_LRP:
            write(in.dst, "mix(" + S(2) + ", " + S(1) + ", " + S(0) + ")");
            return;
        case OP_CMP:
            write(in.dst, choose(S(2), S(1), S(0), ">=", splat("0.0")));
            return;
        case OP_CND:
            if (p.major == 1 && p.minor == 4)
                write(in.dst, choose(S(2), S(1), S(0), ">", splat("0.5")));
            else if (wgsl())
                write(in.dst, "select(" + S(2) + ", " + S(1) + ", (" + S(0) + ").w > 0.5)");
            else
                write(in.dst, "((" + S(0) + ").w > 0.5 ? " + S(1) + " : " + S(2) + ")");
            return;
        case OP_LIT:
            write(in.dst, "d9_lit(" + S(0) + ")");
            return;
        case OP_DST:
            write(in.dst, F4 + "(1.0, (" + S(0) + ").y * (" + S(1) + ").y, (" + S(0) + ").z, (" +
                              S(1) + ").w)");
            return;
        case OP_SINCOS:
            write(in.dst, F4 + "(cos((" + S(0) + ").x), sin((" + S(0) + ").x), 0.0, 0.0)");
            return;
        case OP_M4X4:
        case OP_M4X3:
        case OP_M3X4:
        case OP_M3X3:
        case OP_M3X2:
            matrix_op(in);
            return;
        case OP_TEXCOORD:
            if (in.nsrc) // 1.4 texcrd rN, src
                write(in.dst, F4 + "((" + S(0) + ").xyz, 1.0)");
            else {
                char buf[64];
                snprintf(buf, sizeof buf,
                         glsl()   ? "vec4(clamp(tc[%u].xyz, 0.0, 1.0), 1.0)"
                         : wgsl() ? "vec4f(saturate(tc[%u].xyz), 1.0)"
                                  : "float4(saturate(tc[%u].xyz), 1.0)",
                         in.dst.index & 7);
                write(in.dst, buf);
            }
            return;
        case OP_TEXKILL: {
            Src s;
            s.type = in.dst.type;
            s.index = in.dst.index;
            std::string v = base(s);
            if (wgsl()) {
                if (p.major >= 2)
                    body += indent() + "if (any(" + v + " < vec4f(0.0))) { discard; }\n";
                else
                    body += indent() + "if (any((" + v + ").xyz < vec3f(0.0))) { discard; }\n";
            } else if (glsl()) {
                if (p.major >= 2)
                    body += indent() + "if (any(lessThan(" + v + ", vec4(0.0)))) discard;\n";
                else
                    body += indent() + "if (any(lessThan((" + v + ").xyz, vec3(0.0)))) discard;\n";
            } else if (p.major >= 2) {
                body += indent() + "if (any(" + v + " < 0.0)) discard_fragment();\n";
            } else {
                body += indent() + "if (any((" + v + ").xyz < 0.0)) discard_fragment();\n";
            }
            return;
        }
        case OP_TEX:
            if (p.major >= 2) {
                write(in.dst, sample(in.src[1].index, S(0), in.ctrl == 1, in.ctrl == 2));
            } else if (in.nsrc) { // 1.4 texld rN, src
                uint32_t n = in.dst.index & 7;
                write(in.dst, sample(n, S(0), variant.projected_mask >> n & 1, false));
            } else { // tex tN
                uint32_t n = in.dst.index & 7;
                char buf[32];
                snprintf(buf, sizeof buf, "tc[%u]", n);
                write(in.dst, sample(n, buf, variant.projected_mask >> n & 1, false));
            }
            return;
        case OP_TEXLDL:
            write(in.dst, sample(in.src[1].index, S(0), false, false, true));
            return;
        case OP_REP: {
            std::string n = "rep" + std::to_string(depth);
            if (wgsl()) {
                body += indent() + "{ let " + n + "_end = clamp(i32((" + S(0) +
                        ").x), 0, 255); for (var " + n + " = 0; " + n + " < " + n + "_end; " + n +
                        "++) {\n";
                ++depth;
                ++loop_depth;
                return;
            }
            body += indent() + "for (int " + n + " = 0, " + n + "_end = clamp(int((" + S(0) +
                    ").x), 0, 255); " + n + " < " + n + "_end; ++" + n + ") {\n";
            ++depth;
            ++loop_depth;
            return;
        }
        case OP_LOOP: {
            // loop aL, iN: iN.x iterations, aL from iN.y in steps of iN.z.
            std::string n = "lp" + std::to_string(depth);
            std::string i = S(1);
            if (wgsl()) {
                body += indent() + "{ let " + n + "_saved = aL; aL = i32((" + i + ").y); let " + n +
                        "_end = clamp(i32((" + i + ").x), 0, 255); let " + n + "_step = i32((" + i +
                        ").z); var " + n + " = 0;\n";
                body += indent() + "loop { if (" + n + " >= " + n + "_end) { break; }\n";
                ++depth;
                ++loop_depth;
                return;
            }
            body += indent() + "{ int " + n + "_saved = aL; aL = int((" + i + ").y);\n";
            body += indent() + "for (int " + n + " = 0, " + n + "_end = clamp(int((" + i +
                    ").x), 0, 255); " + n + " < " + n + "_end; ++" + n + ", aL += int((" + i +
                    ").z)) {\n";
            ++depth;
            ++loop_depth;
            return;
        }
        case OP_ENDREP:
        case OP_ENDLOOP:
            if (loop_depth <= 0 || depth <= 0) {
                fail("unbalanced end of loop");
                return;
            }
            --depth;
            --loop_depth;
            if (wgsl()) {
                const std::string n = "lp" + std::to_string(depth);
                body += indent() + (in.op == OP_ENDLOOP ? "continuing { " + n + "++; aL += " + n +
                                                              "_step; } } aL = " + n + "_saved; }\n"
                                                        : std::string("} }\n"));
                return;
            }
            body += indent() + (in.op == OP_ENDLOOP
                                    ? "} aL = lp" + std::to_string(depth) + "_saved; }\n"
                                    : std::string("}\n"));
            return;
        case OP_IF:
            body += indent() + "if ((" + S(0) + ").x != 0.0) {\n";
            ++depth;
            return;
        case OP_IFC: {
            const char *op = comparison(in.ctrl);
            if (!op) {
                fail("ifc comparison " + std::to_string(in.ctrl));
                return;
            }
            body += indent() + "if ((" + S(0) + ").x " + op + " (" + S(1) + ").x) {\n";
            ++depth;
            return;
        }
        case OP_ELSE:
            if (depth <= 0) {
                fail("else outside if");
                return;
            }
            body += std::string(4 + 4 * (size_t)(depth - 1), ' ') + "} else {\n";
            return;
        case OP_ENDIF:
            if (depth <= 0) {
                fail("unbalanced endif");
                return;
            }
            --depth;
            body += indent() + "}\n";
            return;
        case OP_BREAK:
            if (loop_depth <= 0) {
                fail("break outside a loop");
                return;
            }
            body += indent() + "break;\n";
            return;
        case OP_BREAKC: {
            const char *op = comparison(in.ctrl);
            if (!op || loop_depth <= 0) {
                fail("breakc");
                return;
            }
            body += indent() + "if ((" + S(0) + ").x " + op + " (" + S(1) + ").x) " +
                    (wgsl() ? "{ break; }\n" : "break;\n");
            return;
        }
        case OP_TEXDP3: {
            char buf[48];
            snprintf(buf, sizeof buf, "t[%u]", in.dst.index & 7);
            write(in.dst, F4 + "(dot((" + S(0) + ").xyz, (" + std::string(buf) + ").xyz))");
            return;
        }
        default:
            fail("instruction " + std::to_string(in.op));
            return;
        }
    }
};

// Walks the program; false with the reason when it cannot be translated.
bool generate(Gen &g, std::string *why) {
    for (const Inst &in : g.p.code)
        g.instruction(in);
    if (!g.failed && g.depth != 0)
        g.fail("unclosed loop or if");
    if (g.failed) {
        if (why)
            *why = g.why;
        return false;
    }
    return true;
}

// The input registers a vertex shader declares, in declaration order.
std::vector<uint32_t> input_registers(const Program &p) {
    std::vector<uint32_t> order;
    std::set<uint32_t> seen;
    for (const DclIn &d : p.inputs)
        if (d.type == R_INPUT && seen.insert(d.index & 15).second)
            order.push_back(d.index & 15);
    return order;
}

} // namespace

bool vertex_source(const Program &p, std::string *out, std::string *why) {
    if (!p.ok || p.pixel) {
        if (why)
            *why = p.ok ? "not a vertex shader" : p.why;
        return false;
    }
    Gen g(p, Lang::MSL);
    if (!generate(g, why))
        return false;
    std::string s = kPrelude;
    s += "struct D9VIn {\n";
    const std::vector<uint32_t> order = input_registers(p);
    const std::set<uint32_t> seen(order.begin(), order.end());
    for (uint32_t i : order)
        s += "    float4 v" + std::to_string(i) + " [[attribute(" + std::to_string(i) + ")]];\n";
    if (seen.empty())
        s += "    float4 v0 [[attribute(0)]];\n";
    s += "};\n";
    s += "vertex D9V2F vs_main(D9VIn vin [[stage_in]], constant float4 *c [[buffer(16)]],\n"
         "                     constant D9VSParams &P [[buffer(17)]]) {\n"
         "    float4 r[32] = {};\n"
         "    float4 a0 = float4(0.0);\n"
         "    int aL = 0;\n"
         "    float4 opos = float4(0.0), ofog = float4(1.0), opsize = float4(1.0);\n"
         "    float4 od[2] = { float4(1.0), float4(0.0) };\n"
         "    float4 ot[8] = {};\n"
         "    float4 vv[16] = {};\n";
    for (uint32_t i : seen)
        s += "    vv[" + std::to_string(i) + "] = vin.v" + std::to_string(i) + " * P.ascale[" +
             std::to_string(i) + "];\n";
    s += g.body;
    s += "    D9V2F o;\n"
         "    o.pos = opos;\n"
         "    o.pos.xy += P.halfpix.xy * opos.w;\n"
         "    o.d0 = " +
         std::string(p.major >= 3 ? "od[0]" : "saturate(od[0])") +
         ";\n"
         "    o.d1 = " +
         std::string(p.major >= 3 ? "od[1]" : "saturate(od[1])") +
         ";\n"
         "    o.t0 = ot[0]; o.t1 = ot[1]; o.t2 = ot[2]; o.t3 = ot[3];\n"
         "    o.t4 = ot[4]; o.t5 = ot[5]; o.t6 = ot[6]; o.t7 = ot[7];\n"
         "    o.fog = ofog.x;\n"
         "    o.fogz = opos.z;\n"
         "    return o;\n"
         "}\n";
    *out = s;
    return true;
}

bool pixel_source(const Program &p, const PixelVariant &v, std::string *out, std::string *why) {
    if (!p.ok || !p.pixel) {
        if (why)
            *why = p.ok ? "not a pixel shader" : p.why;
        return false;
    }
    Gen g(p, Lang::MSL);
    g.variant = v;
    if (!generate(g, why))
        return false;
    std::string s = kPrelude;
    bool shadow = false;
    for (uint32_t st : g.stages)
        shadow |= g.is_depth(st);
    if (shadow)
        s += "constexpr sampler d9_shadow_sampler(coord::normalized, address::clamp_to_edge, "
             "filter::linear,\n"
             "                                    compare_func::less_equal);\n"
             "static float4 d9_shadow(depth2d<float> t, float4 c) {\n"
             "    float r = t.sample_compare(d9_shadow_sampler, c.xy, saturate(c.z), level(0));\n"
             "    return float4(r, r, r, 1.0);\n"
             "}\n";
    bool depth = g.writes_depth;
    uint32_t colors = p.major >= 2 ? (g.color_outputs | 1) : 1;
    s += "struct D9PSOut {\n";
    for (uint32_t i = 0; i < 4; ++i)
        if (colors >> i & 1)
            s += "    float4 c" + std::to_string(i) + " [[color(" + std::to_string(i) + ")]];\n";
    if (depth)
        s += "    float depth [[depth(any)]];\n";
    s += "};\n";
    s += "fragment D9PSOut ps_main(D9V2F vin [[stage_in]], constant float4 *c [[buffer(0)]],\n"
         "                         constant D9PSParams &P [[buffer(1)]]";
    for (uint32_t st : g.stages) {
        const char *type = g.kind_of(st) == S_CUBE ? "texturecube<float>"
                           : g.is_depth(st)        ? "depth2d<float>"
                                                   : "texture2d<float>";
        s += ",\n                         " + std::string(type) + " tx" + std::to_string(st) +
             " [[texture(" + std::to_string(st) + ")]], sampler sm" + std::to_string(st) +
             " [[sampler(" + std::to_string(st) + ")]]";
    }
    s += ") {\n"
         "    float4 r[32] = {};\n"
         "    float4 tc[8] = { vin.t0, vin.t1, vin.t2, vin.t3, vin.t4, vin.t5, vin.t6, vin.t7 };\n"
         "    float4 t[8] = { vin.t0, vin.t1, vin.t2, vin.t3, vin.t4, vin.t5, vin.t6, vin.t7 };\n"
         "    float4 iv[2] = { vin.d0, vin.d1 };\n"
         "    float4 oc[4] = {};\n"
         "    int aL = 0;\n"
         "    float4 odepth = float4(vin.pos.z);\n";
    s += g.body;
    s += p.major >= 2 ? "    float4 col = oc[0];\n" : "    float4 col = saturate(r[0]);\n";
    s += "    (void)aL;\n";
    s += "    if (P.alpha_func != 8 &&\n"
         "        !d9_cmp(P.alpha_func, floor(saturate(col.a) * 255.0 + 0.5), floor(P.alpha_ref * "
         "255.0 + 0.5)))\n"
         "        discard_fragment();\n"
         "    if (" +
         std::string(p.major >= 3 ? "false && " : "") +
         "P.fog_mode != 0) {\n"
         "        float f;\n"
         "        float z = vin.fogz;\n"
         "        if (P.fog_mode == 1) f = vin.fog;\n"
         "        else if (P.fog_mode == 2) f = (P.fog_end - z) / (P.fog_end - P.fog_start);\n"
         "        else if (P.fog_mode == 3) f = exp(-P.fog_density * z);\n"
         "        else f = exp(-(P.fog_density * z) * (P.fog_density * z));\n"
         "        col.rgb = mix(P.fog_color.rgb, col.rgb, saturate(f));\n"
         "    }\n"
         "    D9PSOut o;\n"
         "    o.c0 = col;\n";
    for (uint32_t i = 1; i < 4; ++i)
        if (colors >> i & 1)
            s += "    o.c" + std::to_string(i) + " = oc[" + std::to_string(i) + "];\n";
    if (depth)
        s += "    o.depth = odepth.x;\n";
    s += "    return o;\n"
         "}\n";
    *out = s;
    return true;
}

uint32_t pixel_sampler_mask(const Program &p) {
    uint32_t mask = 0;
    for (const Inst &in : p.code)
        if (in.op == OP_TEX || in.op == OP_TEXLDL) {
            if (p.major >= 2)
                mask |= 1u << (in.src[1].index & 15);
            else
                mask |= 1u << (in.dst.index & 7);
        }
    return mask;
}

uint32_t pixel_color_outputs(const Program &p) {
    if (p.major < 2)
        return 1;
    uint32_t mask = 1;
    for (const Inst &in : p.code)
        if (in.has_dst && in.dst.type == R_COLOROUT)
            mask |= 1u << (in.dst.index & 3);
    return mask;
}

} // namespace d9msl

// ---- GLSL -------------------------------------------------------------------

namespace d9glsl {

uint32_t constant_registers(const d9sh::Program &p) {
    if (p.relative)
        return kConstantRegisters;
    return p.max_const ? (p.max_const < kConstantRegisters ? p.max_const : kConstantRegisters) : 1;
}

using d9msl::Gen;
using d9msl::Lang;

namespace {
// The interpolants every vertex shader writes and every pixel shader reads.
const char *kVaryingsOut = "layout(location = 0) out vec4 o_d0;\n"
                           "layout(location = 1) out vec4 o_d1;\n"
                           "layout(location = 2) out vec4 o_t[8];\n"
                           "layout(location = 10) out float o_fog;\n"
                           "layout(location = 11) out float o_fogz;\n";
const char *kVaryingsIn = "layout(location = 0) in vec4 i_d0;\n"
                          "layout(location = 1) in vec4 i_d1;\n"
                          "layout(location = 2) in vec4 i_t[8];\n"
                          "layout(location = 10) in float i_fog;\n"
                          "layout(location = 11) in float i_fogz;\n";
const char *kZeroes = "    for (int i_ = 0; i_ < 32; ++i_) r[i_] = vec4(0.0);\n";
} // namespace

bool vertex_source(const d9sh::Program &p, std::string *out, std::string *why) {
    if (!p.ok || p.pixel) {
        if (why)
            *why = p.ok ? "not a vertex shader" : p.why;
        return false;
    }
    Gen g(p, Lang::GLSL);
    if (!d9msl::generate(g, why))
        return false;
    std::string s = d9msl::kGlslPrelude;
    s += "layout(std140, set = 0, binding = 0) uniform VSC { vec4 c[" +
         std::to_string(g.const_limit) +
         "]; };\n"
         "layout(std140, set = 0, binding = 1) uniform VSP { vec4 halfpix; vec4 ascale[16]; ivec4 "
         "bgra; } P;\n";
    const std::vector<uint32_t> order = d9msl::input_registers(p);
    const std::set<uint32_t> seen(order.begin(), order.end());
    for (uint32_t i : seen)
        s += "layout(location = " + std::to_string(i) + ") in vec4 v" + std::to_string(i) + ";\n";
    s += kVaryingsOut;
    s += "void main() {\n"
         "    vec4 r[32];\n";
    s += kZeroes;
    s += "    vec4 a0 = vec4(0.0);\n"
         "    int aL = 0;\n"
         "    vec4 opos = vec4(0.0), ofog = vec4(1.0), opsize = vec4(1.0);\n"
         "    vec4 od[2] = vec4[2](vec4(1.0), vec4(0.0));\n"
         "    vec4 ot[8];\n"
         "    for (int i_ = 0; i_ < 8; ++i_) ot[i_] = vec4(0.0);\n"
         "    vec4 vv[16];\n"
         "    for (int i_ = 0; i_ < 16; ++i_) vv[i_] = vec4(0.0);\n";
    for (uint32_t i : seen) {
        const std::string n = std::to_string(i);
        s += "    vv[" + n + "] = (((P.bgra.x >> " + n + ") & 1) != 0 ? v" + n + ".bgra : v" + n +
             ") * P.ascale[" + n + "];\n";
    }
    s += g.body;
    s += "    gl_Position = opos;\n"
         "    gl_Position.xy += P.halfpix.xy * opos.w;\n"
         "    gl_PointSize = 1.0;\n"
         "    o_d0 = " +
         std::string(p.major >= 3 ? "od[0]" : "clamp(od[0], 0.0, 1.0)") +
         ";\n"
         "    o_d1 = " +
         std::string(p.major >= 3 ? "od[1]" : "clamp(od[1], 0.0, 1.0)") +
         ";\n"
         "    o_t = ot;\n"
         "    o_fog = ofog.x;\n"
         "    o_fogz = opos.z;\n"
         "}\n";
    *out = s;
    return true;
}

bool pixel_source(const d9sh::Program &p, const d9msl::PixelVariant &v, std::string *out,
                  std::string *why) {
    if (!p.ok || !p.pixel) {
        if (why)
            *why = p.ok ? "not a pixel shader" : p.why;
        return false;
    }
    Gen g(p, Lang::GLSL);
    g.variant = v;
    if (!d9msl::generate(g, why))
        return false;
    std::string s = d9msl::kGlslPrelude;
    s += "layout(std140, set = 0, binding = 2) uniform PSC { vec4 c[" +
         std::to_string(g.const_limit) +
         "]; };\n"
         "layout(std140, set = 0, binding = 3) uniform PSP {\n"
         "    float alpha_ref; int alpha_func; int fog_mode; int pad0;\n"
         "    vec4 fog_color;\n"
         "    float fog_start; float fog_end; float fog_density; float pad1;\n"
         "} P;\n";
    bool shadow = false;
    for (uint32_t st : g.stages) {
        const char *type = g.kind_of(st) == d9sh::S_CUBE ? "samplerCube"
                           : g.is_depth(st)              ? "sampler2DShadow"
                                                         : "sampler2D";
        shadow |= g.is_depth(st);
        s += "layout(set = 0, binding = " + std::to_string(kSamplerBinding + st) + ") uniform " +
             type + " tx" + std::to_string(st) + ";\n";
    }
    if (shadow)
        s += "vec4 d9_shadow(sampler2DShadow t, vec4 c) {\n"
             "    float r = textureLod(t, vec3(c.xy, clamp(c.z, 0.0, 1.0)), 0.0);\n"
             "    return vec4(r, r, r, 1.0);\n"
             "}\n";
    s += kVaryingsIn;
    const bool depth = g.writes_depth;
    const uint32_t colors = p.major >= 2 ? (g.color_outputs | 1) : 1;
    for (uint32_t i = 0; i < 4; ++i)
        if (colors >> i & 1)
            s += "layout(location = " + std::to_string(i) + ") out vec4 o_c" + std::to_string(i) +
                 ";\n";
    s += "void main() {\n"
         "    vec4 r[32];\n";
    s += kZeroes;
    s += "    vec4 tc[8] = i_t;\n"
         "    vec4 t[8] = i_t;\n"
         "    vec4 iv[2] = vec4[2](i_d0, i_d1);\n"
         "    vec4 oc[4] = vec4[4](vec4(0.0), vec4(0.0), vec4(0.0), vec4(0.0));\n"
         "    int aL = 0;\n"
         "    vec4 odepth = vec4(gl_FragCoord.z);\n";
    s += g.body;
    s += p.major >= 2 ? "    vec4 col = oc[0];\n" : "    vec4 col = clamp(r[0], 0.0, 1.0);\n";
    s += "    if (P.alpha_func != 8 &&\n"
         "        !d9_cmp(P.alpha_func, floor(clamp(col.a, 0.0, 1.0) * 255.0 + 0.5), "
         "floor(P.alpha_ref * 255.0 + 0.5)))\n"
         "        discard;\n"
         "    if (" +
         std::string(p.major >= 3 ? "false && " : "") +
         "P.fog_mode != 0) {\n"
         "        float f;\n"
         "        float z = i_fogz;\n"
         "        if (P.fog_mode == 1) f = i_fog;\n"
         "        else if (P.fog_mode == 2) f = (P.fog_end - z) / (P.fog_end - P.fog_start);\n"
         "        else if (P.fog_mode == 3) f = exp(-P.fog_density * z);\n"
         "        else f = exp(-(P.fog_density * z) * (P.fog_density * z));\n"
         "        col.rgb = mix(P.fog_color.rgb, col.rgb, clamp(f, 0.0, 1.0));\n"
         "    }\n"
         "    o_c0 = col;\n";
    for (uint32_t i = 1; i < 4; ++i)
        if (colors >> i & 1)
            s += "    o_c" + std::to_string(i) + " = oc[" + std::to_string(i) + "];\n";
    if (depth)
        s += "    gl_FragDepth = odepth.x;\n";
    s += "}\n";
    *out = s;
    return true;
}

} // namespace d9glsl

// ---- WGSL -------------------------------------------------------------------

namespace d9wgsl {

using d9msl::Gen;
using d9msl::Lang;

bool vertex_source(const d9sh::Program &p, std::string *out, std::string *why) {
    if (!p.ok || p.pixel) {
        if (why)
            *why = p.ok ? "not a vertex shader" : p.why;
        return false;
    }
    Gen g(p, Lang::WGSL);
    if (!d9msl::generate(g, why))
        return false;
    const std::string n = std::to_string(g.const_limit);
    std::string s = d9msl::kWgslPrelude;
    s += "struct VC { c: array<vec4f, " + n +
         "> };\n"
         "@group(0) @binding(0) var<uniform> VCB: VC;\n"
         "@group(0) @binding(1) var<uniform> P: VSP;\n";
    const std::vector<uint32_t> order = d9msl::input_registers(p);
    const std::set<uint32_t> seen(order.begin(), order.end());
    s += "struct VIn {\n";
    for (uint32_t i : seen)
        s += "    @location(" + std::to_string(i) + ") v" + std::to_string(i) + ": vec4f,\n";
    if (seen.empty())
        s += "    @builtin(vertex_index) vid: u32,\n";
    s += "};\n"
         "@vertex fn vs_main(vin: VIn) -> V2F {\n"
         "    let c = &VCB.c;\n"
         "    _ = c[0];\n"
         "    var r: array<vec4f, 32>;\n"
         "    var a0 = vec4f(0.0);\n"
         "    var aL: i32 = 0;\n"
         "    var opos = vec4f(0.0);\n"
         "    var ofog = vec4f(1.0);\n"
         "    var opsize = vec4f(1.0);\n"
         "    var od = array<vec4f, 2>(vec4f(1.0), vec4f(0.0));\n"
         "    var ot: array<vec4f, 8>;\n"
         "    var vv: array<vec4f, 16>;\n";
    for (uint32_t i : seen) {
        const std::string k = std::to_string(i);
        s += "    vv[" + k + "] = vin.v" + k + " * P.ascale[" + k + "];\n";
    }
    s += g.body;
    s += "    var o: V2F;\n"
         "    o.pos = vec4f(opos.xy + P.halfpix.xy * opos.w, opos.zw);\n"
         "    o.d0 = " +
         std::string(p.major >= 3 ? "od[0]" : "saturate(od[0])") +
         ";\n"
         "    o.d1 = " +
         std::string(p.major >= 3 ? "od[1]" : "saturate(od[1])") +
         ";\n"
         "    o.t0 = ot[0]; o.t1 = ot[1]; o.t2 = ot[2]; o.t3 = ot[3];\n"
         "    o.t4 = ot[4]; o.t5 = ot[5]; o.t6 = ot[6]; o.t7 = ot[7];\n"
         "    o.fog = ofog.x;\n"
         "    o.fogz = opos.z;\n"
         "    return o;\n"
         "}\n";
    *out = s;
    return true;
}

bool pixel_source(const d9sh::Program &p, const d9msl::PixelVariant &v, std::string *out,
                  std::string *why) {
    if (!p.ok || !p.pixel) {
        if (why)
            *why = p.ok ? "not a pixel shader" : p.why;
        return false;
    }
    Gen g(p, Lang::WGSL);
    g.variant = v;
    if (!d9msl::generate(g, why))
        return false;
    const std::string n = std::to_string(g.const_limit);
    std::string s = d9msl::kWgslPrelude;
    s += "struct PC { c: array<vec4f, " + n +
         "> };\n"
         "@group(0) @binding(2) var<uniform> PCB: PC;\n"
         "@group(0) @binding(3) var<uniform> P: PSP;\n";
    bool shadow = false;
    for (uint32_t st : g.stages) {
        const std::string k = std::to_string(st);
        const bool depth = g.is_depth(st);
        shadow |= depth;
        const char *type = g.kind_of(st) == d9sh::S_CUBE ? "texture_cube<f32>"
                           : depth                       ? "texture_depth_2d"
                                                         : "texture_2d<f32>";
        s += "@group(0) @binding(" + std::to_string(kTextureBinding + st) + ") var tx" + k + ": " +
             type + ";\n";
        s += "@group(0) @binding(" + std::to_string(kSamplerBinding + st) + ") var sm" + k + ": " +
             (depth ? "sampler_comparison" : "sampler") + ";\n";
    }
    if (shadow)
        s += "fn d9_shadow(t: texture_depth_2d, sm: sampler_comparison, c: vec4f) -> vec4f {\n"
             "    let r = textureSampleCompareLevel(t, sm, c.xy, saturate(c.z));\n"
             "    return vec4f(r, r, r, 1.0);\n"
             "}\n";
    const bool depth = g.writes_depth;
    const uint32_t colors = p.major >= 2 ? (g.color_outputs | 1) : 1;
    s += "struct FOut {\n";
    for (uint32_t i = 0; i < 4; ++i)
        if (colors >> i & 1)
            s += "    @location(" + std::to_string(i) + ") c" + std::to_string(i) + ": vec4f,\n";
    if (depth)
        s += "    @builtin(frag_depth) depth: f32,\n";
    s += "};\n"
         "@fragment fn ps_main(vin: V2F) -> FOut {\n"
         "    let c = &PCB.c;\n"
         "    _ = c[0];\n"
         "    var r: array<vec4f, 32>;\n"
         "    var tc = array<vec4f, 8>(vin.t0, vin.t1, vin.t2, vin.t3, vin.t4, vin.t5, vin.t6, "
         "vin.t7);\n"
         "    var t = tc;\n"
         "    var iv = array<vec4f, 2>(vin.d0, vin.d1);\n"
         "    var oc: array<vec4f, 4>;\n"
         "    var aL: i32 = 0;\n"
         "    var odepth = vec4f(vin.pos.z);\n";
    s += g.body;
    s += p.major >= 2 ? "    var col = oc[0];\n" : "    var col = saturate(r[0]);\n";
    s += "    if (P.alpha_func != 8 &&\n"
         "        !d9_cmp(P.alpha_func, floor(saturate(col.a) * 255.0 + 0.5), floor(P.alpha_ref * "
         "255.0 + 0.5))) {\n"
         "        discard;\n"
         "    }\n"
         "    if (" +
         std::string(p.major >= 3 ? "false && " : "") +
         "P.fog_mode != 0) {\n"
         "        var f = 1.0;\n"
         "        let z = vin.fogz;\n"
         "        if (P.fog_mode == 1) { f = vin.fog; }\n"
         "        else if (P.fog_mode == 2) { f = (P.fog_end - z) / (P.fog_end - P.fog_start); }\n"
         "        else if (P.fog_mode == 3) { f = exp(-P.fog_density * z); }\n"
         "        else { f = exp(-(P.fog_density * z) * (P.fog_density * z)); }\n"
         "        col = vec4f(mix(P.fog_color.rgb, col.rgb, saturate(f)), col.a);\n"
         "    }\n"
         "    var o: FOut;\n"
         "    o.c0 = col;\n";
    for (uint32_t i = 1; i < 4; ++i)
        if (colors >> i & 1)
            s += "    o.c" + std::to_string(i) + " = oc[" + std::to_string(i) + "];\n";
    if (depth)
        s += "    o.depth = odepth.x;\n";
    s += "    return o;\n"
         "}\n";
    *out = s;
    return true;
}

} // namespace d9wgsl
