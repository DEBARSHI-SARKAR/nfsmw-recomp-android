// The pipeline contract this adapter implements, described rather than quoted.
// It is the one a 2D Direct3D 11 renderer uses to put layered images on screen
// (Siege of Avalon's graphics/D3DRenderer.pas is the known client):
//
// Input layout: POSITION, R32G32B32_FLOAT at byte 0, and TEXCOORD,
// R32G32_FLOAT appended after it (byte 12), both slot 0, per vertex, semantic
// index 0; a 20-byte vertex. Indices are R16_UINT, 0 2 1 0 1 3, as a triangle
// list.
//
// Constant buffer: two 4x4 matrices, 128 bytes - the output transform, then
// the input (texture) transform. The client fills them with
// D3DXMatrixMultiplyTranspose, and HLSL's column-major default reads those
// bytes back as the row-vector matrix, so each transformed component k is
// sum over j of input[j] * uploaded[k * 4 + j].
//
// Vertex program: the position, with w forced to 1, times the output
// transform; the texture coordinate (u, v, 0, 1) times the input transform,
// then flipped vertically: (u', 1 - v').
//
// Pixel programs, both sampling texture 0 with sampler 0:
// - plain: the sample, all four channels.
// - packed: the sample's red channel holds a 5-6-5 word stored as R16_UNORM.
//   It is scaled by 65535 and truncated to an integer, split by integer
//   division into blue (low 5 bits), green (next 6) and red (top 5), and
//   returned as (red / 32, green / 64, blue / 32, 1) - divided by 32 and 64,
//   not 31 and 63.
//
// The programs are recognised by the FNV-1a digest of their exact source
// (dx/d3dcompiler.cpp, dx11::shader_kind); the kit carries no shader source.
// d3d11.cpp - a software, single-sample 2D Direct3D 11 adapter.
// Shader arithmetic and the input layout are documented below. No executable
// address, window title or renderer-selection policy belongs in this module.
#include "d3d11.h"
#include "host_api.h"
#include "../runtime/display_seam.h"
#include "../runtime/memory.h"
#include "../runtime/imports.h"
#include "../platform/os.h"
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <vector>
#include <cstdio>

namespace dx11 {
namespace {
std::map<uint32_t, Object> &objects() {
    static auto *v = new std::map<uint32_t, Object>();
    return *v;
}
// Drop owned resource and binding references. mem_init invalidates the arena;
// reset therefore discards metadata instead of freeing a previous generation.
void destroy(ComObj *obj) {
    auto it = objects().find(obj->id);
    if (it == objects().end())
        return;
    Object o = std::move(it->second);
    objects().erase(it);
    if (o.host_valid || o.host_owned)
        host_gpu2d_forget(obj->id);
    if (o.iface == IF_DXGI_SWAP)
        gdi_forget_surface(obj->id);
    if (o.data)
        heap_free(o.data);
    for (uint32_t id : {o.resource, o.rtv, o.srv, o.vb, o.ib, o.cb, o.sampler, o.blend, o.raster,
                        o.vs, o.ps, o.layout, o.device})
        if (id)
            com_release(com_get(id));
}
} // namespace
bool span(uint32_t p, uint64_t n) {
    return p && gm_fits(p, n);
}
Object *get(ComObj *o) {
    if (!o)
        return nullptr;
    auto it = objects().find(o->id);
    return it == objects().end() ? nullptr : &it->second;
}
Object *from(uint32_t view, ComIface iface) {
    return get(com_this(view, iface));
}
ComObj *create(ComKind kind, ComIface iface, uint32_t device) {
    auto *obj = com_new(kind);
    auto &o = objects()[obj->id];
    o.id = obj->id;
    o.iface = iface;
    o.device = device;
    com_addref(com_get(device));
    return obj;
}
void retain(uint32_t &slot, uint32_t id) {
    if (slot == id)
        return;
    com_addref(com_get(id));
    uint32_t old = slot;
    slot = id;
    com_release(com_get(old));
}
// Bind distinct kinds, preserving IUnknown identity and refusing unsupported
// interfaces (including optional IDXGIDevice queries) through the COM core.
void define(ComIface iface, ComKind kind, const char *dll, const char *name, const ComMethod *m,
            size_t n, const char *iid) {
    com_define(iface, dll, name, m, n);
    com_bind(iface, kind);
    com_set_destructor(kind, destroy);
    unsigned a, b, c, d[8];
    if (sscanf(iid, "%8x-%4x-%4x-%2x%2x-%2x%2x%2x%2x%2x%2x", &a, &b, &c, &d[0], &d[1], &d[2], &d[3],
               &d[4], &d[5], &d[6], &d[7]) == 11) {
        uint8_t guid[16] = {uint8_t(a), uint8_t(a >> 8), uint8_t(a >> 16), uint8_t(a >> 24),
                            uint8_t(b), uint8_t(b >> 8), uint8_t(c),       uint8_t(c >> 8)};
        for (int i = 0; i < 8; ++i)
            guid[8 + i] = uint8_t(d[i]);
        com_register_iid(iface, guid);
    }
}
// Allocate only base-level storage: views of other mips/arrays are refused.
// MipLevels=0 is accepted for clients that expose and update only mip zero.
uint32_t texture(ComObj *dev, const D3D11_TEXTURE2D_DESC &d) {
    uint32_t bpp = (d.Format == 85 || d.Format == 56)   ? 2
                   : (d.Format == 28 || d.Format == 87) ? 4
                                                        : 0;
    uint64_t size = uint64_t(d.Width) * d.Height * bpp;
    if (!bpp || !d.Width || !d.Height || d.Width > 16384 || d.Height > 16384 || d.ArraySize != 1 ||
        d.SampleDesc.Count != 1 || d.SampleDesc.Quality || size > 256 * 1024 * 1024)
        return 0;
    auto *obj = create(K_D3D11_TEXTURE, IF_D3D11_TEXTURE, dev->id);
    auto *o = get(obj);
    o->texture = d;
    o->pitch = d.Width * bpp;
    o->bytes = uint32_t(size);
    o->data = heap_alloc(o->bytes, true, 16);
    if (!o->data) {
        com_release(obj);
        return 0;
    }
    return obj->id;
}
std::array<float, 4> pixel(const Object &o, uint32_t x, uint32_t y) {
    uint32_t p =
        o.data + y * o.pitch + x * ((o.texture.Format == 85 || o.texture.Format == 56) ? 2 : 4);
    if (o.texture.Format == 56)
        return {rd16(p) / 65535.f, 0, 0, 1};
    if (o.texture.Format == 85) {
        uint32_t v = rd16(p);
        return {((v >> 11) & 31) / 31.f, ((v >> 5) & 63) / 63.f, (v & 31) / 31.f, 1};
    }
    bool bgra = o.texture.Format == 87;
    return {rd8(p + (bgra ? 2 : 0)) / 255.f, rd8(p + 1) / 255.f, rd8(p + (bgra ? 0 : 2)) / 255.f,
            rd8(p + 3) / 255.f};
}
void put_pixel(Object &o, uint32_t x, uint32_t y, const std::array<float, 4> &c) {
    auto q = [&](int i, int max) {
        return uint32_t(std::lround(std::clamp(c[i], 0.f, 1.f) * max));
    };
    uint32_t p =
        o.data + y * o.pitch + x * ((o.texture.Format == 85 || o.texture.Format == 56) ? 2 : 4);
    if (o.texture.Format == 56)
        wr16(p, uint16_t(q(0, 65535)));
    else if (o.texture.Format == 85)
        wr16(p, uint16_t(q(0, 31) << 11 | q(1, 63) << 5 | q(2, 31)));
    else {
        bool b = o.texture.Format == 87;
        wr8(p + (b ? 2 : 0), q(0, 255));
        wr8(p + 1, q(1, 255));
        wr8(p + (b ? 0 : 2), q(2, 255));
        wr8(p + 3, q(3, 255));
    }
    o.dirty = true;
}
// Conversion tables, each giving a source word as the four bytes of an RGBA8
// (or BGRA8) texel. The 5- and 6-bit channels are widened as pixel() then
// put_pixel() would, in the same float expressions, so the bytes agree.
namespace {
const std::array<uint8_t, 32> &lut5() {
    static const auto t = [] {
        std::array<uint8_t, 32> v{};
        for (int i = 0; i < 32; ++i)
            v[i] = uint8_t(std::lround(std::clamp(i / 31.f, 0.f, 1.f) * 255));
        return v;
    }();
    return t;
}
const std::array<uint8_t, 64> &lut6() {
    static const auto t = [] {
        std::array<uint8_t, 64> v{};
        for (int i = 0; i < 64; ++i)
            v[i] = uint8_t(std::lround(std::clamp(i / 63.f, 0.f, 1.f) * 255));
        return v;
    }();
    return t;
}
uint32_t swap_red_blue(uint32_t c) {
    return (c & 0xff00ff00u) | (c >> 16 & 0xffu) | (c & 0xffu) << 16;
}
// Every 5-6-5 word, opaque.
const uint32_t *lut565(bool bgra) {
    static const std::vector<uint32_t> rgba = [] {
        std::vector<uint32_t> t(65536);
        for (int v = 0; v < 65536; ++v)
            t[v] = uint32_t(lut5()[(v >> 11) & 31]) | uint32_t(lut6()[(v >> 5) & 63]) << 8 |
                   uint32_t(lut5()[v & 31]) << 16 | 0xff000000u;
        return t;
    }();
    static const std::vector<uint32_t> swapped = [] {
        std::vector<uint32_t> t(65536);
        for (int v = 0; v < 65536; ++v)
            t[v] = swap_red_blue(rgba[v]);
        return t;
    }();
    return bgra ? swapped.data() : rgba.data();
}
// Every 16-bit word through the packed decode: pixel(), then the shader
// arithmetic of raster_triangle, then put_pixel(), in the same float
// expressions - including where the round trip through 65535.f truncates a
// word to the one below it.
const uint32_t *lut_packed(bool bgra) {
    static const std::vector<uint32_t> rgba = [] {
        std::vector<uint32_t> t(65536);
        auto q = [](float c) { return uint32_t(std::lround(std::clamp(c, 0.f, 1.f) * 255)); };
        for (int v = 0; v < 65536; ++v) {
            float s = v / 65535.f;
            int word = int(s * 65535.f);
            int blue = word % 32;
            word = (word - blue) / 32;
            int green = word % 64;
            word = (word - green) / 64;
            int red = word % 32;
            t[v] = q(red / 32.f) | q(green / 64.f) << 8 | q(blue / 32.f) << 16 | 0xff000000u;
        }
        return t;
    }();
    static const std::vector<uint32_t> swapped = [] {
        std::vector<uint32_t> t(65536);
        for (int v = 0; v < 65536; ++v)
            t[v] = swap_red_blue(rgba[v]);
        return t;
    }();
    return bgra ? swapped.data() : rgba.data();
}
// Rows of 16-bit words to 32-bit texels through a table.
void widen_row(const uint8_t *src, uint8_t *dst, size_t n, const uint32_t *lut) {
    for (size_t i = 0; i < n; ++i) {
        uint16_t v;
        memcpy(&v, src + i * 2, 2);
        memcpy(dst + i * 4, &lut[v], 4);
    }
}
// Four-byte rows with red and blue exchanged.
void swap_row(const uint8_t *src, uint8_t *dst, size_t n) {
    for (size_t i = 0; i < n; ++i) {
        uint32_t c;
        memcpy(&c, src + i * 4, 4);
        c = swap_red_blue(c);
        memcpy(dst + i * 4, &c, 4);
    }
}
// The (x, y, w, h) region of a texture as RGBA8, converted for the plain or
// the packed pixel shader. False for a format the GPU copy cannot hold.
bool to_rgba(const Object &o, bool packed, int32_t x, int32_t y, int32_t w, int32_t h,
             std::vector<uint8_t> &out) {
    const uint32_t f = o.texture.Format;
    const uint32_t *lut = f == 85 && !packed  ? lut565(false)
                          : f == 56 && packed ? lut_packed(false)
                                              : nullptr;
    if (!lut && (packed || !(f == 28 || f == 87)))
        return false;
    const uint32_t bpp = lut ? 2 : 4;
    out.resize(size_t(w) * h * 4);
    for (int32_t r = 0; r < h; ++r) {
        const uint8_t *src = gm_ptr(o.data + uint32_t(y + r) * o.pitch + uint32_t(x) * bpp);
        uint8_t *dst = out.data() + size_t(r) * w * 4;
        if (lut)
            widen_row(src, dst, size_t(w), lut);
        else if (f == 87)
            swap_row(src, dst, size_t(w));
        else
            memcpy(dst, src, size_t(w) * 4);
    }
    return true;
}
} // namespace

bool gpu_available() {
    static const bool software = recomp_env("D3D11_SOFTWARE") != nullptr;
    return !software && host_gpu2d_available();
}
// A copy the host has since dropped is no copy at all. A render target whose
// pixels were only there has lost them; the next full draw replaces them.
void host_check(Object &o) {
    if ((o.host_valid || o.host_owned) && o.host_generation != host_gpu2d_generation()) {
        if (o.host_owned)
            log_once("d3d11.lost", "D3D11: the host GPU dropped a render target's pixels");
        o.host_valid = o.host_owned = false;
    }
}
// Record that the host copy now matches, in this generation.
void host_matches(Object &o) {
    o.host_valid = true;
    o.host_generation = host_gpu2d_generation();
    o.dirty_x0 = o.dirty_x1 = 0;
}
void cpu_view(Object &o) {
    host_check(o);
    if (!o.host_owned)
        return;
    o.host_owned = false;
    const uint32_t w = o.texture.Width, h = o.texture.Height, f = o.texture.Format;
    std::vector<uint8_t> rgba(size_t(w) * h * 4);
    if ((f != 28 && f != 87) || !host_gpu2d_readback(o.id, int(w), int(h), rgba.data())) {
        log_once("d3d11.readback",
                 "D3D11: a render target drawn on the GPU could not be read back");
        o.host_valid = false;
        return;
    }
    // Three reads in a row with no present from the GPU between them: this
    // target is used from the CPU, and drawing it on the GPU only adds reads.
    if (++o.readbacks >= 3 && !o.host_refused) {
        o.host_refused = true;
        log_once("d3d11.refused",
                 "D3D11: a render target read back every frame is drawn in software");
    }
    for (uint32_t y = 0; y < h; ++y) {
        const uint8_t *src = rgba.data() + size_t(y) * w * 4;
        uint8_t *dst = gm_ptr(o.data + y * o.pitch);
        if (f == 87)
            swap_row(src, dst, w);
        else
            memcpy(dst, src, size_t(w) * 4);
    }
    host_matches(o);
    o.host_decode = 1;
}
void cpu_wrote(Object &o, int32_t x0, int32_t y0, int32_t x1, int32_t y1) {
    o.dirty = true;
    if (!o.host_valid)
        return;
    x0 = std::max(x0, 0);
    y0 = std::max(y0, 0);
    x1 = std::min(x1, int32_t(o.texture.Width));
    y1 = std::min(y1, int32_t(o.texture.Height));
    if (x0 >= x1 || y0 >= y1)
        return;
    if (o.dirty_x0 >= o.dirty_x1) {
        o.dirty_x0 = x0;
        o.dirty_y0 = y0;
        o.dirty_x1 = x1;
        o.dirty_y1 = y1;
        return;
    }
    o.dirty_x0 = std::min(o.dirty_x0, x0);
    o.dirty_y0 = std::min(o.dirty_y0, y0);
    o.dirty_x1 = std::max(o.dirty_x1, x1);
    o.dirty_y1 = std::max(o.dirty_y1, y1);
}
bool host_sync(Object &o, bool packed) {
    host_check(o);
    const uint8_t decode = packed ? 2 : 1;
    if (o.host_owned)
        return decode == 1; // what a render target holds is plain colour
    const bool full = !o.host_valid || o.host_decode != decode;
    if (!full && o.dirty_x0 >= o.dirty_x1)
        return true;
    const int32_t x = full ? 0 : o.dirty_x0, y = full ? 0 : o.dirty_y0;
    const int32_t w = full ? int32_t(o.texture.Width) : o.dirty_x1 - o.dirty_x0;
    const int32_t h = full ? int32_t(o.texture.Height) : o.dirty_y1 - o.dirty_y0;
    std::vector<uint8_t> rgba;
    if (!to_rgba(o, packed, x, y, w, h, rgba))
        return false;
    host_gpu2d_texture(o.id, int(o.texture.Width), int(o.texture.Height), rgba.data(), x, y, w, h);
    host_matches(o);
    o.host_decode = decode;
    return true;
}

namespace {
// A texture's pixels as opaque ARGB, the form the display seam takes.
void to_argb(const Object &o, uint32_t *argb) {
    const bool rgba = o.texture.Format == 28, bgra = o.texture.Format == 87;
    for (uint32_t y = 0; y < o.texture.Height; ++y) {
        uint32_t *row = argb + size_t(y) * o.texture.Width;
        if (rgba || bgra) {
            // Eight-bit channels pass through pixel() and back unchanged;
            // take the bytes as they are, a row at a time through plain
            // pointers the compiler vectorizes.
            const uint8_t *src = gm_ptr(o.data + y * o.pitch);
            const uint32_t n = o.texture.Width;
            if (bgra) {
                memcpy(row, src, size_t(n) * 4);
                for (uint32_t x = 0; x < n; ++x)
                    row[x] |= 0xff000000u;
            } else {
                for (uint32_t x = 0; x < n; ++x) {
                    uint32_t c;
                    memcpy(&c, src + size_t(x) * 4, 4);
                    row[x] = 0xff000000u | swap_red_blue(c);
                }
            }
            continue;
        }
        for (uint32_t x = 0; x < o.texture.Width; ++x) {
            auto c = pixel(o, x, y);
            row[x] = 0xff000000u | uint32_t(std::lround(c[0] * 255)) << 16 |
                     uint32_t(std::lround(c[1] * 255)) << 8 | uint32_t(std::lround(c[2] * 255));
        }
    }
}
// GDI asks for the pixels of a frame presented from the GPU only when it has
// to compose with them. `owner` is the swap chain.
bool fetch_presented(uint32_t owner, uint32_t *argb, int w, int h) {
    auto *swap = get(com_get(owner));
    auto *back = swap && swap->iface == IF_DXGI_SWAP ? get(com_get(swap->resource)) : nullptr;
    if (!back || int(back->texture.Width) != w || int(back->texture.Height) != h)
        return false;
    cpu_view(*back);
    to_argb(*back, argb);
    return true;
}
} // namespace

// A back buffer drawn on the GPU and filling the screen goes to the display as
// it is; GDI is told the screen is its, and reads it back only if it has to.
// Anything else is a synchronous ARGB snapshot the display seam copies; GDI
// refreshes retain it, and no presenter reads guest memory.
void present(Object &o, uint32_t owner, uint32_t hwnd, bool fullscreen) {
    const int w = int(o.texture.Width), h = int(o.texture.Height);
    host_check(o);
    // Whether this frame could leave on the GPU decides where the next ones
    // are drawn: a present that has to be composed on the CPU would read
    // every GPU frame back.
    const bool gpu = gpu_available() && gdi_surface_covers_screen(owner, hwnd, w, h, fullscreen);
    if (o.host_owned && gpu) {
        gdi_present_external(owner, hwnd, w, h, fullscreen, fetch_presented);
        host_display_present_gpu2d(o.id, w, h);
        o.readbacks = 0;
        o.host_refused = false;
        return;
    }
    if (!gpu)
        o.host_refused = true;
    else if (o.readbacks < 3)
        o.host_refused = false; // the screen is this swap chain's now
    cpu_view(o);
    std::vector<uint32_t> argb(size_t(w) * h);
    to_argb(o, argb.data());
    gdi_present_surface(owner, hwnd, argb.data(), w, h, fullscreen);
}
void get_device(X86 *c) {
    auto *o = get(com_this_arg(c));
    uint32_t out = arg(c, 1);
    if (!span(out, 4)) {
        com_ret(c, E_POINTER);
        return;
    }
    wr32(out, 0);
    auto *d = o ? com_get(o->device) : nullptr;
    if (!d) {
        com_ret(c, E_INVALIDARG);
        return;
    }
    com_addref(d);
    wr32(out, com_view(d, IF_D3D11_DEVICE));
    com_ret(c, S_OK);
}
} // namespace dx11
void d3d11_reset() {
    gdi_forget_surface(0);
    host_gpu2d_reset();
    dx11::objects().clear();
}

namespace {
void create_rtv(X86 *c) {
    auto *d = com_this_arg(c, IF_D3D11_DEVICE);
    auto *r = com_this(arg(c, 1), IF_D3D11_TEXTURE);
    uint32_t out = arg(c, 3);
    if (!dx11::span(out, 4)) {
        com_ret(c, E_POINTER);
        return;
    }
    wr32(out, 0);
    if (!d || !r || dx11::get(r)->device != d->id || arg(c, 2)) {
        com_ret(c, E_INVALIDARG);
        return;
    }
    auto *v = dx11::create(K_D3D11_RTV, IF_D3D11_RTV, d->id);
    dx11::retain(dx11::get(v)->resource, r->id);
    wr32(out, com_view(v, IF_D3D11_RTV));
    com_ret(c, S_OK);
}
void clear_rtv(X86 *c) {
    auto *v = dx11::from(arg(c, 1), IF_D3D11_RTV);
    auto *r = v ? dx11::get(com_get(v->resource)) : nullptr;
    if (!r || !dx11::span(arg(c, 2), 16)) {
        com_ret(c, E_INVALIDARG);
        return;
    }
    std::array<float, 4> colour;
    memcpy(colour.data(), gm_ptr(arg(c, 2)), 16);
    for (float f : colour)
        if (!std::isfinite(f)) {
            com_ret(c, E_INVALIDARG);
            return;
        }
    const uint32_t w = r->texture.Width, h = r->texture.Height, f = r->texture.Format;
    if (dx11::gpu_available() && (f == 28 || f == 87) && !r->host_refused) {
        // The whole target, so nothing on the CPU is worth keeping.
        float clamped[4];
        for (int i = 0; i < 4; ++i)
            clamped[i] = std::clamp(colour[i], 0.f, 1.f);
        host_gpu2d_clear(r->id, int(w), int(h), clamped);
        r->host_owned = true;
        dx11::host_matches(*r);
        r->host_decode = 1;
        com_ret(c, S_OK);
        return;
    }
    r->host_owned = false; // every pixel is about to be replaced
    for (uint32_t y = 0; y < h; ++y)
        for (uint32_t x = 0; x < w; ++x)
            dx11::put_pixel(*r, x, y, colour);
    dx11::cpu_wrote(*r, 0, 0, int32_t(w), int32_t(h));
    com_ret(c, S_OK);
}
void create_device(X86 *c) {
    uint32_t desc = arg(c, 7);
    for (int i : {8, 9, 11})
        if (!dx11::span(arg(c, i), 4)) {
            com_ret(c, E_POINTER);
            return;
        }
    for (int i : {8, 9, 11})
        wr32(arg(c, i), 0);
    if (!dx11::span(desc, sizeof(DXGI_SWAP_CHAIN_DESC)) || arg(c, 6) != 7) {
        com_ret(c, E_INVALIDARG);
        return;
    }
    DXGI_SWAP_CHAIN_DESC sd;
    memcpy(&sd, gm_ptr(desc), sizeof(sd));
    auto *dev = dx11::create(K_D3D11_DEVICE, IF_D3D11_DEVICE);
    auto *ctx = dx11::create(K_D3D11_CONTEXT, IF_D3D11_CONTEXT, dev->id);
    dx11::get(dev)->context = ctx->id;
    uint32_t swap = dx11::swapchain(c, dev, sd);
    if (!swap) {
        com_release(ctx);
        com_release(dev);
        com_ret(c, E_INVALIDARG);
        return;
    }
    wr32(arg(c, 8), com_view(com_get(swap), IF_DXGI_SWAP));
    wr32(arg(c, 9), com_view(dev, IF_D3D11_DEVICE));
    wr32(arg(c, 11), com_view(ctx, IF_D3D11_CONTEXT));
    if (dx11::span(arg(c, 10), 4))
        wr32(arg(c, 10), 0xa000);
    LOGV("D3D11CreateDeviceAndSwapChain %ux%u format=%u windowed=%u", sd.BufferDesc.Width,
         sd.BufferDesc.Height, sd.BufferDesc.Format, sd.Windowed);
    com_ret(c, S_OK);
}
// Creation validates all guest ranges before publishing a COM pointer. The
// resource bytes live in the arena, so Map returns an address, never a host pointer.
template <class T> bool read_record(uint32_t p, T &out) {
    if (!dx11::span(p, sizeof(T)))
        return false;
    memcpy(&out, gm_ptr(p), sizeof(T));
    return true;
}
void create_buffer(X86 *c) {
    auto *dev = com_this_arg(c, IF_D3D11_DEVICE);
    D3D11_BUFFER_DESC d{};
    D3D11_SUBRESOURCE_DATA init{};
    uint32_t out = arg(c, 3);
    if (!dx11::span(out, 4)) {
        com_ret(c, E_POINTER);
        return;
    }
    wr32(out, 0);
    if (!dev || !read_record(arg(c, 1), d) || !d.ByteWidth || d.ByteWidth > 256 * 1024 * 1024 ||
        d.Usage > 3 ||
        (arg(c, 2) && (!read_record(arg(c, 2), init) || !dx11::span(init.pSysMem, d.ByteWidth)))) {
        com_ret(c, E_INVALIDARG);
        return;
    }
    auto *obj = dx11::create(K_D3D11_BUFFER, IF_D3D11_BUFFER, dev->id);
    auto *o = dx11::get(obj);
    o->buffer = d;
    o->bytes = o->pitch = d.ByteWidth;
    o->data = heap_alloc(o->bytes, true, 16);
    if (!o->data) {
        com_release(obj);
        com_ret(c, E_OUTOFMEMORY);
        return;
    }
    if (arg(c, 2))
        memcpy(gm_ptr(o->data), gm_ptr(init.pSysMem), o->bytes);
    wr32(out, com_view(obj, IF_D3D11_BUFFER));
    com_ret(c, S_OK);
}
// Source bytes start at the supplied pointer, even for a destination box.
// The box selects destination coordinates; source rows advance by source pitch.
bool upload(dx11::Object &o, uint32_t box, uint32_t src, uint32_t pitch) {
    if (o.mapped)
        return false;
    if (o.iface == IF_D3D11_BUFFER) {
        D3D11_BOX b{0, 0, 0, o.bytes, 1, 1};
        if (box && !read_record(box, b))
            return false;
        if (b.left > b.right || b.right > o.bytes || b.top || b.front || b.bottom != 1 ||
            b.back != 1 || !dx11::span(src, b.right - b.left))
            return false;
        memmove(gm_ptr(o.data + b.left), gm_ptr(src), b.right - b.left);
        o.dirty = true;
        return true;
    }
    if (o.iface != IF_D3D11_TEXTURE)
        return false;
    dx11::cpu_view(o);
    D3D11_BOX b{0, 0, 0, o.texture.Width, o.texture.Height, 1};
    if (box && !read_record(box, b))
        return false;
    if (b.left > b.right || b.top > b.bottom || b.right > o.texture.Width ||
        b.bottom > o.texture.Height || b.front || b.back != 1)
        return false;
    if (b.left == b.right || b.top == b.bottom)
        return true;
    uint32_t bytes_per_pixel = o.pitch / o.texture.Width,
             row = (b.right - b.left) * bytes_per_pixel;
    if (pitch < row || !dx11::span(src, uint64_t(b.bottom - b.top - 1) * pitch + row))
        return false;
    for (uint32_t y = b.top; y < b.bottom; ++y)
        memmove(gm_ptr(o.data + y * o.pitch + b.left * bytes_per_pixel),
                gm_ptr(src + (y - b.top) * pitch), row);
    dx11::cpu_wrote(o, int32_t(b.left), int32_t(b.top), int32_t(b.right), int32_t(b.bottom));
    return true;
}
void create_texture(X86 *c) {
    auto *dev = com_this_arg(c, IF_D3D11_DEVICE);
    D3D11_TEXTURE2D_DESC d{};
    D3D11_SUBRESOURCE_DATA init{};
    uint32_t out = arg(c, 3);
    if (!dx11::span(out, 4)) {
        com_ret(c, E_POINTER);
        return;
    }
    wr32(out, 0);
    if (!dev || !read_record(arg(c, 1), d) || (arg(c, 2) && !read_record(arg(c, 2), init))) {
        com_ret(c, E_INVALIDARG);
        return;
    }
    uint32_t id = dx11::texture(dev, d);
    if (!id) {
        com_ret(c, E_INVALIDARG);
        return;
    }
    auto *obj = com_get(id);
    auto *o = dx11::get(obj);
    // Initial arrays for multiple mip levels are outside the single-mip subset.
    if (arg(c, 2) && (d.MipLevels != 1 || !upload(*o, 0, init.pSysMem, init.SysMemPitch))) {
        com_release(obj);
        com_ret(c, E_INVALIDARG);
        return;
    }
    wr32(out, com_view(obj, IF_D3D11_TEXTURE));
    com_ret(c, S_OK);
}
void create_srv(X86 *c) {
    auto *dev = com_this_arg(c, IF_D3D11_DEVICE);
    auto *tex = com_this(arg(c, 1), IF_D3D11_TEXTURE);
    uint32_t out = arg(c, 3), desc = arg(c, 2);
    if (!dx11::span(out, 4)) {
        com_ret(c, E_POINTER);
        return;
    }
    wr32(out, 0);
    auto *r = dx11::get(tex);
    if (!dev || !r || r->device != dev->id || !(r->texture.BindFlags & 8) ||
        (desc && (!dx11::span(desc, 24) || rd32(desc) != r->texture.Format || rd32(desc + 4) != 4 ||
                  rd32(desc + 8) || rd32(desc + 12) != 1))) {
        com_ret(c, E_INVALIDARG);
        return;
    }
    auto *obj = dx11::create(K_D3D11_SRV, IF_D3D11_SRV, dev->id);
    dx11::retain(dx11::get(obj)->resource, tex->id);
    wr32(out, com_view(obj, IF_D3D11_SRV));
    com_ret(c, S_OK);
}
void map_resource(X86 *c) {
    auto *ctx = dx11::from(arg(c, 0), IF_D3D11_CONTEXT);
    auto *r = dx11::get(com_this(arg(c, 1)));
    uint32_t out = arg(c, 5), mode = arg(c, 3);
    if (!dx11::span(out, 12)) {
        com_ret(c, E_POINTER);
        return;
    }
    gm_zero(out, 12);
    if (!ctx || !r || r->device != ctx->device || !r->data || r->mapped || arg(c, 2) || mode < 1 ||
        mode > 5) {
        com_ret(c, E_INVALIDARG);
        return;
    }
    uint32_t access =
        r->iface == IF_D3D11_BUFFER ? r->buffer.CPUAccessFlags : r->texture.CPUAccessFlags;
    if ((mode != 1 && !(access & 0x10000)) || ((mode == 1 || mode == 3) && !(access & 0x20000))) {
        com_ret(c, E_INVALIDARG);
        return;
    }
    if (r->iface == IF_D3D11_TEXTURE)
        dx11::cpu_view(*r);
    if (mode == 4)
        gm_zero(r->data, r->bytes);
    r->mapped = true;
    r->map_mode = mode;
    wr32(out, r->data);
    wr32(out + 4, r->pitch);
    wr32(out + 8, r->bytes);
    com_ret(c, S_OK);
}
void unmap_resource(X86 *c) {
    auto *ctx = dx11::from(arg(c, 0), IF_D3D11_CONTEXT);
    auto *r = dx11::get(com_this(arg(c, 1)));
    if (!ctx || !r || r->device != ctx->device || !r->mapped || arg(c, 2)) {
        com_ret(c, E_INVALIDARG);
        return;
    }
    r->mapped = false;
    if (r->map_mode != 1) // D3D11_MAP_READ promises nothing was written
        dx11::cpu_wrote(*r, 0, 0, int32_t(r->texture.Width), int32_t(r->texture.Height));
    com_ret(c, S_OK);
}
void update_resource(X86 *c) {
    // It writes its own texture's storage and reads the guest's buffer; no
    // DirectDraw surface is written. A game uploads its locked back buffer so.
    imports_call_leaves_surfaces();
    auto *ctx = dx11::from(arg(c, 0), IF_D3D11_CONTEXT);
    auto *r = dx11::get(com_this(arg(c, 1)));
    bool ok = ctx && r && r->device == ctx->device && !arg(c, 2) &&
              upload(*r, arg(c, 3), arg(c, 4), arg(c, 5));
    if (!ok)
        LOGW("D3D11 UpdateSubresource: invalid resource, subresource or source span");
    com_ret(c, ok ? S_OK : E_INVALIDARG);
}
// States are immutable descriptor copies. Unsupported sampling/blend/raster
// operations are refused at creation, avoiding plausible but incorrect pixels.
void create_state(X86 *c, ComKind kind, ComIface iface, uint32_t bytes) {
    auto *dev = com_this_arg(c, IF_D3D11_DEVICE);
    uint32_t out = arg(c, 2), p = arg(c, 1);
    if (!dx11::span(out, 4)) {
        com_ret(c, E_POINTER);
        return;
    }
    wr32(out, 0);
    if (!dev || !dx11::span(p, bytes)) {
        com_ret(c, E_INVALIDARG);
        return;
    }
    auto *obj = dx11::create(kind, iface, dev->id);
    auto *o = dx11::get(obj);
    o->desc.resize(bytes);
    memcpy(o->desc.data(), gm_ptr(p), bytes);
    wr32(out, com_view(obj, iface));
    com_ret(c, S_OK);
}
void create_sampler(X86 *c) {
    D3D11_SAMPLER_DESC d{};
    if (!read_record(arg(c, 1), d) || (d.Filter != 0 && d.Filter != 0x15) || d.AddressU < 1 ||
        d.AddressU > 4 || d.AddressV < 1 || d.AddressV > 4 || !std::isfinite(d.MipLODBias) ||
        !std::isfinite(d.MinLOD) || !std::isfinite(d.MaxLOD) ||
        !std::all_of(std::begin(d.BorderColor), std::end(d.BorderColor),
                     [](float f) { return std::isfinite(f); })) {
        if (dx11::span(arg(c, 2), 4))
            wr32(arg(c, 2), 0);
        com_ret(c, E_NOTIMPL);
        return;
    }
    create_state(c, K_D3D11_SAMPLER, IF_D3D11_SAMPLER, sizeof(d));
}
void create_blend(X86 *c) {
    D3D11_BLEND_DESC d{};
    bool ok = read_record(arg(c, 1), d);
    if (ok) {
        auto &r = d.RenderTarget[0];
        ok = !d.AlphaToCoverageEnable && !d.IndependentBlendEnable &&
             (!r.BlendEnable ||
              (r.BlendOp == 1 && r.BlendOpAlpha == 1 && r.SrcBlend >= 1 && r.SrcBlend <= 10 &&
               r.DestBlend >= 1 && r.DestBlend <= 10 && r.SrcBlendAlpha >= 1 &&
               r.SrcBlendAlpha <= 10 && r.DestBlendAlpha >= 1 && r.DestBlendAlpha <= 10));
    }
    if (!ok) {
        if (dx11::span(arg(c, 2), 4))
            wr32(arg(c, 2), 0);
        com_ret(c, E_NOTIMPL);
        return;
    }
    create_state(c, K_D3D11_BLEND, IF_D3D11_BLEND, sizeof(d));
}
void create_raster(X86 *c) {
    D3D11_RASTERIZER_DESC d{};
    if (!read_record(arg(c, 1), d) || d.FillMode != 3 || d.CullMode < 1 || d.CullMode > 3 ||
        d.ScissorEnable || d.MultisampleEnable || d.DepthBias || d.SlopeScaledDepthBias) {
        if (dx11::span(arg(c, 2), 4))
            wr32(arg(c, 2), 0);
        com_ret(c, E_NOTIMPL);
        return;
    }
    create_state(c, K_D3D11_RASTER, IF_D3D11_RASTER, sizeof(d));
}
void create_shader(X86 *c, bool vertex) {
    auto *dev = com_this_arg(c, IF_D3D11_DEVICE);
    uint32_t out = arg(c, 4);
    if (!dx11::span(out, 4)) {
        com_ret(c, E_POINTER);
        return;
    }
    wr32(out, 0);
    uint32_t shader = dx11::shader_kind(arg(c, 1), arg(c, 2), vertex);
    if (!dev || arg(c, 3) || !shader) {
        com_ret(c, E_FAIL);
        return;
    }
    ComIface iface = vertex ? IF_D3D11_VS : IF_D3D11_PS;
    auto *obj = dx11::create(vertex ? K_D3D11_VS : K_D3D11_PS, iface, dev->id);
    dx11::get(obj)->shader = shader;
    wr32(out, com_view(obj, iface));
    com_ret(c, S_OK);
}
void create_vs(X86 *c) {
    create_shader(c, true);
}
void create_ps(X86 *c) {
    create_shader(c, false);
}
bool semantic(uint32_t p, const char *name) {
    return dx11::span(p, strlen(name) + 1) && memcmp(gm_ptr(p), name, strlen(name) + 1) == 0;
}
void create_layout(X86 *c) {
    auto *dev = com_this_arg(c, IF_D3D11_DEVICE);
    uint32_t p = arg(c, 1), n = arg(c, 2), out = arg(c, 5);
    if (!dx11::span(out, 4)) {
        com_ret(c, E_POINTER);
        return;
    }
    wr32(out, 0);
    if (!dev || n != 2 || !dx11::span(p, 56) || !dx11::shader_kind(arg(c, 3), arg(c, 4), true)) {
        com_ret(c, E_INVALIDARG);
        return;
    }
    uint32_t offsets[2] = {}, next = 0;
    bool seen[2] = {};
    for (uint32_t i = 0; i < n; ++i) {
        D3D11_INPUT_ELEMENT_DESC e;
        read_record(p + i * 28, e);
        int j = semantic(e.SemanticName, "POSITION")   ? 0
                : semantic(e.SemanticName, "TEXCOORD") ? 1
                                                       : -1;
        if (j < 0 || seen[j] || e.SemanticIndex || e.InputSlot || e.InputSlotClass ||
            e.InstanceDataStepRate || e.Format != (j ? 16u : 6u)) {
            com_ret(c, E_INVALIDARG);
            return;
        }
        uint32_t offset = e.AlignedByteOffset == 0xffffffff ? next : e.AlignedByteOffset;
        if (offset > 2048) {
            com_ret(c, E_INVALIDARG);
            return;
        }
        offsets[j] = offset;
        next = offset + (j ? 8 : 12);
        seen[j] = true;
    }
    auto *obj = dx11::create(K_D3D11_LAYOUT, IF_D3D11_LAYOUT, dev->id);
    auto *o = dx11::get(obj);
    o->position_offset = offsets[0];
    o->texcoord_offset = offsets[1];
    wr32(out, com_view(obj, IF_D3D11_LAYOUT));
    com_ret(c, S_OK);
}
// Setters retain bound COM objects, as D3D11 does. Each binding is a host
// object id; resolving it never confuses guest addresses with native pointers.
bool bind(dx11::Object *ctx, uint32_t &slot, uint32_t ptr, ComIface iface) {
    auto *obj = ptr ? com_this(ptr, iface) : nullptr;
    auto *o = dx11::get(obj);
    if (ptr && (!o || o->device != ctx->device))
        return false;
    dx11::retain(slot, obj ? obj->id : 0);
    return true;
}
using Binding = uint32_t dx11::Object::*;
void bind_single(X86 *c, Binding field, ComIface iface, int index = 1) {
    auto *ctx = dx11::from(arg(c, 0), IF_D3D11_CONTEXT);
    com_ret(c, ctx && bind(ctx, ctx->*field, arg(c, index), iface) ? S_OK : E_INVALIDARG);
}
void bind_array(X86 *c, Binding field, ComIface iface) {
    auto *ctx = dx11::from(arg(c, 0), IF_D3D11_CONTEXT);
    uint32_t start = arg(c, 1), n = arg(c, 2), p = arg(c, 3);
    if (!ctx || start || n > 1 || (n && !dx11::span(p, 4))) {
        com_ret(c, E_INVALIDARG);
        return;
    }
    com_ret(c, !n || bind(ctx, ctx->*field, rd32(p), iface) ? S_OK : E_INVALIDARG);
}
void set_cb(X86 *c) {
    bind_array(c, &dx11::Object::cb, IF_D3D11_BUFFER);
}
void set_srv(X86 *c) {
    bind_array(c, &dx11::Object::srv, IF_D3D11_SRV);
}
void set_sampler(X86 *c) {
    bind_array(c, &dx11::Object::sampler, IF_D3D11_SAMPLER);
}
void set_vs(X86 *c) {
    if (arg(c, 3)) {
        com_ret(c, E_NOTIMPL);
        return;
    }
    bind_single(c, &dx11::Object::vs, IF_D3D11_VS);
}
void set_ps(X86 *c) {
    if (arg(c, 3)) {
        com_ret(c, E_NOTIMPL);
        return;
    }
    bind_single(c, &dx11::Object::ps, IF_D3D11_PS);
}
void set_layout(X86 *c) {
    bind_single(c, &dx11::Object::layout, IF_D3D11_LAYOUT);
}
void set_raster(X86 *c) {
    bind_single(c, &dx11::Object::raster, IF_D3D11_RASTER);
}
void set_blend(X86 *c) {
    bind_single(c, &dx11::Object::blend, IF_D3D11_BLEND);
}
void set_targets(X86 *c) {
    auto *ctx = dx11::from(arg(c, 0), IF_D3D11_CONTEXT);
    uint32_t n = arg(c, 1), p = arg(c, 2);
    if (!ctx || n > 1 || arg(c, 3) || (n && !dx11::span(p, 4))) {
        com_ret(c, E_INVALIDARG);
        return;
    }
    com_ret(c, bind(ctx, ctx->rtv, n ? rd32(p) : 0, IF_D3D11_RTV) ? S_OK : E_INVALIDARG);
}
void set_vertices(X86 *c) {
    auto *ctx = dx11::from(arg(c, 0), IF_D3D11_CONTEXT);
    if (!ctx || arg(c, 1) || arg(c, 2) != 1 || !dx11::span(arg(c, 3), 4) ||
        !dx11::span(arg(c, 4), 4) || !dx11::span(arg(c, 5), 4) ||
        !bind(ctx, ctx->vb, rd32(arg(c, 3)), IF_D3D11_BUFFER)) {
        com_ret(c, E_INVALIDARG);
        return;
    }
    ctx->stride = rd32(arg(c, 4));
    ctx->vertex_offset = rd32(arg(c, 5));
    com_ret(c, S_OK);
}
void set_indices(X86 *c) {
    auto *ctx = dx11::from(arg(c, 0), IF_D3D11_CONTEXT);
    if (!ctx || (arg(c, 2) != 57 && arg(c, 2) != 42) ||
        !bind(ctx, ctx->ib, arg(c, 1), IF_D3D11_BUFFER)) {
        com_ret(c, E_INVALIDARG);
        return;
    }
    ctx->index_format = arg(c, 2);
    ctx->index_offset = arg(c, 3);
    com_ret(c, S_OK);
}
void set_topology(X86 *c) {
    auto *ctx = dx11::from(arg(c, 0), IF_D3D11_CONTEXT);
    if (ctx)
        ctx->topology = arg(c, 1);
    com_ret(c, ctx ? S_OK : E_INVALIDARG);
}
void set_viewports(X86 *c) {
    auto *ctx = dx11::from(arg(c, 0), IF_D3D11_CONTEXT);
    D3D11_VIEWPORT vp{};
    if (!ctx || arg(c, 1) != 1 || !read_record(arg(c, 2), vp)) {
        com_ret(c, E_INVALIDARG);
        return;
    }
    float values[6];
    memcpy(values, &vp, sizeof(vp));
    for (float v : values)
        if (!std::isfinite(v)) {
            com_ret(c, E_INVALIDARG);
            return;
        }
    if (vp.Width <= 0 || vp.Height <= 0 || vp.Width > 32768 || vp.Height > 32768 ||
        std::abs(vp.TopLeftX) > 32768 || std::abs(vp.TopLeftY) > 32768) {
        com_ret(c, E_INVALIDARG);
        return;
    }
    ctx->viewport = vp;
    com_ret(c, S_OK);
}
void get_viewports(X86 *c) {
    auto *ctx = dx11::from(arg(c, 0), IF_D3D11_CONTEXT);
    uint32_t n = arg(c, 1), out = arg(c, 2);
    if (!ctx || !dx11::span(n, 4)) {
        com_ret(c, E_INVALIDARG);
        return;
    }
    uint32_t count = ctx->viewport.Width > 0 ? 1 : 0;
    if (out && rd32(n) && count) {
        if (!dx11::span(out, 24)) {
            com_ret(c, E_POINTER);
            return;
        }
        memcpy(gm_ptr(out), &ctx->viewport, 24);
    }
    wr32(n, count);
    com_ret(c, S_OK);
}
void clear_state(X86 *c) {
    auto *ctx = dx11::from(arg(c, 0), IF_D3D11_CONTEXT);
    if (!ctx) {
        com_ret(c, E_INVALIDARG);
        return;
    }
    for (Binding b :
         {&dx11::Object::rtv, &dx11::Object::srv, &dx11::Object::vb, &dx11::Object::ib,
          &dx11::Object::cb, &dx11::Object::sampler, &dx11::Object::blend, &dx11::Object::raster,
          &dx11::Object::vs, &dx11::Object::ps, &dx11::Object::layout})
        dx11::retain(ctx->*b, 0);
    ctx->viewport = {};
    ctx->topology = 0;
    com_ret(c, S_OK);
}
void resource_desc(X86 *c) {
    auto *o = dx11::get(com_this_arg(c));
    uint32_t p = arg(c, 1);
    if (!o) {
        com_ret(c, E_INVALIDARG);
        return;
    }
    const void *data = o->iface == IF_D3D11_TEXTURE  ? (const void *)&o->texture
                       : o->iface == IF_D3D11_BUFFER ? (const void *)&o->buffer
                                                     : o->desc.data();
    size_t bytes = o->iface == IF_D3D11_TEXTURE  ? sizeof(o->texture)
                   : o->iface == IF_D3D11_BUFFER ? sizeof(o->buffer)
                                                 : o->desc.size();
    if (!data || !dx11::span(p, bytes)) {
        com_ret(c, E_POINTER);
        return;
    }
    memcpy(gm_ptr(p), data, bytes);
    com_ret(c, S_OK);
}
void get_resource(X86 *c) {
    auto *o = dx11::get(com_this_arg(c));
    auto *r = o ? com_get(o->resource) : nullptr;
    uint32_t out = arg(c, 1);
    if (!r || !dx11::span(out, 4)) {
        com_ret(c, E_INVALIDARG);
        return;
    }
    com_addref(r);
    wr32(out, com_view(r, IF_D3D11_TEXTURE));
    com_ret(c, S_OK);
}
struct QuadVertex {
    double clip[4], u, v;
};
// Sample mip zero using normalized coordinates. Filtering occurs before the
// pixel shader, including before the packed-R16 decode, exactly as HLSL specifies.
std::array<float, 4> sample(const dx11::Object &tex, const D3D11_SAMPLER_DESC &s, double u,
                            double v) {
    auto address = [](int i, int size, uint32_t mode, bool &border) {
        if (mode == 1)
            return (i % size + size) % size;
        if (mode == 2) {
            int j = (i % (2 * size) + 2 * size) % (2 * size);
            return j < size ? j : 2 * size - 1 - j;
        }
        if (mode == 4 && (i < 0 || i >= size))
            border = true;
        return std::clamp(i, 0, size - 1);
    };
    // Reduce wrap/mirror coordinates before converting to an integer.
    auto normalize = [](double c, uint32_t mode) {
        if (mode == 1)
            return c - std::floor(c);
        if (mode == 2)
            return std::fmod(std::fmod(c, 2) + 2, 2);
        return std::clamp(c, -1.0, 2.0);
    };
    u = normalize(u, s.AddressU);
    v = normalize(v, s.AddressV);
    auto texel = [&](int x, int y) {
        bool border = false;
        x = address(x, tex.texture.Width, s.AddressU, border);
        y = address(y, tex.texture.Height, s.AddressV, border);
        return border ? std::array<float, 4>{s.BorderColor[0], s.BorderColor[1], s.BorderColor[2],
                                             s.BorderColor[3]}
                      : dx11::pixel(tex, x, y);
    };
    if (s.Filter == 0)
        return texel(int(std::floor(u * tex.texture.Width)),
                     int(std::floor(v * tex.texture.Height)));
    double x = u * tex.texture.Width - 0.5, y = v * tex.texture.Height - 0.5;
    int ix = int(std::floor(x)), iy = int(std::floor(y));
    float fx = float(x - ix), fy = float(y - iy);
    auto a = texel(ix, iy), b = texel(ix + 1, iy), c = texel(ix, iy + 1), d = texel(ix + 1, iy + 1);
    std::array<float, 4> out{};
    for (int i = 0; i < 4; ++i)
        out[i] = (a[i] * (1 - fx) + b[i] * fx) * (1 - fy) + (c[i] * (1 - fx) + d[i] * fx) * fy;
    return out;
}
float blend_factor(uint32_t kind, int channel, const std::array<float, 4> &src,
                   const std::array<float, 4> &dst) {
    switch (kind) {
    case 1:
        return 0;
    case 2:
        return 1;
    case 3:
        return src[channel];
    case 4:
        return 1 - src[channel];
    case 5:
        return src[3];
    case 6:
        return 1 - src[3];
    case 7:
        return dst[3];
    case 8:
        return 1 - dst[3];
    case 9:
        return dst[channel];
    case 10:
        return 1 - dst[channel];
    default:
        return 0;
    }
}
// Homogeneous clipping preserves UVs before perspective interpolation. This
// also bounds raster work when vertices lie far outside the viewport.
std::vector<QuadVertex> clip_triangle(const QuadVertex *tri) {
    std::vector<QuadVertex> polygon(tri, tri + 3);
    for (int plane = 0; plane < 6 && !polygon.empty(); ++plane) {
        auto distance = [&](const QuadVertex &v) {
            switch (plane) {
            case 0:
                return v.clip[0] + v.clip[3];
            case 1:
                return v.clip[3] - v.clip[0];
            case 2:
                return v.clip[1] + v.clip[3];
            case 3:
                return v.clip[3] - v.clip[1];
            case 4:
                return v.clip[2];
            default:
                return v.clip[3] - v.clip[2];
            }
        };
        std::vector<QuadVertex> next;
        QuadVertex a = polygon.back();
        double da = distance(a);
        for (auto b : polygon) {
            double db = distance(b);
            if ((da >= 0) != (db >= 0)) {
                double t = da / (da - db);
                QuadVertex q{};
                for (int i = 0; i < 4; ++i)
                    q.clip[i] = a.clip[i] + (b.clip[i] - a.clip[i]) * t;
                q.u = a.u + (b.u - a.u) * t;
                q.v = a.v + (b.v - a.v) * t;
                next.push_back(q);
            }
            if (db >= 0)
                next.push_back(b);
            a = b;
            da = db;
        }
        polygon = std::move(next);
    }
    return polygon;
}
struct ScreenVertex {
    double x, y, iw, u, v;
};
double edge(const ScreenVertex &a, const ScreenVertex &b, double x, double y) {
    return (b.x - a.x) * (y - a.y) - (b.y - a.y) * (x - a.x);
}
// A triangle with one 1/w at every vertex has screen-linear texture
// coordinates. When they put a texel centre under every pixel centre, in a
// four-byte format on both sides, with no blending and no packed decode, the
// shading in raster_triangle reduces to the texel itself: copy each covered
// row instead. This is the whole-surface present quad a 2D Direct3D 11
// pipeline draws every frame, which the general loop shades in tens of
// milliseconds at 1920x1080 - a 16 fps ceiling on a game that paints in one.
// The copy is taken only where the loop's own arithmetic would land on texel
// centres, and then it produces the loop's bytes.
bool copy_texel_rows(const ScreenVertex p[3], double area, int minx, int miny, int maxx, int maxy,
                     const bool tl[3], dx11::Object &target, const dx11::Object &tex,
                     const D3D11_RENDER_TARGET_BLEND_DESC &blend, uint32_t shader) {
    const uint32_t tf = tex.texture.Format, of = target.texture.Format;
    if (blend.BlendEnable || blend.RenderTargetWriteMask != 15)
        return false;
    // The packed decode reads a 16-bit word through the red channel; any
    // other pairing of shader and format is left to the loop.
    const bool packed = shader == 3;
    if (packed ? tf != 56 : !(tf == 28 || tf == 87 || tf == 85))
        return false;
    if (!(of == 28 || of == 87))
        return false;
    // How far from a texel centre the loop's own sample may fall and still
    // read the texel alone. Eight-bit channels absorb a thousandth of a texel
    // in rounding; the packed word is decoded by integer division and does
    // not, so it asks for the centre to within what double arithmetic leaves.
    const double slack = packed ? 1e-9 : 1e-3;
    const double iw = p[0].iw;
    if (std::abs(p[1].iw - iw) > 1e-9 * std::abs(iw) ||
        std::abs(p[2].iw - iw) > 1e-9 * std::abs(iw))
        return false;
    // The coordinate plane through the three vertices, in texels.
    const double dx1 = p[1].x - p[0].x, dy1 = p[1].y - p[0].y, dx2 = p[2].x - p[0].x,
                 dy2 = p[2].y - p[0].y;
    const double w = tex.texture.Width, h = tex.texture.Height;
    const double u0 = p[0].u / iw * w, du1 = p[1].u / iw * w - u0, du2 = p[2].u / iw * w - u0;
    const double v0 = p[0].v / iw * h, dv1 = p[1].v / iw * h - v0, dv2 = p[2].v / iw * h - v0;
    const double dudx = (du1 * dy2 - du2 * dy1) / area, dudy = (du2 * dx1 - du1 * dx2) / area,
                 dvdx = (dv1 * dy2 - dv2 * dy1) / area, dvdy = (dv2 * dx1 - dv1 * dx2) / area;
    // The texel under a pixel centre as the sampler computes it, less the
    // half texel that puts integers on centres. A plane is fixed by three
    // points, so when all four corners of the bounding box sit on centres by
    // one offset, every pixel between them does too.
    auto texel = [&](int x, int y, double &tx, double &ty) {
        tx = u0 + dudx * (x + 0.5 - p[0].x) + dudy * (y + 0.5 - p[0].y) - 0.5;
        ty = v0 + dvdx * (x + 0.5 - p[0].x) + dvdy * (y + 0.5 - p[0].y) - 0.5;
    };
    double tx0, ty0;
    texel(minx, miny, tx0, ty0);
    if (!std::isfinite(tx0) || !std::isfinite(ty0))
        return false;
    const long kx = std::lround(tx0) - minx, ky = std::lround(ty0) - miny;
    for (int corner = 0; corner < 4; ++corner) {
        int x = corner & 1 ? maxx : minx, y = corner & 2 ? maxy : miny;
        double tx, ty;
        texel(x, y, tx, ty);
        if (!(std::abs(tx - double(x + kx)) <= slack) ||
            !(std::abs(ty - double(y + ky)) <= slack)) {
            return false;
        }
    }
    // Inside the texture throughout, so no address mode or border applies.
    if (minx + kx < 0 || maxx + kx >= long(tex.texture.Width) || miny + ky < 0 ||
        maxy + ky >= long(tex.texture.Height))
        return false;
    auto covered = [&](int x, int y) {
        for (int i = 0; i < 3; ++i) {
            double e = edge(p[(i + 1) % 3], p[(i + 2) % 3], x + 0.5, y + 0.5);
            if (e < 0 || (e == 0 && !tl[i]))
                return false;
        }
        return true;
    };
    const bool target_bgra = of == 87;
    auto copy_row = [&](uint32_t src, uint32_t dst, uint32_t n) {
        if (tf == of)
            memmove(gm_ptr(dst), gm_ptr(src), n * 4);
        else if (packed)
            dx11::widen_row(gm_ptr(src), gm_ptr(dst), n, dx11::lut_packed(target_bgra));
        else if (tf == 85)
            dx11::widen_row(gm_ptr(src), gm_ptr(dst), n, dx11::lut565(target_bgra));
        else
            dx11::swap_row(gm_ptr(src), gm_ptr(dst), n); // the other eight-bit order
    };
    const uint32_t texel_bytes = tf == 85 || tf == 56 ? 2 : 4;
    bool copied = false;
    for (int y = miny; y <= maxy; ++y) {
        // A row's covered pixels form one run. Bound it from the edge lines,
        // then settle both ends with the loop's own coverage test.
        double lo = minx, hi = maxx;
        bool empty = false;
        for (int i = 0; i < 3 && !empty; ++i) {
            const ScreenVertex &a = p[(i + 1) % 3], &b = p[(i + 2) % 3];
            double at_min = edge(a, b, minx + 0.5, y + 0.5), slope = -(b.y - a.y);
            if (slope > 0)
                lo = std::max(lo, minx - at_min / slope);
            else if (slope < 0)
                hi = std::min(hi, minx - at_min / slope);
            else
                empty = at_min < 0 || (at_min == 0 && !tl[i]);
        }
        if (empty || !(lo <= hi + 1))
            continue;
        int xl = int(std::floor(std::clamp(lo, double(minx), double(maxx)))) - 1,
            xr = int(std::ceil(std::clamp(hi, double(minx), double(maxx)))) + 1;
        xl = std::max(xl, minx);
        xr = std::min(xr, maxx);
        while (xl <= xr && !covered(xl, y))
            ++xl;
        while (xr >= xl && !covered(xr, y))
            --xr;
        if (xl > xr)
            continue;
        copy_row(tex.data + uint32_t(y + ky) * tex.pitch + uint32_t(xl + kx) * texel_bytes,
                 target.data + uint32_t(y) * target.pitch + uint32_t(xl) * 4,
                 uint32_t(xr - xl + 1));
        copied = true;
    }
    if (copied)
        target.dirty = true;
    return true;
}
// Pixel-centre coverage uses the top-left rule: the diagonal shared by two
// quad triangles shades once, which is observable with alpha blending.
void raster_triangle(QuadVertex a, QuadVertex b, QuadVertex c, dx11::Object &target,
                     const dx11::Object &tex, const D3D11_VIEWPORT &vp,
                     const D3D11_SAMPLER_DESC &sampler, const D3D11_RENDER_TARGET_BLEND_DESC &blend,
                     const D3D11_RASTERIZER_DESC &raster, uint32_t shader) {
    auto screen = [&](const QuadVertex &v) {
        double iw = 1 / v.clip[3];
        return ScreenVertex{vp.TopLeftX + (v.clip[0] * iw + 1) * vp.Width / 2,
                            vp.TopLeftY + (1 - v.clip[1] * iw) * vp.Height / 2, iw, v.u * iw,
                            v.v * iw};
    };
    if (a.clip[3] <= 0 || b.clip[3] <= 0 || c.clip[3] <= 0)
        return;
    ScreenVertex p[3] = {screen(a), screen(b), screen(c)};
    double area = edge(p[0], p[1], p[2].x, p[2].y);
    if (area == 0 || !std::isfinite(area))
        return;
    bool front = raster.FrontCounterClockwise ? area < 0 : area > 0;
    if ((raster.CullMode == 2 && front) || (raster.CullMode == 3 && !front))
        return;
    if (area < 0) {
        std::swap(p[1], p[2]);
        area = -area;
    }
    int minx = std::max(0, int(std::ceil(std::min({p[0].x, p[1].x, p[2].x}) - 0.5)));
    int miny = std::max(0, int(std::ceil(std::min({p[0].y, p[1].y, p[2].y}) - 0.5)));
    int maxx = std::min(int(target.texture.Width) - 1,
                        int(std::floor(std::max({p[0].x, p[1].x, p[2].x}) - 0.5)));
    int maxy = std::min(int(target.texture.Height) - 1,
                        int(std::floor(std::max({p[0].y, p[1].y, p[2].y}) - 0.5)));
    auto top_left = [](const ScreenVertex &a, const ScreenVertex &b) {
        return b.y < a.y || (b.y == a.y && b.x > a.x);
    };
    bool tl[3] = {top_left(p[1], p[2]), top_left(p[2], p[0]), top_left(p[0], p[1])};
    if (copy_texel_rows(p, area, minx, miny, maxx, maxy, tl, target, tex, blend, shader))
        return;
    for (int y = miny; y <= maxy; ++y)
        for (int x = minx; x <= maxx; ++x) {
            double e[3] = {edge(p[1], p[2], x + 0.5, y + 0.5), edge(p[2], p[0], x + 0.5, y + 0.5),
                           edge(p[0], p[1], x + 0.5, y + 0.5)};
            if ((e[0] < 0 || (e[0] == 0 && !tl[0])) || (e[1] < 0 || (e[1] == 0 && !tl[1])) ||
                (e[2] < 0 || (e[2] == 0 && !tl[2])))
                continue;
            double iw = 0, u = 0, v = 0;
            for (int i = 0; i < 3; ++i) {
                double w = e[i] / area;
                iw += w * p[i].iw;
                u += w * p[i].u;
                v += w * p[i].v;
            }
            if (iw <= 0 || !std::isfinite(u) || !std::isfinite(v))
                continue;
            auto src = sample(tex, sampler, u / iw, v / iw);
            if (shader == 3) { // HLSL int conversion truncates after the normalized sample.
                int packed = int(src[0] * 65535.f);
                int blue = packed % 32;
                packed = (packed - blue) / 32;
                int green = packed % 64;
                packed = (packed - green) / 64;
                int red = packed % 32;
                src = {red / 32.f, green / 64.f, blue / 32.f, 1};
            }
            auto dst = dx11::pixel(target, x, y), out = src;
            for (int i = 0; i < 4; ++i) {
                if (blend.BlendEnable) {
                    uint32_t sf = i == 3 ? blend.SrcBlendAlpha : blend.SrcBlend,
                             df = i == 3 ? blend.DestBlendAlpha : blend.DestBlend;
                    out[i] = src[i] * blend_factor(sf, i, src, dst) +
                             dst[i] * blend_factor(df, i, src, dst);
                }
                if (!(blend.RenderTargetWriteMask & (1 << i)))
                    out[i] = dst[i];
            }
            dx11::put_pixel(target, x, y, out);
        }
}
// D3D11_BLEND (1-10) as gpu.h's factor order, which HostGpu2DQuad carries.
int gpu_factor(uint32_t d3d) {
    static const int map[11] = {1, 0, 1, 6, 7, 2, 3, 4, 5, 8, 9};
    return d3d <= 10 ? map[d3d] : 1;
}
// The hardware path. It takes a draw the GPU reproduces exactly: two
// triangles that tile an axis-aligned rectangle, at w = 1, carrying texel
// centres onto pixel centres one to one, inside the texture, in formats the
// GPU copy holds. There the sampler's filter and address mode make no
// difference and the shader is the texel itself - the draw is a copy, which
// the compositor program does. Anything else returns false and is rasterized.
bool gpu_draw(dx11::Object &target, dx11::Object &tex, const std::vector<QuadVertex> &verts,
              const D3D11_VIEWPORT &vp, const D3D11_RENDER_TARGET_BLEND_DESC &blend,
              const D3D11_RASTERIZER_DESC &raster, uint32_t shader) {
    const uint32_t tf = tex.texture.Format, of = target.texture.Format;
    const bool packed = shader == 3;
    if (!dx11::gpu_available() || !(of == 28 || of == 87) ||
        (packed ? tf != 56 : !(tf == 28 || tf == 87 || tf == 85)) || tex.host_owned ||
        target.host_refused || verts.size() != 6 || blend.RenderTargetWriteMask != 15)
        return false;
    struct Corner {
        double x, y, u, v;
    } p[6];
    for (int i = 0; i < 6; ++i) {
        const QuadVertex &q = verts[i];
        if (q.clip[3] != 1 || q.clip[2] < 0 || q.clip[2] > 1)
            return false;
        p[i] = {vp.TopLeftX + (q.clip[0] + 1) * vp.Width / 2,
                vp.TopLeftY + (1 - q.clip[1]) * vp.Height / 2, q.u, q.v};
    }
    // Neither triangle culled or degenerate, by raster_triangle's own test.
    for (int t = 0; t < 6; t += 3) {
        const double area = (p[t + 1].x - p[t].x) * (p[t + 2].y - p[t].y) -
                            (p[t + 1].y - p[t].y) * (p[t + 2].x - p[t].x);
        if (area == 0 || !std::isfinite(area))
            return false;
        const bool front = raster.FrontCounterClockwise ? area < 0 : area > 0;
        if ((raster.CullMode == 2 && front) || (raster.CullMode == 3 && !front))
            return false;
    }
    double x0 = p[0].x, x1 = p[0].x, y0 = p[0].y, y1 = p[0].y;
    for (const auto &q : p) {
        x0 = std::min(x0, q.x);
        x1 = std::max(x1, q.x);
        y0 = std::min(y0, q.y);
        y1 = std::max(y1, q.y);
    }
    if (!(x1 > x0 && y1 > y0))
        return false;
    // Each vertex on a corner (bit 0 right, bit 1 bottom), one texture
    // coordinate per corner, and the two triangles each missing one of a pair
    // of opposite corners: then they share a diagonal and tile the rectangle.
    double cu[4], cv[4];
    bool seen[4] = {};
    int missing[2] = {};
    for (int t = 0; t < 2; ++t) {
        int mask = 0;
        for (int k = 0; k < 3; ++k) {
            const Corner &q = p[3 * t + k];
            const int cx = q.x == x0 ? 0 : q.x == x1 ? 1 : -1;
            const int cy = q.y == y0 ? 0 : q.y == y1 ? 2 : -1;
            if (cx < 0 || cy < 0)
                return false;
            const int id = cx | cy;
            if (mask & (1 << id))
                return false;
            mask |= 1 << id;
            if (seen[id] && (cu[id] != q.u || cv[id] != q.v))
                return false;
            seen[id] = true;
            cu[id] = q.u;
            cv[id] = q.v;
        }
        missing[t] = __builtin_ctz(~mask & 15);
    }
    if ((missing[0] ^ missing[1]) != 3)
        return false;
    // Texture coordinates that follow the axes, a texel a pixel, on centres.
    const double tw = tex.texture.Width, th = tex.texture.Height;
    if (cu[0] != cu[2] || cu[1] != cu[3] || cv[0] != cv[1] || cv[2] != cv[3])
        return false;
    const double kx = cu[0] * tw - x0, ky = cv[0] * th - y0;
    if (std::abs((cu[1] - cu[0]) * tw - (x1 - x0)) > 1e-3 ||
        std::abs((cv[2] - cv[0]) * th - (y1 - y0)) > 1e-3 || std::abs(kx - std::round(kx)) > 1e-3 ||
        std::abs(ky - std::round(ky)) > 1e-3)
        return false;
    // What survives the viewport and the target, and the texels under it.
    const double tw_px = target.texture.Width, th_px = target.texture.Height;
    const double vx0 = std::max({x0, double(vp.TopLeftX), 0.0});
    const double vy0 = std::max({y0, double(vp.TopLeftY), 0.0});
    const double vx1 = std::min({x1, double(vp.TopLeftX) + vp.Width, tw_px});
    const double vy1 = std::min({y1, double(vp.TopLeftY) + vp.Height, th_px});
    if (!(vx1 > vx0 && vy1 > vy0))
        return true; // nothing is covered
    // The first and last pixel centres covered, by the top-left rule, and the
    // texels they read.
    const double sx = std::round(kx), sy = std::round(ky);
    const double px0 = std::ceil(vx0 - 0.5), px1 = std::ceil(vx1 - 0.5) - 1;
    const double py0 = std::ceil(vy0 - 0.5), py1 = std::ceil(vy1 - 0.5) - 1;
    if (px1 < px0 || py1 < py0)
        return true; // no pixel centre is covered
    if (sx + px0 < 0 || sy + py0 < 0 || sx + px1 > tw - 1 || sy + py1 > th - 1)
        return false;
    if (!dx11::host_sync(tex, packed))
        return false;
    // The target's own pixels matter unless this draw replaces all of them.
    const bool replaces =
        !blend.BlendEnable && vx0 <= 0 && vy0 <= 0 && vx1 >= tw_px && vy1 >= th_px;
    dx11::host_check(target);
    if (!target.host_owned && !replaces && !dx11::host_sync(target, false))
        return false;
    HostGpu2DQuad q{};
    q.x = vx0;
    q.y = vy0;
    q.w = vx1 - vx0;
    q.h = vy1 - vy0;
    q.u = (sx + vx0) / tw;
    q.v = (sy + vy0) / th;
    q.uw = q.w / tw;
    q.uh = q.h / th;
    q.blend = blend.BlendEnable ? 1 : 0;
    q.src_rgb = gpu_factor(blend.SrcBlend);
    q.dst_rgb = gpu_factor(blend.DestBlend);
    q.src_alpha = gpu_factor(blend.SrcBlendAlpha);
    q.dst_alpha = gpu_factor(blend.DestBlendAlpha);
    if (!host_gpu2d_draw(target.id, int(tw_px), int(th_px), tex.id, &q))
        return false;
    target.host_owned = true;
    dx11::host_matches(target);
    target.host_decode = 1;
    return true;
}
void draw_indexed(X86 *c) {
    auto *ctx = dx11::from(arg(c, 0), IF_D3D11_CONTEXT);
    auto object = [](uint32_t id) { return dx11::get(com_get(id)); };
    auto fail = [&]() {
        log_once("d3d11.draw", "D3D11 DrawIndexed: unsupported or incomplete 2D pipeline state");
        com_ret(c, E_FAIL);
    };
    if (!ctx) {
        fail();
        return;
    }
    auto *view = object(ctx->rtv), *srv = object(ctx->srv), *vb = object(ctx->vb),
         *ib = object(ctx->ib), *cb = object(ctx->cb), *layout = object(ctx->layout),
         *vs = object(ctx->vs), *ps = object(ctx->ps), *ss = object(ctx->sampler);
    auto *target = view ? object(view->resource) : nullptr,
         *tex = srv ? object(srv->resource) : nullptr;
    uint32_t count = arg(c, 1), start = arg(c, 2), index_size = ctx->index_format == 57 ? 2 : 4;
    if (!target || !tex || !vb || !ib || !cb || !layout || !vs || !ps || !ss || vs->shader != 1 ||
        ctx->topology != 4 || ctx->viewport.Width <= 0 || cb->bytes < 128 || !ctx->stride ||
        vb->mapped || ib->mapped || cb->mapped || tex->mapped || target->mapped || tex == target ||
        !(vb->buffer.BindFlags & 1) || !(ib->buffer.BindFlags & 2) || !(cb->buffer.BindFlags & 4) ||
        count > 1048576 || count % 3 ||
        uint64_t(ctx->index_offset) + (uint64_t(start) + count) * index_size > ib->bytes) {
        fail();
        return;
    }
    float matrices[32];
    memcpy(matrices, gm_ptr(cb->data), 128);
    for (float f : matrices)
        if (!std::isfinite(f)) {
            fail();
            return;
        }
    std::vector<QuadVertex> vertices;
    vertices.reserve(count);
    for (uint32_t i = 0; i < count; ++i) {
        uint32_t p = ib->data + ctx->index_offset + (start + i) * index_size;
        int64_t index = (index_size == 2 ? rd16(p) : rd32(p)) + int64_t(int32_t(arg(c, 3)));
        if (index < 0) {
            fail();
            return;
        }
        uint64_t offset = uint64_t(index) * ctx->stride + ctx->vertex_offset;
        if (offset + layout->position_offset + 12 > vb->bytes ||
            offset + layout->texcoord_offset + 8 > vb->bytes) {
            fail();
            return;
        }
        float position[4] = {0, 0, 0, 1}, uv[4] = {0, 0, 0, 1};
        memcpy(position, gm_ptr(vb->data + uint32_t(offset) + layout->position_offset), 12);
        memcpy(uv, gm_ptr(vb->data + uint32_t(offset) + layout->texcoord_offset), 8);
        for (float f : position)
            if (!std::isfinite(f)) {
                fail();
                return;
            }
        for (float f : uv)
            if (!std::isfinite(f)) {
                fail();
                return;
            }
        QuadVertex v{};
        float transformed[4] = {}, texcoords[4] = {};
        for (int k = 0; k < 4; ++k)
            for (int j = 0; j < 4; ++j) {
                transformed[k] += position[j] * matrices[k * 4 + j];
                texcoords[k] += uv[j] * matrices[16 + k * 4 + j];
            }
        for (int k = 0; k < 4; ++k) {
            if (!std::isfinite(transformed[k]) || !std::isfinite(texcoords[k])) {
                fail();
                return;
            }
            v.clip[k] = transformed[k];
        }
        v.u = texcoords[0];
        v.v = 1.f - texcoords[1];
        vertices.push_back(v);
    }
    D3D11_SAMPLER_DESC sampler{};
    memcpy(&sampler, ss->desc.data(), sizeof(sampler));
    D3D11_RENDER_TARGET_BLEND_DESC blend{};
    blend.RenderTargetWriteMask = 15;
    if (auto *s = object(ctx->blend))
        memcpy(&blend, s->desc.data() + 8, sizeof(blend));
    D3D11_RASTERIZER_DESC raster{};
    raster.CullMode = 1;
    if (auto *s = object(ctx->raster))
        memcpy(&raster, s->desc.data(), sizeof(raster));
    if (gpu_draw(*target, *tex, vertices, ctx->viewport, blend, raster, ps->shader)) {
        com_ret(c, S_OK);
        return;
    }
    dx11::cpu_view(*target);
    dx11::cpu_view(*tex);
    for (uint32_t i = 0; i < count; i += 3) {
        auto polygon = clip_triangle(vertices.data() + i);
        for (size_t j = 1; j + 1 < polygon.size(); ++j)
            raster_triangle(polygon[0], polygon[j], polygon[j + 1], *target, *tex, ctx->viewport,
                            sampler, blend, raster, ps->shader);
    }
    dx11::cpu_wrote(*target, 0, 0, int32_t(target->texture.Width), int32_t(target->texture.Height));
    com_ret(c, S_OK);
}

// SDK vtables include inherited slots; every unsupported entry has its own
// name, exact x86 argument count and an explicit E_NOTIMPL diagnostic.
DX_STUB(ID3D11Device_CreateTexture1D, E_NOTIMPL)
DX_STUB(ID3D11Device_CreateTexture3D, E_NOTIMPL)
DX_STUB(ID3D11Device_CreateUnorderedAccessView, E_NOTIMPL)
DX_STUB(ID3D11Device_CreateDepthStencilView, E_NOTIMPL)
DX_STUB(ID3D11Device_CreateGeometryShader, E_NOTIMPL)
DX_STUB(ID3D11Device_CreateGeometryShaderWithStreamOutput, E_NOTIMPL)
DX_STUB(ID3D11Device_CreateHullShader, E_NOTIMPL)
DX_STUB(ID3D11Device_CreateDomainShader, E_NOTIMPL)
DX_STUB(ID3D11Device_CreateComputeShader, E_NOTIMPL)
DX_STUB(ID3D11Device_CreateClassLinkage, E_NOTIMPL)
DX_STUB(ID3D11Device_CreateDepthStencilState, E_NOTIMPL)
DX_STUB(ID3D11Device_CreateQuery, E_NOTIMPL)
DX_STUB(ID3D11Device_CreatePredicate, E_NOTIMPL)
DX_STUB(ID3D11Device_CreateCounter, E_NOTIMPL)
DX_STUB(ID3D11Device_CreateDeferredContext, E_NOTIMPL)
DX_STUB(ID3D11Device_OpenSharedResource, E_NOTIMPL)
DX_STUB(ID3D11Device_CheckFormatSupport, E_NOTIMPL)
DX_STUB(ID3D11Device_CheckMultisampleQualityLevels, E_NOTIMPL)
DX_STUB(ID3D11Device_CheckCounterInfo, E_NOTIMPL)
DX_STUB(ID3D11Device_CheckCounter, E_NOTIMPL)
DX_STUB(ID3D11Device_CheckFeatureSupport, E_NOTIMPL)
DX_STUB(ID3D11Device_GetPrivateData, E_NOTIMPL)
DX_STUB(ID3D11Device_SetPrivateData, E_NOTIMPL)
DX_STUB(ID3D11Device_SetPrivateDataInterface, E_NOTIMPL)
DX_STUB(ID3D11Device_GetFeatureLevel, E_NOTIMPL)
DX_STUB(ID3D11Device_GetCreationFlags, E_NOTIMPL)
DX_STUB(ID3D11Device_GetDeviceRemovedReason, E_NOTIMPL)
DX_STUB(ID3D11Device_GetImmediateContext, E_NOTIMPL)
DX_STUB(ID3D11Device_SetExceptionMode, E_NOTIMPL)
DX_STUB(ID3D11Device_GetExceptionMode, E_NOTIMPL)
static const ComMethod ID3D11Device_methods[] = {
    {"QueryInterface", 3, com_QueryInterface},
    {"AddRef", 1, com_AddRef},
    {"Release", 1, com_Release},
    {"CreateBuffer", 4, create_buffer},
    {"CreateTexture1D", 4, ID3D11Device_CreateTexture1D},
    {"CreateTexture2D", 4, create_texture},
    {"CreateTexture3D", 4, ID3D11Device_CreateTexture3D},
    {"CreateShaderResourceView", 4, create_srv},
    {"CreateUnorderedAccessView", 4, ID3D11Device_CreateUnorderedAccessView},
    {"CreateRenderTargetView", 4, create_rtv},
    {"CreateDepthStencilView", 4, ID3D11Device_CreateDepthStencilView},
    {"CreateInputLayout", 6, create_layout},
    {"CreateVertexShader", 5, create_vs},
    {"CreateGeometryShader", 5, ID3D11Device_CreateGeometryShader},
    {"CreateGeometryShaderWithStreamOutput", 10, ID3D11Device_CreateGeometryShaderWithStreamOutput},
    {"CreatePixelShader", 5, create_ps},
    {"CreateHullShader", 5, ID3D11Device_CreateHullShader},
    {"CreateDomainShader", 5, ID3D11Device_CreateDomainShader},
    {"CreateComputeShader", 5, ID3D11Device_CreateComputeShader},
    {"CreateClassLinkage", 2, ID3D11Device_CreateClassLinkage},
    {"CreateBlendState", 3, create_blend},
    {"CreateDepthStencilState", 3, ID3D11Device_CreateDepthStencilState},
    {"CreateRasterizerState", 3, create_raster},
    {"CreateSamplerState", 3, create_sampler},
    {"CreateQuery", 3, ID3D11Device_CreateQuery},
    {"CreatePredicate", 3, ID3D11Device_CreatePredicate},
    {"CreateCounter", 3, ID3D11Device_CreateCounter},
    {"CreateDeferredContext", 3, ID3D11Device_CreateDeferredContext},
    {"OpenSharedResource", 4, ID3D11Device_OpenSharedResource},
    {"CheckFormatSupport", 3, ID3D11Device_CheckFormatSupport},
    {"CheckMultisampleQualityLevels", 4, ID3D11Device_CheckMultisampleQualityLevels},
    {"CheckCounterInfo", 2, ID3D11Device_CheckCounterInfo},
    {"CheckCounter", 10, ID3D11Device_CheckCounter},
    {"CheckFeatureSupport", 4, ID3D11Device_CheckFeatureSupport},
    {"GetPrivateData", 4, ID3D11Device_GetPrivateData},
    {"SetPrivateData", 4, ID3D11Device_SetPrivateData},
    {"SetPrivateDataInterface", 3, ID3D11Device_SetPrivateDataInterface},
    {"GetFeatureLevel", 1, ID3D11Device_GetFeatureLevel},
    {"GetCreationFlags", 1, ID3D11Device_GetCreationFlags},
    {"GetDeviceRemovedReason", 1, ID3D11Device_GetDeviceRemovedReason},
    {"GetImmediateContext", 2, ID3D11Device_GetImmediateContext},
    {"SetExceptionMode", 2, ID3D11Device_SetExceptionMode},
    {"GetExceptionMode", 1, ID3D11Device_GetExceptionMode},
};
static_assert(std::size(ID3D11Device_methods) == 43);
DX_STUB(ID3D11DeviceContext_GetPrivateData, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_SetPrivateData, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_SetPrivateDataInterface, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_Draw, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_PSSetConstantBuffers, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_DrawIndexedInstanced, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_DrawInstanced, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_GSSetConstantBuffers, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_GSSetShader, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_VSSetShaderResources, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_VSSetSamplers, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_Begin, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_End, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_GetData, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_SetPredication, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_GSSetShaderResources, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_GSSetSamplers, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_OMSetRenderTargetsAndUnorderedAccessViews, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_OMSetDepthStencilState, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_SOSetTargets, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_DrawAuto, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_DrawIndexedInstancedIndirect, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_DrawInstancedIndirect, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_Dispatch, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_DispatchIndirect, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_RSSetScissorRects, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_CopySubresourceRegion, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_CopyResource, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_CopyStructureCount, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_ClearUnorderedAccessViewUint, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_ClearUnorderedAccessViewFloat, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_ClearDepthStencilView, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_GenerateMips, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_SetResourceMinLOD, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_GetResourceMinLOD, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_ResolveSubresource, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_ExecuteCommandList, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_HSSetShaderResources, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_HSSetShader, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_HSSetSamplers, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_HSSetConstantBuffers, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_DSSetShaderResources, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_DSSetShader, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_DSSetSamplers, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_DSSetConstantBuffers, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_CSSetShaderResources, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_CSSetUnorderedAccessViews, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_CSSetShader, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_CSSetSamplers, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_CSSetConstantBuffers, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_VSGetConstantBuffers, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_PSGetShaderResources, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_PSGetShader, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_PSGetSamplers, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_VSGetShader, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_PSGetConstantBuffers, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_IAGetInputLayout, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_IAGetVertexBuffers, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_IAGetIndexBuffer, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_GSGetConstantBuffers, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_GSGetShader, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_IAGetPrimitiveTopology, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_VSGetShaderResources, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_VSGetSamplers, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_GetPredication, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_GSGetShaderResources, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_GSGetSamplers, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_OMGetRenderTargets, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_OMGetRenderTargetsAndUnorderedAccessViews, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_OMGetBlendState, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_OMGetDepthStencilState, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_SOGetTargets, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_RSGetState, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_RSGetScissorRects, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_HSGetShaderResources, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_HSGetShader, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_HSGetSamplers, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_HSGetConstantBuffers, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_DSGetShaderResources, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_DSGetShader, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_DSGetSamplers, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_DSGetConstantBuffers, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_CSGetShaderResources, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_CSGetUnorderedAccessViews, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_CSGetShader, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_CSGetSamplers, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_CSGetConstantBuffers, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_Flush, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_GetType, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_GetContextFlags, E_NOTIMPL)
DX_STUB(ID3D11DeviceContext_FinishCommandList, E_NOTIMPL)
static const ComMethod ID3D11DeviceContext_methods[] = {
    {"QueryInterface", 3, com_QueryInterface},
    {"AddRef", 1, com_AddRef},
    {"Release", 1, com_Release},
    {"GetDevice", 2, dx11::get_device},
    {"GetPrivateData", 4, ID3D11DeviceContext_GetPrivateData},
    {"SetPrivateData", 4, ID3D11DeviceContext_SetPrivateData},
    {"SetPrivateDataInterface", 3, ID3D11DeviceContext_SetPrivateDataInterface},
    {"VSSetConstantBuffers", 4, set_cb},
    {"PSSetShaderResources", 4, set_srv},
    {"PSSetShader", 4, set_ps},
    {"PSSetSamplers", 4, set_sampler},
    {"VSSetShader", 4, set_vs},
    {"DrawIndexed", 4, draw_indexed},
    {"Draw", 3, ID3D11DeviceContext_Draw},
    {"Map", 6, map_resource},
    {"Unmap", 3, unmap_resource},
    {"PSSetConstantBuffers", 4, ID3D11DeviceContext_PSSetConstantBuffers},
    {"IASetInputLayout", 2, set_layout},
    {"IASetVertexBuffers", 6, set_vertices},
    {"IASetIndexBuffer", 4, set_indices},
    {"DrawIndexedInstanced", 6, ID3D11DeviceContext_DrawIndexedInstanced},
    {"DrawInstanced", 5, ID3D11DeviceContext_DrawInstanced},
    {"GSSetConstantBuffers", 4, ID3D11DeviceContext_GSSetConstantBuffers},
    {"GSSetShader", 4, ID3D11DeviceContext_GSSetShader},
    {"IASetPrimitiveTopology", 2, set_topology},
    {"VSSetShaderResources", 4, ID3D11DeviceContext_VSSetShaderResources},
    {"VSSetSamplers", 4, ID3D11DeviceContext_VSSetSamplers},
    {"Begin", 2, ID3D11DeviceContext_Begin},
    {"End", 2, ID3D11DeviceContext_End},
    {"GetData", 5, ID3D11DeviceContext_GetData},
    {"SetPredication", 3, ID3D11DeviceContext_SetPredication},
    {"GSSetShaderResources", 4, ID3D11DeviceContext_GSSetShaderResources},
    {"GSSetSamplers", 4, ID3D11DeviceContext_GSSetSamplers},
    {"OMSetRenderTargets", 4, set_targets},
    {"OMSetRenderTargetsAndUnorderedAccessViews", 8,
     ID3D11DeviceContext_OMSetRenderTargetsAndUnorderedAccessViews},
    {"OMSetBlendState", 4, set_blend},
    {"OMSetDepthStencilState", 3, ID3D11DeviceContext_OMSetDepthStencilState},
    {"SOSetTargets", 4, ID3D11DeviceContext_SOSetTargets},
    {"DrawAuto", 1, ID3D11DeviceContext_DrawAuto},
    {"DrawIndexedInstancedIndirect", 3, ID3D11DeviceContext_DrawIndexedInstancedIndirect},
    {"DrawInstancedIndirect", 3, ID3D11DeviceContext_DrawInstancedIndirect},
    {"Dispatch", 4, ID3D11DeviceContext_Dispatch},
    {"DispatchIndirect", 3, ID3D11DeviceContext_DispatchIndirect},
    {"RSSetState", 2, set_raster},
    {"RSSetViewports", 3, set_viewports},
    {"RSSetScissorRects", 3, ID3D11DeviceContext_RSSetScissorRects},
    {"CopySubresourceRegion", 9, ID3D11DeviceContext_CopySubresourceRegion},
    {"CopyResource", 3, ID3D11DeviceContext_CopyResource},
    {"UpdateSubresource", 7, update_resource},
    {"CopyStructureCount", 4, ID3D11DeviceContext_CopyStructureCount},
    {"ClearRenderTargetView", 3, clear_rtv},
    {"ClearUnorderedAccessViewUint", 3, ID3D11DeviceContext_ClearUnorderedAccessViewUint},
    {"ClearUnorderedAccessViewFloat", 3, ID3D11DeviceContext_ClearUnorderedAccessViewFloat},
    {"ClearDepthStencilView", 5, ID3D11DeviceContext_ClearDepthStencilView},
    {"GenerateMips", 2, ID3D11DeviceContext_GenerateMips},
    {"SetResourceMinLOD", 3, ID3D11DeviceContext_SetResourceMinLOD},
    {"GetResourceMinLOD", 2, ID3D11DeviceContext_GetResourceMinLOD},
    {"ResolveSubresource", 6, ID3D11DeviceContext_ResolveSubresource},
    {"ExecuteCommandList", 3, ID3D11DeviceContext_ExecuteCommandList},
    {"HSSetShaderResources", 4, ID3D11DeviceContext_HSSetShaderResources},
    {"HSSetShader", 4, ID3D11DeviceContext_HSSetShader},
    {"HSSetSamplers", 4, ID3D11DeviceContext_HSSetSamplers},
    {"HSSetConstantBuffers", 4, ID3D11DeviceContext_HSSetConstantBuffers},
    {"DSSetShaderResources", 4, ID3D11DeviceContext_DSSetShaderResources},
    {"DSSetShader", 4, ID3D11DeviceContext_DSSetShader},
    {"DSSetSamplers", 4, ID3D11DeviceContext_DSSetSamplers},
    {"DSSetConstantBuffers", 4, ID3D11DeviceContext_DSSetConstantBuffers},
    {"CSSetShaderResources", 4, ID3D11DeviceContext_CSSetShaderResources},
    {"CSSetUnorderedAccessViews", 5, ID3D11DeviceContext_CSSetUnorderedAccessViews},
    {"CSSetShader", 4, ID3D11DeviceContext_CSSetShader},
    {"CSSetSamplers", 4, ID3D11DeviceContext_CSSetSamplers},
    {"CSSetConstantBuffers", 4, ID3D11DeviceContext_CSSetConstantBuffers},
    {"VSGetConstantBuffers", 4, ID3D11DeviceContext_VSGetConstantBuffers},
    {"PSGetShaderResources", 4, ID3D11DeviceContext_PSGetShaderResources},
    {"PSGetShader", 4, ID3D11DeviceContext_PSGetShader},
    {"PSGetSamplers", 4, ID3D11DeviceContext_PSGetSamplers},
    {"VSGetShader", 4, ID3D11DeviceContext_VSGetShader},
    {"PSGetConstantBuffers", 4, ID3D11DeviceContext_PSGetConstantBuffers},
    {"IAGetInputLayout", 2, ID3D11DeviceContext_IAGetInputLayout},
    {"IAGetVertexBuffers", 6, ID3D11DeviceContext_IAGetVertexBuffers},
    {"IAGetIndexBuffer", 4, ID3D11DeviceContext_IAGetIndexBuffer},
    {"GSGetConstantBuffers", 4, ID3D11DeviceContext_GSGetConstantBuffers},
    {"GSGetShader", 4, ID3D11DeviceContext_GSGetShader},
    {"IAGetPrimitiveTopology", 2, ID3D11DeviceContext_IAGetPrimitiveTopology},
    {"VSGetShaderResources", 4, ID3D11DeviceContext_VSGetShaderResources},
    {"VSGetSamplers", 4, ID3D11DeviceContext_VSGetSamplers},
    {"GetPredication", 3, ID3D11DeviceContext_GetPredication},
    {"GSGetShaderResources", 4, ID3D11DeviceContext_GSGetShaderResources},
    {"GSGetSamplers", 4, ID3D11DeviceContext_GSGetSamplers},
    {"OMGetRenderTargets", 4, ID3D11DeviceContext_OMGetRenderTargets},
    {"OMGetRenderTargetsAndUnorderedAccessViews", 7,
     ID3D11DeviceContext_OMGetRenderTargetsAndUnorderedAccessViews},
    {"OMGetBlendState", 4, ID3D11DeviceContext_OMGetBlendState},
    {"OMGetDepthStencilState", 3, ID3D11DeviceContext_OMGetDepthStencilState},
    {"SOGetTargets", 3, ID3D11DeviceContext_SOGetTargets},
    {"RSGetState", 2, ID3D11DeviceContext_RSGetState},
    {"RSGetViewports", 3, get_viewports},
    {"RSGetScissorRects", 3, ID3D11DeviceContext_RSGetScissorRects},
    {"HSGetShaderResources", 4, ID3D11DeviceContext_HSGetShaderResources},
    {"HSGetShader", 4, ID3D11DeviceContext_HSGetShader},
    {"HSGetSamplers", 4, ID3D11DeviceContext_HSGetSamplers},
    {"HSGetConstantBuffers", 4, ID3D11DeviceContext_HSGetConstantBuffers},
    {"DSGetShaderResources", 4, ID3D11DeviceContext_DSGetShaderResources},
    {"DSGetShader", 4, ID3D11DeviceContext_DSGetShader},
    {"DSGetSamplers", 4, ID3D11DeviceContext_DSGetSamplers},
    {"DSGetConstantBuffers", 4, ID3D11DeviceContext_DSGetConstantBuffers},
    {"CSGetShaderResources", 4, ID3D11DeviceContext_CSGetShaderResources},
    {"CSGetUnorderedAccessViews", 4, ID3D11DeviceContext_CSGetUnorderedAccessViews},
    {"CSGetShader", 4, ID3D11DeviceContext_CSGetShader},
    {"CSGetSamplers", 4, ID3D11DeviceContext_CSGetSamplers},
    {"CSGetConstantBuffers", 4, ID3D11DeviceContext_CSGetConstantBuffers},
    {"ClearState", 1, clear_state},
    {"Flush", 1, ID3D11DeviceContext_Flush},
    {"GetType", 1, ID3D11DeviceContext_GetType},
    {"GetContextFlags", 1, ID3D11DeviceContext_GetContextFlags},
    {"FinishCommandList", 3, ID3D11DeviceContext_FinishCommandList},
};
static_assert(std::size(ID3D11DeviceContext_methods) == 115);
DX_STUB(ID3D11Texture2D_GetPrivateData, E_NOTIMPL)
DX_STUB(ID3D11Texture2D_SetPrivateData, E_NOTIMPL)
DX_STUB(ID3D11Texture2D_SetPrivateDataInterface, E_NOTIMPL)
DX_STUB(ID3D11Texture2D_GetType, E_NOTIMPL)
DX_STUB(ID3D11Texture2D_SetEvictionPriority, E_NOTIMPL)
DX_STUB(ID3D11Texture2D_GetEvictionPriority, E_NOTIMPL)
static const ComMethod ID3D11Texture2D_methods[] = {
    {"QueryInterface", 3, com_QueryInterface},
    {"AddRef", 1, com_AddRef},
    {"Release", 1, com_Release},
    {"GetDevice", 2, dx11::get_device},
    {"GetPrivateData", 4, ID3D11Texture2D_GetPrivateData},
    {"SetPrivateData", 4, ID3D11Texture2D_SetPrivateData},
    {"SetPrivateDataInterface", 3, ID3D11Texture2D_SetPrivateDataInterface},
    {"GetType", 2, ID3D11Texture2D_GetType},
    {"SetEvictionPriority", 2, ID3D11Texture2D_SetEvictionPriority},
    {"GetEvictionPriority", 1, ID3D11Texture2D_GetEvictionPriority},
    {"GetDesc", 2, resource_desc},
};
static_assert(std::size(ID3D11Texture2D_methods) == 11);
DX_STUB(ID3D11Buffer_GetPrivateData, E_NOTIMPL)
DX_STUB(ID3D11Buffer_SetPrivateData, E_NOTIMPL)
DX_STUB(ID3D11Buffer_SetPrivateDataInterface, E_NOTIMPL)
DX_STUB(ID3D11Buffer_GetType, E_NOTIMPL)
DX_STUB(ID3D11Buffer_SetEvictionPriority, E_NOTIMPL)
DX_STUB(ID3D11Buffer_GetEvictionPriority, E_NOTIMPL)
static const ComMethod ID3D11Buffer_methods[] = {
    {"QueryInterface", 3, com_QueryInterface},
    {"AddRef", 1, com_AddRef},
    {"Release", 1, com_Release},
    {"GetDevice", 2, dx11::get_device},
    {"GetPrivateData", 4, ID3D11Buffer_GetPrivateData},
    {"SetPrivateData", 4, ID3D11Buffer_SetPrivateData},
    {"SetPrivateDataInterface", 3, ID3D11Buffer_SetPrivateDataInterface},
    {"GetType", 2, ID3D11Buffer_GetType},
    {"SetEvictionPriority", 2, ID3D11Buffer_SetEvictionPriority},
    {"GetEvictionPriority", 1, ID3D11Buffer_GetEvictionPriority},
    {"GetDesc", 2, resource_desc},
};
static_assert(std::size(ID3D11Buffer_methods) == 11);
DX_STUB(ID3D11ShaderResourceView_GetPrivateData, E_NOTIMPL)
DX_STUB(ID3D11ShaderResourceView_SetPrivateData, E_NOTIMPL)
DX_STUB(ID3D11ShaderResourceView_SetPrivateDataInterface, E_NOTIMPL)
DX_STUB(ID3D11ShaderResourceView_GetDesc, E_NOTIMPL)
static const ComMethod ID3D11ShaderResourceView_methods[] = {
    {"QueryInterface", 3, com_QueryInterface},
    {"AddRef", 1, com_AddRef},
    {"Release", 1, com_Release},
    {"GetDevice", 2, dx11::get_device},
    {"GetPrivateData", 4, ID3D11ShaderResourceView_GetPrivateData},
    {"SetPrivateData", 4, ID3D11ShaderResourceView_SetPrivateData},
    {"SetPrivateDataInterface", 3, ID3D11ShaderResourceView_SetPrivateDataInterface},
    {"GetResource", 2, get_resource},
    {"GetDesc", 2, ID3D11ShaderResourceView_GetDesc},
};
static_assert(std::size(ID3D11ShaderResourceView_methods) == 9);
DX_STUB(ID3D11RenderTargetView_GetPrivateData, E_NOTIMPL)
DX_STUB(ID3D11RenderTargetView_SetPrivateData, E_NOTIMPL)
DX_STUB(ID3D11RenderTargetView_SetPrivateDataInterface, E_NOTIMPL)
DX_STUB(ID3D11RenderTargetView_GetDesc, E_NOTIMPL)
static const ComMethod ID3D11RenderTargetView_methods[] = {
    {"QueryInterface", 3, com_QueryInterface},
    {"AddRef", 1, com_AddRef},
    {"Release", 1, com_Release},
    {"GetDevice", 2, dx11::get_device},
    {"GetPrivateData", 4, ID3D11RenderTargetView_GetPrivateData},
    {"SetPrivateData", 4, ID3D11RenderTargetView_SetPrivateData},
    {"SetPrivateDataInterface", 3, ID3D11RenderTargetView_SetPrivateDataInterface},
    {"GetResource", 2, get_resource},
    {"GetDesc", 2, ID3D11RenderTargetView_GetDesc},
};
static_assert(std::size(ID3D11RenderTargetView_methods) == 9);
DX_STUB(ID3D11SamplerState_GetPrivateData, E_NOTIMPL)
DX_STUB(ID3D11SamplerState_SetPrivateData, E_NOTIMPL)
DX_STUB(ID3D11SamplerState_SetPrivateDataInterface, E_NOTIMPL)
static const ComMethod ID3D11SamplerState_methods[] = {
    {"QueryInterface", 3, com_QueryInterface},
    {"AddRef", 1, com_AddRef},
    {"Release", 1, com_Release},
    {"GetDevice", 2, dx11::get_device},
    {"GetPrivateData", 4, ID3D11SamplerState_GetPrivateData},
    {"SetPrivateData", 4, ID3D11SamplerState_SetPrivateData},
    {"SetPrivateDataInterface", 3, ID3D11SamplerState_SetPrivateDataInterface},
    {"GetDesc", 2, resource_desc},
};
static_assert(std::size(ID3D11SamplerState_methods) == 8);
DX_STUB(ID3D11BlendState_GetPrivateData, E_NOTIMPL)
DX_STUB(ID3D11BlendState_SetPrivateData, E_NOTIMPL)
DX_STUB(ID3D11BlendState_SetPrivateDataInterface, E_NOTIMPL)
static const ComMethod ID3D11BlendState_methods[] = {
    {"QueryInterface", 3, com_QueryInterface},
    {"AddRef", 1, com_AddRef},
    {"Release", 1, com_Release},
    {"GetDevice", 2, dx11::get_device},
    {"GetPrivateData", 4, ID3D11BlendState_GetPrivateData},
    {"SetPrivateData", 4, ID3D11BlendState_SetPrivateData},
    {"SetPrivateDataInterface", 3, ID3D11BlendState_SetPrivateDataInterface},
    {"GetDesc", 2, resource_desc},
};
static_assert(std::size(ID3D11BlendState_methods) == 8);
DX_STUB(ID3D11RasterizerState_GetPrivateData, E_NOTIMPL)
DX_STUB(ID3D11RasterizerState_SetPrivateData, E_NOTIMPL)
DX_STUB(ID3D11RasterizerState_SetPrivateDataInterface, E_NOTIMPL)
static const ComMethod ID3D11RasterizerState_methods[] = {
    {"QueryInterface", 3, com_QueryInterface},
    {"AddRef", 1, com_AddRef},
    {"Release", 1, com_Release},
    {"GetDevice", 2, dx11::get_device},
    {"GetPrivateData", 4, ID3D11RasterizerState_GetPrivateData},
    {"SetPrivateData", 4, ID3D11RasterizerState_SetPrivateData},
    {"SetPrivateDataInterface", 3, ID3D11RasterizerState_SetPrivateDataInterface},
    {"GetDesc", 2, resource_desc},
};
static_assert(std::size(ID3D11RasterizerState_methods) == 8);
DX_STUB(ID3D11VertexShader_GetPrivateData, E_NOTIMPL)
DX_STUB(ID3D11VertexShader_SetPrivateData, E_NOTIMPL)
DX_STUB(ID3D11VertexShader_SetPrivateDataInterface, E_NOTIMPL)
static const ComMethod ID3D11VertexShader_methods[] = {
    {"QueryInterface", 3, com_QueryInterface},
    {"AddRef", 1, com_AddRef},
    {"Release", 1, com_Release},
    {"GetDevice", 2, dx11::get_device},
    {"GetPrivateData", 4, ID3D11VertexShader_GetPrivateData},
    {"SetPrivateData", 4, ID3D11VertexShader_SetPrivateData},
    {"SetPrivateDataInterface", 3, ID3D11VertexShader_SetPrivateDataInterface},
};
static_assert(std::size(ID3D11VertexShader_methods) == 7);
DX_STUB(ID3D11PixelShader_GetPrivateData, E_NOTIMPL)
DX_STUB(ID3D11PixelShader_SetPrivateData, E_NOTIMPL)
DX_STUB(ID3D11PixelShader_SetPrivateDataInterface, E_NOTIMPL)
static const ComMethod ID3D11PixelShader_methods[] = {
    {"QueryInterface", 3, com_QueryInterface},
    {"AddRef", 1, com_AddRef},
    {"Release", 1, com_Release},
    {"GetDevice", 2, dx11::get_device},
    {"GetPrivateData", 4, ID3D11PixelShader_GetPrivateData},
    {"SetPrivateData", 4, ID3D11PixelShader_SetPrivateData},
    {"SetPrivateDataInterface", 3, ID3D11PixelShader_SetPrivateDataInterface},
};
static_assert(std::size(ID3D11PixelShader_methods) == 7);
DX_STUB(ID3D11InputLayout_GetPrivateData, E_NOTIMPL)
DX_STUB(ID3D11InputLayout_SetPrivateData, E_NOTIMPL)
DX_STUB(ID3D11InputLayout_SetPrivateDataInterface, E_NOTIMPL)
static const ComMethod ID3D11InputLayout_methods[] = {
    {"QueryInterface", 3, com_QueryInterface},
    {"AddRef", 1, com_AddRef},
    {"Release", 1, com_Release},
    {"GetDevice", 2, dx11::get_device},
    {"GetPrivateData", 4, ID3D11InputLayout_GetPrivateData},
    {"SetPrivateData", 4, ID3D11InputLayout_SetPrivateData},
    {"SetPrivateDataInterface", 3, ID3D11InputLayout_SetPrivateDataInterface},
};
static_assert(std::size(ID3D11InputLayout_methods) == 7);
} // namespace
void d3d11_register() {
    dx11::define(IF_D3D11_DEVICE, K_D3D11_DEVICE, "d3d11.dll", "ID3D11Device", ID3D11Device_methods,
                 std::size(ID3D11Device_methods), "db6f6ddb-ac77-4e88-8253-819df9bbf140");
    dx11::define(IF_D3D11_CONTEXT, K_D3D11_CONTEXT, "d3d11.dll", "ID3D11DeviceContext",
                 ID3D11DeviceContext_methods, std::size(ID3D11DeviceContext_methods),
                 "c0bfa96c-e089-44fb-8eaf-26f8796190da");
    dx11::define(IF_D3D11_TEXTURE, K_D3D11_TEXTURE, "d3d11.dll", "ID3D11Texture2D",
                 ID3D11Texture2D_methods, std::size(ID3D11Texture2D_methods),
                 "6f15aaf2-d208-4e89-9ab4-489535d34f9c");
    dx11::define(IF_D3D11_BUFFER, K_D3D11_BUFFER, "d3d11.dll", "ID3D11Buffer", ID3D11Buffer_methods,
                 std::size(ID3D11Buffer_methods), "48570b85-d1ee-4fcd-a250-eb350722b037");
    dx11::define(IF_D3D11_SRV, K_D3D11_SRV, "d3d11.dll", "ID3D11ShaderResourceView",
                 ID3D11ShaderResourceView_methods, std::size(ID3D11ShaderResourceView_methods),
                 "b0e06fe0-8192-4e1a-b1ca-36d7414710b2");
    dx11::define(IF_D3D11_RTV, K_D3D11_RTV, "d3d11.dll", "ID3D11RenderTargetView",
                 ID3D11RenderTargetView_methods, std::size(ID3D11RenderTargetView_methods),
                 "dfdba067-0b8d-4865-875b-d7b4516cc164");
    dx11::define(IF_D3D11_SAMPLER, K_D3D11_SAMPLER, "d3d11.dll", "ID3D11SamplerState",
                 ID3D11SamplerState_methods, std::size(ID3D11SamplerState_methods),
                 "da6fea51-564c-4487-9810-f0d0f9b4e3a5");
    dx11::define(IF_D3D11_BLEND, K_D3D11_BLEND, "d3d11.dll", "ID3D11BlendState",
                 ID3D11BlendState_methods, std::size(ID3D11BlendState_methods),
                 "75b68faa-347d-4159-8f45-a0640f01cd9a");
    dx11::define(IF_D3D11_RASTER, K_D3D11_RASTER, "d3d11.dll", "ID3D11RasterizerState",
                 ID3D11RasterizerState_methods, std::size(ID3D11RasterizerState_methods),
                 "9bb4ab81-ab1a-4d8f-b506-fc04200b6ee7");
    dx11::define(IF_D3D11_VS, K_D3D11_VS, "d3d11.dll", "ID3D11VertexShader",
                 ID3D11VertexShader_methods, std::size(ID3D11VertexShader_methods),
                 "3b301d64-d678-4289-8897-22f8928b72f3");
    dx11::define(IF_D3D11_PS, K_D3D11_PS, "d3d11.dll", "ID3D11PixelShader",
                 ID3D11PixelShader_methods, std::size(ID3D11PixelShader_methods),
                 "ea82e40d-51dc-4f33-93d4-db7c9125ae8c");
    dx11::define(IF_D3D11_LAYOUT, K_D3D11_LAYOUT, "d3d11.dll", "ID3D11InputLayout",
                 ID3D11InputLayout_methods, std::size(ID3D11InputLayout_methods),
                 "e4819ddc-4cf0-4025-bd26-5de82a3e07b7");
    static const ImportShim shims[] = {
        {"d3d11.dll", "D3D11CreateDeviceAndSwapChain", 12, create_device}};
    imports_register(shims, std::size(shims));
}
