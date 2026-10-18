// d3d9_raster.cpp - a CPU renderer for the Direct3D 9 device. See d3d9_raster.h.
//
// Three parts. A shader loader turns SM 1.x/2.0 bytecode into a list of
// decoded instructions, once per distinct program. An interpreter runs those
// instructions on four-float registers. A rasterizer turns the vertex
// shader's clip-space output into covered pixels of the render target,
// interpolating every output with perspective correction, and runs the pixel
// shader on each.
#include "d3d9_raster.h"
#include "com.h"
#include "d3d9_pipeline.h"
#include "d3d9_shader.h"
#include "../runtime/guest.h"

#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <string>
#include <unordered_map>

namespace {

struct V4 {
    float v[4] = {0, 0, 0, 0};
    float &operator[](int i) {
        return v[i];
    }
    float operator[](int i) const {
        return v[i];
    }
};

using namespace d9sh;

// ---------------------------------------------------------------------------
// Textures
// ---------------------------------------------------------------------------
struct Decoded {
    uint32_t width = 0, height = 0;
    std::vector<uint8_t> rgba; // top-down, 8 bits a channel
};

std::unordered_map<uint32_t, Decoded> &decoded() {
    static auto *m = new std::unordered_map<uint32_t, Decoded>();
    return *m;
}

const uint32_t FMT_DXT1 = 0x31545844u, FMT_DXT3 = 0x33545844u, FMT_DXT5 = 0x35545844u;

void rgb565(uint16_t c, uint8_t *o) {
    o[0] = (uint8_t)(((c >> 11) & 31) * 255 / 31);
    o[1] = (uint8_t)(((c >> 5) & 63) * 255 / 63);
    o[2] = (uint8_t)((c & 31) * 255 / 31);
}

void decode_dxt(const uint8_t *src, uint32_t w, uint32_t h, uint32_t fmt,
                std::vector<uint8_t> &out) {
    uint32_t bw = (w + 3) / 4, bh = (h + 3) / 4;
    uint32_t block = fmt == FMT_DXT1 ? 8 : 16;
    for (uint32_t by = 0; by < bh; ++by)
        for (uint32_t bx = 0; bx < bw; ++bx) {
            const uint8_t *b = src + (by * bw + bx) * block;
            const uint8_t *cb = fmt == FMT_DXT1 ? b : b + 8;
            uint16_t c0 = (uint16_t)(cb[0] | cb[1] << 8), c1 = (uint16_t)(cb[2] | cb[3] << 8);
            uint8_t pal[4][4];
            rgb565(c0, pal[0]);
            rgb565(c1, pal[1]);
            pal[0][3] = pal[1][3] = 255;
            if (fmt != FMT_DXT1 || c0 > c1) {
                for (int k = 0; k < 3; ++k) {
                    pal[2][k] = (uint8_t)((2 * pal[0][k] + pal[1][k]) / 3);
                    pal[3][k] = (uint8_t)((pal[0][k] + 2 * pal[1][k]) / 3);
                }
                pal[2][3] = pal[3][3] = 255;
            } else {
                for (int k = 0; k < 3; ++k) {
                    pal[2][k] = (uint8_t)((pal[0][k] + pal[1][k]) / 2);
                    pal[3][k] = 0;
                }
                pal[2][3] = 255;
                pal[3][3] = 0;
            }
            uint32_t bits = (uint32_t)(cb[4] | cb[5] << 8 | cb[6] << 16 | (uint32_t)cb[7] << 24);
            uint8_t alpha[8] = {255, 255, 255, 255, 255, 255, 255, 255};
            uint64_t abits = 0;
            if (fmt == FMT_DXT5) {
                uint8_t a0 = b[0], a1 = b[1];
                alpha[0] = a0;
                alpha[1] = a1;
                if (a0 > a1)
                    for (int k = 1; k < 7; ++k)
                        alpha[k + 1] = (uint8_t)(((7 - k) * a0 + k * a1) / 7);
                else {
                    for (int k = 1; k < 5; ++k)
                        alpha[k + 1] = (uint8_t)(((5 - k) * a0 + k * a1) / 5);
                    alpha[6] = 0;
                    alpha[7] = 255;
                }
                for (int k = 0; k < 6; ++k)
                    abits |= (uint64_t)b[2 + k] << (8 * k);
            }
            for (uint32_t py = 0; py < 4; ++py)
                for (uint32_t px = 0; px < 4; ++px) {
                    uint32_t x = bx * 4 + px, y = by * 4 + py;
                    if (x >= w || y >= h)
                        continue;
                    uint32_t k = py * 4 + px;
                    uint8_t *o = &out[(y * w + x) * 4];
                    memcpy(o, pal[(bits >> (2 * k)) & 3], 4);
                    if (fmt == FMT_DXT3)
                        o[3] = (uint8_t)(((b[k / 2] >> ((k & 1) * 4)) & 15) * 17);
                    else if (fmt == FMT_DXT5)
                        o[3] = alpha[(abits >> (3 * k)) & 7];
                }
        }
}

const Decoded *texture_rgba(uint32_t texture_id) {
    uint32_t level0 = d9_texture_level0(texture_id);
    D9SurfaceInfo s;
    if (!level0 || !d9_surface_info(level0, &s) || !s.data || !s.width || !s.height)
        return nullptr;
    auto it = decoded().find(level0);
    if (it != decoded().end())
        return &it->second;
    Decoded d;
    d.width = s.width;
    d.height = s.height;
    d.rgba.assign((size_t)s.width * s.height * 4, 255);
    const uint8_t *src = s.data;
    // A surface too small for what it claims to hold is not read past its end.
    if (s.format == FMT_DXT1 || s.format == FMT_DXT3 || s.format == FMT_DXT5) {
        size_t need =
            ((s.width + 3) / 4) * ((s.height + 3) / 4) * (s.format == FMT_DXT1 ? 8u : 16u);
        if (s.size < need)
            return nullptr;
    } else if (s.size < (size_t)s.pitch * s.height) {
        return nullptr;
    }
    if (s.format == FMT_DXT1 || s.format == FMT_DXT3 || s.format == FMT_DXT5) {
        decode_dxt(src, s.width, s.height, s.format, d.rgba);
    } else {
        for (uint32_t y = 0; y < s.height; ++y) {
            const uint8_t *row = src + (size_t)y * s.pitch;
            for (uint32_t x = 0; x < s.width; ++x) {
                uint8_t *o = &d.rgba[((size_t)y * s.width + x) * 4];
                switch (s.format) {
                case 21:
                case 22: // A8R8G8B8, X8R8G8B8
                    o[0] = row[4 * x + 2];
                    o[1] = row[4 * x + 1];
                    o[2] = row[4 * x];
                    o[3] = s.format == 21 ? row[4 * x + 3] : 255;
                    break;
                case 23: // R5G6B5
                    rgb565((uint16_t)(row[2 * x] | row[2 * x + 1] << 8), o);
                    break;
                case 24:
                case 25: { // X1R5G5B5, A1R5G5B5
                    uint16_t c = (uint16_t)(row[2 * x] | row[2 * x + 1] << 8);
                    o[0] = (uint8_t)(((c >> 10) & 31) * 255 / 31);
                    o[1] = (uint8_t)(((c >> 5) & 31) * 255 / 31);
                    o[2] = (uint8_t)((c & 31) * 255 / 31);
                    o[3] = s.format == 25 ? ((c >> 15) ? 255 : 0) : 255;
                    break;
                }
                case 26: { // A4R4G4B4
                    uint16_t c = (uint16_t)(row[2 * x] | row[2 * x + 1] << 8);
                    o[0] = (uint8_t)(((c >> 8) & 15) * 17);
                    o[1] = (uint8_t)(((c >> 4) & 15) * 17);
                    o[2] = (uint8_t)((c & 15) * 17);
                    o[3] = (uint8_t)(((c >> 12) & 15) * 17);
                    break;
                }
                case 28: // A8
                    o[0] = o[1] = o[2] = 255;
                    o[3] = row[x];
                    break;
                case 50: // L8
                    o[0] = o[1] = o[2] = row[x];
                    break;
                case 51: // A8L8
                    o[0] = o[1] = o[2] = row[2 * x];
                    o[3] = row[2 * x + 1];
                    break;
                default:
                    break;
                }
            }
        }
    }
    return &(decoded()[level0] = std::move(d));
}

float wrap_coord(float t, uint32_t mode) {
    switch (mode) {
    case 3: // clamp
    case 4: // border, treated as clamp
        return std::min(std::max(t, 0.0f), 1.0f);
    case 2: { // mirror
        float f = t - 2.0f * std::floor(t / 2.0f);
        return f > 1.0f ? 2.0f - f : f;
    }
    default: // wrap
        return t - std::floor(t);
    }
}

V4 sample(const D9Pipeline &pl, uint32_t stage, const V4 &uv) {
    V4 out;
    out[0] = out[1] = out[2] = out[3] = 1.0f;
    if (stage >= 16)
        return out;
    const Decoded *t = texture_rgba(pl.sampler_tex[stage]);
    if (!t) {
        out[0] = out[1] = out[2] = 0.0f;
        return out;
    }
    uint32_t au = pl.sampler_state[stage][1], av = pl.sampler_state[stage][2];
    float u = wrap_coord(uv[0], au) * t->width - 0.5f;
    float v = wrap_coord(uv[1], av) * t->height - 0.5f;
    int x0 = (int)std::floor(u), y0 = (int)std::floor(v);
    float fx = u - x0, fy = v - y0;
    auto texel = [&](int x, int y, int k) -> float {
        x = ((x % (int)t->width) + (int)t->width) % (int)t->width;
        y = ((y % (int)t->height) + (int)t->height) % (int)t->height;
        return t->rgba[((size_t)y * t->width + (size_t)x) * 4 + k] / 255.0f;
    };
    for (int k = 0; k < 4; ++k) {
        float a = texel(x0, y0, k) * (1 - fx) + texel(x0 + 1, y0, k) * fx;
        float b = texel(x0, y0 + 1, k) * (1 - fx) + texel(x0 + 1, y0 + 1, k) * fx;
        out[k] = a * (1 - fy) + b * fy;
    }
    return out;
}

// ---------------------------------------------------------------------------
// The interpreter
// ---------------------------------------------------------------------------
struct Machine {
    const Program *p = nullptr;
    const D9Pipeline *pl = nullptr;
    V4 r[32];
    V4 in[16]; // vs: v registers; ps: v0/v1 colours
    V4 tex[8]; // ps: t registers
    V4 a0;
    V4 opos, ofog, od[2], ot[8], oc[4];
    bool killed = false;

    V4 constant(uint32_t i) const {
        auto d = p->defs.find(i);
        if (d != p->defs.end()) {
            V4 v;
            memcpy(v.v, d->second.data(), sizeof v.v);
            return v;
        }
        V4 v;
        if (p->pixel) {
            if (i < 32)
                memcpy(v.v, pl->pconst[i], sizeof v.v);
        } else if (i < 256) {
            memcpy(v.v, pl->vconst[i], sizeof v.v);
        }
        return v;
    }

    V4 read(const Src &s) const {
        V4 raw;
        switch (s.type) {
        case R_TEMP:
            raw = r[s.index & 31];
            break;
        case R_INPUT:
            raw = in[s.index & 15];
            break;
        case R_CONST: {
            int32_t idx = (int32_t)s.index;
            if (s.rel)
                idx += (int32_t)std::floor(a0[0] + 0.5f);
            raw = idx >= 0 ? constant((uint32_t)idx) : V4();
            break;
        }
        case R_ADDR:
            raw = p->pixel ? tex[s.index & 7] : a0;
            break;
        default:
            break;
        }
        V4 v;
        for (int k = 0; k < 4; ++k)
            v[k] = raw[(s.swz >> (2 * k)) & 3];
        for (int k = 0; k < 4; ++k) {
            float x = v[k];
            switch (s.mod) {
            case 1:
                x = -x;
                break; // NEG
            case 2:
                x = x - 0.5f;
                break; // BIAS
            case 3:
                x = -(x - 0.5f);
                break; // BIASNEG
            case 4:
                x = 2.0f * x - 1.0f;
                break; // SIGN
            case 5:
                x = -(2.0f * x - 1.0f);
                break; // SIGNNEG
            case 6:
                x = 1.0f - x;
                break; // COMP
            case 7:
                x = 2.0f * x;
                break; // X2
            case 8:
                x = -2.0f * x;
                break; // X2NEG
            case 11:
                x = std::fabs(x);
                break; // ABS
            case 12:
                x = -std::fabs(x);
                break; // ABSNEG
            default:
                break;
            }
            v[k] = x;
        }
        if (s.mod == 9 && v[2] != 0.0f) { // DZ
            v[0] /= v[2];
            v[1] /= v[2];
        } else if (s.mod == 10 && v[3] != 0.0f) { // DW
            v[0] /= v[3];
            v[1] /= v[3];
        }
        return v;
    }

    V4 *target(const Dst &d) {
        switch (d.type) {
        case R_TEMP:
            return &r[d.index & 31];
        case R_ADDR:
            return p->pixel ? &tex[d.index & 7] : &a0;
        case R_RASTOUT:
            return d.index == 0 ? &opos : &ofog;
        case R_ATTROUT:
            return &od[d.index & 1];
        case R_TEXCRDOUT:
            return &ot[d.index & 7];
        case R_COLOROUT:
            return &oc[d.index & 3];
        default:
            return nullptr;
        }
    }

    void write(const Dst &d, V4 v) {
        V4 *t = target(d);
        if (!t)
            return;
        float scale = d.shift >= 0 ? (float)(1 << d.shift) : 1.0f / (float)(1 << -d.shift);
        for (int k = 0; k < 4; ++k) {
            if (!(d.mask >> k & 1))
                continue;
            float x = v[k] * scale;
            if (d.saturate)
                x = std::min(std::max(x, 0.0f), 1.0f);
            (*t)[k] = x;
        }
    }

    V4 texture_op(uint32_t stage, const V4 &coord) {
        return sample(*pl, stage, coord);
    }

    void run() {
        for (const Inst &in : p->code) {
            const Src *s = in.src;
            V4 o;
            switch (in.op) {
            case OP_NOP:
                continue;
            case OP_MOV:
                o = read(s[0]);
                break;
            case OP_ADD: {
                V4 a = read(s[0]), b = read(s[1]);
                for (int k = 0; k < 4; ++k)
                    o[k] = a[k] + b[k];
                break;
            }
            case OP_SUB: {
                V4 a = read(s[0]), b = read(s[1]);
                for (int k = 0; k < 4; ++k)
                    o[k] = a[k] - b[k];
                break;
            }
            case OP_MUL: {
                V4 a = read(s[0]), b = read(s[1]);
                for (int k = 0; k < 4; ++k)
                    o[k] = a[k] * b[k];
                break;
            }
            case OP_MAD: {
                V4 a = read(s[0]), b = read(s[1]), c = read(s[2]);
                for (int k = 0; k < 4; ++k)
                    o[k] = a[k] * b[k] + c[k];
                break;
            }
            case OP_MIN: {
                V4 a = read(s[0]), b = read(s[1]);
                for (int k = 0; k < 4; ++k)
                    o[k] = std::min(a[k], b[k]);
                break;
            }
            case OP_MAX: {
                V4 a = read(s[0]), b = read(s[1]);
                for (int k = 0; k < 4; ++k)
                    o[k] = std::max(a[k], b[k]);
                break;
            }
            case OP_SLT: {
                V4 a = read(s[0]), b = read(s[1]);
                for (int k = 0; k < 4; ++k)
                    o[k] = a[k] < b[k] ? 1.0f : 0.0f;
                break;
            }
            case OP_SGE: {
                V4 a = read(s[0]), b = read(s[1]);
                for (int k = 0; k < 4; ++k)
                    o[k] = a[k] >= b[k] ? 1.0f : 0.0f;
                break;
            }
            case OP_DP3: {
                V4 a = read(s[0]), b = read(s[1]);
                float d = a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
                for (int k = 0; k < 4; ++k)
                    o[k] = d;
                break;
            }
            case OP_DP4: {
                V4 a = read(s[0]), b = read(s[1]);
                float d = a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3];
                for (int k = 0; k < 4; ++k)
                    o[k] = d;
                break;
            }
            case OP_DP2ADD: {
                V4 a = read(s[0]), b = read(s[1]), c = read(s[2]);
                float d = a[0] * b[0] + a[1] * b[1] + c[0];
                for (int k = 0; k < 4; ++k)
                    o[k] = d;
                break;
            }
            case OP_RCP: {
                V4 a = read(s[0]);
                float d = a[0] != 0 ? 1.0f / a[0] : 3.4e38f;
                for (int k = 0; k < 4; ++k)
                    o[k] = d;
                break;
            }
            case OP_MOVA: {
                V4 a = read(s[0]);
                for (int k = 0; k < 4; ++k)
                    o[k] = std::floor(a[k] + 0.5f);
                break;
            }
            case OP_RSQ: {
                V4 a = read(s[0]);
                float x = std::fabs(a[0]);
                float d = x > 0 ? 1.0f / std::sqrt(x) : 3.4e38f;
                for (int k = 0; k < 4; ++k)
                    o[k] = d;
                break;
            }
            case OP_FRC: {
                V4 a = read(s[0]);
                for (int k = 0; k < 4; ++k)
                    o[k] = a[k] - std::floor(a[k]);
                break;
            }
            case OP_ABS: {
                V4 a = read(s[0]);
                for (int k = 0; k < 4; ++k)
                    o[k] = std::fabs(a[k]);
                break;
            }
            case OP_EXP:
            case OP_EXPP: {
                V4 a = read(s[0]);
                float d = std::exp(a[0]);
                for (int k = 0; k < 4; ++k)
                    o[k] = d;
                break;
            }
            case OP_LOG:
            case OP_LOGP: {
                V4 a = read(s[0]);
                float x = std::fabs(a[0]);
                float d = x > 0 ? std::log2(x) : -3.4e38f;
                for (int k = 0; k < 4; ++k)
                    o[k] = d;
                break;
            }
            case OP_POW: {
                V4 a = read(s[0]), b = read(s[1]);
                float d = std::pow(std::fabs(a[0]), b[0]);
                for (int k = 0; k < 4; ++k)
                    o[k] = d;
                break;
            }
            case OP_NRM: {
                V4 a = read(s[0]);
                float l = std::sqrt(a[0] * a[0] + a[1] * a[1] + a[2] * a[2]);
                float inv = l > 0 ? 1.0f / l : 0.0f;
                for (int k = 0; k < 4; ++k)
                    o[k] = a[k] * inv;
                break;
            }
            case OP_CRS: {
                V4 a = read(s[0]), b = read(s[1]);
                o[0] = a[1] * b[2] - a[2] * b[1];
                o[1] = a[2] * b[0] - a[0] * b[2];
                o[2] = a[0] * b[1] - a[1] * b[0];
                break;
            }
            case OP_SGN: {
                V4 a = read(s[0]);
                for (int k = 0; k < 4; ++k)
                    o[k] = a[k] > 0 ? 1.0f : a[k] < 0 ? -1.0f : 0.0f;
                break;
            }
            case OP_LRP: {
                V4 f = read(s[0]), a = read(s[1]), b = read(s[2]);
                for (int k = 0; k < 4; ++k)
                    o[k] = f[k] * a[k] + (1.0f - f[k]) * b[k];
                break;
            }
            case OP_CMP: {
                V4 c = read(s[0]), a = read(s[1]), b = read(s[2]);
                for (int k = 0; k < 4; ++k)
                    o[k] = c[k] >= 0 ? a[k] : b[k];
                break;
            }
            case OP_CND: {
                V4 c = read(s[0]), a = read(s[1]), b = read(s[2]);
                // SM 1.0-1.3 compare r0.a once; 1.4 compares each component.
                bool per = p->major == 1 && p->minor == 4;
                for (int k = 0; k < 4; ++k)
                    o[k] = (per ? c[k] : c[3]) > 0.5f ? a[k] : b[k];
                break;
            }
            case OP_LIT: {
                V4 a = read(s[0]);
                o[0] = 1.0f;
                o[1] = std::max(a[0], 0.0f);
                float pw = std::min(std::max(a[3], -127.9961f), 127.9961f);
                o[2] = (a[0] > 0 && a[1] > 0) ? std::pow(a[1], pw) : 0.0f;
                o[3] = 1.0f;
                break;
            }
            case OP_DST: {
                V4 a = read(s[0]), b = read(s[1]);
                o[0] = 1.0f;
                o[1] = a[1] * b[1];
                o[2] = a[2];
                o[3] = b[3];
                break;
            }
            case OP_SINCOS: {
                V4 a = read(s[0]);
                o[0] = std::cos(a[0]);
                o[1] = std::sin(a[0]);
                break;
            }
            case OP_M4X4:
            case OP_M4X3:
            case OP_M3X4:
            case OP_M3X3:
            case OP_M3X2: {
                int cols = (in.op == OP_M4X4 || in.op == OP_M4X3) ? 4 : 3;
                int rows = in.op == OP_M4X4 || in.op == OP_M3X4 ? 4 : in.op == OP_M3X2 ? 2 : 3;
                V4 a = read(s[0]);
                for (int row = 0; row < rows; ++row) {
                    Src m = s[1];
                    m.index += (uint32_t)row;
                    V4 line = read(m);
                    float d = 0;
                    for (int k = 0; k < cols; ++k)
                        d += a[k] * line[k];
                    o[row] = d;
                }
                break;
            }
            case OP_TEXCOORD:
                if (in.nsrc) { // 1.4 texcrd rN, tM
                    o = read(s[0]);
                } else {
                    o = tex[in.dst.index & 7];
                    for (int k = 0; k < 4; ++k)
                        o[k] = std::min(std::max(o[k], 0.0f), 1.0f);
                    o[3] = 1.0f;
                }
                break;
            case OP_TEXKILL: {
                V4 *t = target(in.dst);
                if (t)
                    for (int k = 0; k < 3; ++k)
                        if ((*t)[k] < 0)
                            killed = true;
                continue;
            }
            case OP_TEX:
                if (p->major >= 2) { // texld dst, coord, sampler
                    o = texture_op(s[1].index, read(s[0]));
                } else if (in.nsrc) { // 1.4 texld rN, tM: stage N
                    o = texture_op(in.dst.index, read(s[0]));
                } else { // tex tN: stage N, coordinates from tN
                    o = texture_op(in.dst.index, tex[in.dst.index & 7]);
                }
                break;
            case OP_TEXDP3: {
                V4 a = read(s[0]);
                V4 t = tex[in.dst.index & 7];
                float d = a[0] * t[0] + a[1] * t[1] + a[2] * t[2];
                for (int k = 0; k < 4; ++k)
                    o[k] = d;
                break;
            }
            default:
                continue;
            }
            if (in.has_dst)
                write(in.dst, o);
        }
    }
};

// ---------------------------------------------------------------------------
// Vertex fetch
// ---------------------------------------------------------------------------
struct Elem {
    uint16_t offset;
    uint8_t type, usage, index;
};

std::vector<Elem> elements(const std::vector<uint8_t> &decl) {
    std::vector<Elem> out;
    for (size_t i = 0; i + 8 <= decl.size(); i += 8) {
        uint16_t stream = (uint16_t)(decl[i] | decl[i + 1] << 8);
        if (stream == 0xff)
            break;
        if (stream != 0)
            continue;
        out.push_back(Elem{(uint16_t)(decl[i + 2] | decl[i + 3] << 8), decl[i + 4], decl[i + 6],
                           decl[i + 7]});
    }
    return out;
}

V4 fetch(const uint8_t *vp, const Elem &e) {
    V4 v;
    v[3] = 1.0f;
    const uint8_t *c = vp + e.offset;
    auto f = [&](int k) {
        float x;
        memcpy(&x, c + 4 * k, 4);
        return x;
    };
    switch (e.type) {
    case 0:
        v[0] = f(0);
        break;
    case 1:
        v[0] = f(0);
        v[1] = f(1);
        break;
    case 2:
        v[0] = f(0);
        v[1] = f(1);
        v[2] = f(2);
        break;
    case 3:
        for (int k = 0; k < 4; ++k)
            v[k] = f(k);
        break;
    case 4: // D3DCOLOR is BGRA in memory; the shader sees RGBA
        v[0] = c[2] / 255.0f;
        v[1] = c[1] / 255.0f;
        v[2] = c[0] / 255.0f;
        v[3] = c[3] / 255.0f;
        break;
    case 5:
        for (int k = 0; k < 4; ++k)
            v[k] = c[k];
        break;
    case 8:
        for (int k = 0; k < 4; ++k)
            v[k] = c[k] / 255.0f;
        break;
    case 6:
        v[0] = (int16_t)(c[0] | c[1] << 8);
        v[1] = (int16_t)(c[2] | c[3] << 8);
        break;
    case 7:
        for (int k = 0; k < 4; ++k)
            v[k] = (int16_t)(c[2 * k] | c[2 * k + 1] << 8);
        break;
    default:
        break;
    }
    return v;
}

struct Out {
    V4 pos;      // clip space
    V4 attr[10]; // od0, od1, ot0..ot7
};

// ---------------------------------------------------------------------------
// Rasterization
// ---------------------------------------------------------------------------
float blend_factor(uint32_t mode, const V4 &src, const float dst[4], int k) {
    switch (mode) {
    case 1:
        return 0.0f; // ZERO
    case 2:
        return 1.0f; // ONE
    case 3:
        return src[k]; // SRCCOLOR
    case 4:
        return 1.0f - src[k]; // INVSRCCOLOR
    case 5:
        return src[3]; // SRCALPHA
    case 6:
        return 1.0f - src[3]; // INVSRCALPHA
    case 7:
        return dst[3]; // DESTALPHA
    case 8:
        return 1.0f - dst[3]; // INVDESTALPHA
    case 9:
        return dst[k]; // DESTCOLOR
    case 10:
        return 1.0f - dst[k]; // INVDESTCOLOR
    default:
        return 1.0f;
    }
}

} // namespace

void d9_raster_invalidate(uint32_t surface_id) {
    decoded().erase(surface_id);
}

void d9_raster_draw(ComObj *device, ComObj *target, const std::vector<uint8_t> &declaration,
                    const D9DrawCall &call) {
    if (!device || !target)
        return;
    D9SurfaceInfo rt;
    if (!d9_surface_info(target->id, &rt) || !rt.data || rt.format == 0 ||
        rt.size < (size_t)rt.pitch * rt.height)
        return;
    if (rt.format != 21 && rt.format != 22)
        return; // only 32-bit colour targets are drawn into
    const D9Pipeline &pl = d9_pipeline(device->id);
    if (pl.vs.empty() || pl.ps.empty()) {
        static uint32_t said = 0;
        if (++said <= 4)
            LOGW("d3d9 raster: a draw with no %s shader bound is skipped; the fixed-function "
                 "pipeline is not rendered",
                 pl.vs.empty() ? "vertex" : "pixel");
        return;
    }
    const Program &vs = program_for(pl.vs.vec());
    const Program &ps = program_for(pl.ps.vec());
    if (!vs.ok || !ps.ok || vs.major >= 3 || ps.major >= 3) {
        const std::string why = (!vs.ok || !ps.ok)
                                    ? std::string(!vs.ok ? "vertex" : "pixel") +
                                          " shader: " + (!vs.ok ? vs.why : ps.why)
                                    : std::string("shader model 3 runs on the GPU renderer only");
        log_once(("d3d9.raster.skip." + why).c_str(), "d3d9 raster: skipped a draw: %s",
                 why.c_str());
        return;
    }
    std::vector<Elem> elems = elements(declaration);

    // Which vertex indices the primitives use.
    uint32_t nverts;
    switch (call.prim) {
    case 4:
        nverts = call.prim_count * 3;
        break; // triangle list
    case 5:
    case 6:
        nverts = call.prim_count + 2;
        break; // strip, fan
    default:
        return; // points and lines are not drawn
    }
    auto vertex_index = [&](uint32_t i) -> int64_t {
        if (!call.indices && !call.index_data)
            return (int64_t)call.first + i;
        const uint8_t *ip;
        size_t at = (size_t)(call.first + i) * call.index_size;
        if (call.index_data) {
            if (at + call.index_size > call.index_bytes)
                return -1;
            ip = call.index_data + at;
        } else {
            if (!gm_fits(call.indices + (uint32_t)at, call.index_size))
                return -1;
            ip = gm_ptr(call.indices + (uint32_t)at);
        }
        uint32_t idx = call.index_size == 2
                           ? (uint32_t)(ip[0] | ip[1] << 8)
                           : (uint32_t)(ip[0] | ip[1] << 8 | ip[2] << 16 | (uint32_t)ip[3] << 24);
        return (int64_t)idx + call.base_vertex;
    };

    // Run the vertex shader once per used vertex.
    std::unordered_map<int64_t, Out> transformed;
    auto shade_vertex = [&](int64_t vi) -> const Out & {
        auto it = transformed.find(vi);
        if (it != transformed.end())
            return it->second;
        Machine m;
        m.p = &vs;
        m.pl = &pl;
        const uint8_t *vp = nullptr;
        if (vi >= 0 && call.vertex_data) {
            size_t off = (size_t)vi * call.stride;
            if (off + call.stride <= call.vertex_bytes)
                vp = call.vertex_data + off;
        } else if (vi >= 0) {
            uint32_t addr = call.vertices + (uint32_t)vi * call.stride;
            if (gm_fits(addr, call.stride))
                vp = gm_ptr(addr);
        }
        if (vp)
            for (const DclIn &d : vs.inputs)
                for (const Elem &e : elems)
                    if (e.usage == d.usage && e.index == d.usage_index &&
                        e.offset + 4u <= call.stride)
                        m.in[d.index & 15] = fetch(vp, e);
        m.run();
        Out o;
        o.pos = m.opos;
        o.attr[0] = m.od[0];
        o.attr[1] = m.od[1];
        for (int k = 0; k < 8; ++k)
            o.attr[2 + k] = m.ot[k];
        return transformed[vi] = o;
    };

    float vpx = 0, vpy = 0, vpw = (float)rt.width, vph = (float)rt.height;
    if (pl.viewport_set) {
        vpx = (float)pl.viewport[0];
        vpy = (float)pl.viewport[1];
        vpw = (float)pl.viewport[2];
        vph = (float)pl.viewport[3];
    }
    bool blend = pl.rs_set[27] && pl.rs[27];
    uint32_t src_blend = pl.rs_set[19] ? pl.rs[19] : 2, dst_blend = pl.rs_set[20] ? pl.rs[20] : 1;
    bool alpha_test = pl.rs_set[15] && pl.rs[15];
    float alpha_ref = (pl.rs[24] & 0xff) / 255.0f;
    uint8_t *pixels = rt.data;

    uint32_t written = 0;
    float first_w = 0.0f;
    bool have_first = false;
    V4 sample_colour;
    auto draw_triangle = [&](const Out &a, const Out &b, const Out &c) {
        const Out *v[3] = {&a, &b, &c};
        float sx[3], sy[3], iw[3];
        for (int i = 0; i < 3; ++i) {
            float w = v[i]->pos[3];
            if (w <= 1e-6f)
                return; // behind the eye; no clipping yet
            iw[i] = 1.0f / w;
            sx[i] = vpx + (v[i]->pos[0] * iw[i] + 1.0f) * 0.5f * vpw;
            sy[i] = vpy + (1.0f - v[i]->pos[1] * iw[i]) * 0.5f * vph;
        }
        float area = (sx[1] - sx[0]) * (sy[2] - sy[0]) - (sx[2] - sx[0]) * (sy[1] - sy[0]);
        if (std::fabs(area) < 1e-8f)
            return;
        if (pl.rs_set[22]) { // D3DRS_CULLMODE: 2 culls clockwise, 3 counter-clockwise
            if (pl.rs[22] == 2 && area > 0)
                return;
            if (pl.rs[22] == 3 && area < 0)
                return;
        }
        int x0 = std::max(0, (int)std::floor(std::min({sx[0], sx[1], sx[2]})));
        int x1 = std::min((int)rt.width - 1, (int)std::ceil(std::max({sx[0], sx[1], sx[2]})));
        int y0 = std::max(0, (int)std::floor(std::min({sy[0], sy[1], sy[2]})));
        int y1 = std::min((int)rt.height - 1, (int)std::ceil(std::max({sy[0], sy[1], sy[2]})));
        for (int y = y0; y <= y1; ++y) {
            for (int x = x0; x <= x1; ++x) {
                float px = x + 0.5f, py = y + 0.5f;
                float w0 = ((sx[1] - px) * (sy[2] - py) - (sx[2] - px) * (sy[1] - py)) / area;
                float w1 = ((sx[2] - px) * (sy[0] - py) - (sx[0] - px) * (sy[2] - py)) / area;
                float w2 = 1.0f - w0 - w1;
                if (w0 < 0 || w1 < 0 || w2 < 0)
                    continue;
                float q = w0 * iw[0] + w1 * iw[1] + w2 * iw[2];
                if (q <= 0)
                    continue;
                Machine m;
                m.p = &ps;
                m.pl = &pl;
                for (int k = 0; k < 10; ++k) {
                    V4 val;
                    for (int j = 0; j < 4; ++j)
                        val[j] = (w0 * iw[0] * v[0]->attr[k][j] + w1 * iw[1] * v[1]->attr[k][j] +
                                  w2 * iw[2] * v[2]->attr[k][j]) /
                                 q;
                    if (k < 2) {
                        for (int j = 0; j < 4; ++j)
                            val[j] = std::min(std::max(val[j], 0.0f), 1.0f);
                        m.in[k] = val;
                    } else {
                        m.tex[k - 2] = val;
                    }
                }
                m.run();
                if (m.killed)
                    continue;
                V4 col = ps.major >= 2 ? m.oc[0] : m.r[0];
                for (int k = 0; k < 4; ++k)
                    col[k] = std::min(std::max(col[k], 0.0f), 1.0f);
                if (alpha_test && col[3] < alpha_ref)
                    continue;
                if (!written++)
                    sample_colour = col;
                uint8_t *o = pixels + (size_t)y * rt.pitch + (size_t)x * 4;
                float dst[4] = {o[2] / 255.0f, o[1] / 255.0f, o[0] / 255.0f, o[3] / 255.0f};
                float out[4];
                for (int k = 0; k < 4; ++k)
                    out[k] = blend ? col[k] * blend_factor(src_blend, col, dst, k) +
                                         dst[k] * blend_factor(dst_blend, col, dst, k)
                                   : col[k];
                o[0] = (uint8_t)(std::min(std::max(out[2], 0.0f), 1.0f) * 255.0f + 0.5f);
                o[1] = (uint8_t)(std::min(std::max(out[1], 0.0f), 1.0f) * 255.0f + 0.5f);
                o[2] = (uint8_t)(std::min(std::max(out[0], 0.0f), 1.0f) * 255.0f + 0.5f);
                o[3] = (uint8_t)(std::min(std::max(out[3], 0.0f), 1.0f) * 255.0f + 0.5f);
            }
        }
    };

    for (uint32_t p = 0; p < call.prim_count; ++p) {
        uint32_t i0, i1, i2;
        if (call.prim == 4) {
            i0 = 3 * p;
            i1 = 3 * p + 1;
            i2 = 3 * p + 2;
        } else if (call.prim == 5) {
            i0 = p;
            i1 = p + 1;
            i2 = p + 2;
            if (p & 1)
                std::swap(i0, i1);
        } else {
            i0 = 0;
            i1 = p + 1;
            i2 = p + 2;
        }
        if (i2 >= nverts)
            break;
        const Out a = shade_vertex(vertex_index(i0));
        if (!have_first) {
            have_first = true;
            first_w = a.pos[3];
        }
        const Out b = shade_vertex(vertex_index(i1));
        const Out c = shade_vertex(vertex_index(i2));
        draw_triangle(a, b, c);
    }
    static uint32_t reported = 0;
    if (++reported <= 16)
        LOGW("d3d9 raster: draw into %u (%ux%u): first vertex w %g, %u pixels written, first "
             "colour %.2f %.2f %.2f %.2f",
             target->id, rt.width, rt.height, (double)first_w, written, (double)sample_colour[0],
             (double)sample_colour[1], (double)sample_colour[2], (double)sample_colour[3]);
    d9_raster_invalidate(target->id);
}
