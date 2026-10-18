// d3dx9.cpp - the D3DX 9 helper library: matrix and vector maths, the effect
// pool, and effects loaded from the executable's own resources.
//
// A shader-era game reaches its rendering through this library rather than
// through the device directly: it compiles nothing at run time, it loads
// effects that were compiled into its resources and sets parameters on them
// by handle. So this file has to answer three separate kinds of call.
//
// The maths is real. Every function here computes what the SDK documents,
// because the game uses the results for its own culling and placement long
// before anything is drawn.
//
// The effect object is not. Its vtable is complete and correctly ordered, and
// handles are handed out so the game can name parameters and techniques, but
// no effect is parsed and no shader runs. Each unimplemented method reports
// itself once, which turns a crash into the list of what this game's
// rendering actually asks for.
#include "com.h"
#include "dx.h"
#include "../runtime/guest.h"
#include "../runtime/memory.h"
#include "../platform/os.h"

#include <string.h>
#include <math.h>
#include <cmath>
#include <iterator>
#include <algorithm>

// ---------------------------------------------------------------------------
// Guest floats
// ---------------------------------------------------------------------------
static float rf(uint32_t a) {
    uint32_t bits = rd32(a);
    float f;
    memcpy(&f, &bits, 4);
    return f;
}
static void wf(uint32_t a, float v) {
    uint32_t bits;
    memcpy(&bits, &v, 4);
    wr32(a, bits);
}
static void read_matrix(uint32_t p, float m[16]) {
    for (int i = 0; i < 16; ++i)
        m[i] = rf(p + 4u * (uint32_t)i);
}
static void write_matrix(uint32_t p, const float m[16]) {
    for (int i = 0; i < 16; ++i)
        wf(p + 4u * (uint32_t)i, m[i]);
}

// D3DX matrices are row-major and the SDK's functions return their output
// pointer, which callers chain on.
void X_D3DXMatrixMultiply(X86 *c) {
    uint32_t out = arg(c, 0), a = arg(c, 1), b = arg(c, 2);
    float A[16], B[16], R[16];
    read_matrix(a, A);
    read_matrix(b, B);
    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 4; ++j) {
            float s = 0.0f;
            for (int k = 0; k < 4; ++k)
                s += A[i * 4 + k] * B[k * 4 + j];
            R[i * 4 + j] = s;
        }
    write_matrix(out, R);
    set_eax(c, out);
}

void X_D3DXMatrixTranspose(X86 *c) {
    uint32_t out = arg(c, 0), in = arg(c, 1);
    float M[16], R[16];
    read_matrix(in, M);
    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 4; ++j)
            R[i * 4 + j] = M[j * 4 + i];
    write_matrix(out, R);
    set_eax(c, out);
}

// The cofactor expansion, with the determinant written out when asked for.
void X_D3DXMatrixInverse(X86 *c) {
    uint32_t out = arg(c, 0), pdet = arg(c, 1), in = arg(c, 2);
    float m[16], inv[16];
    read_matrix(in, m);
    inv[0] = m[5] * m[10] * m[15] - m[5] * m[11] * m[14] - m[9] * m[6] * m[15] +
             m[9] * m[7] * m[14] + m[13] * m[6] * m[11] - m[13] * m[7] * m[10];
    inv[4] = -m[4] * m[10] * m[15] + m[4] * m[11] * m[14] + m[8] * m[6] * m[15] -
             m[8] * m[7] * m[14] - m[12] * m[6] * m[11] + m[12] * m[7] * m[10];
    inv[8] = m[4] * m[9] * m[15] - m[4] * m[11] * m[13] - m[8] * m[5] * m[15] +
             m[8] * m[7] * m[13] + m[12] * m[5] * m[11] - m[12] * m[7] * m[9];
    inv[12] = -m[4] * m[9] * m[14] + m[4] * m[10] * m[13] + m[8] * m[5] * m[14] -
              m[8] * m[6] * m[13] - m[12] * m[5] * m[10] + m[12] * m[6] * m[9];
    inv[1] = -m[1] * m[10] * m[15] + m[1] * m[11] * m[14] + m[9] * m[2] * m[15] -
             m[9] * m[3] * m[14] - m[13] * m[2] * m[11] + m[13] * m[3] * m[10];
    inv[5] = m[0] * m[10] * m[15] - m[0] * m[11] * m[14] - m[8] * m[2] * m[15] +
             m[8] * m[3] * m[14] + m[12] * m[2] * m[11] - m[12] * m[3] * m[10];
    inv[9] = -m[0] * m[9] * m[15] + m[0] * m[11] * m[13] + m[8] * m[1] * m[15] -
             m[8] * m[3] * m[13] - m[12] * m[1] * m[11] + m[12] * m[3] * m[9];
    inv[13] = m[0] * m[9] * m[14] - m[0] * m[10] * m[13] - m[8] * m[1] * m[14] +
              m[8] * m[2] * m[13] + m[12] * m[1] * m[10] - m[12] * m[2] * m[9];
    inv[2] = m[1] * m[6] * m[15] - m[1] * m[7] * m[14] - m[5] * m[2] * m[15] + m[5] * m[3] * m[14] +
             m[13] * m[2] * m[7] - m[13] * m[3] * m[6];
    inv[6] = -m[0] * m[6] * m[15] + m[0] * m[7] * m[14] + m[4] * m[2] * m[15] -
             m[4] * m[3] * m[14] - m[12] * m[2] * m[7] + m[12] * m[3] * m[6];
    inv[10] = m[0] * m[5] * m[15] - m[0] * m[7] * m[13] - m[4] * m[1] * m[15] +
              m[4] * m[3] * m[13] + m[12] * m[1] * m[7] - m[12] * m[3] * m[5];
    inv[14] = -m[0] * m[5] * m[14] + m[0] * m[6] * m[13] + m[4] * m[1] * m[14] -
              m[4] * m[2] * m[13] - m[12] * m[1] * m[6] + m[12] * m[2] * m[5];
    inv[3] = -m[1] * m[6] * m[11] + m[1] * m[7] * m[10] + m[5] * m[2] * m[11] -
             m[5] * m[3] * m[10] - m[9] * m[2] * m[7] + m[9] * m[3] * m[6];
    inv[7] = m[0] * m[6] * m[11] - m[0] * m[7] * m[10] - m[4] * m[2] * m[11] + m[4] * m[3] * m[10] +
             m[8] * m[2] * m[7] - m[8] * m[3] * m[6];
    inv[11] = -m[0] * m[5] * m[11] + m[0] * m[7] * m[9] + m[4] * m[1] * m[11] - m[4] * m[3] * m[9] -
              m[8] * m[1] * m[7] + m[8] * m[3] * m[5];
    inv[15] = m[0] * m[5] * m[10] - m[0] * m[6] * m[9] - m[4] * m[1] * m[10] + m[4] * m[2] * m[9] +
              m[8] * m[1] * m[6] - m[8] * m[2] * m[5];
    float det = m[0] * inv[0] + m[1] * inv[4] + m[2] * inv[8] + m[3] * inv[12];
    if (pdet)
        wf(pdet, det);
    if (det == 0.0f) {
        set_eax(c, 0); // the SDK returns NULL for a singular matrix
        return;
    }
    float r = 1.0f / det;
    for (int i = 0; i < 16; ++i)
        inv[i] *= r;
    write_matrix(out, inv);
    set_eax(c, out);
}

void X_D3DXMatrixTranslation(X86 *c) {
    uint32_t out = arg(c, 0);
    float m[16] = {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1};
    uint32_t xb = arg(c, 1), yb = arg(c, 2), zb = arg(c, 3);
    memcpy(&m[12], &xb, 4);
    memcpy(&m[13], &yb, 4);
    memcpy(&m[14], &zb, 4);
    write_matrix(out, m);
    set_eax(c, out);
}

// Left-handed projections, exactly as the SDK builds them. The float
// arguments arrive as dwords on the stack.
static float argf(X86 *c, int n) {
    uint32_t bits = arg(c, (uint32_t)n);
    float f;
    memcpy(&f, &bits, 4);
    return f;
}

void X_D3DXMatrixOrthoLH(X86 *c) {
    uint32_t out = arg(c, 0);
    float w = argf(c, 1), h = argf(c, 2), zn = argf(c, 3), zf = argf(c, 4);
    float m[16] = {0};
    m[0] = 2.0f / w;
    m[5] = 2.0f / h;
    m[10] = 1.0f / (zf - zn);
    m[14] = zn / (zn - zf);
    m[15] = 1.0f;
    write_matrix(out, m);
    set_eax(c, out);
}

void X_D3DXMatrixPerspectiveLH(X86 *c) {
    uint32_t out = arg(c, 0);
    float w = argf(c, 1), h = argf(c, 2), zn = argf(c, 3), zf = argf(c, 4);
    float m[16] = {0};
    m[0] = 2.0f * zn / w;
    m[5] = 2.0f * zn / h;
    m[10] = zf / (zf - zn);
    m[11] = 1.0f;
    m[14] = -zn * zf / (zf - zn);
    write_matrix(out, m);
    set_eax(c, out);
}

// Vectors. Transform takes a 3-vector to a 4-vector; TransformCoord divides
// through by w; TransformNormal ignores translation.
void X_D3DXVec4Transform(X86 *c) {
    uint32_t out = arg(c, 0), v = arg(c, 1), pm = arg(c, 2);
    float m[16], in[4], r[4];
    read_matrix(pm, m);
    for (int i = 0; i < 4; ++i)
        in[i] = rf(v + 4u * (uint32_t)i);
    for (int j = 0; j < 4; ++j)
        r[j] = in[0] * m[j] + in[1] * m[4 + j] + in[2] * m[8 + j] + in[3] * m[12 + j];
    for (int i = 0; i < 4; ++i)
        wf(out + 4u * (uint32_t)i, r[i]);
    set_eax(c, out);
}

void X_D3DXVec3Transform(X86 *c) {
    uint32_t out = arg(c, 0), v = arg(c, 1), pm = arg(c, 2);
    float m[16], x = rf(v), y = rf(v + 4), z = rf(v + 8);
    read_matrix(pm, m);
    for (int j = 0; j < 4; ++j)
        wf(out + 4u * (uint32_t)j, x * m[j] + y * m[4 + j] + z * m[8 + j] + m[12 + j]);
    set_eax(c, out);
}

void X_D3DXVec3TransformNormal(X86 *c) {
    uint32_t out = arg(c, 0), v = arg(c, 1), pm = arg(c, 2);
    float m[16], x = rf(v), y = rf(v + 4), z = rf(v + 8);
    read_matrix(pm, m);
    for (int j = 0; j < 3; ++j)
        wf(out + 4u * (uint32_t)j, x * m[j] + y * m[4 + j] + z * m[8 + j]);
    set_eax(c, out);
}

void X_D3DXVec3TransformCoordArray(X86 *c) {
    uint32_t out = arg(c, 0), out_stride = arg(c, 1), in = arg(c, 2), in_stride = arg(c, 3);
    uint32_t pm = arg(c, 4), n = arg(c, 5);
    float m[16];
    read_matrix(pm, m);
    for (uint32_t k = 0; k < n; ++k) {
        uint32_t s = in + k * in_stride, d = out + k * out_stride;
        float x = rf(s), y = rf(s + 4), z = rf(s + 8);
        float r[4];
        for (int j = 0; j < 4; ++j)
            r[j] = x * m[j] + y * m[4 + j] + z * m[8 + j] + m[12 + j];
        float w = r[3] == 0.0f ? 1.0f : 1.0f / r[3];
        wf(d, r[0] * w);
        wf(d + 4, r[1] * w);
        wf(d + 8, r[2] * w);
    }
    set_eax(c, out);
}

void X_D3DXVec3Normalize(X86 *c) {
    uint32_t out = arg(c, 0), v = arg(c, 1);
    float x = rf(v), y = rf(v + 4), z = rf(v + 8);
    float len = sqrtf(x * x + y * y + z * z);
    float s = len > 0.0f ? 1.0f / len : 0.0f;
    wf(out, x * s);
    wf(out + 4, y * s);
    wf(out + 8, z * s);
    set_eax(c, out);
}

// ---------------------------------------------------------------------------
// ID3DXEffectPool and ID3DXEffect
//
// A compiled effect (fx_2_0, tag 0xFEFF0901) is parsed from the executable's
// own resources, after the layout Wine's d3dx9 documents: parameters with
// their types and defaults, techniques of passes, each pass a list of states,
// and a table of objects - shader bytecode, and names of the parameters a
// state takes its texture from.
//
// Handles are tagged values above the guest arena, so they can never be taken
// for a guest pointer; anything else a game passes as a handle is read as a
// name, because D3DX accepts names there too.
//
// Beginning a pass, or committing changes inside one, writes the device's
// pipeline record: the pass's vertex and pixel bytecode, the constant
// registers those shaders read - matched by the names in each shader's CTAB
// against the effect's parameters - and the texture behind every sampler.
// Render states the effect computes with preshaders are not evaluated yet.
// ---------------------------------------------------------------------------
#include "d3d9_pipeline.h"
#include "d3d9_shader.h"
#include <unordered_map>
#include <cctype>
#include <map>
#include <memory>
#include <string>
#include <vector>

static uint32_t rd32_le(const uint8_t *b) {
    return (uint32_t)(b[0] | b[1] << 8 | b[2] << 16 | (uint32_t)b[3] << 24);
}

static const uint32_t D3D_OKX = 0u;
static const uint32_t E_NOTIMPLX = 0x80004001u;
static const uint32_t D3DERR_INVALIDCALLX = 0x8876086cu;

enum : uint32_t {
    FXC_SCALAR = 0,
    FXC_VECTOR,
    FXC_MATRIX_ROWS,
    FXC_MATRIX_COLUMNS,
    FXC_OBJECT,
    FXC_STRUCT
};
enum : uint32_t {
    FXT_BOOL = 1,
    FXT_INT = 2,
    FXT_FLOAT = 3,
    FXT_TEXTURE = 5,
    FXT_TEXTURECUBE = 9,
    FXT_SAMPLER = 10,
    FXT_SAMPLERCUBE = 14,
    FXT_PIXELSHADER = 15,
    FXT_VERTEXSHADER = 16
};
// The state-table positions Wine's effect.c gives these.
enum : uint32_t {
    FXS_VERTEXSHADER = 146,
    FXS_PIXELSHADER = 147,
    FXS_SAMPLER_TEXTURE = 164,
    FXS_SAMPLER_FIRST = 165,
    FXS_SAMPLER_LAST = 177
};

struct FxType {
    uint32_t type = 0, cls = 0, rows = 0, cols = 0, elements = 0;
    std::string name, semantic;
    std::vector<FxType> members;
    bool numeric() const {
        return cls <= FXC_MATRIX_COLUMNS;
    }
    bool sampler() const {
        return cls == FXC_OBJECT && type >= FXT_SAMPLER && type <= FXT_SAMPLERCUBE;
    }
    uint32_t count() const {
        return elements ? elements : 1;
    }
    uint32_t bytes() const {
        if (numeric())
            return 4 * rows * cols * count();
        if (cls == FXC_STRUCT) {
            uint32_t n = 0;
            for (const FxType &m : members)
                n += m.bytes();
            return n * count();
        }
        return 4 * count();
    }
};
struct FxState {
    uint32_t op = 0, index = 0;
    FxType t;
    std::vector<uint8_t> value;
    // A preshader that computes the value from parameters, when the effect
    // compiler left one; `value` then only holds a default.
    std::vector<uint8_t> preshader;
    mutable uint64_t preshader_key = 0;
    // The preshader's last result, valid for pres_effect while none of its
    // inputs has been written since pres_stamp.
    mutable uint32_t pres_effect = 0;
    mutable uint64_t pres_stamp = 0;
    mutable float pres_result = 0.0f;
    mutable bool pres_ok = false;
    uint32_t object() const {
        return value.size() >= 4 ? (uint32_t)(value[0] | value[1] << 8 | value[2] << 16 |
                                              (uint32_t)value[3] << 24)
                                 : 0;
    }
};
struct FxParam {
    FxType t;
    std::vector<uint8_t> value;
    std::vector<FxState> sampler;
    uint32_t texture = 0; // COM object id set with SetTexture
    uint32_t guest_name = 0, guest_semantic = 0;
    std::vector<uint32_t> annotations; // indices into FxEffect::annotations
    bool shared = false;               // D3DX_PARAMETER_SHARED: one value across the effect pool
    uint64_t stamp = 0;                // g_param_stamp at the last write
};
// Counts parameter writes, so a result computed from parameters can tell
// whether any of them changed.
static uint64_t g_param_stamp = 1;
static inline void param_touched(FxParam &p) {
    p.stamp = ++g_param_stamp;
}
struct FxPass {
    std::string name;
    std::vector<FxState> states;
    uint32_t guest_name = 0, guest_vs = 0, guest_ps = 0;
    std::vector<uint32_t> annotations;
    std::string label; // effect/technique/pass, for diagnostics
};
struct FxTechnique {
    std::string name;
    std::vector<FxPass> passes;
    uint32_t guest_name = 0;
    std::vector<uint32_t> annotations;
};
struct FxObject {
    std::vector<uint8_t> data; // shader bytecode, or a string value
    mutable uint64_t key = 0;  // d9sh::code_key of data, computed on first use
    // `data` as the pipeline holds it, made on first bind.
    mutable std::shared_ptr<const std::vector<uint8_t>> shared;
    std::string param;         // a parameter this object names instead
    uint32_t guest_string = 0; // the string, copied out for GetString
};
struct FxEffect {
    std::string resource;
    std::vector<FxParam> params;
    std::vector<FxTechnique> techniques;
    // Annotations of every parameter, technique and pass, in file order. They
    // are read like parameters, so they are stored as parameters.
    std::vector<FxParam> annotations;
    std::map<uint32_t, FxObject> objects;
    uint32_t technique = 0, pass = 0xffffffffu, device = 0;
    uint32_t pool = 0; // the ID3DXEffectPool object it was created with
    uint32_t self = 0; // its COM object id
    // Lookups the per-draw path makes, built on first use: parameter index by
    // name, and for each program (by code key) the parameter behind each of
    // its constant table entries (-1: none).
    std::unordered_map<std::string, uint32_t> param_index;
    std::unordered_map<uint64_t, std::vector<int32_t>> ctab_params;
    // Shared parameters: for each parameter index, the same parameter in the
    // other effects of the pool, valid while pool_generation matches.
    std::unordered_map<uint32_t, std::vector<struct FxParam *>> peers;
    uint64_t peers_generation = 0;
};
// Changes whenever an effect is created or destroyed.
static uint64_t g_effect_generation = 1;

static std::map<uint32_t, FxEffect> &effects() {
    static auto *m = new std::map<uint32_t, FxEffect>();
    return *m;
}

// A bounds-checked reader over the effect body. Every offset in the file is
// relative to the body, which starts after the eight-byte header.
struct FxReader {
    const uint8_t *d;
    size_t n;
    size_t p = 0;
    bool ok = true;
    uint32_t at(size_t off) {
        if (off + 4 > n) {
            ok = false;
            return 0;
        }
        return (uint32_t)(d[off] | d[off + 1] << 8 | d[off + 2] << 16 | (uint32_t)d[off + 3] << 24);
    }
    uint32_t u32() {
        uint32_t v = at(p);
        p += 4;
        return v;
    }
    std::string str(uint32_t off) {
        if (!off)
            return {};
        uint32_t size = at(off);
        if (!ok || off + 4 + size > n)
            return ok = false, std::string();
        std::string s((const char *)d + off + 4, size);
        return s.substr(0, s.find('\0'));
    }
    std::vector<uint8_t> bytes(size_t off, size_t size) {
        if (off + size > n)
            return ok = false, std::vector<uint8_t>();
        return std::vector<uint8_t>(d + off, d + off + size);
    }
};

static FxType fx_type_at(FxReader &r, size_t &pos) {
    FxType t;
    size_t save = r.p;
    r.p = pos;
    t.type = r.u32();
    t.cls = r.u32();
    t.name = r.str(r.u32());
    t.semantic = r.str(r.u32());
    t.elements = r.u32();
    if (t.cls <= FXC_MATRIX_COLUMNS) {
        t.cols = r.u32();
        t.rows = r.u32();
    } else if (t.cls == FXC_STRUCT) {
        uint32_t n = r.u32();
        for (uint32_t i = 0; i < n && r.ok && i < 256; ++i) {
            size_t mp = r.p;
            t.members.push_back(fx_type_at(r, mp));
            r.p = mp;
        }
    }
    pos = r.p;
    r.p = save;
    return t;
}

static FxType fx_type(FxReader &r, uint32_t off) {
    size_t pos = off;
    return fx_type_at(r, pos);
}

static FxState fx_state(FxReader &r);

// A value: numeric bytes, object ids, or - for a sampler - a block of states.
static void fx_value(FxReader &r, const FxType &t, uint32_t off, std::vector<uint8_t> &value,
                     std::vector<FxState> *sampler) {
    if (t.sampler() && sampler) {
        size_t save = r.p;
        r.p = off;
        uint32_t count = r.u32();
        for (uint32_t i = 0; i < count && r.ok && i < 64; ++i)
            sampler->push_back(fx_state(r));
        r.p = save;
        return;
    }
    value = r.bytes(off, t.bytes());
}

static FxState fx_state(FxReader &r) {
    FxState s;
    s.op = r.u32();
    s.index = r.u32();
    uint32_t toff = r.u32(), voff = r.u32();
    s.t = fx_type(r, toff);
    fx_value(r, s.t, voff, s.value, nullptr);
    return s;
}

// `count` annotations, each a type offset and a value offset. They land in
// fx.annotations and their indices in `out`.
static void fx_annotations(FxReader &r, uint32_t count, FxEffect &fx, std::vector<uint32_t> &out) {
    for (uint32_t i = 0; i < count && r.ok && i < 256; ++i) {
        uint32_t toff = r.u32(), voff = r.u32();
        FxParam a;
        a.t = fx_type(r, toff);
        fx_value(r, a.t, voff, a.value, nullptr);
        out.push_back((uint32_t)fx.annotations.size());
        fx.annotations.push_back(std::move(a));
    }
}

static bool fx_parse(const uint8_t *blob, size_t size, FxEffect &fx) {
    if (size < 8)
        return false;
    uint32_t tag = (uint32_t)(blob[0] | blob[1] << 8 | blob[2] << 16 | (uint32_t)blob[3] << 24);
    uint32_t start = (uint32_t)(blob[4] | blob[5] << 8 | blob[6] << 16 | (uint32_t)blob[7] << 24);
    if (tag != 0xFEFF0901u)
        return false;
    FxReader r{blob + 8, size - 8};
    r.p = start;
    uint32_t nparams = r.u32(), ntech = r.u32();
    r.u32(); // unused
    r.u32(); // object count
    for (uint32_t i = 0; i < nparams && r.ok && i < 4096; ++i) {
        FxParam prm;
        uint32_t toff = r.u32(), voff = r.u32();
        prm.shared = (r.u32() & 1) != 0; // flags
        fx_annotations(r, r.u32(), fx, prm.annotations);
        prm.t = fx_type(r, toff);
        fx_value(r, prm.t, voff, prm.value, &prm.sampler);
        fx.params.push_back(std::move(prm));
    }
    for (uint32_t i = 0; i < ntech && r.ok && i < 256; ++i) {
        FxTechnique tech;
        tech.name = r.str(r.u32());
        uint32_t nann = r.u32(), npass = r.u32();
        fx_annotations(r, nann, fx, tech.annotations);
        for (uint32_t j = 0; j < npass && r.ok && j < 256; ++j) {
            FxPass pass;
            pass.name = r.str(r.u32());
            uint32_t pann = r.u32(), nstate = r.u32();
            fx_annotations(r, pann, fx, pass.annotations);
            for (uint32_t k = 0; k < nstate && r.ok && k < 1024; ++k)
                pass.states.push_back(fx_state(r));
            tech.passes.push_back(std::move(pass));
        }
        fx.techniques.push_back(std::move(tech));
    }
    uint32_t nstrings = r.u32(), nresources = r.u32();
    for (uint32_t i = 0; i < nstrings && r.ok && i < 65536; ++i) {
        uint32_t id = r.u32(), len = r.u32();
        fx.objects[id].data = r.bytes(r.p, len);
        r.p += (len + 3) & ~3u;
    }
    for (uint32_t i = 0; i < nresources && r.ok && i < 65536; ++i) {
        uint32_t tech = r.u32(), index = r.u32(), element = r.u32(), state = r.u32(),
                 usage = r.u32();
        uint32_t len = r.u32();
        std::vector<uint8_t> data = r.bytes(r.p, len);
        r.p += (len + 3) & ~3u;
        (void)element;
        FxState *st = nullptr;
        if (tech == 0xffffffffu) {
            if (index < fx.params.size() && state < fx.params[index].sampler.size())
                st = &fx.params[index].sampler[state];
        } else if (tech < fx.techniques.size() && index < fx.techniques[tech].passes.size() &&
                   state < fx.techniques[tech].passes[index].states.size()) {
            st = &fx.techniques[tech].passes[index].states[state];
        }
        if (!st)
            continue;
        // A numeric state with a resource is a preshader.
        if (st->t.cls != FXC_OBJECT) {
            if (usage == 0)
                st->preshader = std::move(data);
            continue;
        }
        FxObject &obj = fx.objects[st->object()];
        if (usage == 0)
            obj.data = std::move(data);
        else if (usage == 1)
            obj.param = std::string((const char *)data.data(), data.size()).c_str();
    }
    return r.ok;
}

// ---- The effect's resource, read from the module the game named -----------
static bool name_matches(uint32_t entry_name, const std::string &want) {
    uint16_t len = (uint16_t)(gm_ptr(entry_name)[0] | gm_ptr(entry_name)[1] << 8);
    if (len != want.size())
        return false;
    for (uint16_t i = 0; i < len; ++i) {
        uint16_t ch = (uint16_t)(gm_ptr(entry_name + 2 + 2u * i)[0] |
                                 gm_ptr(entry_name + 2 + 2u * i)[1] << 8);
        if (ch > 0x7f || std::toupper(ch) != std::toupper((unsigned char)want[i]))
            return false;
    }
    return true;
}

// Walks the module's resource directory for RT_RCDATA with the given name or
// number; the loader maps the headers and every section, so this is all guest
// memory.
static bool find_rcdata(uint32_t module, uint32_t name_arg, uint32_t *addr, uint32_t *size) {
    if (!module || !gm_fits(module, 0x40) || rd32(module) % 65536 != 0x5a4d)
        return false;
    uint32_t pe = module + rd32(module + 0x3c);
    if (!gm_fits(pe, 0xa0) || rd32(pe) != 0x4550)
        return false;
    uint32_t root = module + rd32(pe + 0x18 + 0x60 + 2 * 8);
    std::string want;
    uint32_t want_id = 0;
    if (name_arg > 0xffff)
        want = gm_str(name_arg, 256);
    else
        want_id = name_arg;
    auto find = [&](uint32_t dir, bool by_type, uint32_t type) -> uint32_t {
        uint16_t named = (uint16_t)(rd32(dir + 12) & 0xffff),
                 ids = (uint16_t)(rd32(dir + 12) >> 16);
        for (uint32_t i = 0; i < (uint32_t)named + ids; ++i) {
            uint32_t e = dir + 16 + 8 * i, nm = rd32(e), off = rd32(e + 4);
            bool hit;
            if (by_type)
                hit = !(nm & 0x80000000u) && nm == type;
            else if (!want.empty())
                hit = (nm & 0x80000000u) && name_matches(root + (nm & 0x7fffffffu), want);
            else
                hit = !(nm & 0x80000000u) && nm == want_id;
            if (hit)
                return off;
        }
        return 0;
    };
    uint32_t type_off = find(root, true, 10); // RT_RCDATA
    if (!(type_off & 0x80000000u))
        return false;
    uint32_t name_off = find(root + (type_off & 0x7fffffffu), false, 0);
    if (!(name_off & 0x80000000u))
        return false;
    uint32_t lang_dir = root + (name_off & 0x7fffffffu);
    uint32_t data_entry = root + (rd32(lang_dir + 16 + 4) & 0x7fffffffu);
    *addr = module + rd32(data_entry);
    *size = rd32(data_entry + 4);
    return gm_fits(*addr, *size);
}

// ---- Handles ---------------------------------------------------------------
static const uint32_t H_PARAM = 0xF1000000u, H_TECH = 0xF2000000u, H_PASS = 0xF3000000u,
                      H_ANNOT = 0xF4000000u;

static FxEffect *this_fx(X86 *c) {
    ComObj *o = com_this_arg(c);
    if (!o || o->kind != K_D3DXEFFECT)
        return nullptr;
    // The last effect asked for, while no effect has come or gone since.
    static thread_local uint32_t last_id = 0;
    static thread_local uint64_t last_generation = 0;
    static thread_local FxEffect *last = nullptr;
    if (last && last_id == o->id && last_generation == g_effect_generation)
        return last;
    auto it = effects().find(o->id);
    last = it == effects().end() ? nullptr : &it->second;
    last_id = o->id;
    last_generation = g_effect_generation;
    return last;
}

static bool same_name(const std::string &a, const std::string &b) {
    if (a.size() != b.size())
        return false;
    for (size_t i = 0; i < a.size(); ++i)
        if (std::toupper((unsigned char)a[i]) != std::toupper((unsigned char)b[i]))
            return false;
    return true;
}

static FxParam *param_of(FxEffect &fx, uint32_t h) {
    if ((h & 0xff000000u) == H_PARAM)
        return (h & 0xffffffu) < fx.params.size() ? &fx.params[h & 0xffffffu] : nullptr;
    if ((h & 0xff000000u) == H_ANNOT)
        return (h & 0xffffffu) < fx.annotations.size() ? &fx.annotations[h & 0xffffffu] : nullptr;
    if (!h || h >= GUEST_SIZE)
        return nullptr;
    std::string name = gm_str(h, 256);
    for (FxParam &p : fx.params)
        if (p.t.name == name)
            return &p;
    return nullptr;
}

static int32_t tech_of(FxEffect &fx, uint32_t h) {
    if ((h & 0xff000000u) == H_TECH)
        return (h & 0xffffffu) < fx.techniques.size() ? (int32_t)(h & 0xffffffu) : -1;
    if (!h || h >= GUEST_SIZE)
        return -1;
    std::string name = gm_str(h, 256);
    for (size_t i = 0; i < fx.techniques.size(); ++i)
        if (fx.techniques[i].name == name)
            return (int32_t)i;
    return -1;
}

static FxPass *pass_of(FxEffect &fx, uint32_t h) {
    if ((h & 0xff000000u) != H_PASS)
        return nullptr;
    uint32_t tech = (h >> 12) & 0xfffu, pass = h & 0xfffu;
    if (tech >= fx.techniques.size() || pass >= fx.techniques[tech].passes.size())
        return nullptr;
    return &fx.techniques[tech].passes[pass];
}

static uint32_t guest_copy(const void *data, size_t size) {
    uint32_t a = heap_alloc((uint32_t)size + 1, true, 4);
    if (a)
        memcpy(gm_ptr(a), data, size);
    return a;
}
static uint32_t guest_string(const std::string &s) {
    return guest_copy(s.c_str(), s.size() + 1);
}

static const FxObject *pass_shader_object(const FxEffect &fx, const FxPass &pass, uint32_t op) {
    for (const FxState &s : pass.states)
        if (s.op == op && s.t.cls == FXC_OBJECT) {
            auto it = fx.objects.find(s.object());
            if (it != fx.objects.end() && it->second.data.size() >= 4) {
                if (!it->second.key)
                    it->second.key = d9sh::code_key(it->second.data.data(), it->second.data.size());
                return &it->second;
            }
        }
    return nullptr;
}

static const std::vector<uint8_t> *pass_shader(const FxEffect &fx, const FxPass &pass,
                                               uint32_t op) {
    for (const FxState &s : pass.states)
        if (s.op == op && s.t.cls == FXC_OBJECT) {
            auto it = fx.objects.find(s.object());
            if (it != fx.objects.end() && it->second.data.size() >= 4)
                return &it->second.data;
        }
    return nullptr;
}

// ---- Parameter values ------------------------------------------------------
static uint32_t param_slots(const FxParam &p) {
    return p.t.numeric() ? (uint32_t)(p.value.size() / 4) : 0;
}

static void param_put_float(FxParam &p, uint32_t i, float f) {
    if (i >= param_slots(p))
        return;
    param_touched(p);
    if (p.t.type == FXT_FLOAT) {
        memcpy(&p.value[4 * i], &f, 4);
    } else {
        int32_t v = p.t.type == FXT_BOOL ? (f != 0.0f) : (int32_t)f;
        memcpy(&p.value[4 * i], &v, 4);
    }
}
static void param_put_int(FxParam &p, uint32_t i, int32_t n) {
    if (i >= param_slots(p))
        return;
    param_touched(p);
    if (p.t.type == FXT_FLOAT) {
        float f = (float)n;
        memcpy(&p.value[4 * i], &f, 4);
    } else {
        int32_t v = p.t.type == FXT_BOOL ? (n != 0) : n;
        memcpy(&p.value[4 * i], &v, 4);
    }
}
static float param_get_float(const FxParam &p, uint32_t i) {
    if (i >= param_slots(p))
        return 0.0f;
    if (p.t.type == FXT_FLOAT) {
        float f;
        memcpy(&f, &p.value[4 * i], 4);
        return f;
    }
    int32_t v;
    memcpy(&v, &p.value[4 * i], 4);
    return (float)v;
}
static int32_t param_get_int(const FxParam &p, uint32_t i) {
    if (i >= param_slots(p))
        return 0;
    if (p.t.type == FXT_FLOAT) {
        float f;
        memcpy(&f, &p.value[4 * i], 4);
        return (int32_t)f;
    }
    int32_t v;
    memcpy(&v, &p.value[4 * i], 4);
    return v;
}

// A D3DX matrix is row-major 4x4. A parameter of R rows and C columns keeps
// the top-left R by C of it, element after element.
static void param_put_matrix(FxParam &p, uint32_t element, const float m[16]) {
    uint32_t r = p.t.rows, cn = p.t.cols;
    for (uint32_t i = 0; i < r && i < 4; ++i)
        for (uint32_t k = 0; k < cn && k < 4; ++k)
            param_put_float(p, element * r * cn + i * cn + k, m[i * 4 + k]);
}
static void read_guest_matrix(uint32_t addr, float m[16], bool transpose) {
    float in[16];
    read_matrix(addr, in);
    for (int i = 0; i < 4; ++i)
        for (int k = 0; k < 4; ++k)
            m[i * 4 + k] = transpose ? in[k * 4 + i] : in[i * 4 + k];
}

// ---- Applying a pass -------------------------------------------------------
struct CtabConst {
    std::string name;
    uint16_t set = 0, index = 0, count = 0, cls = 0, rows = 0, cols = 0;
};

// The constant table fxc puts in the first comment block of a shader.
static std::vector<CtabConst> ctab_parse(const std::vector<uint8_t> &code);
// The constant table of a program, parsed once per program.
static const std::vector<CtabConst> &ctab_of(const std::vector<uint8_t> &code, uint64_t key) {
    static auto *cache = new std::unordered_map<uint64_t, std::vector<CtabConst>>();
    if (!key)
        key = d9sh::code_key(code.data(), code.size());
    auto it = cache->find(key);
    if (it != cache->end())
        return it->second;
    return (*cache)[key] = ctab_parse(code);
}

static std::vector<CtabConst> ctab_parse(const std::vector<uint8_t> &code) {
    std::vector<CtabConst> out;
    FxReader r{code.data(), code.size()};
    size_t pos = 4;
    uint32_t tok = r.at(pos);
    if (!r.ok || (tok & 0xffff) != 0xfffe)
        return out;
    size_t len = ((tok >> 16) & 0x7fff) * 4u;
    size_t data = pos + 4;
    if (len < 32 || r.at(data) != 0x42415443u) // 'CTAB'
        return out;
    size_t base = data + 4;
    uint32_t nconst = r.at(base + 12), info = r.at(base + 16);
    for (uint32_t i = 0; i < nconst && i < 1024; ++i) {
        size_t ci = base + info + 20u * i;
        CtabConst c;
        uint32_t name_off = r.at(ci);
        uint32_t w = r.at(ci + 4);
        c.set = (uint16_t)(w & 0xffff);
        c.index = (uint16_t)(w >> 16);
        c.count = (uint16_t)(r.at(ci + 8) & 0xffff);
        uint32_t type_off = r.at(ci + 12);
        uint32_t tw = r.at(base + type_off);
        c.cls = (uint16_t)(tw & 0xffff);
        uint32_t dims = r.at(base + type_off + 4);
        c.rows = (uint16_t)(dims & 0xffff);
        c.cols = (uint16_t)(dims >> 16);
        if (!r.ok)
            break;
        size_t e = base + name_off;
        while (e < code.size() && code[e])
            ++e;
        if (base + name_off < code.size())
            c.name.assign((const char *)code.data() + base + name_off, e - (base + name_off));
        out.push_back(c);
    }
    return out;
}

static int32_t param_index_of(FxEffect &fx, const std::string &name) {
    if (fx.param_index.size() != fx.params.size()) {
        fx.param_index.clear();
        for (uint32_t i = 0; i < fx.params.size(); ++i)
            fx.param_index.emplace(fx.params[i].t.name, i); // the first of a name wins
        if (fx.param_index.size() != fx.params.size()) {
            // Duplicate names: fall back to a scan so the index is not rebuilt
            // on every call.
            for (uint32_t i = 0; i < fx.params.size(); ++i)
                if (fx.params[i].t.name == name)
                    return (int32_t)i;
            return -1;
        }
    }
    auto it = fx.param_index.find(name);
    return it == fx.param_index.end() ? -1 : (int32_t)it->second;
}
static FxParam *param_named(FxEffect &fx, const std::string &name) {
    int32_t i = param_index_of(fx, name);
    return i < 0 ? nullptr : &fx.params[(size_t)i];
}

// The texture a sampler parameter reads, through the name its texture state
// carries.
static uint32_t sampler_texture(FxEffect &fx, const FxParam &sampler) {
    for (const FxState &s : sampler.sampler)
        if (s.op == FXS_SAMPLER_TEXTURE) {
            auto it = fx.objects.find(s.object());
            if (it == fx.objects.end() || it->second.param.empty())
                continue;
            if (FxParam *tex = param_named(fx, it->second.param))
                return tex->texture;
        }
    return 0;
}

struct D9Pipeline;
static void apply_state(FxEffect &fx, D9Pipeline &pl, const FxState &s, uint32_t sampler_stage);

static uint32_t bind_constants(FxEffect &fx, const std::vector<uint8_t> &code, float (*reg)[4],
                               uint32_t limit, D9Pipeline &pl, uint32_t *missing,
                               uint64_t key = 0) {
    static const bool bind_trace = recomp_env("D9_TRACE") != nullptr;
    uint32_t bound = 0;
    if (!key)
        key = d9sh::code_key(code.data(), code.size());
    const std::vector<CtabConst> &table = ctab_of(code, key);
    std::vector<int32_t> &resolved = fx.ctab_params[key];
    if (resolved.size() != table.size()) {
        resolved.resize(table.size());
        for (size_t i = 0; i < table.size(); ++i)
            resolved[i] = param_index_of(fx, table[i].name);
    }
    for (size_t ci = 0; ci < table.size(); ++ci) {
        const CtabConst &c = table[ci];
        FxParam *p = resolved[ci] < 0 ? nullptr : &fx.params[(size_t)resolved[ci]];
        if (c.set == 3) { // a sampler: register index is the stage
            if (p && c.index < 16) {
                pl.sampler_tex[c.index] = sampler_texture(fx, *p);
                for (const FxState &s : p->sampler)
                    apply_state(fx, pl, s, c.index);
                ++bound;
            } else {
                ++*missing;
            }
            continue;
        }
        if (c.set != 2) // bool and int registers are not modelled yet
            continue;
        if (!p || !p->t.numeric()) {
            ++*missing;
            continue;
        }
        ++bound;
        if (c.cls == FXC_MATRIX_ROWS || c.cls == FXC_MATRIX_COLUMNS) {
            uint32_t pr = p->t.rows ? p->t.rows : 1, pc = p->t.cols ? p->t.cols : 1;
            for (uint32_t r = 0; r < c.count && c.index + r < limit; ++r) {
                uint32_t el = c.cls == FXC_MATRIX_COLUMNS ? r / (c.cols ? c.cols : 4)
                                                          : r / (c.rows ? c.rows : 4);
                uint32_t line = c.cls == FXC_MATRIX_COLUMNS ? r % (c.cols ? c.cols : 4)
                                                            : r % (c.rows ? c.rows : 4);
                for (uint32_t k = 0; k < 4; ++k) {
                    uint32_t row = c.cls == FXC_MATRIX_COLUMNS ? k : line;
                    uint32_t col = c.cls == FXC_MATRIX_COLUMNS ? line : k;
                    reg[c.index + r][k] = (row < pr && col < pc)
                                              ? param_get_float(*p, el * pr * pc + row * pc + col)
                                              : 0.0f;
                }
            }
        } else {
            // Each element of a scalar or vector starts a new register.
            uint32_t n = param_slots(*p);
            uint32_t per = (p->t.rows ? p->t.rows : 1) * (p->t.cols ? p->t.cols : 1);
            if (per > 4)
                per = 4;
            for (uint32_t r = 0; r < c.count && c.index + r < limit; ++r)
                for (uint32_t k = 0; k < 4; ++k)
                    reg[c.index + r][k] =
                        (k < per && r * per + k < n) ? param_get_float(*p, r * per + k) : 0.0f;
        }
        if (bind_trace && c.index < 4) {
            // The D9_TRACE diagnostic, effect side: the parameters a program's
            // first four vertex registers are bound from, with the floats as
            // they landed, once per program and register; the program key is
            // printed to match the backend's draw traces.
            for (uint32_t r = 0; r < c.count && c.index + r < 4; ++r) {
                char kf[96];
                snprintf(kf, sizeof kf, "d3dx9.bind.%llx.%u", (unsigned long long)key,
                         (unsigned)(c.index + r));
                log_once(kf,
                         "d3dx9: %012llx vconst[%02u] '%s' set %u class %u rows %u cols %u: "
                         "%.9g %.9g %.9g %.9g",
                         (unsigned long long)key, (unsigned)(c.index + r), c.name.c_str(),
                         (unsigned)c.set, (unsigned)c.cls, (unsigned)c.rows, (unsigned)c.cols,
                         reg[c.index + r][0], reg[c.index + r][1], reg[c.index + r][2],
                         reg[c.index + r][3]);
            }
        }
    }
    return bound;
}

// ---- Preshaders -------------------------------------------------------------
// The effect compiler moves expressions that depend only on parameters out of
// the shaders into "preshaders": a constant table, literal doubles (CLIT) and
// a short program (FXLC). A render state such as `AlphaBlendEnable =
// BlendState[0]` is one of these. Operand tables: 1 literals, 2 inputs,
// 4 outputs, 7 temporaries; offsets count components, four per register.
static uint32_t pres_find(const std::vector<uint8_t> &b, uint32_t fourcc, size_t *at) {
    size_t pos = 4;
    while (pos + 8 <= b.size()) {
        uint32_t tok = rd32_le(b.data() + pos);
        if ((tok & 0xffff) != 0xfffe)
            return 0;
        uint32_t words = (tok >> 16) & 0x7fff;
        if (rd32_le(b.data() + pos + 4) == fourcc) {
            *at = pos + 8;
            return words ? words - 1 : 0;
        }
        pos += 4 + 4u * words;
    }
    return 0;
}

static bool pres_eval(FxEffect &fx, D9Pipeline &pl, const std::vector<uint8_t> &b, float *result,
                      uint64_t key) {
    if (b.size() < 8 || rd32_le(b.data()) != 0x46580200u)
        return false;
    // The literal table and code location, found once per preshader.
    struct Parsed {
        std::vector<double> lit;
        size_t code_at = 0;
        uint32_t code_words = 0;
    };
    static auto *parsed = new std::unordered_map<uint64_t, Parsed>();
    if (!key)
        key = d9sh::code_key(b.data(), b.size());
    auto found = parsed->find(key);
    if (found == parsed->end()) {
        Parsed pp;
        size_t lit_at = 0;
        uint32_t lit_words = pres_find(b, 0x54494c43u /* CLIT */, &lit_at);
        pp.code_words = pres_find(b, 0x434c5846u /* FXLC */, &pp.code_at);
        if (lit_words) {
            uint32_t n = rd32_le(b.data() + lit_at);
            for (uint32_t i = 0; i < n && 4 + 8u * (i + 1) <= 4u * lit_words; ++i) {
                double d;
                memcpy(&d, b.data() + lit_at + 4 + 8u * i, 8);
                pp.lit.push_back(d);
            }
        }
        found = parsed->emplace(key, std::move(pp)).first;
    }
    const std::vector<double> &lit = found->second.lit;
    size_t code_at = found->second.code_at;
    uint32_t code_words = found->second.code_words;
    if (!code_words)
        return false;
    // Only the registers the preshader's own constant table names are read,
    // and bind_constants writes every one of those.
    static float in[256][4];
    uint32_t missing = 0;
    bind_constants(fx, b, in, 256, pl, &missing, key);
    double out[64] = {}, temp[64] = {};
    const uint8_t *w = b.data() + code_at;
    size_t nw = code_words, pc = 0;
    auto word = [&](bool &ok) -> uint32_t {
        if (pc >= nw) {
            ok = false;
            return 0;
        }
        return rd32_le(w + 4 * pc++);
    };
    struct Arg {
        uint32_t table = 0, offset = 0;
    };
    auto get = [&](const Arg &a, uint32_t i) -> double {
        uint32_t o = a.offset + i;
        switch (a.table) {
        case 1:
            return o < lit.size() ? lit[o] : 0.0;
        case 2:
            return o / 4 < 256 ? in[o / 4][o % 4] : 0.0;
        case 4:
            return o < 64 ? out[o] : 0.0;
        case 7:
            return o < 64 ? temp[o] : 0.0;
        default:
            return 0.0;
        }
    };
    bool ok = true;
    uint32_t count = word(ok);
    for (uint32_t k = 0; k < count && ok && k < 256; ++k) {
        uint32_t ins = word(ok);
        uint32_t op = (ins >> 20) & 0x7ff, n = ins & 0xffff;
        bool scalar = (ins & 0x80000000u) != 0;
        uint32_t nin = word(ok);
        if (nin > 3 || n > 16)
            return false;
        Arg args[4];
        for (uint32_t a = 0; a <= nin && ok; ++a) {
            if (word(ok) != 0)
                return false; // indexed operands do not occur in the effects served
            args[a].table = word(ok);
            args[a].offset = word(ok);
        }
        if (!ok)
            return false;
        const Arg &dst = args[nin];
        for (uint32_t i = 0; i < n; ++i) {
            auto x = [&](uint32_t a) { return get(args[a], (scalar && a == 0) ? 0 : i); };
            double v;
            switch (op) {
            case 0x100:
                v = x(0);
                break; // mov
            case 0x101:
                v = -x(0);
                break; // neg
            case 0x200:
                v = std::min(x(0), x(1));
                break; // min
            case 0x201:
                v = std::max(x(0), x(1));
                break; // max
            case 0x202:
                v = x(0) < x(1) ? 1.0 : 0.0;
                break; // lt
            case 0x203:
                v = x(0) >= x(1) ? 1.0 : 0.0;
                break; // ge
            case 0x204:
                v = x(0) + x(1);
                break; // add
            case 0x205:
                v = x(0) * x(1);
                break; // mul
            case 0x208:
                v = x(1) != 0.0 ? x(0) / x(1) : 0.0;
                break; // div
            case 0x300:
                v = x(0) >= 0.0 ? x(1) : x(2);
                break; // cmp
            case 0x301:
                v = x(0) != 0.0 ? x(1) : x(2);
                break; // movc
            default: {
                char key[48];
                snprintf(key, sizeof key, "d3dx9.pres.%03x", op);
                log_once(key, "d3dx9: preshader opcode %03x is not evaluated", op);
                return false;
            }
            }
            uint32_t o = dst.offset + i;
            if (dst.table == 4 && o < 64)
                out[o] = v;
            else if (dst.table == 7 && o < 64)
                temp[o] = v;
            else
                return false;
        }
    }
    if (!ok)
        return false;
    *result = (float)out[0];
    return true;
}

// A numeric state's value as the DWORD the device would be handed: an integer
// for BOOL and INT states, the float's bits for FLOAT ones.
// The preshader's result, evaluated again only when one of its inputs changed.
static bool state_preshader(FxEffect &fx, D9Pipeline &pl, const FxState &s, float *f) {
    if (!s.preshader_key)
        s.preshader_key = d9sh::code_key(s.preshader.data(), s.preshader.size());
    if (s.pres_effect == fx.self && s.pres_stamp) {
        auto it = fx.ctab_params.find(s.preshader_key);
        bool fresh = it != fx.ctab_params.end();
        if (fresh)
            for (int32_t i : it->second)
                if (i >= 0 && fx.params[(size_t)i].stamp > s.pres_stamp) {
                    fresh = false;
                    break;
                }
        if (fresh) {
            *f = s.pres_result;
            return s.pres_ok;
        }
    }
    s.pres_ok = pres_eval(fx, pl, s.preshader, &s.pres_result, s.preshader_key);
    s.pres_effect = fx.self;
    s.pres_stamp = g_param_stamp;
    *f = s.pres_result;
    return s.pres_ok;
}

static bool state_value(FxEffect &fx, D9Pipeline &pl, const FxState &s, uint32_t *v) {
    float f;
    if (!s.preshader.empty() && state_preshader(fx, pl, s, &f)) {
        if (s.t.type == FXT_FLOAT)
            memcpy(v, &f, 4);
        else
            *v = (uint32_t)(int32_t)lrintf(f);
        return true;
    }
    if (s.value.size() < 4)
        return false;
    *v = rd32_le(s.value.data());
    return true;
}

// Wine's state table (d3dx9 effect.c), render-state part: the
// D3DRENDERSTATETYPE at each position 0..102. WRAP8-15 follow WRAP7 directly.
static const uint8_t kFxRenderState[103] = {
    7,   8,   9,   14,  15,  16,  19,  20,  // 0: ZENABLE
    22,  23,  24,  25,  26,  27,  28,  29,  // 8: CULLMODE
    34,  35,  36,  37,  38,  48,  52,  53,  // 16: FOGCOLOR
    54,  55,  56,  57,  58,  59,  60,  128, // 24: STENCILZFAIL
    129, 130, 131, 132, 133, 134, 135, 198, // 32: WRAP1
    199, 200, 201, 202, 203, 204, 205, 136, // 40: WRAP9
    137, 139, 140, 141, 142, 143, 145, 146, // 48: LIGHTING
    147, 148, 151, 152, 154, 155, 166, 156, // 56: AMBIENTMATERIALSOURCE
    157, 158, 159, 160, 161, 162, 163, 165, // 64: POINTSCALEENABLE
    167, 168, 170, 171, 172, 173, 174, 175, // 72: INDEXEDVERTEXBLENDENABLE
    176, 178, 179, 180, 181, 182, 183, 184, // 80: ANTIALIASEDLINEENABLE
    185, 186, 187, 188, 189, 190, 191, 192, // 88: TWOSIDEDSTENCILMODE
    193, 194, 195, 206, 207, 208, 209,      // 96: BLENDFACTOR
};
// Positions 103..120: the D3DTEXTURESTAGESTATETYPE of each, COLOROP first.
static const uint8_t kFxStageState[18] = {1, 26, 2, 3,  4,  27, 5,  6,  28,
                                          7, 8,  9, 10, 11, 22, 23, 24, 32};

static void apply_state(FxEffect &fx, D9Pipeline &pl, const FxState &s, uint32_t sampler_stage) {
    if (s.t.cls == FXC_OBJECT)
        return;
    uint32_t v;
    if (s.op < 103) {
        if (!state_value(fx, pl, s, &v))
            return;
        uint32_t rs = kFxRenderState[s.op];
        if (pl.rs[rs] != v || !pl.rs_set[rs]) {
            pl.rs[rs] = v;
            pl.rs_set[rs] = true;
            pl.states_changed();
        }
    } else if (s.op < 121) {
        if (s.index < 8 && state_value(fx, pl, s, &v))
            pl.tss[s.index][kFxStageState[s.op - 103]] = v;
    } else if (s.op >= FXS_SAMPLER_FIRST && s.op <= FXS_SAMPLER_LAST) {
        uint32_t stage = sampler_stage != 0xffffffffu ? sampler_stage : s.index;
        if (stage < 16 && state_value(fx, pl, s, &v) &&
            pl.sampler_state[stage][s.op - FXS_SAMPLER_FIRST + 1] != v) {
            pl.sampler_state[stage][s.op - FXS_SAMPLER_FIRST + 1] = v;
            pl.states_changed();
        }
    }
}

static void apply_pass(FxEffect &fx) {
    if (fx.technique >= fx.techniques.size())
        return;
    FxTechnique &tech = fx.techniques[fx.technique];
    if (fx.pass >= tech.passes.size())
        return;
    FxPass &pass = tech.passes[fx.pass];
    D9Pipeline &pl = d9_pipeline(fx.device);
    const FxObject *vso = pass_shader_object(fx, pass, FXS_VERTEXSHADER);
    const FxObject *pso = pass_shader_object(fx, pass, FXS_PIXELSHADER);
    // The bytes are copied only when the program changes.
    uint64_t vkey = vso ? vso->key : 0, pkey = pso ? pso->key : 0;
    auto shared_of = [](const FxObject *o) -> std::shared_ptr<const std::vector<uint8_t>> {
        if (!o)
            return nullptr;
        if (!o->shared)
            o->shared = std::make_shared<const std::vector<uint8_t>>(o->data);
        return o->shared;
    };
    if (vkey != pl.vs_key || (vso ? vso->data.size() : 0) != pl.vs.size()) {
        pl.vs.bytes = shared_of(vso);
        pl.vs_key = vkey;
    }
    if (pkey != pl.ps_key || (pso ? pso->data.size() : 0) != pl.ps.size()) {
        pl.ps.bytes = shared_of(pso);
        pl.ps_key = pkey;
    }
    if (pass.label.empty())
        pass.label = fx.resource + "/" + tech.name + "/" + pass.name;
    pl.label = pass.label.c_str();
    for (const FxState &s : pass.states)
        apply_state(fx, pl, s, 0xffffffffu);
    // A pass may also bind a texture to a stage directly.
    for (const FxState &s : pass.states)
        if (s.op == FXS_SAMPLER_TEXTURE && s.index < 16) {
            auto it = fx.objects.find(s.object());
            if (it != fx.objects.end() && !it->second.param.empty())
                if (FxParam *tex = param_named(fx, it->second.param))
                    pl.sampler_tex[s.index] = tex->texture;
        }
    uint32_t missing = 0;
    uint32_t bound = bind_constants(fx, pl.vs.vec(), pl.vconst, 256, pl, &missing, pl.vs_key);
    bound += bind_constants(fx, pl.ps.vec(), pl.pconst, 32, pl, &missing, pl.ps_key);
    static uint32_t reported = 0;
    if (++reported <= 16) {
        char samplers[160] = "";
        size_t used = 0;
        for (int i = 0; i < 4; ++i) {
            ComObj *t = com_get(pl.sampler_tex[i]);
            used += (size_t)snprintf(samplers + used, sizeof samplers - used, " s%d=%u(%ux%u)", i,
                                     pl.sampler_tex[i], t ? t->width : 0, t ? t->height : 0);
        }
        LOGW("d3dx9: pass %s/%s/%s: vs %zu bytes (%08x), ps %zu bytes (%08x), %u constants bound, "
             "%u unmatched,%s",
             fx.resource.c_str(), tech.name.c_str(), pass.name.c_str(), pl.vs.size(),
             pl.vs.size() >= 4 ? rd32_le(pl.vs.data()) : 0u, pl.ps.size(),
             pl.ps.size() >= 4 ? rd32_le(pl.ps.data()) : 0u, bound, missing, samplers);
    }
}

// ---------------------------------------------------------------------------
// The methods
// ---------------------------------------------------------------------------
#define FX_STUB(name)                                                                              \
    void Fx_##name(X86 *c) {                                                                       \
        log_once("d3dx9.fx." #name, "d3dx9: ID3DXEffect::" #name " is not implemented");           \
        com_ret(c, D3D_OKX);                                                                       \
    }

FX_STUB(GetFunctionDesc)
FX_STUB(GetParameterElement)
FX_STUB(GetFunction)
FX_STUB(GetFunctionByName)
FX_STUB(GetMatrixPointerArray)
FX_STUB(GetMatrixTransposeArray)
FX_STUB(SetMatrixTransposePointerArray)
FX_STUB(GetMatrixTransposePointerArray)
FX_STUB(SetString)
FX_STUB(GetPixelShader)
FX_STUB(GetVertexShader)
FX_STUB(SetArrayRange)
FX_STUB(SetStateManager)
FX_STUB(GetStateManager)
FX_STUB(BeginParameterBlock)
FX_STUB(EndParameterBlock)
FX_STUB(ApplyParameterBlock)
FX_STUB(DeleteParameterBlock)
FX_STUB(CloneEffect)

// (this, pDesc): Creator, Parameters, Techniques, Functions.
void Fx_GetDesc(X86 *c) {
    FxEffect *fx = this_fx(c);
    uint32_t d = arg(c, 1);
    if (!fx || !d) {
        com_ret(c, D3DERR_INVALIDCALLX);
        return;
    }
    memset(gm_ptr(d), 0, 16);
    wr32(d + 4, (uint32_t)fx->params.size());
    wr32(d + 8, (uint32_t)fx->techniques.size());
    com_ret(c, D3D_OKX);
}

// (this, hParameter, pDesc): D3DXPARAMETER_DESC.
void Fx_GetParameterDesc(X86 *c) {
    FxEffect *fx = this_fx(c);
    FxParam *p = fx ? param_of(*fx, arg(c, 1)) : nullptr;
    uint32_t d = arg(c, 2);
    if (!p || !d) {
        com_ret(c, D3DERR_INVALIDCALLX);
        return;
    }
    if (!p->guest_name)
        p->guest_name = guest_string(p->t.name);
    if (!p->guest_semantic && !p->t.semantic.empty())
        p->guest_semantic = guest_string(p->t.semantic);
    memset(gm_ptr(d), 0, 44);
    wr32(d + 0, p->guest_name);
    wr32(d + 4, p->guest_semantic);
    wr32(d + 8, p->t.cls);
    wr32(d + 12, p->t.type);
    wr32(d + 16, p->t.rows);
    wr32(d + 20, p->t.cols);
    wr32(d + 24, p->t.elements);
    wr32(d + 28, (uint32_t)p->annotations.size());
    wr32(d + 32, (uint32_t)p->t.members.size());
    wr32(d + 40, p->t.bytes());
    com_ret(c, D3D_OKX);
}

// (this, hTechnique, pDesc): Name, Passes, Annotations.
void Fx_GetTechniqueDesc(X86 *c) {
    FxEffect *fx = this_fx(c);
    int32_t t = fx ? tech_of(*fx, arg(c, 1)) : -1;
    uint32_t d = arg(c, 2);
    if (t < 0 || !d) {
        com_ret(c, D3DERR_INVALIDCALLX);
        return;
    }
    FxTechnique &tech = fx->techniques[(size_t)t];
    if (!tech.guest_name)
        tech.guest_name = guest_string(tech.name);
    memset(gm_ptr(d), 0, 12);
    wr32(d, tech.guest_name);
    wr32(d + 4, (uint32_t)tech.passes.size());
    wr32(d + 8, (uint32_t)tech.annotations.size());
    com_ret(c, D3D_OKX);
}

// (this, hPass, pDesc): Name, Annotations, and the two shader functions.
void Fx_GetPassDesc(X86 *c) {
    FxEffect *fx = this_fx(c);
    FxPass *pass = fx ? pass_of(*fx, arg(c, 1)) : nullptr;
    uint32_t d = arg(c, 2);
    if (!pass || !d) {
        com_ret(c, D3DERR_INVALIDCALLX);
        return;
    }
    if (!pass->guest_name)
        pass->guest_name = guest_string(pass->name);
    if (!pass->guest_vs)
        if (const std::vector<uint8_t> *vs = pass_shader(*fx, *pass, FXS_VERTEXSHADER))
            pass->guest_vs = guest_copy(vs->data(), vs->size());
    if (!pass->guest_ps)
        if (const std::vector<uint8_t> *ps = pass_shader(*fx, *pass, FXS_PIXELSHADER))
            pass->guest_ps = guest_copy(ps->data(), ps->size());
    memset(gm_ptr(d), 0, 16);
    wr32(d, pass->guest_name);
    wr32(d + 4, (uint32_t)pass->annotations.size());
    wr32(d + 8, pass->guest_vs);
    wr32(d + 12, pass->guest_ps);
    com_ret(c, D3D_OKX);
}

// Handles. These return the handle, not an HRESULT; zero is "not found".
void Fx_GetParameter(X86 *c) {
    FxEffect *fx = this_fx(c);
    uint32_t parent = arg(c, 1), index = arg(c, 2);
    set_eax(c, (fx && !parent && index < fx->params.size()) ? H_PARAM | index : 0);
}
void Fx_GetParameterByName(X86 *c) {
    FxEffect *fx = this_fx(c);
    uint32_t name = arg(c, 2);
    set_eax(c, 0);
    if (!fx || arg(c, 1) || !name || name >= GUEST_SIZE)
        return;
    std::string want = gm_str(name, 256);
    for (size_t i = 0; i < fx->params.size(); ++i)
        if (fx->params[i].t.name == want) {
            set_eax(c, H_PARAM | (uint32_t)i);
            return;
        }
}
void Fx_GetParameterBySemantic(X86 *c) {
    FxEffect *fx = this_fx(c);
    uint32_t sem = arg(c, 2);
    set_eax(c, 0);
    if (!fx || arg(c, 1) || !sem || sem >= GUEST_SIZE)
        return;
    std::string want = gm_str(sem, 256);
    for (size_t i = 0; i < fx->params.size(); ++i)
        if (same_name(fx->params[i].t.semantic, want)) {
            set_eax(c, H_PARAM | (uint32_t)i);
            return;
        }
}
// The annotation list of whatever `h` names: a parameter, a technique or a
// pass, by handle, or a parameter or technique by name.
static const std::vector<uint32_t> *annotations_of(FxEffect &fx, uint32_t h) {
    if ((h & 0xff000000u) == H_PASS) {
        FxPass *pass = pass_of(fx, h);
        return pass ? &pass->annotations : nullptr;
    }
    if ((h & 0xff000000u) == H_TECH) {
        int32_t t = tech_of(fx, h);
        return t >= 0 ? &fx.techniques[(size_t)t].annotations : nullptr;
    }
    if ((h & 0xff000000u) == H_ANNOT)
        return nullptr;
    if (FxParam *p = param_of(fx, h))
        return &p->annotations;
    int32_t t = tech_of(fx, h);
    return t >= 0 ? &fx.techniques[(size_t)t].annotations : nullptr;
}
// (this, hObject, Index): a handle, zero if there is none.
void Fx_GetAnnotation(X86 *c) {
    FxEffect *fx = this_fx(c);
    const std::vector<uint32_t> *list = fx ? annotations_of(*fx, arg(c, 1)) : nullptr;
    uint32_t index = arg(c, 2);
    set_eax(c, list && index < list->size() ? H_ANNOT | (*list)[index] : 0);
}
// (this, hObject, pName)
void Fx_GetAnnotationByName(X86 *c) {
    FxEffect *fx = this_fx(c);
    const std::vector<uint32_t> *list = fx ? annotations_of(*fx, arg(c, 1)) : nullptr;
    uint32_t name = arg(c, 2);
    set_eax(c, 0);
    if (!list || !name || name >= GUEST_SIZE)
        return;
    std::string want = gm_str(name, 256);
    for (uint32_t i : *list)
        if (fx->annotations[i].t.name == want) {
            set_eax(c, H_ANNOT | i);
            return;
        }
}
// (this, h, ppString): the string lives as long as the effect.
void Fx_GetString(X86 *c) {
    FxEffect *fx = this_fx(c);
    FxParam *p = fx ? param_of(*fx, arg(c, 1)) : nullptr;
    uint32_t out = arg(c, 2);
    const uint32_t FXT_STRING = 4;
    if (!p || !out || p->t.type != FXT_STRING || p->value.size() < 4) {
        com_ret(c, D3DERR_INVALIDCALLX);
        return;
    }
    uint32_t id = (uint32_t)(p->value[0] | p->value[1] << 8 | p->value[2] << 16 |
                             (uint32_t)p->value[3] << 24);
    auto it = fx->objects.find(id);
    if (it == fx->objects.end()) {
        com_ret(c, D3DERR_INVALIDCALLX);
        return;
    }
    FxObject &o = it->second;
    if (!o.guest_string) {
        std::string s(o.data.begin(), o.data.end());
        s = s.c_str(); // up to the first NUL
        o.guest_string = guest_string(s);
    }
    wr32(out, o.guest_string);
    com_ret(c, D3D_OKX);
}
void Fx_GetTechnique(X86 *c) {
    FxEffect *fx = this_fx(c);
    uint32_t index = arg(c, 1);
    set_eax(c, (fx && index < fx->techniques.size()) ? H_TECH | index : 0);
}
void Fx_GetTechniqueByName(X86 *c) {
    FxEffect *fx = this_fx(c);
    int32_t t = fx ? tech_of(*fx, arg(c, 1)) : -1;
    set_eax(c, t >= 0 ? H_TECH | (uint32_t)t : 0);
}
void Fx_GetPass(X86 *c) {
    FxEffect *fx = this_fx(c);
    int32_t t = fx ? tech_of(*fx, arg(c, 1)) : -1;
    uint32_t index = arg(c, 2);
    set_eax(c, (t >= 0 && index < fx->techniques[(size_t)t].passes.size())
                   ? H_PASS | ((uint32_t)t << 12) | index
                   : 0);
}
void Fx_GetPassByName(X86 *c) {
    FxEffect *fx = this_fx(c);
    int32_t t = fx ? tech_of(*fx, arg(c, 1)) : -1;
    uint32_t name = arg(c, 2);
    set_eax(c, 0);
    if (t < 0 || !name || name >= GUEST_SIZE)
        return;
    std::string want = gm_str(name, 256);
    const FxTechnique &tech = fx->techniques[(size_t)t];
    for (size_t i = 0; i < tech.passes.size(); ++i)
        if (tech.passes[i].name == want) {
            set_eax(c, H_PASS | ((uint32_t)t << 12) | (uint32_t)i);
            return;
        }
}

// ---- Values ----------------------------------------------------------------
#define FX_PARAM_OR_FAIL()                                                                         \
    FxEffect *fx = this_fx(c);                                                                     \
    FxParam *p = fx ? param_of(*fx, arg(c, 1)) : nullptr;                                          \
    if (!p) {                                                                                      \
        com_ret(c, D3DERR_INVALIDCALLX);                                                           \
        return;                                                                                    \
    }

// (this, h, pData, Bytes)
// The D9_TRACE diagnostic, value side of the effect API: writes that carry a
// subnormal in their second row (the shape a half-stale projection leaves)
// and the first writes to any view/perspective-named parameter, with the
// first eight floats, are enough to see where a dead focal row is born.
static void trace_value_write(const char *api, const FxParam &p, const uint8_t *buffer,
                              size_t bytes) {
    static const bool on = recomp_env("D9_TRACE") != nullptr;
    static uint32_t named_lines = 0;
    if (!on || bytes < 8 || !buffer)
        return;
    float f[8] = {};
    memcpy(f, buffer, std::min<size_t>(32, bytes));
    const char *name = p.t.name.c_str();
    if (std::fpclassify(f[1]) == FP_SUBNORMAL || std::fpclassify(f[5]) == FP_SUBNORMAL)
        fprintf(stderr, "d9 %s '%s' SUBNORMAL: %.9g %.9g %.9g %.9g / %.9g %.9g %.9g %.9g\n", api,
                name, f[0], f[1], f[2], f[3], f[4], f[5], f[6], f[7]);
    else if (named_lines < 60 && (strstr(name, "Proj") || strstr(name, "proj") ||
                                  strstr(name, "View") || strstr(name, "view")))
        ++named_lines, fprintf(stderr, "d9 %s '%s': %.9g %.9g %.9g %.9g / %.9g %.9g %.9g %.9g\n",
                               api, name, f[0], f[1], f[2], f[3], f[4], f[5], f[6], f[7]);
}

void Fx_SetValue(X86 *c) {
    FX_PARAM_OR_FAIL();
    uint32_t data = arg(c, 2), bytes = arg(c, 3);
    param_touched(*p);
    if (p->t.cls == FXC_OBJECT && p->t.type >= FXT_TEXTURE && p->t.type <= FXT_TEXTURECUBE) {
        ComObj *tex = data ? com_this(rd32(data)) : nullptr;
        p->texture = tex ? tex->id : 0;
    } else if (data) {
        size_t n = std::min<size_t>(bytes, p->value.size());
        memcpy(p->value.data(), gm_ptr(data), n);
        if (p->t.numeric())
            trace_value_write("setvalue", *p, p->value.data(), p->value.size());
    }
    com_ret(c, D3D_OKX);
}
void Fx_GetValue(X86 *c) {
    FX_PARAM_OR_FAIL();
    uint32_t data = arg(c, 2), bytes = arg(c, 3);
    if (data) {
        size_t n = std::min<size_t>(bytes, p->value.size());
        memcpy(gm_ptr(data), p->value.data(), n);
    }
    com_ret(c, D3D_OKX);
}
void Fx_SetBool(X86 *c) {
    FX_PARAM_OR_FAIL();
    param_put_int(*p, 0, arg(c, 2) ? 1 : 0);
    com_ret(c, D3D_OKX);
}
void Fx_GetBool(X86 *c) {
    FX_PARAM_OR_FAIL();
    if (arg(c, 2))
        wr32(arg(c, 2), param_get_int(*p, 0) != 0);
    com_ret(c, D3D_OKX);
}
void Fx_SetInt(X86 *c) {
    FX_PARAM_OR_FAIL();
    param_put_int(*p, 0, (int32_t)arg(c, 2));
    com_ret(c, D3D_OKX);
}
void Fx_GetInt(X86 *c) {
    FX_PARAM_OR_FAIL();
    if (arg(c, 2))
        wr32(arg(c, 2), (uint32_t)param_get_int(*p, 0));
    com_ret(c, D3D_OKX);
}
static void put_int_array(X86 *c, bool as_bool) {
    FX_PARAM_OR_FAIL();
    uint32_t data = arg(c, 2), count = arg(c, 3);
    for (uint32_t i = 0; i < count && data; ++i) {
        int32_t v = (int32_t)rd32(data + 4 * i);
        param_put_int(*p, i, as_bool ? (v != 0) : v);
    }
    com_ret(c, D3D_OKX);
}
static void get_int_array(X86 *c, bool as_bool) {
    FX_PARAM_OR_FAIL();
    uint32_t data = arg(c, 2), count = arg(c, 3);
    for (uint32_t i = 0; i < count && data; ++i) {
        int32_t v = param_get_int(*p, i);
        wr32(data + 4 * i, (uint32_t)(as_bool ? (v != 0) : v));
    }
    com_ret(c, D3D_OKX);
}
void Fx_SetBoolArray(X86 *c) {
    put_int_array(c, true);
}
void Fx_GetBoolArray(X86 *c) {
    get_int_array(c, true);
}
void Fx_SetIntArray(X86 *c) {
    put_int_array(c, false);
}
void Fx_GetIntArray(X86 *c) {
    get_int_array(c, false);
}
void Fx_SetFloat(X86 *c) {
    FX_PARAM_OR_FAIL();
    param_put_float(*p, 0, argf(c, 2));
    com_ret(c, D3D_OKX);
}
void Fx_GetFloat(X86 *c) {
    FX_PARAM_OR_FAIL();
    if (arg(c, 2))
        wf(arg(c, 2), param_get_float(*p, 0));
    com_ret(c, D3D_OKX);
}
// Float arrays and vectors: a vector is four floats, the rest element counts.
static void put_floats(X86 *c, uint32_t per) {
    FX_PARAM_OR_FAIL();
    uint32_t data = arg(c, 2), count = per == 4 && c ? 0 : 0;
    (void)count;
    uint32_t n = per == 0 ? arg(c, 3) : per * (arg(c, 3));
    for (uint32_t i = 0; i < n && data; ++i)
        param_put_float(*p, i, rf(data + 4 * i));
    if (p->t.numeric())
        trace_value_write(per == 4 ? "setvectorarr" : "setfloatarr", *p, p->value.data(),
                          p->value.size());
    com_ret(c, D3D_OKX);
}
static void get_floats(X86 *c, uint32_t per) {
    FX_PARAM_OR_FAIL();
    uint32_t data = arg(c, 2);
    uint32_t n = per == 0 ? arg(c, 3) : per * (arg(c, 3));
    for (uint32_t i = 0; i < n && data; ++i)
        wf(data + 4 * i, param_get_float(*p, i));
    com_ret(c, D3D_OKX);
}
void Fx_SetFloatArray(X86 *c) {
    put_floats(c, 0);
}
void Fx_GetFloatArray(X86 *c) {
    get_floats(c, 0);
}
void Fx_SetVectorArray(X86 *c) {
    put_floats(c, 4);
}
void Fx_GetVectorArray(X86 *c) {
    get_floats(c, 4);
}
// (this, h, pVector): as many of the four as the parameter holds.
void Fx_SetVector(X86 *c) {
    FX_PARAM_OR_FAIL();
    uint32_t data = arg(c, 2);
    for (uint32_t i = 0; i < 4 && data; ++i)
        param_put_float(*p, i, rf(data + 4 * i));
    if (p->t.numeric())
        trace_value_write("setvector", *p, p->value.data(), p->value.size());
    com_ret(c, D3D_OKX);
}
void Fx_GetVector(X86 *c) {
    FX_PARAM_OR_FAIL();
    uint32_t data = arg(c, 2);
    for (uint32_t i = 0; i < 4 && data; ++i)
        wf(data + 4 * i, param_get_float(*p, i));
    com_ret(c, D3D_OKX);
}
static void put_matrices(X86 *c, bool transpose, bool pointers, bool array) {
    FX_PARAM_OR_FAIL();
    // The D9_TRACE diagnostic, matrix side: every non-identity WorldViewProj
    // put in full, and every other matrix whose second row holds a subnormal
    // - the shape a half-stale projection leaves behind.
    static const bool put_trace = recomp_env("D9_TRACE") != nullptr;
    uint32_t data = arg(c, 2), count = array ? arg(c, 3) : 1;
    for (uint32_t e = 0; e < count && data && e < p->t.count(); ++e) {
        uint32_t m_addr = pointers ? rd32(data + 4 * e) : data + 64 * e;
        if (!m_addr)
            continue;
        float m[16];
        read_guest_matrix(m_addr, m, transpose);
        param_put_matrix(*p, e, m);
        if (put_trace) {
            // The game's front-end passes set WorldViewProj to identity every
            // frame; those would eat any cap before the race camera's real
            // matrix arrives, so only non-identity puts are traced, in full.
            static uint32_t wvp_lines = 0;
            const bool wvp = p->t.name == "WorldViewProj";
            const bool identity = m[0] == 1.0f && m[1] == 0 && m[2] == 0 && m[3] == 0 &&
                                  m[4] == 0 && m[5] == 1.0f && m[6] == 0 && m[7] == 0 &&
                                  m[8] == 0 && m[9] == 0 && m[10] == 1.0f && m[11] == 0 &&
                                  m[12] == 0 && m[13] == 0 && m[14] == 0 && m[15] == 1.0f;
            if (wvp && !identity && wvp_lines < 160)
                ++wvp_lines,
                    fprintf(stderr,
                            "d9 WVP e%u: %.9g %.9g %.9g %.9g | %.9g %.9g %.9g %.9g | %.9g %.9g "
                            "%.9g %.9g | %.9g %.9g %.9g %.9g\n",
                            e, m[0], m[1], m[2], m[3], m[4], m[5], m[6], m[7], m[8], m[9], m[10],
                            m[11], m[12], m[13], m[14], m[15]);
            const bool subnormal =
                std::fpclassify(m[1]) == FP_SUBNORMAL || std::fpclassify(m[5]) == FP_SUBNORMAL;
            if (!wvp && subnormal)
                fprintf(stderr,
                        "d9 mput '%s' e%u SUBNORMAL: %.9g %.9g %.9g %.9g / %.9g %.9g %.9g %.9g\n",
                        p->t.name.c_str(), e, m[0], m[1], m[2], m[3], m[4], m[5], m[6], m[7]);
        }
    }
    com_ret(c, D3D_OKX);
}
void Fx_SetMatrix(X86 *c) {
    put_matrices(c, false, false, false);
}
void Fx_SetMatrixArray(X86 *c) {
    put_matrices(c, false, false, true);
}
void Fx_SetMatrixPointerArray(X86 *c) {
    put_matrices(c, false, true, true);
}
void Fx_SetMatrixTranspose(X86 *c) {
    put_matrices(c, true, false, false);
}
void Fx_SetMatrixTransposeArray(X86 *c) {
    put_matrices(c, true, false, true);
}
static void get_matrices(X86 *c, bool transpose, uint32_t count) {
    FX_PARAM_OR_FAIL();
    uint32_t data = arg(c, 2);
    uint32_t r = p->t.rows, cn = p->t.cols;
    for (uint32_t e = 0; e < count && data; ++e) {
        float m[16] = {};
        for (uint32_t i = 0; i < r && i < 4; ++i)
            for (uint32_t k = 0; k < cn && k < 4; ++k)
                m[i * 4 + k] = param_get_float(*p, e * r * cn + i * cn + k);
        for (int i = 0; i < 16; ++i)
            wf(data + 64 * e + 4 * i, transpose ? m[(i % 4) * 4 + i / 4] : m[i]);
    }
    com_ret(c, D3D_OKX);
}
void Fx_GetMatrix(X86 *c) {
    get_matrices(c, false, 1);
}
void Fx_GetMatrixArray(X86 *c) {
    get_matrices(c, false, arg(c, 3));
}
void Fx_GetMatrixTranspose(X86 *c) {
    get_matrices(c, true, 1);
}
// (this, h, pData, ByteOffset, Bytes)
void Fx_SetRawValue(X86 *c) {
    FX_PARAM_OR_FAIL();
    uint32_t data = arg(c, 2), off = arg(c, 3), bytes = arg(c, 4);
    param_touched(*p);
    if (data && off < p->value.size())
        memcpy(p->value.data() + off, gm_ptr(data), std::min<size_t>(bytes, p->value.size() - off));
    com_ret(c, D3D_OKX);
}

// (this, h, pTexture): the effect keeps a reference, as D3DX does.
void Fx_SetTexture(X86 *c) {
    FX_PARAM_OR_FAIL();
    ComObj *tex = arg(c, 2) ? com_this(arg(c, 2)) : nullptr;
    if (tex)
        com_addref(tex);
    if (ComObj *old = com_get(p->texture))
        com_release(old);
    p->texture = tex ? tex->id : 0;
    param_touched(*p);
    static uint32_t reported = 0;
    if (++reported <= 12)
        LOGW("d3dx9: %s.%s <- texture %u (%ux%u)", fx->resource.c_str(), p->t.name.c_str(),
             p->texture, tex ? tex->width : 0, tex ? tex->height : 0);
    com_ret(c, D3D_OKX);
}
void Fx_GetTexture(X86 *c) {
    FX_PARAM_OR_FAIL();
    uint32_t out = arg(c, 2);
    ComObj *tex = com_get(p->texture);
    if (out)
        com_out_ptr(out, tex ? com_view(tex, tex->caps ? IF_D3DCUBETEXTURE9 : IF_D3DTEXTURE9) : 0);
    if (tex)
        com_addref(tex);
    com_ret(c, D3D_OKX);
}

// ---- Techniques and passes ---------------------------------------------------
void Fx_SetTechnique(X86 *c) {
    FxEffect *fx = this_fx(c);
    int32_t t = fx ? tech_of(*fx, arg(c, 1)) : -1;
    if (t < 0) {
        com_ret(c, D3DERR_INVALIDCALLX);
        return;
    }
    fx->technique = (uint32_t)t;
    com_ret(c, D3D_OKX);
}
void Fx_GetCurrentTechnique(X86 *c) {
    FxEffect *fx = this_fx(c);
    set_eax(c, fx && fx->technique < fx->techniques.size() ? H_TECH | fx->technique : 0);
}
void Fx_ValidateTechnique(X86 *c) {
    FxEffect *fx = this_fx(c);
    com_ret(c, fx && tech_of(*fx, arg(c, 1)) >= 0 ? D3D_OKX : D3DERR_INVALIDCALLX);
}
// (this, hTechnique, pTechnique): the next technique after the one given, or
// the first when none is.
void Fx_FindNextValidTechnique(X86 *c) {
    FxEffect *fx = this_fx(c);
    uint32_t out = arg(c, 2);
    if (!fx || !out) {
        com_ret(c, D3DERR_INVALIDCALLX);
        return;
    }
    int32_t t = arg(c, 1) ? tech_of(*fx, arg(c, 1)) : -1;
    uint32_t next = (uint32_t)(t + 1);
    wr32(out, next < fx->techniques.size() ? H_TECH | next : 0);
    com_ret(c, next < fx->techniques.size() ? D3D_OKX : 1u /* S_FALSE */);
}
void Fx_IsParameterUsed(X86 *c) {
    set_eax(c, 1);
}
// (this, pPasses, Flags)
void Fx_Begin(X86 *c) {
    FxEffect *fx = this_fx(c);
    uint32_t out = arg(c, 1);
    if (!fx) {
        com_ret(c, D3DERR_INVALIDCALLX);
        return;
    }
    uint32_t n = fx->technique < fx->techniques.size()
                     ? (uint32_t)fx->techniques[fx->technique].passes.size()
                     : 0;
    if (out)
        wr32(out, n);
    fx->pass = 0xffffffffu;
    com_ret(c, D3D_OKX);
}
void Fx_BeginPass(X86 *c) {
    FxEffect *fx = this_fx(c);
    if (!fx) {
        com_ret(c, D3DERR_INVALIDCALLX);
        return;
    }
    fx->pass = arg(c, 1);
    apply_pass(*fx);
    com_ret(c, D3D_OKX);
}
void Fx_CommitChanges(X86 *c) {
    FxEffect *fx = this_fx(c);
    if (fx)
        apply_pass(*fx);
    com_ret(c, D3D_OKX);
}
void Fx_EndPass(X86 *c) {
    FxEffect *fx = this_fx(c);
    if (fx)
        fx->pass = 0xffffffffu;
    com_ret(c, D3D_OKX);
}
void Fx_End(X86 *c) {
    Fx_EndPass(c);
}
void Fx_OnLostDevice(X86 *c) {
    com_ret(c, D3D_OKX);
}
void Fx_OnResetDevice(X86 *c) {
    com_ret(c, D3D_OKX);
}
void Fx_GetPool(X86 *c) {
    com_out_ptr(arg(c, 1), 0);
    com_ret(c, D3D_OKX);
}
void Fx_GetDevice(X86 *c) {
    FxEffect *fx = this_fx(c);
    ComObj *dev = fx ? com_get(fx->device) : nullptr;
    uint32_t out = arg(c, 1);
    if (!dev || !out) {
        com_ret(c, D3DERR_INVALIDCALLX);
        return;
    }
    com_addref(dev);
    com_out_ptr(out, com_view(dev, IF_D3DDEVICE9));
    com_ret(c, D3D_OKX);
}

static void fx_destroy(ComObj *o) {
    auto it = effects().find(o->id);
    if (it == effects().end())
        return;
    for (FxParam &p : it->second.params)
        if (ComObj *tex = com_get(p.texture))
            com_release(tex);
    effects().erase(it);
    ++g_effect_generation;
}

// ---- Shared parameters ------------------------------------------------------
// A parameter marked shared has one value across every effect created with
// the same pool: the game sets COLORWRITEMODE or BLENDSTATE through whichever
// effect is at hand and every other effect's passes read it.
static void share_parameter(uint32_t from_effect, uint32_t index) {
    auto src = effects().find(from_effect);
    if (src == effects().end() || !src->second.pool || index >= src->second.params.size())
        return;
    FxEffect &fx = src->second;
    const FxParam &value = fx.params[index];
    if (!value.shared)
        return;
    if (fx.peers_generation != g_effect_generation) {
        fx.peers.clear();
        fx.peers_generation = g_effect_generation;
    }
    // The same parameter in the pool's other effects, by address: effects
    // live in map nodes, their parameter vectors do not change size, and the
    // list is rebuilt whenever an effect comes or goes.
    auto found = fx.peers.find(index);
    if (found == fx.peers.end()) {
        std::vector<FxParam *> list;
        for (auto &kv : effects()) {
            if (kv.first == from_effect || kv.second.pool != fx.pool)
                continue;
            int32_t j = param_index_of(kv.second, value.t.name);
            if (j >= 0 && kv.second.params[(size_t)j].shared &&
                kv.second.params[(size_t)j].value.size() == value.value.size())
                list.push_back(&kv.second.params[(size_t)j]);
        }
        found = fx.peers.emplace(index, std::move(list)).first;
    }
    const size_t n = value.value.size();
    for (FxParam *other : found->second) {
        if (other->texture == value.texture &&
            (n == 0 || memcmp(other->value.data(), value.value.data(), n) == 0))
            continue;
        if (n)
            memcpy(other->value.data(), value.value.data(), n);
        other->texture = value.texture;
        param_touched(*other);
    }
}
// A new effect starts from the pool's current value of each shared parameter.
static void join_pool(uint32_t effect_id) {
    FxEffect &fx = effects()[effect_id];
    if (!fx.pool)
        return;
    for (FxParam &p : fx.params) {
        if (!p.shared)
            continue;
        for (auto &kv : effects()) {
            if (kv.first == effect_id || kv.second.pool != fx.pool)
                continue;
            const FxParam *other = param_named(kv.second, p.t.name);
            if (other && other->shared && other->value.size() == p.value.size()) {
                p.value = other->value;
                p.texture = other->texture;
                param_touched(p);
                break;
            }
        }
    }
}
// Wraps a setter: after it runs, a shared parameter's new value reaches the pool.
template <void (*F)(X86 *)> void shared_setter(X86 *c) {
    ComObj *o = com_this_arg(c);
    uint32_t id = o ? o->id : 0;
    uint32_t handle = arg(c, 1);
    int64_t index = -1;
    if (FxEffect *fx = this_fx(c))
        if (FxParam *p = param_of(*fx, handle);
            p && p->shared && p >= fx->params.data() && p < fx->params.data() + fx->params.size())
            index = p - fx->params.data();
    F(c);
    if (index >= 0)
        share_parameter(id, (uint32_t)index);
}

static const ComMethod g_effect_pool[] = {
    {"QueryInterface", 3, com_QueryInterface},
    {"AddRef", 1, com_AddRef},
    {"Release", 1, com_Release},
};

static const ComMethod g_effect[] = {
    {"QueryInterface", 3, com_QueryInterface},
    {"AddRef", 1, com_AddRef},
    {"Release", 1, com_Release},
    {"GetDesc", 2, Fx_GetDesc},
    {"GetParameterDesc", 3, Fx_GetParameterDesc},
    {"GetTechniqueDesc", 3, Fx_GetTechniqueDesc},
    {"GetPassDesc", 3, Fx_GetPassDesc},
    {"GetFunctionDesc", 3, Fx_GetFunctionDesc},
    {"GetParameter", 3, Fx_GetParameter},
    {"GetParameterByName", 3, Fx_GetParameterByName},
    {"GetParameterBySemantic", 3, Fx_GetParameterBySemantic},
    {"GetParameterElement", 3, Fx_GetParameterElement},
    {"GetTechnique", 2, Fx_GetTechnique},
    {"GetTechniqueByName", 2, Fx_GetTechniqueByName},
    {"GetPass", 3, Fx_GetPass},
    {"GetPassByName", 3, Fx_GetPassByName},
    {"GetFunction", 2, Fx_GetFunction},
    {"GetFunctionByName", 2, Fx_GetFunctionByName},
    {"GetAnnotation", 3, Fx_GetAnnotation},
    {"GetAnnotationByName", 3, Fx_GetAnnotationByName},
    {"SetValue", 4, shared_setter<Fx_SetValue>},
    {"GetValue", 4, Fx_GetValue},
    {"SetBool", 3, shared_setter<Fx_SetBool>},
    {"GetBool", 3, Fx_GetBool},
    {"SetBoolArray", 4, shared_setter<Fx_SetBoolArray>},
    {"GetBoolArray", 4, Fx_GetBoolArray},
    {"SetInt", 3, shared_setter<Fx_SetInt>},
    {"GetInt", 3, Fx_GetInt},
    {"SetIntArray", 4, shared_setter<Fx_SetIntArray>},
    {"GetIntArray", 4, Fx_GetIntArray},
    {"SetFloat", 3, shared_setter<Fx_SetFloat>},
    {"GetFloat", 3, Fx_GetFloat},
    {"SetFloatArray", 4, shared_setter<Fx_SetFloatArray>},
    {"GetFloatArray", 4, Fx_GetFloatArray},
    {"SetVector", 3, shared_setter<Fx_SetVector>},
    {"GetVector", 3, Fx_GetVector},
    {"SetVectorArray", 4, shared_setter<Fx_SetVectorArray>},
    {"GetVectorArray", 4, Fx_GetVectorArray},
    {"SetMatrix", 3, shared_setter<Fx_SetMatrix>},
    {"GetMatrix", 3, Fx_GetMatrix},
    {"SetMatrixArray", 4, shared_setter<Fx_SetMatrixArray>},
    {"GetMatrixArray", 4, Fx_GetMatrixArray},
    {"SetMatrixPointerArray", 4, shared_setter<Fx_SetMatrixPointerArray>},
    {"GetMatrixPointerArray", 4, Fx_GetMatrixPointerArray},
    {"SetMatrixTranspose", 3, shared_setter<Fx_SetMatrixTranspose>},
    {"GetMatrixTranspose", 3, Fx_GetMatrixTranspose},
    {"SetMatrixTransposeArray", 4, shared_setter<Fx_SetMatrixTransposeArray>},
    {"GetMatrixTransposeArray", 4, Fx_GetMatrixTransposeArray},
    {"SetMatrixTransposePointerArray", 4, shared_setter<Fx_SetMatrixTransposePointerArray>},
    {"GetMatrixTransposePointerArray", 4, Fx_GetMatrixTransposePointerArray},
    {"SetString", 3, shared_setter<Fx_SetString>},
    {"GetString", 3, Fx_GetString},
    {"SetTexture", 3, shared_setter<Fx_SetTexture>},
    {"GetTexture", 3, Fx_GetTexture},
    {"GetPixelShader", 3, Fx_GetPixelShader},
    {"GetVertexShader", 3, Fx_GetVertexShader},
    {"SetArrayRange", 4, Fx_SetArrayRange},
    {"GetPool", 2, Fx_GetPool},
    {"SetTechnique", 2, Fx_SetTechnique},
    {"GetCurrentTechnique", 1, Fx_GetCurrentTechnique},
    {"ValidateTechnique", 2, Fx_ValidateTechnique},
    {"FindNextValidTechnique", 3, Fx_FindNextValidTechnique},
    {"IsParameterUsed", 3, Fx_IsParameterUsed},
    {"Begin", 3, Fx_Begin},
    {"BeginPass", 2, Fx_BeginPass},
    {"CommitChanges", 1, Fx_CommitChanges},
    {"EndPass", 1, Fx_EndPass},
    {"End", 1, Fx_End},
    {"GetDevice", 2, Fx_GetDevice},
    {"OnLostDevice", 1, Fx_OnLostDevice},
    {"OnResetDevice", 1, Fx_OnResetDevice},
    {"SetStateManager", 2, Fx_SetStateManager},
    {"GetStateManager", 2, Fx_GetStateManager},
    {"BeginParameterBlock", 1, Fx_BeginParameterBlock},
    {"EndParameterBlock", 1, Fx_EndParameterBlock},
    {"ApplyParameterBlock", 2, Fx_ApplyParameterBlock},
    {"DeleteParameterBlock", 2, Fx_DeleteParameterBlock},
    {"CloneEffect", 3, Fx_CloneEffect},
    {"SetRawValue", 5, shared_setter<Fx_SetRawValue>},
};

void X_D3DXCreateEffectPool(X86 *c) {
    uint32_t out = arg(c, 0);
    ComObj *o = com_new(K_D3DXEFFECTPOOL);
    uint32_t view = o ? com_view(o, IF_D3DXEFFECTPOOL) : 0;
    if (!view || !out) {
        if (o)
            com_release(o);
        set_eax(c, E_NOTIMPLX);
        return;
    }
    com_out_ptr(out, view);
    set_eax(c, D3D_OKX);
}

// (pDevice, hSrcModule, pSrcResource, pDefines, pInclude, Flags, pPool,
//  ppEffect, ppCompilationErrors)
void X_D3DXCreateEffectFromResourceA(X86 *c) {
    uint32_t device = arg(c, 0), module = arg(c, 1), resource = arg(c, 2);
    // A null module is the executable itself, as it is for FindResource.
    if (!module)
        module = IMAGE_BASE;
    uint32_t out = arg(c, 7), errors = arg(c, 8);
    if (!out) {
        set_eax(c, D3DERR_INVALIDCALLX);
        return;
    }
    if (errors)
        wr32(errors, 0);
    ComObj *fxo = com_new(K_D3DXEFFECT);
    uint32_t view = fxo ? com_view(fxo, IF_D3DXEFFECT) : 0;
    if (!view) {
        if (fxo)
            com_release(fxo);
        set_eax(c, E_NOTIMPLX);
        return;
    }
    FxEffect &fx = effects()[fxo->id];
    fx.self = fxo->id;
    if (ComObj *pool = com_this(arg(c, 6)); pool && pool->kind == K_D3DXEFFECTPOOL)
        fx.pool = pool->id;
    ComObj *dev = com_this(device);
    if (dev && dev->kind == K_D3D9DEVICE) {
        fx.device = dev->id;
        fxo->dev_d3d = dev->id;
    }
    char name[64];
    if (resource > 0xffffu)
        snprintf(name, sizeof name, "%s", gm_str(resource, 63).c_str());
    else
        snprintf(name, sizeof name, "#%u", resource);
    fx.resource = name;
    uint32_t addr = 0, size = 0;
    if (!find_rcdata(module, resource, &addr, &size)) {
        LOGW("d3dx9: effect %s: no RCDATA resource of that name in module %08x", name, module);
    } else if (!fx_parse(gm_ptr(addr), size, fx)) {
        LOGW("d3dx9: effect %s: %u bytes did not parse as fx_2_0", name, size);
    } else {
        size_t passes = 0, shaders = 0;
        for (const FxTechnique &t : fx.techniques)
            for (const FxPass &p : t.passes) {
                ++passes;
                shaders += pass_shader(fx, p, FXS_VERTEXSHADER) != nullptr;
                shaders += pass_shader(fx, p, FXS_PIXELSHADER) != nullptr;
            }
        static uint32_t reported = 0;
        if (++reported <= 64)
            LOGV("d3dx9: effect %s: %zu parameters, %zu techniques, %zu passes, %zu shaders", name,
                 fx.params.size(), fx.techniques.size(), passes, shaders);
    }
    join_pool(fxo->id);
    ++g_effect_generation;
    com_out_ptr(out, view);
    set_eax(c, D3D_OKX);
}

static const ImportShim g_d3dx9_exports[] = {
    {"d3dx9_26.dll", "D3DXCreateEffectPool", 1, X_D3DXCreateEffectPool},
    {"d3dx9_26.dll", "D3DXCreateEffectFromResourceA", 9, X_D3DXCreateEffectFromResourceA},
    {"d3dx9_26.dll", "D3DXMatrixMultiply", 3, X_D3DXMatrixMultiply},
    {"d3dx9_26.dll", "D3DXMatrixInverse", 3, X_D3DXMatrixInverse},
    {"d3dx9_26.dll", "D3DXMatrixTranspose", 2, X_D3DXMatrixTranspose},
    {"d3dx9_26.dll", "D3DXMatrixOrthoLH", 5, X_D3DXMatrixOrthoLH},
    {"d3dx9_26.dll", "D3DXMatrixPerspectiveLH", 5, X_D3DXMatrixPerspectiveLH},
    {"d3dx9_26.dll", "D3DXMatrixTranslation", 4, X_D3DXMatrixTranslation},
    {"d3dx9_26.dll", "D3DXVec4Transform", 3, X_D3DXVec4Transform},
    {"d3dx9_26.dll", "D3DXVec3Transform", 3, X_D3DXVec3Transform},
    {"d3dx9_26.dll", "D3DXVec3TransformNormal", 3, X_D3DXVec3TransformNormal},
    {"d3dx9_26.dll", "D3DXVec3TransformCoordArray", 6, X_D3DXVec3TransformCoordArray},
    {"d3dx9_26.dll", "D3DXVec3Normalize", 2, X_D3DXVec3Normalize},
};

void d3dx9_reset() {
    effects().clear();
}

void d3dx9_register() {
    static bool done = false;
    if (done)
        return;
    done = true;
    com_define(IF_D3DXEFFECTPOOL, "d3dx9_26.dll", "ID3DXEffectPool", g_effect_pool,
               std::size(g_effect_pool));
    com_define(IF_D3DXEFFECT, "d3dx9_26.dll", "ID3DXEffect", g_effect, std::size(g_effect));
    com_bind(IF_D3DXEFFECTPOOL, K_D3DXEFFECTPOOL);
    com_bind(IF_D3DXEFFECT, K_D3DXEFFECT);
    com_set_destructor(K_D3DXEFFECT, fx_destroy);
    imports_register(g_d3dx9_exports, std::size(g_d3dx9_exports));
}
