// d3d9_common.h - what every Direct3D 9 GPU backend needs and none of them
// owns: cache keys, the D3DFORMAT table, CPU-side pixel conversion and DXT
// decoding, and the D3D state enumerations spelled as numbers.
#pragma once
#include <cstdint>
#include <cstring>
#include <vector>

namespace d9gpu {

// Keys for a renderer's in-memory caches, taken a word at a time. They are
// never stored, so only speed and spread matter.
inline uint64_t mix(uint64_t h, uint64_t v) {
    h ^= v + 0x9e3779b97f4a7c15ull + (h << 6) + (h >> 2);
    h *= 0xff51afd7ed558ccdull;
    return h ^ (h >> 33);
}
inline uint64_t fnv(const void *data, size_t n, uint64_t h = 1469598103934665603ull) {
    const uint8_t *p = (const uint8_t *)data;
    size_t i = 0;
    for (; i + 8 <= n; i += 8) {
        uint64_t w;
        memcpy(&w, p + i, 8);
        h = mix(h, w);
    }
    uint64_t tail = n;
    for (; i < n; ++i)
        tail = (tail << 8) | p[i];
    return mix(h, tail);
}

const uint32_t FMT_DXT1 = 0x31545844u, FMT_DXT2 = 0x32545844u, FMT_DXT3 = 0x33545844u,
               FMT_DXT4 = 0x34545844u, FMT_DXT5 = 0x35545844u;

// How a D3DFORMAT is stored on the GPU and how its bytes get there.
enum class Conv { Direct, ForceAlpha, R5G6B5, X1R5G5B5, A1R5G5B5, A4R4G4B4, L8, A8L8, Unsupported };
// The GPU storage, named by what it holds; each backend maps it to its own.
// A8 is alpha only: a backend without an alpha-only format stores it in a
// single red channel and swaps on sampling.
enum class Store { BGRA8, A8, RGBA16, R16F, RGBA16F, R32F, RGBA32F, BC1, BC2, BC3, Depth };
struct FormatInfo {
    Store store = Store::BGRA8;
    Conv conv = Conv::Unsupported;
    uint32_t bytes = 4; // bytes per source pixel, or per 4x4 block for DXT
    bool block = false;
};

// `bc`: the device samples BC1-3. Without it DXT is decoded to BGRA8 on upload.
inline FormatInfo format_info(uint32_t fmt, bool bc) {
    switch (fmt) {
    case 21:
        return {Store::BGRA8, Conv::Direct, 4};
    case 22:
        return {Store::BGRA8, Conv::ForceAlpha, 4};
    case 23:
        return {Store::BGRA8, Conv::R5G6B5, 2};
    case 24:
        return {Store::BGRA8, Conv::X1R5G5B5, 2};
    case 25:
        return {Store::BGRA8, Conv::A1R5G5B5, 2};
    case 26:
        return {Store::BGRA8, Conv::A4R4G4B4, 2};
    case 28:
        return {Store::A8, Conv::Direct, 1};
    case 50:
        return {Store::BGRA8, Conv::L8, 1};
    case 51:
        return {Store::BGRA8, Conv::A8L8, 2};
    case 36:
        return {Store::RGBA16, Conv::Direct, 8};
    case 111:
        return {Store::R16F, Conv::Direct, 2};
    case 113:
        return {Store::RGBA16F, Conv::Direct, 8};
    case 114:
        return {Store::R32F, Conv::Direct, 4};
    case 116:
        return {Store::RGBA32F, Conv::Direct, 16};
    case FMT_DXT1:
        if (bc)
            return {Store::BC1, Conv::Direct, 8, true};
        break;
    case FMT_DXT2:
    case FMT_DXT3:
        if (bc)
            return {Store::BC2, Conv::Direct, 16, true};
        break;
    case FMT_DXT4:
    case FMT_DXT5:
        if (bc)
            return {Store::BC3, Conv::Direct, 16, true};
        break;
    default:
        break;
    }
    if (fmt >= 70 && fmt <= 82)
        return {Store::Depth, Conv::Direct, 4};
    return {Store::BGRA8, Conv::Unsupported, 4};
}

inline bool is_dxt(uint32_t fmt) {
    return fmt == FMT_DXT1 || fmt == FMT_DXT2 || fmt == FMT_DXT3 || fmt == FMT_DXT4 ||
           fmt == FMT_DXT5;
}

// Source bytes to tightly packed BGRA8 pixels.
inline void convert(Conv conv, const uint8_t *src, uint32_t w, uint32_t h, uint32_t pitch,
                    std::vector<uint8_t> &out) {
    out.resize((size_t)w * h * 4);
    for (uint32_t y = 0; y < h; ++y) {
        const uint8_t *s = src + (size_t)y * pitch;
        uint8_t *o = out.data() + (size_t)y * w * 4;
        for (uint32_t x = 0; x < w; ++x, o += 4) {
            switch (conv) {
            case Conv::ForceAlpha:
                memcpy(o, s + 4 * x, 3);
                o[3] = 255;
                break;
            case Conv::R5G6B5: {
                uint16_t c = (uint16_t)(s[2 * x] | s[2 * x + 1] << 8);
                o[2] = (uint8_t)(((c >> 11) & 31) * 255 / 31);
                o[1] = (uint8_t)(((c >> 5) & 63) * 255 / 63);
                o[0] = (uint8_t)((c & 31) * 255 / 31);
                o[3] = 255;
                break;
            }
            case Conv::X1R5G5B5:
            case Conv::A1R5G5B5: {
                uint16_t c = (uint16_t)(s[2 * x] | s[2 * x + 1] << 8);
                o[2] = (uint8_t)(((c >> 10) & 31) * 255 / 31);
                o[1] = (uint8_t)(((c >> 5) & 31) * 255 / 31);
                o[0] = (uint8_t)((c & 31) * 255 / 31);
                o[3] = conv == Conv::A1R5G5B5 ? ((c & 0x8000) ? 255 : 0) : 255;
                break;
            }
            case Conv::A4R4G4B4: {
                uint16_t c = (uint16_t)(s[2 * x] | s[2 * x + 1] << 8);
                o[3] = (uint8_t)(((c >> 12) & 15) * 17);
                o[2] = (uint8_t)(((c >> 8) & 15) * 17);
                o[1] = (uint8_t)(((c >> 4) & 15) * 17);
                o[0] = (uint8_t)((c & 15) * 17);
                break;
            }
            case Conv::L8:
                o[0] = o[1] = o[2] = s[x];
                o[3] = 255;
                break;
            case Conv::A8L8:
                o[0] = o[1] = o[2] = s[2 * x];
                o[3] = s[2 * x + 1];
                break;
            default:
                memcpy(o, s + 4 * x, 4);
                break;
            }
        }
    }
}

// DXT to BGRA8, for devices without BC texture support.
inline void rgb565(uint16_t c, uint8_t *o) {
    o[2] = (uint8_t)(((c >> 11) & 31) * 255 / 31);
    o[1] = (uint8_t)(((c >> 5) & 63) * 255 / 63);
    o[0] = (uint8_t)((c & 31) * 255 / 31);
}
inline void decode_dxt(const uint8_t *src, uint32_t w, uint32_t h, uint32_t fmt,
                       std::vector<uint8_t> &out) {
    out.assign((size_t)w * h * 4, 0);
    uint32_t bw = (w + 3) / 4, bh = (h + 3) / 4;
    uint32_t block = fmt == FMT_DXT1 ? 8 : 16;
    for (uint32_t by = 0; by < bh; ++by)
        for (uint32_t bx = 0; bx < bw; ++bx) {
            const uint8_t *b = src + ((size_t)by * bw + bx) * block;
            const uint8_t *cb = fmt == FMT_DXT1 ? b : b + 8;
            uint16_t c0 = (uint16_t)(cb[0] | cb[1] << 8), c1 = (uint16_t)(cb[2] | cb[3] << 8);
            uint8_t pal[4][4];
            rgb565(c0, pal[0]);
            rgb565(c1, pal[1]);
            pal[0][3] = pal[1][3] = 255;
            if (c0 > c1 || fmt != FMT_DXT1) {
                for (int k = 0; k < 3; ++k) {
                    pal[2][k] = (uint8_t)((2 * pal[0][k] + pal[1][k]) / 3);
                    pal[3][k] = (uint8_t)((pal[0][k] + 2 * pal[1][k]) / 3);
                }
                pal[2][3] = pal[3][3] = 255;
            } else {
                for (int k = 0; k < 3; ++k)
                    pal[2][k] = (uint8_t)((pal[0][k] + pal[1][k]) / 2);
                pal[2][3] = 255;
                pal[3][0] = pal[3][1] = pal[3][2] = pal[3][3] = 0;
            }
            uint32_t bits = (uint32_t)(cb[4] | cb[5] << 8 | cb[6] << 16 | (uint32_t)cb[7] << 24);
            uint8_t alpha[8];
            if (fmt == FMT_DXT4 || fmt == FMT_DXT5) {
                uint8_t a0 = b[0], a1 = b[1];
                alpha[0] = a0;
                alpha[1] = a1;
                if (a0 > a1)
                    for (int k = 0; k < 6; ++k)
                        alpha[k + 2] = (uint8_t)(((6 - k) * a0 + (k + 1) * a1) / 7);
                else {
                    for (int k = 0; k < 4; ++k)
                        alpha[k + 2] = (uint8_t)(((4 - k) * a0 + (k + 1) * a1) / 5);
                    alpha[6] = 0;
                    alpha[7] = 255;
                }
            }
            uint64_t abits = 0;
            for (int k = 0; k < 6; ++k)
                abits |= (uint64_t)b[2 + k] << (8 * k);
            for (uint32_t py = 0; py < 4; ++py)
                for (uint32_t px = 0; px < 4; ++px) {
                    uint32_t x = bx * 4 + px, y = by * 4 + py;
                    if (x >= w || y >= h)
                        continue;
                    uint32_t i = py * 4 + px;
                    uint8_t *o = &out[((size_t)y * w + x) * 4];
                    memcpy(o, pal[(bits >> (2 * i)) & 3], 4);
                    if (fmt == FMT_DXT2 || fmt == FMT_DXT3)
                        o[3] = (uint8_t)(((b[i / 2] >> ((i & 1) * 4)) & 15) * 17);
                    else if (fmt == FMT_DXT4 || fmt == FMT_DXT5)
                        o[3] = alpha[(abits >> (3 * i)) & 7];
                }
        }
}

// Bytes one D3DDECLTYPE occupies in a vertex.
inline uint32_t vertex_format_bytes(uint32_t type) {
    static const uint8_t sizes[17] = {4, 8, 12, 16, 4, 4, 4, 8, 4, 4, 8, 4, 8, 4, 4, 4, 8};
    return type < 17 ? sizes[type] : 0;
}

// Render states by D3DRENDERSTATETYPE, the ones every backend reads.
enum RS : uint32_t {
    RS_ZENABLE = 7,
    RS_FILLMODE = 8,
    RS_ZWRITEENABLE = 14,
    RS_ALPHATESTENABLE = 15,
    RS_SRCBLEND = 19,
    RS_DESTBLEND = 20,
    RS_CULLMODE = 22,
    RS_ZFUNC = 23,
    RS_ALPHAREF = 24,
    RS_ALPHAFUNC = 25,
    RS_ALPHABLENDENABLE = 27,
    RS_FOGENABLE = 28,
    RS_FOGCOLOR = 34,
    RS_FOGTABLEMODE = 35,
    RS_FOGSTART = 36,
    RS_FOGEND = 37,
    RS_FOGDENSITY = 38,
    RS_STENCILENABLE = 52,
    RS_STENCILFAIL = 53,
    RS_STENCILZFAIL = 54,
    RS_STENCILPASS = 55,
    RS_STENCILFUNC = 56,
    RS_STENCILREF = 57,
    RS_STENCILMASK = 58,
    RS_STENCILWRITEMASK = 59,
    RS_COLORWRITEENABLE = 168,
    RS_BLENDOP = 171,
    RS_SCISSORTESTENABLE = 174,
    RS_SLOPESCALEDEPTHBIAS = 175,
    RS_TWOSIDEDSTENCILMODE = 185,
    RS_CCW_STENCILFAIL = 186,
    RS_CCW_STENCILZFAIL = 187,
    RS_CCW_STENCILPASS = 188,
    RS_CCW_STENCILFUNC = 189,
    RS_COLORWRITEENABLE1 = 190,
    RS_COLORWRITEENABLE2 = 191,
    RS_COLORWRITEENABLE3 = 192,
    RS_BLENDFACTOR = 193,
    RS_DEPTHBIAS = 195,
    RS_SEPARATEALPHABLENDENABLE = 206,
    RS_SRCBLENDALPHA = 207,
    RS_DESTBLENDALPHA = 208,
    RS_BLENDOPALPHA = 209,
};

// Blend factors, as D3DBLEND values, whose meaning depends on the constant colour.
inline bool uses_blend_factor(uint32_t b) {
    return b == 14 || b == 15;
}

} // namespace d9gpu
