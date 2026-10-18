// Guest GDI objects, DC state and shared DIB/window pixel access.
#include "imports.h"
#include "gdi_image.h"
#include "gdi32_internal.h"
#include <cstdlib>
#include "user32_internal.h"
#include "display_seam.h"
#include <climits>
#include <algorithm>
#include "memory.h"
#include "win32.h"
#include "../platform/os.h"

#include <map>
#include <string.h>
#include <vector>

namespace {
struct PresentedSurface {
    uint32_t owner = 0, hwnd = 0;
    int w = 0, h = 0;
    bool fullscreen = false;
    uint64_t last_present_ns = 0;
    std::vector<uint32_t> pixels;
    // A presenter whose frame is on the GPU: the pixels are fetched only when
    // something has to be composed with them.
    bool (*fetch)(uint32_t owner, uint32_t *argb, int w, int h) = nullptr;
};
PresentedSurface &presented_surface() {
    static PresentedSurface value;
    return value;
}
bool surface_owns_screen() {
    auto &s = presented_surface();
    return s.owner && (s.fullscreen || !s.hwnd);
}
} // namespace

// Like the runtime's other weak host hooks, this keeps runtime-only binaries
// independent of DX. A linked DirectDraw shim supplies the accepted mode.
extern "C" __attribute__((weak)) bool ddraw_display_mode(uint32_t *, uint32_t *, uint32_t *) {
    return false;
}
// The same for a DXGI swap chain that went fullscreen: it changes the mode the
// desktop is in, and a guest that asks USER32 what the screen is has to be told,
// or it lays its windows out on the mode before the switch.
extern "C" __attribute__((weak)) bool dxgi_display_mode(uint32_t *, uint32_t *, uint32_t *) {
    return false;
}
// A media session playing video owns the screen. Its frames go straight to the
// host, and the game keeps drawing its own window behind them - far more often
// than a movie has frames - so compositing both would show the game's picture
// with the movie flickering underneath. Weak like the hooks above, so a
// runtime-only binary still links without dx/.
extern "C" __attribute__((weak)) bool mf_owns_the_screen() {
    return false;
}
// One virtual screen is shared by USER32 metrics, GDI captures and host input.
// A selected DirectDraw mode takes precedence over the smoke desktop size.
void win32_display_mode(uint32_t *w, uint32_t *h, uint32_t *bpp) {
    if (surface_owns_screen()) {
        auto &s = presented_surface();
        *w = s.w;
        *h = s.h;
        *bpp = 32;
        return;
    }
    // A fullscreen swap chain is the latest word on what mode the display is
    // in; releasing it leaves the DirectDraw mode in charge again.
    if (dxgi_display_mode(w, h, bpp))
        return;
    if (ddraw_display_mode(w, h, bpp))
        return;
    *w = 1024;
    *h = 768;
    *bpp = 32;
    if (const char *size = recomp_env("SMOKE_DRAWABLE")) {
        int width = 0, height = 0;
        char trailing = 0;
        if (sscanf(size, "%dx%d%c", &width, &height, &trailing) == 2 && width > 0 && height > 0 &&
            width <= 16384 && height <= 16384) {
            *w = uint32_t(width);
            *h = uint32_t(height);
        }
    }
}
// Runtime-only hosts offer their fallback desktop as a single mode. Linking
// DirectDraw replaces this with its full, configurable supported-mode table.
extern "C" __attribute__((weak)) bool ddraw_enum_display_mode(uint32_t index, uint32_t *w,
                                                              uint32_t *h, uint32_t *bpp) {
    if (index != 0)
        return false;
    win32_display_mode(w, h, bpp);
    return true;
}

using namespace gdi;
namespace {

struct Dib {
    int32_t width = 0, height = 0; // height as created: negative is top-down
    uint16_t bpp = 0;
    uint32_t stride = 0;
    uint32_t bits = 0; // guest address of the pixel rows
    uint32_t size = 0;
    uint32_t compression = 0;
    bool owned = true;
    uint32_t masks[3] = {0, 0, 0};
    std::vector<uint32_t> colors; // RGBQUADs for bpp <= 8
};

struct Palette {
    std::vector<uint32_t> entries; // PALETTEENTRYs
};

// Pseudo handles: bitmaps, palettes and memory DCs each in their own run,
// outside every mapped guest region and apart from user32's DCs.
constexpr uint32_t BITMAP_HANDLE_BASE = 0x00050000u;
constexpr uint32_t PALETTE_HANDLE_BASE = 0x00058000u;
constexpr uint32_t DC_HANDLE_BASE = 0x00060000u;
constexpr uint32_t DEFAULT_BITMAP = 0x0004f001u;  // what SelectObject reports as "previous"
constexpr uint32_t DEFAULT_PALETTE = 0x0004f002u; // the system palette handle
constexpr uint32_t TEXT_HEIGHT = 16;
constexpr uint32_t TEXT_AVERAGE_CHAR_WIDTH = 7;

uint32_t g_next_bitmap = BITMAP_HANDLE_BASE;
uint32_t g_next_palette = PALETTE_HANDLE_BASE;
uint32_t g_next_dc = DC_HANDLE_BASE;

std::map<uint32_t, Dib> &dibs() {
    static std::map<uint32_t, Dib> m;
    return m;
}
std::map<uint32_t, Palette> &palettes() {
    static std::map<uint32_t, Palette> m;
    return m;
}
Dib *dib_of(uint32_t handle) {
    auto it = dibs().find(handle);
    return it == dibs().end() ? nullptr : &it->second;
}
Dib *dib_in_dc(uint32_t hdc) {
    auto it = dcs().find(hdc);
    return it == dcs().end() ? nullptr : dib_of(it->second.bitmap);
}

uint32_t dib_stride(int32_t width, uint32_t bpp) {
    return ((uint32_t)width * bpp + 31u) / 32u * 4u;
}

uint32_t make_dib(int32_t width, int32_t height, uint16_t bpp, uint32_t compression,
                  uint32_t bits_out) {
    int64_t rows64 = height < 0 ? -int64_t(height) : height;
    uint64_t stride64 = ((uint64_t(uint32_t(width)) * bpp + 31) / 32) * 4;
    if (width <= 0 || rows64 <= 0 || stride64 * rows64 > GUEST_SIZE / 4)
        return 0;
    Dib d;
    d.width = width;
    d.height = height;
    d.bpp = bpp;
    d.compression = compression;
    d.stride = dib_stride(width, bpp);
    uint32_t rows = (uint32_t)(height < 0 ? -height : height);
    d.size = d.stride * rows;
    // A section is page granular on Windows and the game may assume the
    // alignment; zeroed, as fresh section pages are.
    d.bits = d.size ? heap_alloc(d.size, true, 4096) : 0;
    if (d.size && !d.bits)
        return 0;
    uint32_t handle = g_next_bitmap++;
    if (bits_out)
        wr32(bits_out, d.bits);
    dibs()[handle] = d;
    return handle;
}

} // namespace

namespace {
// Convert the existing DIB representation to the common controls' 32-bpp
// snapshot. Handle row orientation and palette/bitfield formats here once.
bool snapshot_dib(const Dib &d, GdiImage *image, bool preserve_alpha = false) {
    int64_t height = d.height < 0 ? -int64_t(d.height) : d.height;
    if (d.width <= 0 || height <= 0 || uint64_t(d.width) * height > GUEST_SIZE / 4 ||
        !gm_valid(d.bits, d.size))
        return false;
    GdiImage result;
    result.width = d.width;
    result.height = int32_t(height);
    result.pixels.resize(size_t(d.width) * size_t(height));
    bool alpha = false;
    auto component = [](uint32_t pixel, uint32_t mask) -> uint32_t {
        if (!mask)
            return 0;
        while (!(mask & 1)) {
            mask >>= 1;
            pixel >>= 1;
        }
        return uint32_t(uint64_t(pixel & mask) * 255 / mask);
    };
    for (int32_t y = 0; y < height; ++y) {
        uint32_t row = d.bits + uint32_t(d.height > 0 ? height - 1 - y : y) * d.stride;
        for (int32_t x = 0; x < d.width; ++x) {
            uint32_t pixel = 0;
            if (d.bpp <= 8) {
                uint32_t index = d.bpp == 1   ? (rd8(row + x / 8) >> (7 - x % 8)) & 1
                                 : d.bpp == 4 ? (rd8(row + x / 2) >> (x % 2 ? 0 : 4)) & 15
                                              : rd8(row + x);
                pixel = index < d.colors.size() ? d.colors[index] & 0xffffff : index ? 0xffffff : 0;
            } else if (d.bpp == 16) {
                uint32_t v = rd16(row + x * 2);
                pixel = component(v, d.masks[0] ? d.masks[0] : 0x7c00) << 16 |
                        component(v, d.masks[1] ? d.masks[1] : 0x03e0) << 8 |
                        component(v, d.masks[2] ? d.masks[2] : 0x001f);
            } else if (d.bpp == 24) {
                uint32_t at = row + x * 3;
                pixel = rd8(at) | rd8(at + 1) << 8 | rd8(at + 2) << 16;
            } else if (d.bpp == 32) {
                pixel = rd32(row + x * 4);
                alpha |= (pixel >> 24) != 0;
            } else
                return false;
            result.pixels[size_t(y) * d.width + x] = pixel;
        }
    }
    // Legacy RGB bitmaps leave the reserved byte zero. Only treat alpha as
    // meaningful when at least one pixel supplies it.
    if (!alpha && !preserve_alpha)
        for (auto &p : result.pixels)
            p |= 0xff000000;
    *image = std::move(result);
    return true;
}
std::map<uint32_t, GdiImage> &icons() {
    static std::map<uint32_t, GdiImage> m;
    return m;
}
uint32_t next_image_icon = 0x00090000;
} // namespace
bool gdi_read_bitmap(uint32_t bitmap, GdiImage *image, bool preserve_alpha) {
    Dib *d = dib_of(bitmap);
    return d && snapshot_dib(*d, image, preserve_alpha);
}
uint32_t gdi_image_bitmap(const GdiImage &image) {
    if (image.width <= 0 || image.height <= 0 ||
        uint64_t(image.width) * image.height != image.pixels.size())
        return 0;
    uint32_t h = make_dib(image.width, -image.height, 32, 0, 0);
    if (h)
        memcpy(g_mem + dib_of(h)->bits, image.pixels.data(), image.pixels.size() * 4);
    return h;
}
uint32_t gdi_image_mask(const GdiImage &image) {
    if (image.width <= 0 || image.height <= 0 ||
        uint64_t(image.width) * image.height != image.pixels.size())
        return 0;
    uint32_t h = make_dib(image.width, -image.height, 1, 0, 0);
    if (!h)
        return 0;
    Dib &d = *dib_of(h);
    d.colors = {0, 0x00ffffff};
    for (int32_t y = 0; y < image.height; ++y)
        for (int32_t x = 0; x < image.width; ++x)
            if (!(image.pixels[size_t(y) * image.width + x] >> 24)) {
                uint32_t at = d.bits + uint32_t(y) * d.stride + uint32_t(x) / 8;
                wr8(at, rd8(at) | uint8_t(0x80 >> (x % 8)));
            }
    return h;
}
void gdi_delete_bitmap(uint32_t bitmap) {
    auto it = dibs().find(bitmap);
    if (it == dibs().end())
        return;
    if (it->second.owned)
        heap_free(it->second.bits);
    dibs().erase(it);
    for (auto &dc : dcs())
        if (dc.second.bitmap == bitmap)
            dc.second.bitmap = 0;
}
// Shared drawing entry used by icons, image lists and USER32 rectangles.
bool gdi_draw_image(uint32_t dc, const GdiImage &image, int32_t x, int32_t y, int32_t w,
                    int32_t h) {
    int dw, dh;
    if (!dc_size(dc, &dw, &dh))
        return false;
    Rect clip = clip_box(dc);
    for (int64_t yy = std::max<int64_t>(0, int64_t(clip.t) - y);
         yy < std::min<int64_t>({h, image.height, int64_t(clip.b) - y}); ++yy)
        for (int64_t xx = std::max<int64_t>(0, int64_t(clip.l) - x);
             xx < std::min<int64_t>({w, image.width, int64_t(clip.r) - x}); ++xx)
            write_pixel(dc, int64_t(x) + xx, int64_t(y) + yy,
                        image.pixels[size_t(yy) * image.width + xx], true);
    return true;
}
bool gdi_focus_rect(uint32_t dc, int32_t l, int32_t t, int32_t r, int32_t b) {
    int w, h;
    if (!dc_size(dc, &w, &h))
        return false;
    Rect clip = clip_box(dc);
    for (int64_t y = std::max(t, clip.t); y < std::min(b, clip.b); ++y)
        for (int64_t x = std::max(l, clip.l); x < std::min(r, clip.r); ++x) {
            uint32_t p;
            if ((x == l || x == int64_t(r) - 1 || y == t || y == int64_t(b) - 1) &&
                !((x + y) & 1) && read_pixel(dc, x, y, &p))
                write_pixel(dc, x, y, p ^ 0xffffff);
        }
    return true;
}

// Validate the packed DIB before reading colors or rows. Resources and BMP
// files share this format; compressed RLE/JPEG/PNG data is not a DIB here.
bool gdi_decode_image(uint32_t at, uint32_t bytes, GdiImage *image, uint32_t pixel_offset) {
    if (!at || bytes < 40 || !gm_valid(at, bytes))
        return false;
    uint32_t header = rd32(at);
    if (header < 40 || header > bytes || rd16(at + 12) != 1)
        return false;
    Dib d;
    d.width = int32_t(rd32(at + 4));
    d.height = int32_t(rd32(at + 8));
    d.bpp = rd16(at + 14);
    d.compression = rd32(at + 16);
    if (d.width <= 0 || !d.height ||
        !(d.bpp == 1 || d.bpp == 4 || d.bpp == 8 || d.bpp == 16 || d.bpp == 24 || d.bpp == 32) ||
        !(d.compression == 0 || (d.compression == 3 && (d.bpp == 16 || d.bpp == 32))))
        return false;
    uint64_t rows = d.height < 0 ? -int64_t(d.height) : d.height;
    uint64_t stride = ((uint64_t(d.width) * d.bpp + 31) / 32) * 4;
    uint64_t offset = header;
    if (d.compression == 3) {
        uint32_t masks = header >= 52 ? at + 40 : at + header;
        if (masks - at + 12 > bytes)
            return false;
        for (int i = 0; i < 3; ++i)
            d.masks[i] = rd32(masks + i * 4);
        if (header < 52)
            offset += 12;
    }
    if (d.bpp <= 8) {
        uint32_t count = rd32(at + 32);
        if (!count)
            count = 1u << d.bpp;
        if (count > (1u << d.bpp) || offset + count * 4 > bytes)
            return false;
        for (uint32_t i = 0; i < count; ++i)
            d.colors.push_back(rd32(at + uint32_t(offset) + i * 4));
        offset += count * 4;
    }
    if (pixel_offset) {
        if (pixel_offset < offset)
            return false;
        offset = pixel_offset;
    }
    if (offset + stride * rows > bytes)
        return false;
    d.bits = at + uint32_t(offset);
    d.stride = uint32_t(stride);
    d.size = uint32_t(stride * rows);
    return snapshot_dib(d, image);
}
uint32_t gdi_create_icon(const GdiImage &image) {
    if (image.pixels.empty())
        return 0;
    uint32_t handle = next_image_icon++;
    icons()[handle] = image;
    return handle;
}
bool gdi_read_icon(uint32_t icon, GdiImage *image) {
    auto it = icons().find(icon);
    if (it == icons().end())
        return false;
    *image = it->second;
    return true;
}
bool gdi_delete_icon(uint32_t icon) {
    return icons().erase(icon) != 0;
}

// CreateCompatibleBitmap(hdc, width, height): a bitmap at the DC's depth,
// else 32 bpp; its pixels are addressable like a section's.
void g_CreateCompatibleBitmap(X86 *c) {
    int32_t width = (int32_t)arg(c, 1), height = (int32_t)arg(c, 2);
    Dib *in = dib_in_dc(arg(c, 0));
    uint16_t bpp = in ? in->bpp : 32;
    if (width <= 0 || height <= 0) {
        set_eax(c, 0);
        return;
    }
    set_eax(c, make_dib(width, height, bpp, 0, 0));
}

// GetObjectA(handle, bytes, out): BITMAP (24 bytes) or DIBSECTION (84) for a
// bitmap, the entry count (a WORD) for a palette.
void g_GetObjectA(X86 *c) {
    uint32_t handle = arg(c, 0), bytes = arg(c, 1), out = arg(c, 2);
    if (Dib *d = dib_of(handle)) {
        uint32_t have = bytes >= 84 ? 84u : 24u;
        if (!out) {
            set_eax(c, 84);
            return;
        }
        if (bytes < 24 || !gm_valid(out, have)) {
            set_eax(c, 0);
            return;
        }
        uint32_t rows = (uint32_t)(d->height < 0 ? -d->height : d->height);
        wr32(out + 0, 0);
        wr32(out + 4, (uint32_t)d->width);
        wr32(out + 8, rows);
        wr32(out + 12, d->stride);
        wr16(out + 16, 1);
        wr16(out + 18, d->bpp);
        wr32(out + 20, d->bits);
        if (have == 84) {
            uint32_t bmih = out + 24;
            wr32(bmih + 0, 40);
            wr32(bmih + 4, (uint32_t)d->width);
            wr32(bmih + 8, (uint32_t)d->height);
            wr16(bmih + 12, 1);
            wr16(bmih + 14, d->bpp);
            wr32(bmih + 16, d->compression);
            wr32(bmih + 20, d->size);
            wr32(bmih + 24, 0);
            wr32(bmih + 28, 0);
            wr32(bmih + 32, (uint32_t)d->colors.size());
            wr32(bmih + 36, 0);
            for (int i = 0; i < 3; ++i)
                wr32(out + 64 + 4u * (uint32_t)i, d->masks[i]);
            wr32(out + 76, 0); // dshSection
            wr32(out + 80, 0); // dsOffset
        }
        set_eax(c, have);
        return;
    }
    auto object = objects().find(handle);
    if (object != objects().end()) {
        const Object &o = object->second;
        uint32_t size = o.kind == Object::Font ? 92 : o.kind == Object::Pen ? 16 : 12;
        if (!out) {
            set_eax(c, size);
            return;
        }
        if (bytes < size || !gm_valid(out, size)) {
            set_eax(c, 0);
            return;
        }
        memset(g_mem + out, 0, size);
        if (o.kind == Object::Font)
            memcpy(g_mem + out, o.logfont.data(), size);
        else {
            wr32(out, o.style);
            wr32(out + 4, o.kind == Object::Pen ? o.width : o.color);
            if (o.kind == Object::Pen)
                wr32(out + 12, o.color);
        }
        set_eax(c, size);
        return;
    }
    auto pi = palettes().find(handle);
    if (pi != palettes().end()) {
        if (out && bytes >= 2)
            wr16(out, (uint16_t)pi->second.entries.size());
        set_eax(c, out ? 2 : 2);
        return;
    }
    set_eax(c, 0);
}

// DeleteObject(handle): a bitmap gives its pixels back; a palette goes away;
// a stock object is fine to delete, as on Windows.
void g_DeleteObject(X86 *c) {
    uint32_t handle = arg(c, 0);
    auto di = dibs().find(handle);
    if (di != dibs().end()) {
        if (di->second.owned && di->second.bits)
            heap_free(di->second.bits);
        dibs().erase(di);
        for (auto &kv : dcs())
            if (kv.second.bitmap == handle)
                kv.second.bitmap = 0;
        set_eax(c, 1);
        return;
    }
    if (palettes().erase(handle)) {
        for (auto &kv : dcs())
            if (kv.second.palette == handle)
                kv.second.palette = 0;
        set_eax(c, 1);
        return;
    }
    if (handle < 0x4f100 || handle > 0x4f113)
        objects().erase(handle);
    set_eax(c, handle ? 1 : 0);
}

void g_CreateCompatibleDC(X86 *c) {
    uint32_t hdc = gdi_new_dc();
    if (recomp_env("TRACE_GDI"))
        LOGW("gdi: CreateCompatibleDC(%08x) -> %08x", arg(c, 0), hdc);
    set_eax(c, hdc);
}

void g_DeleteDC(X86 *c) {
    set_eax(c, dcs().erase(arg(c, 0)) ? 1 : 0);
}

// SelectObject(hdc, object): a bitmap goes into the DC and the previous one
// comes back; a pen, brush or font is accepted as selected.
void g_SelectObject(X86 *c) {
    uint32_t hdc = arg(c, 0), obj = arg(c, 1);
    if (!dc_of(hdc)) {
        set_eax(c, 0);
        return;
    }
    DeviceContext &dc = *dc_of(hdc);
    if (dib_of(obj) || obj == DEFAULT_BITMAP) {
        uint32_t prev = dc.bitmap ? dc.bitmap : DEFAULT_BITMAP;
        dc.bitmap = obj == DEFAULT_BITMAP ? 0 : obj;
        set_eax(c, prev);
        return;
    }
    auto it = objects().find(obj);
    if (it == objects().end()) {
        set_eax(c, 0);
        return;
    }
    uint32_t *slot = it->second.kind == Object::Brush  ? &dc.brush
                     : it->second.kind == Object::Pen  ? &dc.pen
                     : it->second.kind == Object::Font ? &dc.font
                                                       : &dc.region;
    uint32_t prev = *slot;
    *slot = obj;
    if (it->second.kind == Object::Region) {
        dc.clipped = true;
        dc.clip = {it->second.rect};
        set_eax(c, 2);
    } else
        set_eax(c, prev);
}

// SetDIBColorTable(hdc, start, count, RGBQUAD*): the colour table of the
// 8-bit DIB the DC holds.
void g_SetDIBColorTable(X86 *c) {
    uint32_t start = arg(c, 1), count = arg(c, 2), src = arg(c, 3);
    Dib *d = dib_in_dc(arg(c, 0));
    if (!d || d->bpp > 8 || !src) {
        set_eax(c, 0);
        return;
    }
    uint32_t limit = 1u << d->bpp;
    if (d->colors.size() < limit)
        d->colors.resize(limit, 0);
    uint32_t n = 0;
    for (; n < count && start + n < limit; ++n)
        d->colors[start + n] = rd32(src + 4u * n);
    set_eax(c, n);
}

// CreatePalette(LOGPALETTE*): version word, count word, then the entries.
void g_CreatePalette(X86 *c) {
    uint32_t lp = arg(c, 0);
    if (!lp || !gm_valid(lp, 4)) {
        set_eax(c, 0);
        return;
    }
    uint32_t count = rd16(lp + 2);
    Palette p;
    p.entries.resize(count);
    for (uint32_t i = 0; i < count; ++i)
        p.entries[i] = rd32(lp + 4 + 4u * i);
    uint32_t handle = g_next_palette++;
    palettes()[handle] = p;
    set_eax(c, handle);
}

void g_SelectPalette(X86 *c) {
    uint32_t hdc = arg(c, 0), hpal = arg(c, 1);
    if (!dc_of(hdc) || (hpal && hpal != DEFAULT_PALETTE && !palettes().count(hpal))) {
        set_eax(c, 0);
        return;
    }
    DeviceContext &dc = dcs()[hdc];
    uint32_t prev = dc.palette ? dc.palette : DEFAULT_PALETTE;
    dc.palette = hpal;
    set_eax(c, prev);
}

// RealizePalette(hdc): every entry of the selected palette is "mapped".
void g_RealizePalette(X86 *c) {
    auto it = dcs().find(arg(c, 0));
    uint32_t n = 0;
    if (it != dcs().end()) {
        auto pi = palettes().find(it->second.palette);
        if (pi != palettes().end())
            n = (uint32_t)pi->second.entries.size();
    }
    set_eax(c, n);
}

void g_GetPaletteEntries(X86 *c) {
    uint32_t start = arg(c, 1), count = arg(c, 2), out = arg(c, 3);
    auto pi = palettes().find(arg(c, 0));
    if (pi == palettes().end()) {
        set_eax(c, 0);
        return;
    }
    const std::vector<uint32_t> &e = pi->second.entries;
    if (!out) {
        set_eax(c, (uint32_t)e.size());
        return;
    }
    uint32_t n = 0;
    for (; n < count && start + n < e.size(); ++n)
        wr32(out + 4u * n, e[start + n]);
    set_eax(c, n);
}

void g_GetSystemPaletteUse(X86 *c) {
    set_eax(c, 1); // SYSPAL_STATIC
}
void g_SetSystemPaletteUse(X86 *c) {
    set_eax(c, 1); // the previous use
}

// GetDIBits(hdc, hbm, start, lines, bits, bmi, usage): the rows as stored.
void g_GetDIBits(X86 *c) {
    Dib *d = dib_of(arg(c, 1));
    uint32_t start = arg(c, 2), lines = arg(c, 3), out = arg(c, 4), bmi = arg(c, 5);
    if (!d) {
        set_eax(c, 0);
        return;
    }
    uint32_t rows = (uint32_t)(d->height < 0 ? -d->height : d->height);
    if (!out) {
        if (bmi && gm_valid(bmi, 40)) {
            wr32(bmi + 4, (uint32_t)d->width);
            wr32(bmi + 8, (uint32_t)d->height);
            wr16(bmi + 12, 1);
            wr16(bmi + 14, d->bpp);
            wr32(bmi + 16, d->compression);
            wr32(bmi + 20, d->size);
        }
        set_eax(c, rows);
        return;
    }
    uint32_t n = 0;
    for (; n < lines && start + n < rows; ++n)
        memcpy(g_mem + out + n * d->stride, g_mem + d->bits + (start + n) * d->stride, d->stride);
    set_eax(c, n);
}

// Report the display dimensions and 32-bit canvas capabilities. The indexed
// DirectDraw palette size remains available to existing palette clients.
void g_GetDeviceCaps(X86 *c) {
    uint32_t w = 1024, h = 768, bpp = 32;
    win32_display_mode(&w, &h, &bpp);
    uint32_t value = 0;
    switch (arg(c, 1)) {
    case 2:
        value = 1;
        break;
    case 88:
    case 90:
        value = 96;
        break;
    case 8: // HORZRES
        value = w;
        break;
    case 10: // VERTRES
        value = h;
        break;
    case 12: // BITSPIXEL
        value = 32;
        break;
    case 14: // PLANES
        value = 1;
        break;
    case 38: // RC_BITBLT | RC_DIBTODEV | RC_STRETCHBLT | RC_STRETCHDIB
        value = 0x2a01u;
        break;
    case 104: // SIZEPALETTE
        value = bpp == 8 ? 256u : 0u;
        break;
    case 24: // NUMCOLORS
        value = 0xffffffffu;
        break;
    }
    set_eax(c, value);
}

// Text: accepted and measured with fixed metrics, not drawn.
void g_TextOutA(X86 *c) {
    log_once("gdi.textout", "gdi: TextOutA is accepted and not drawn in this runtime");
    set_eax(c, 1);
}
void g_GetTextMetricsA(X86 *c) {
    uint32_t tm = arg(c, 1);
    if (!tm || !gm_valid(tm, 56)) {
        set_eax(c, 0);
        return;
    }
    memset(g_mem + tm, 0, 56);
    wr32(tm + 0, TEXT_HEIGHT);              // tmHeight
    wr32(tm + 4, 13);                       // tmAscent
    wr32(tm + 8, 3);                        // tmDescent
    wr32(tm + 12, 3);                       // tmInternalLeading
    wr32(tm + 16, 1);                       // tmExternalLeading
    wr32(tm + 20, TEXT_AVERAGE_CHAR_WIDTH); // tmAveCharWidth
    wr32(tm + 24, 14);                      // tmMaxCharWidth
    wr32(tm + 28, 400);                     // tmWeight
    g_mem[tm + 44] = 0x20;                  // tmFirstChar
    g_mem[tm + 45] = 0xff;                  // tmLastChar
    g_mem[tm + 46] = 0x3f;                  // tmDefaultChar
    g_mem[tm + 47] = 0x20;                  // tmBreakChar
    g_mem[tm + 52] = 0x02;                  // tmPitchAndFamily: variable pitch
    set_eax(c, 1);
}
void g_GetTextExtentPointA(X86 *c) {
    uint32_t size = arg(c, 3);
    if (!size || !gm_valid(size, 8)) {
        set_eax(c, 0);
        return;
    }
    wr32(size, arg(c, 2) * TEXT_AVERAGE_CHAR_WIDTH);
    wr32(size + 4, TEXT_HEIGHT);
    set_eax(c, 1);
}
void g_SetTextColor(X86 *c) {
    auto *found = dc_of(arg(c, 0));
    if (!found) {
        set_eax(c, 0xffffffff);
        return;
    }
    DeviceContext &dc = *found;
    uint32_t prev = dc.text_color;
    dc.text_color = arg(c, 1);
    set_eax(c, prev);
}
void g_SetBkColor(X86 *c) {
    auto *found = dc_of(arg(c, 0));
    if (!found) {
        set_eax(c, 0xffffffff);
        return;
    }
    DeviceContext &dc = *found;
    uint32_t prev = dc.bk_color;
    dc.bk_color = arg(c, 1);
    set_eax(c, prev);
}
void g_SetBkMode(X86 *c) {
    auto *found = dc_of(arg(c, 0));
    if (!found) {
        set_eax(c, 0);
        return;
    }
    DeviceContext &dc = *found;
    uint32_t prev = dc.bk_mode;
    dc.bk_mode = arg(c, 1);
    set_eax(c, prev);
}

const ImportShim g_gdi32_shims[] = {
    {"GDI32.dll", "CreateFontA", 14, nullptr},
    {"GDI32.dll", "ExtTextOutA", 8, nullptr},
    {"GDI32.dll", "CreateCompatibleBitmap", 3, g_CreateCompatibleBitmap},
    // Named for its argument count; the result is ERROR, which is honest.
    {"GDI32.dll", "CombineRgn", 4, nullptr},
    {"GDI32.dll", "GetObjectA", 3, g_GetObjectA},
    {"GDI32.dll", "GetObjectW", 3, g_GetObjectA},
    {"GDI32.dll", "DeleteObject", 1, g_DeleteObject},
    {"GDI32.dll", "CreateCompatibleDC", 1, g_CreateCompatibleDC},
    {"GDI32.dll", "DeleteDC", 1, g_DeleteDC},
    {"GDI32.dll", "SelectObject", 2, g_SelectObject},
    {"GDI32.dll", "SetDIBColorTable", 4, g_SetDIBColorTable},
    {"GDI32.dll", "CreatePalette", 1, g_CreatePalette},
    {"GDI32.dll", "SelectPalette", 3, g_SelectPalette},
    {"GDI32.dll", "RealizePalette", 1, g_RealizePalette},
    {"GDI32.dll", "GetPaletteEntries", 4, g_GetPaletteEntries},
    {"GDI32.dll", "GetSystemPaletteUse", 1, g_GetSystemPaletteUse},
    {"GDI32.dll", "SetSystemPaletteUse", 2, g_SetSystemPaletteUse},
    {"GDI32.dll", "GetDIBits", 7, g_GetDIBits},
    {"GDI32.dll", "GetDeviceCaps", 2, g_GetDeviceCaps},
    {"GDI32.dll", "TextOutA", 5, g_TextOutA},
    {"GDI32.dll", "GetTextMetricsA", 2, g_GetTextMetricsA},
    {"GDI32.dll", "GetTextExtentPointA", 4, g_GetTextExtentPointA},
    {"GDI32.dll", "SetTextColor", 2, g_SetTextColor},
    {"GDI32.dll", "SetBkColor", 2, g_SetBkColor},
    {"GDI32.dll", "SetBkMode", 2, g_SetBkMode},
};
const size_t g_gdi32_shim_count = sizeof(g_gdi32_shims) / sizeof(g_gdi32_shims[0]);

namespace gdi {
std::map<uint32_t, DeviceContext> &dcs() {
    static std::map<uint32_t, DeviceContext> value;
    return value;
}
DeviceContext *dc_of(uint32_t dc) {
    auto it = dcs().find(dc);
    return it == dcs().end() ? nullptr : &it->second;
}
std::map<uint32_t, Object> &objects() {
    static std::map<uint32_t, Object> value = [] {
        std::map<uint32_t, Object> m;
        for (uint32_t i = 0; i <= 19; ++i) {
            Object o;
            o.kind = i <= 5 || i == 18   ? Object::Brush
                     : i <= 8 || i == 19 ? Object::Pen
                                         : Object::Font;
            o.style = i == 5 ? 1 : i == 8 ? 5 : 0;
            o.color = i == 0 || i == 6 ? 0xffffff
                      : i == 1         ? 0xc0c0c0
                      : i == 2         ? 0x808080
                      : i == 3         ? 0x404040
                                       : 0;
            m.emplace(0x4f100 + i, o);
        }
        return m;
    }();
    return value;
}
uint32_t make_object(const Object &o) {
    static uint32_t next = 0x00078000;
    objects()[next] = o;
    return next++;
}
uint32_t colorref(uint32_t p) {
    return (p & 255) << 16 | (p & 0xff00) | ((p >> 16) & 255);
}
uint32_t argb(uint32_t c) {
    return 0xff000000 | colorref(c);
}
bool brush_color(uint32_t h, uint32_t *p) {
    auto it = objects().find(h);
    if (it == objects().end() || it->second.kind != Object::Brush || it->second.style == 1)
        return false;
    *p = argb(it->second.color);
    return true;
}
namespace {
// Resizing preserves the intersection. DCs name the window, never a vector's
// storage, so a resize cannot leave a stale host pointer in another DC.
Surface *surface_of(DeviceContext &dc) {
    auto *window = user32::find_window(dc.surface);
    if (!window)
        return nullptr;
    int w = std::max(0, window->w), h = std::max(0, window->h);
    if (uint64_t(w) * h > GUEST_SIZE / 4)
        return nullptr;
    auto &s = window->surface;
    if (s.w != w || s.h != h) {
        std::vector<uint32_t> pixels(size_t(w) * h, 0);
        for (int y = 0; y < std::min(h, s.h); ++y)
            std::copy_n(s.argb.begin() + size_t(y) * s.w, std::min(w, s.w),
                        pixels.begin() + size_t(y) * w);
        s.argb = std::move(pixels);
        s.w = w;
        s.h = h;
        s.dirty = true;
    }
    return &s;
}
void offset(DeviceContext &dc, int64_t *x, int64_t *y) {
    *x += int64_t(dc.viewport_x) - dc.org_x;
    *y += int64_t(dc.viewport_y) - dc.org_y;
    if (dc.window && dc.window != dc.surface) {
        int32_t wx = 0, wy = 0, sx = 0, sy = 0;
        user32::client_origin(dc.window, &wx, &wy);
        user32::client_origin(dc.surface, &sx, &sy);
        *x += int64_t(wx) - sx;
        *y += int64_t(wy) - sy;
    }
}
bool contains(Rect r, int64_t x, int64_t y) {
    return x >= r.l && y >= r.t && x < r.r && y < r.b;
}
// Child DCs draw into the owning top-level surface, clipped by every
// ancestor client rectangle even when no explicit GDI region is selected.
Rect client_bounds(DeviceContext &dc, int w, int h) {
    Rect r{0, 0, w, h};
    if (!dc.window || !dc.surface)
        return r;
    int32_t root_x = 0, root_y = 0;
    user32::client_origin(dc.surface, &root_x, &root_y);
    uint32_t current = dc.window;
    for (size_t hop = 0; current && current != dc.surface && hop < user32::windows().size();
         ++hop) {
        auto *window = user32::find_window(current);
        if (!window)
            return {};
        int32_t x = 0, y = 0;
        user32::client_origin(current, &x, &y);
        int64_t left = int64_t(x) - root_x, top = int64_t(y) - root_y;
        r.l = int32_t(std::clamp<int64_t>(std::max<int64_t>(r.l, left), INT_MIN, INT_MAX));
        r.t = int32_t(std::clamp<int64_t>(std::max<int64_t>(r.t, top), INT_MIN, INT_MAX));
        r.r = int32_t(
            std::clamp<int64_t>(std::min<int64_t>(r.r, left + window->w), INT_MIN, INT_MAX));
        r.b =
            int32_t(std::clamp<int64_t>(std::min<int64_t>(r.b, top + window->h), INT_MIN, INT_MAX));
        current = window->parent;
    }
    return r;
}
uint32_t unpack(uint32_t p, uint32_t mask) {
    if (!mask)
        return 0;
    while (!(mask & 1)) {
        mask >>= 1;
        p >>= 1;
    }
    return uint32_t(uint64_t(p & mask) * 255 / mask);
}
uint32_t pack(uint32_t p, uint32_t mask) {
    if (!mask)
        return 0;
    unsigned shift = 0;
    while (!(mask & 1)) {
        mask >>= 1;
        ++shift;
    }
    return uint32_t((uint64_t(p) * mask + 127) / 255) << shift;
}
uint32_t raw_dib(const Dib &d, uint32_t at, int x) {
    return d.bpp == 1    ? (rd8(at) >> (7 - x % 8)) & 1
           : d.bpp == 4  ? (rd8(at) >> (x % 2 ? 0 : 4)) & 15
           : d.bpp == 8  ? rd8(at)
           : d.bpp == 16 ? rd16(at)
           : d.bpp == 24 ? rd8(at) | rd8(at + 1) << 8 | rd8(at + 2) << 16
                         : rd32(at);
}
// One path handles both borrowed DirectDraw pixels and owned guest DIBs.
bool pixel(uint32_t hdc, int64_t x, int64_t y, uint32_t *p, bool write, bool blend,
           bool preserve_alpha = false) {
    auto *dc = dc_of(hdc);
    if (!dc)
        return false;
    offset(*dc, &x, &y);
    if (dc->clipped &&
        std::none_of(dc->clip.begin(), dc->clip.end(), [&](Rect r) { return contains(r, x, y); }))
        return false;
    Dib *d = dib_in_dc(hdc);
    Surface *s = d ? nullptr : surface_of(*dc);
    int64_t w = d ? d->width : s ? s->w : 0;
    int64_t h = d ? std::abs(int64_t(d->height)) : s ? s->h : 0;
    if (x < 0 || y < 0 || x >= w || y >= h ||
        (!d && !contains(client_bounds(*dc, int(w), int(h)), x, y)))
        return false;
    if (write && !d && std::any_of(dc->excluded.begin(), dc->excluded.end(), [&](Rect r) {
            return contains(r, x, y);
        }))
        return false;
    uint32_t at = 0, value = 0;
    if (d) {
        at = d->bits + uint32_t(d->height > 0 ? h - 1 - y : y) * d->stride +
             uint32_t(x * d->bpp / 8);
        if (!gm_valid(at, (d->bpp + 7) / 8))
            return false;
        uint32_t raw = raw_dib(*d, at, int(x));
        if (d->bpp <= 8)
            value = raw < d->colors.size() ? d->colors[raw] : raw ? 0xffffff : 0;
        else if (d->bpp == 16 || d->compression == 3)
            value = unpack(raw, d->masks[0] ? d->masks[0] : 0x7c00) << 16 |
                    unpack(raw, d->masks[1] ? d->masks[1] : 0x03e0) << 8 |
                    unpack(raw, d->masks[2] ? d->masks[2] : 0x001f);
        else
            value = raw;
    } else
        value = s->argb[size_t(y) * s->w + x];
    if (!write) {
        *p =
            preserve_alpha && d && d->bpp == 32 && d->compression == 0 ? value : value | 0xff000000;
        return true;
    }
    uint32_t result = *p;
    if (blend) {
        uint32_t alpha = result >> 24;
        if (!alpha)
            return true;
        result = 0xff000000;
        for (int c = 0; c < 24; c += 8)
            result |=
                ((((*p >> c) & 255) * alpha + ((value >> c) & 255) * (255 - alpha) + 127) / 255)
                << c;
    }
    if (!d) {
        s->argb[size_t(y) * s->w + x] = result | 0xff000000;
        s->dirty = true;
        return true;
    }
    if (d->bpp <= 8) {
        uint32_t best = 0;
        uint64_t distance = UINT64_MAX;
        uint32_t count = 1u << d->bpp;
        for (uint32_t i = 0; i < count; ++i) {
            uint32_t color = i < d->colors.size() ? d->colors[i] : i ? 0xffffff : 0;
            uint64_t delta = 0;
            for (int c = 0; c < 24; c += 8) {
                int v = int((result >> c) & 255) - int((color >> c) & 255);
                delta += v * v;
            }
            if (delta < distance) {
                best = i;
                distance = delta;
            }
        }
        if (d->bpp == 8)
            wr8(at, best);
        else {
            int shift = d->bpp == 1 ? 7 - int(x) % 8 : int(x) % 2 ? 0 : 4;
            uint32_t mask = (count - 1) << shift;
            wr8(at, (rd8(at) & ~mask) | (best << shift));
        }
    } else if (d->bpp == 16 || d->compression == 3) {
        uint32_t packed = pack((result >> 16) & 255, d->masks[0] ? d->masks[0] : 0x7c00) |
                          pack((result >> 8) & 255, d->masks[1] ? d->masks[1] : 0x03e0) |
                          pack(result & 255, d->masks[2] ? d->masks[2] : 0x001f);
        if (d->bpp == 16)
            wr16(at, packed);
        else
            wr32(at, packed);
    } else if (d->bpp == 32)
        wr32(at, result);
    else {
        wr8(at, result);
        wr8(at + 1, result >> 8);
        wr8(at + 2, result >> 16);
    }
    return true;
}
} // namespace
bool dc_is_monochrome(uint32_t dc) {
    auto *d = dib_in_dc(dc);
    return d && d->bpp == 1;
}
bool dc_has_alpha(uint32_t dc) {
    auto *d = dib_in_dc(dc);
    return d && d->bpp == 32 && d->compression == 0;
}
// One bit of a monochrome bitmap, as MaskBlt reads its mask: a set bit selects
// the foreground raster operation. False when the handle is not a 1-bit bitmap
// or (x, y) lies outside it, which the caller treats as unmasked.
bool mask_bit(uint32_t bitmap, int64_t x, int64_t y, bool *set) {
    Dib *d = dib_of(bitmap);
    if (!d || d->bpp != 1)
        return false;
    int64_t h = std::abs(int64_t(d->height));
    if (x < 0 || y < 0 || x >= d->width || y >= h)
        return false;
    uint32_t at = d->bits + uint32_t(d->height > 0 ? h - 1 - y : y) * d->stride + uint32_t(x / 8);
    if (!gm_valid(at, 1))
        return false;
    *set = ((rd8(at) >> (7 - x % 8)) & 1) != 0;
    return true;
}
bool read_pixel(uint32_t dc, int64_t x, int64_t y, uint32_t *p, bool preserve_alpha) {
    return pixel(dc, x, y, p, false, false, preserve_alpha);
}
bool write_pixel(uint32_t dc, int64_t x, int64_t y, uint32_t p, bool blend) {
    return pixel(dc, x, y, &p, true, blend);
}
bool drawable(uint32_t dc, int64_t x, int64_t y) {
    uint32_t p;
    return read_pixel(dc, x, y, &p);
}
bool dc_size(uint32_t hdc, int *w, int *h) {
    auto *dc = dc_of(hdc);
    if (!dc)
        return false;
    if (auto *d = dib_in_dc(hdc)) {
        *w = d->width;
        *h = int(std::abs(int64_t(d->height)));
        return true;
    }
    if (auto *s = surface_of(*dc)) {
        *w = s->w;
        *h = s->h;
        return true;
    }
    return false;
}
Rect clip_box(uint32_t hdc) {
    int w = 0, h = 0;
    if (!dc_size(hdc, &w, &h))
        return {};
    auto &dc = *dc_of(hdc);
    Rect r = dc.bitmap ? Rect{0, 0, w, h} : client_bounds(dc, w, h);
    if (dc.clipped) {
        Rect bound{INT_MAX, INT_MAX, INT_MIN, INT_MIN};
        for (Rect p : dc.clip) {
            bound.l = std::min(bound.l, p.l);
            bound.t = std::min(bound.t, p.t);
            bound.r = std::max(bound.r, p.r);
            bound.b = std::max(bound.b, p.b);
        }
        r = {std::max(r.l, bound.l), std::max(r.t, bound.t), std::min(r.r, bound.r),
             std::min(r.b, bound.b)};
        if (r.r <= r.l || r.b <= r.t)
            return {};
    }
    int64_t x = 0, y = 0;
    offset(dc, &x, &y);
    auto clamp = [](int64_t v) { return int32_t(std::clamp<int64_t>(v, INT_MIN, INT_MAX)); };
    return {clamp(r.l - x), clamp(r.t - y), clamp(r.r - x), clamp(r.b - y)};
}
void fill(uint32_t dc, Rect r, uint32_t p) {
    Rect clip = clip_box(dc);
    for (int64_t y = std::max(r.t, clip.t); y < std::min(r.b, clip.b); ++y)
        for (int64_t x = std::max(r.l, clip.l); x < std::min(r.r, clip.r); ++x)
            write_pixel(dc, x, y, p);
}
} // namespace gdi

uint32_t gdi_new_dc() {
    uint32_t dc = g_next_dc++;
    dcs()[dc] = DeviceContext();
    return dc;
}
namespace {
// The visible child windows of a WS_CLIPCHILDREN window, in the coordinates of
// the top-level surface its DC writes to. Children write into that same
// surface, so without this a parent repainting paints over its controls.
std::vector<Rect> clipped_children(uint32_t hwnd, uint32_t surface) {
    std::vector<Rect> out;
    auto *self = user32::find_window(hwnd);
    if (!self || !(self->style & 0x02000000u))
        return out;
    int32_t root_x = 0, root_y = 0;
    user32::client_origin(surface, &root_x, &root_y);
    for (uint32_t child : user32::window_z_order(hwnd)) {
        auto *w = user32::find_window(child);
        if (!w || !w->visible || !(w->style & 0x40000000u) || w->w <= 0 || w->h <= 0)
            continue;
        int32_t x = 0, y = 0;
        user32::client_origin(child, &x, &y);
        out.push_back({x - root_x, y - root_y, x - root_x + w->w, y - root_y + w->h});
    }
    return out;
}
} // namespace
uint32_t gdi_window_dc(uint32_t hwnd) {
    DeviceContext dc;
    dc.memory = false;
    // GetDC(NULL) has state/capabilities even when there is no desktop bitmap.
    if (hwnd) {
        auto *w = user32::find_window(hwnd);
        if (!w)
            return 0;
        dc.window = hwnd;
        while (w->parent && (w->style & 0x40000000u)) {
            auto *parent = user32::find_window(w->parent);
            if (!parent)
                break;
            w = parent;
        }
        dc.surface = w->hwnd;
        dc.excluded = clipped_children(hwnd, dc.surface);
    }
    uint32_t handle = g_next_dc++;
    dcs()[handle] = dc;
    return handle;
}
bool gdi_release_window_dc(uint32_t hwnd, uint32_t hdc) {
    auto *dc = dc_of(hdc);
    if (!dc || dc->window != hwnd)
        return false;
    dcs().erase(hdc);
    gdi_present_windows();
    return true;
}
namespace {
// Child DCs already write into their top-level owner's surface. Opaque GDI
// pixels cover the base, while untouched storage leaves DirectDraw visible.
// Every visible window with pixels, parents before their children and in
// z-order within each level, which is the order they are drawn in. Child
// controls have surfaces of their own - the VCL paints each into its own
// window - so a walk that stopped at the top level left every control blank.
void collect_surfaces(uint32_t parent, std::vector<user32::Window *> &out) {
    for (uint32_t hwnd : user32::window_z_order(parent)) {
        auto *w = user32::find_window(hwnd);
        if (!w || !w->visible)
            continue; // a hidden window hides its children with it
        if (!w->surface.argb.empty())
            out.push_back(w);
        collect_surfaces(hwnd, out);
    }
}
std::vector<user32::Window *> visible_surfaces() {
    std::vector<user32::Window *> result;
    collect_surfaces(0, result);
    return result;
}
} // namespace
void gdi_composite_windows(uint32_t *argb, int w, int h) {
    // A media session owns the screen while it plays. The game leaves its own
    // window black for the video renderer to draw into, so compositing those
    // windows over the session's frame paints the picture out entirely.
    if (mf_owns_the_screen())
        return;
    if (!argb || w <= 0 || h <= 0)
        return;
    int32_t origin_x = 0, origin_y = 0;
    if (ddraw_gdi_primary_active())
        user32::client_origin(host_main_window(), &origin_x, &origin_y);
    for (auto *window : visible_surfaces()) {
        auto &s = window->surface;
        // A layered window: LWA_COLORKEY drops every pixel of the key colour,
        // LWA_ALPHA blends the rest over what is already there. Together they
        // are how a shaped form is drawn, and without them its key colour
        // covers the screen instead of vanishing.
        const bool keyed = (window->layered_flags & 1) != 0;
        const uint32_t key = gdi::argb(window->layered_key) & 0xffffffu;
        const uint32_t alpha = (window->layered_flags & 2) ? window->layered_alpha : 255u;
        // A child's position is relative to its parent, so the walk up the
        // parent chain is what places it; for a top-level window this is its
        // own position, as before.
        int32_t ax = 0, ay = 0;
        user32::client_origin(window->hwnd, &ax, &ay);
        int64_t dx = int64_t(ax) - origin_x, dy = int64_t(ay) - origin_y;
        // Clipped to every ancestor, so a control cannot paint outside the
        // window that owns it.
        int64_t clip_l = 0, clip_t = 0, clip_r = w, clip_b = h;
        for (uint32_t up = window->parent; up;) {
            auto *p = user32::find_window(up);
            if (!p)
                break;
            int32_t px = 0, py = 0;
            user32::client_origin(up, &px, &py);
            clip_l = std::max<int64_t>(clip_l, int64_t(px) - origin_x);
            clip_t = std::max<int64_t>(clip_t, int64_t(py) - origin_y);
            clip_r = std::min<int64_t>(clip_r, int64_t(px) - origin_x + p->w);
            clip_b = std::min<int64_t>(clip_b, int64_t(py) - origin_y + p->h);
            up = p->parent;
        }
        for (int64_t y = std::max<int64_t>(clip_t, dy); y < std::min<int64_t>(clip_b, dy + s.h);
             ++y)
            for (int64_t x = std::max<int64_t>(clip_l, dx); x < std::min<int64_t>(clip_r, dx + s.w);
                 ++x) {
                uint32_t p = s.argb[size_t(y - dy) * s.w + size_t(x - dx)];
                if (!(p >> 24))
                    continue;
                if (keyed && (p & 0xffffffu) == key)
                    continue;
                uint32_t &dst = argb[size_t(y) * w + size_t(x)];
                if (alpha == 255) {
                    dst = p;
                    continue;
                }
                uint32_t out = 0xff000000u;
                for (unsigned shift = 0; shift < 24; shift += 8)
                    out |= ((((p >> shift) & 255) * alpha + ((dst >> shift) & 255) * (255 - alpha) +
                             127) /
                            255)
                           << shift;
                dst = out;
            }
    }
}
// Flush window writes, or refresh an unchanged surface on the host's display
// clock. A retained DC can be drawn into across pump iterations, so ReleaseDC
// alone is insufficient. Never change primary pixels: borrow its readback as
// the base, then composite into a private ARGB snapshot.
namespace {
// Where a presented snapshot lands: the whole screen, or its window's client area.
struct Placement {
    int32_t x = 0, y = 0;
    int w = 0, h = 0;
    bool visible = true;
};
Placement placement(uint32_t hwnd, bool fullscreen, int screen_w, int screen_h) {
    Placement p{0, 0, screen_w, screen_h, true};
    if (!fullscreen && hwnd) {
        auto *window = user32::find_window(hwnd);
        p.visible = window && window->visible;
        if (window) {
            user32::client_origin(window->hwnd, &p.x, &p.y);
            p.w = window->w;
            p.h = window->h;
        }
    }
    return p;
}
// The snapshot's pixels, fetched from its presenter if it keeps them elsewhere.
bool presented_pixels(PresentedSurface &s) {
    if (s.pixels.size() == size_t(s.w) * s.h)
        return true;
    if (!s.fetch || s.w <= 0 || s.h <= 0)
        return false;
    s.pixels.resize(size_t(s.w) * s.h);
    if (s.fetch(s.owner, s.pixels.data(), s.w, s.h))
        return true;
    s.pixels.clear();
    return false;
}
} // namespace

void gdi_present_windows(bool refresh) {
    auto surfaces = visible_surfaces();
    auto &presented = presented_surface();
    if ((!presented.owner && surfaces.empty()) ||
        (!refresh &&
         std::none_of(surfaces.begin(), surfaces.end(), [](auto *w) { return w->surface.dirty; })))
        return;
    // A recent external Present owns this refresh interval. Explicit dirty
    // window writes still compose immediately using the owned snapshot.
    if (refresh && presented.owner && presented.last_present_ns &&
        os_monotonic_ns() - presented.last_present_ns < 16666667u)
        return;
    uint32_t primary = surface_owns_screen() ? 0 : ddraw_gdi_begin_primary();
    int w = 1024, h = 768;
    if (primary) {
        if (!gdi::dc_size(primary, &w, &h)) {
            ddraw_gdi_end_primary(primary);
            return;
        }
    } else if (!surface_owns_screen() && ddraw_gdi_primary_active()) {
        return; // A primary DC is already in use; retry on the next pump.
    } else {
        uint32_t width = w, height = h, bpp = 32;
        win32_display_mode(&width, &height, &bpp);
        w = int(width);
        h = int(height);
    }
    if (w <= 0 || h <= 0 || uint64_t(w) * h > GUEST_SIZE / 4) {
        ddraw_gdi_end_primary(primary);
        return;
    }
    const Placement where = presented.owner ? placement(presented.hwnd, presented.fullscreen, w, h)
                                            : Placement{0, 0, w, h, true};
    const int32_t x = where.x, y = where.y;
    const int width = where.w, height = where.h;
    // A snapshot the screen's own size, covering all of it, is drawn over
    // everything below, so the screen is that snapshot: no base to read, no
    // window to compose under it, and no copy to make of it. A window that
    // changed under it changed nothing visible. A refresh repeats the frame -
    // the settings page is drawn over repeats too - fetching it from the GPU
    // if that is where it is, which happens only while the program has
    // stopped presenting.
    if (presented.owner && where.visible && x == 0 && y == 0 && width == w && height == h &&
        presented.w == w && presented.h == h) {
        ddraw_gdi_end_primary(primary);
        for (auto *window : surfaces)
            window->surface.dirty = false;
        if (refresh && !mf_owns_the_screen() && presented_pixels(presented))
            host_display_present_window(presented.pixels.data(), w, h);
        return;
    }
    const bool visible = where.visible && (!presented.owner || presented_pixels(presented));
    std::vector<uint32_t> pixels(size_t(w) * h, 0xff000000);
    if (primary) {
        for (int py = 0; py < h; ++py)
            for (int px = 0; px < w; ++px)
                gdi::read_pixel(primary, px, py, &pixels[size_t(py) * w + px]);
        ddraw_gdi_end_primary(primary);
    }
    gdi_composite_windows(pixels.data(), w, h);
    if (presented.owner) {
        if (visible && width > 0 && height > 0) {
            const int64_t x0 = std::max<int64_t>(0, x),
                          x1 = std::min<int64_t>(w, int64_t(x) + width),
                          y0 = std::max<int64_t>(0, y),
                          y1 = std::min<int64_t>(h, int64_t(y) + height);
            // The source column of every destination column, once per frame
            // rather than once per pixel; a window the snapshot's own size
            // takes whole rows.
            const bool same_size = presented.w == width && presented.h == height;
            std::vector<size_t> column;
            if (!same_size && x1 > x0) {
                column.resize(size_t(x1 - x0));
                for (int64_t dx = x0; dx < x1; ++dx)
                    column[size_t(dx - x0)] = size_t((dx - x) * presented.w / width);
            }
            for (int64_t dy = y0; dy < y1; ++dy) {
                uint32_t *row = pixels.data() + size_t(dy) * w;
                if (same_size) {
                    if (x1 > x0)
                        memcpy(row + x0,
                               presented.pixels.data() + size_t(dy - y) * presented.w +
                                   size_t(x0 - x),
                               size_t(x1 - x0) * 4);
                    continue;
                }
                const uint32_t *src =
                    presented.pixels.data() + size_t((dy - y) * presented.h / height) * presented.w;
                for (int64_t dx = x0; dx < x1; ++dx)
                    row[dx] = src[column[size_t(dx - x0)]];
            }
        }
    }
    for (auto *window : surfaces)
        window->surface.dirty = false;
    if (!mf_owns_the_screen())
        host_display_present_window(pixels.data(), w, h);
}

// The copy is made under the guest baton before the host can seal a frame.
// GDI refreshes use this snapshot, never the mutable mapped back buffer.
extern "C" void gdi_present_surface(uint32_t owner, uint32_t hwnd, const uint32_t *argb, int w,
                                    int h, bool fullscreen) {
    if (!owner || !argb || w <= 0 || h <= 0 || uint64_t(w) * h > GUEST_SIZE / 4)
        return;
    auto &s = presented_surface();
    s.owner = owner;
    s.hwnd = hwnd;
    s.w = w;
    s.h = h;
    s.fullscreen = fullscreen;
    s.pixels.assign(argb, argb + size_t(w) * h);
    s.fetch = nullptr;
    s.last_present_ns = 0;
    gdi_present_windows(true);
    s.last_present_ns = os_monotonic_ns();
}
extern "C" void gdi_present_external(uint32_t owner, uint32_t hwnd, int w, int h, bool fullscreen,
                                     bool (*fetch)(uint32_t, uint32_t *, int, int)) {
    if (!owner || w <= 0 || h <= 0)
        return;
    auto &s = presented_surface();
    s.owner = owner;
    s.hwnd = hwnd;
    s.w = w;
    s.h = h;
    s.fullscreen = fullscreen;
    s.pixels.clear();
    s.fetch = fetch;
    s.last_present_ns = os_monotonic_ns();
}
extern "C" bool gdi_surface_covers_screen(uint32_t owner, uint32_t hwnd, int w, int h,
                                          bool fullscreen) {
    auto &s = presented_surface();
    // The screen is the snapshot's only while this presenter owns it; before
    // its first frame the DirectDraw primary or the desktop may be in charge.
    if (!owner || s.owner != owner || s.hwnd != hwnd || s.fullscreen != fullscreen ||
        !surface_owns_screen() || mf_owns_the_screen())
        return false;
    uint32_t sw = 0, sh = 0, bpp = 32;
    win32_display_mode(&sw, &sh, &bpp);
    if (int(sw) != w || int(sh) != h)
        return false;
    const Placement where = placement(hwnd, fullscreen, w, h);
    return where.visible && where.x == 0 && where.y == 0 && where.w == w && where.h == h;
}
extern "C" void gdi_forget_surface(uint32_t owner) {
    auto &s = presented_surface();
    if (!owner || s.owner == owner)
        s = PresentedSurface{};
}

void gdi_destroy_window(uint32_t window) {
    if (presented_surface().hwnd == window)
        gdi_forget_surface(presented_surface().owner);
    for (auto it = dcs().begin(); it != dcs().end();)
        if (it->second.window == window || it->second.surface == window)
            it = dcs().erase(it);
        else
            ++it;
}

namespace {
void solid_brush(X86 *c) {
    Object o;
    o.color = arg(c, 0);
    set_eax(c, make_object(o));
}
void indirect_object(X86 *c, bool pen) {
    uint32_t p = arg(c, 0), size = pen ? 16 : 12;
    if (!p || !gm_valid(p, size)) {
        set_eax(c, 0);
        return;
    }
    Object o;
    o.kind = pen ? Object::Pen : Object::Brush;
    o.style = rd32(p);
    o.width = int32_t(rd32(p + 4));
    o.color = rd32(p + (pen ? 12 : 4));
    set_eax(c, make_object(o));
}
void brush_indirect(X86 *c) {
    indirect_object(c, false);
}
void pen_indirect(X86 *c) {
    indirect_object(c, true);
}
void stock_object(X86 *c) {
    uint32_t i = arg(c, 0);
    set_eax(c, i <= 19 ? 0x4f100 + i : 0);
}
void get_pixel(X86 *c) {
    uint32_t p;
    set_eax(c, read_pixel(arg(c, 0), int32_t(arg(c, 1)), int32_t(arg(c, 2)), &p) ? colorref(p)
                                                                                 : 0xffffffff);
}
void set_pixel(X86 *c) {
    set_eax(c, write_pixel(arg(c, 0), int32_t(arg(c, 1)), int32_t(arg(c, 2)), argb(arg(c, 3)))
                   ? arg(c, 3) & 0xffffff
                   : 0xffffffff);
}
void save_dc(X86 *c) {
    auto *dc = dc_of(arg(c, 0));
    if (!dc) {
        set_eax(c, 0);
        return;
    }
    dc->saved.push_back(*dc);
    set_eax(c, uint32_t(dc->saved.size()));
}
void restore_dc(X86 *c) {
    auto *dc = dc_of(arg(c, 0));
    int64_t level = int32_t(arg(c, 1));
    if (!dc || !level) {
        set_eax(c, 0);
        return;
    }
    int64_t index = level > 0 ? level - 1 : int64_t(dc->saved.size()) + level;
    if (index < 0 || index >= int64_t(dc->saved.size())) {
        set_eax(c, 0);
        return;
    }
    static_cast<DcState &>(*dc) = dc->saved[size_t(index)];
    dc->saved.resize(size_t(index));
    set_eax(c, 1);
}
void origins(X86 *c, int which, bool set) {
    auto *dc = dc_of(arg(c, 0));
    uint32_t out = arg(c, set ? 3 : 1);
    if (!dc || (out && !gm_valid(out, 8))) {
        set_eax(c, 0);
        return;
    }
    int32_t *x = which == 0   ? &dc->org_x
                 : which == 1 ? &dc->viewport_x
                 : which == 2 ? &dc->brush_x
                              : &dc->pos_x;
    int32_t *y = which == 0   ? &dc->org_y
                 : which == 1 ? &dc->viewport_y
                 : which == 2 ? &dc->brush_y
                              : &dc->pos_y;
    if (out) {
        wr32(out, *x);
        wr32(out + 4, *y);
    }
    if (set) {
        *x = int32_t(arg(c, 1));
        *y = int32_t(arg(c, 2));
    }
    set_eax(c, 1);
}
void window_org(X86 *c) {
    origins(c, 0, true);
}
void get_window_org(X86 *c) {
    origins(c, 0, false);
}
void viewport_org(X86 *c) {
    origins(c, 1, true);
}
void brush_org(X86 *c) {
    origins(c, 2, true);
}
void get_brush_org(X86 *c) {
    origins(c, 2, false);
}
void move_to(X86 *c) {
    origins(c, 3, true);
}
void get_position(X86 *c) {
    origins(c, 3, false);
}
void stretch_mode(X86 *c) {
    auto *dc = dc_of(arg(c, 0));
    int v = int(arg(c, 1));
    if (!dc || v < 1 || v > 4) {
        set_eax(c, 0);
        return;
    }
    set_eax(c, dc->stretch_mode);
    dc->stretch_mode = v;
}
void get_stretch_mode(X86 *c) {
    auto *dc = dc_of(arg(c, 0));
    set_eax(c, dc ? dc->stretch_mode : 0);
}
void rop2(X86 *c) {
    auto *dc = dc_of(arg(c, 0));
    int v = int(arg(c, 1));
    if (!dc || v < 1 || v > 16) {
        set_eax(c, 0);
        return;
    }
    set_eax(c, dc->rop2);
    dc->rop2 = v;
}
void flush(X86 *c) {
    set_eax(c, 1);
}
void unrealize(X86 *c) {
    set_eax(c, arg(c, 0) != 0);
}
void resize_palette(X86 *c) {
    auto it = palettes().find(arg(c, 0));
    uint32_t n = arg(c, 1);
    if (it == palettes().end() || n > 65535) {
        set_eax(c, 0);
        return;
    }
    it->second.entries.resize(n);
    set_eax(c, 1);
}
void halftone(X86 *c) {
    Palette p;
    for (uint32_t i = 0; i < 256; ++i)
        p.entries.push_back(i * 0x010101);
    uint32_t h = g_next_palette++;
    palettes()[h] = p;
    set_eax(c, h);
}
void nearest_palette(X86 *c) {
    auto it = palettes().find(arg(c, 0));
    uint32_t best = 0, distance = UINT_MAX;
    if (it == palettes().end()) {
        set_eax(c, 0xffffffff);
        return;
    }
    for (size_t i = 0; i < it->second.entries.size(); ++i) {
        uint32_t delta = 0;
        for (int k = 0; k < 24; k += 8) {
            int v = int((arg(c, 1) >> k) & 255) - int((it->second.entries[i] >> k) & 255);
            delta += v * v;
        }
        if (delta < distance) {
            distance = delta;
            best = uint32_t(i);
        }
    }
    set_eax(c, best);
}
} // namespace
void gdi_model_register() {
#define G(name, n, fn)                                                                             \
    {                                                                                              \
        "GDI32.dll", name, n, fn                                                                   \
    }
    static const ImportShim shims[] = {G("CreateSolidBrush", 1, solid_brush),
                                       G("CreateBrushIndirect", 1, brush_indirect),
                                       G("CreatePenIndirect", 1, pen_indirect),
                                       G("GetStockObject", 1, stock_object),
                                       G("GetPixel", 3, get_pixel),
                                       G("SetPixel", 4, set_pixel),
                                       G("SaveDC", 1, save_dc),
                                       G("RestoreDC", 2, restore_dc),
                                       G("SetWindowOrgEx", 4, window_org),
                                       G("GetWindowOrgEx", 2, get_window_org),
                                       G("SetViewportOrgEx", 4, viewport_org),
                                       G("SetBrushOrgEx", 4, brush_org),
                                       G("GetBrushOrgEx", 2, get_brush_org),
                                       G("MoveToEx", 4, move_to),
                                       G("GetCurrentPositionEx", 2, get_position),
                                       G("SetStretchBltMode", 2, stretch_mode),
                                       G("GetStretchBltMode", 1, get_stretch_mode),
                                       G("SetROP2", 2, rop2),
                                       G("GdiFlush", 0, flush),
                                       G("UnrealizeObject", 1, unrealize),
                                       G("ResizePalette", 2, resize_palette),
                                       G("CreateHalftonePalette", 1, halftone),
                                       G("GetNearestPaletteIndex", 2, nearest_palette)};
#undef G
    imports_register(shims, sizeof(shims) / sizeof(shims[0]));
}

namespace gdi {
Rect to_device(uint32_t hdc, Rect r) {
    auto *dc = dc_of(hdc);
    if (!dc)
        return {};
    int64_t x = 0, y = 0;
    offset(*dc, &x, &y);
    auto bound = [](int64_t v) { return int32_t(std::clamp<int64_t>(v, INT_MIN, INT_MAX)); };
    return {bound(r.l + x), bound(r.t + y), bound(r.r + x), bound(r.b + y)};
}
} // namespace gdi
namespace {
// Decode BITMAPINFO independently of its pixel buffer. Shared by DIB sections,
// uploads and temporary borrowed views; every size is checked before narrowing.
bool describe_dib(uint32_t bmi, uint32_t usage, uint32_t hdc, Dib *d) {
    if (!bmi || !gm_valid(bmi, 40) || rd32(bmi) < 40 || !gm_valid(bmi, rd32(bmi)) ||
        rd16(bmi + 12) != 1)
        return false;
    d->width = int32_t(rd32(bmi + 4));
    d->height = int32_t(rd32(bmi + 8));
    d->bpp = rd16(bmi + 14);
    d->compression = rd32(bmi + 16);
    if (d->width <= 0 || !d->height ||
        !(d->bpp == 1 || d->bpp == 4 || d->bpp == 8 || d->bpp == 16 || d->bpp == 24 ||
          d->bpp == 32) ||
        !(d->compression == 0 || (d->compression == 3 && (d->bpp == 16 || d->bpp == 32))))
        return false;
    uint64_t stride = ((uint64_t(d->width) * d->bpp + 31) / 32) * 4,
             rows = std::abs(int64_t(d->height));
    if (stride * rows > GUEST_SIZE / 4)
        return false;
    d->stride = uint32_t(stride);
    d->size = uint32_t(stride * rows);
    uint32_t after = bmi + rd32(bmi);
    if (d->compression == 3) {
        uint32_t at = rd32(bmi) >= 52 ? bmi + 40 : after;
        if (!gm_valid(at, 12))
            return false;
        for (int i = 0; i < 3; ++i)
            d->masks[i] = rd32(at + 4 * i);
        if (rd32(bmi) < 52)
            after += 12;
    }
    if (d->bpp <= 8) {
        uint32_t count = rd32(bmi + 32);
        if (!count)
            count = 1u << d->bpp;
        if (count > (1u << d->bpp) || usage > 1 || !gm_valid(after, count * (usage ? 2 : 4)))
            return false;
        auto *dc = dc_of(hdc);
        auto palette = palettes().find(dc ? dc->palette : 0);
        for (uint32_t i = 0; i < count; ++i) {
            uint32_t p = usage ? 0 : rd32(after + i * 4);
            if (usage) {
                uint32_t index = rd16(after + i * 2);
                p = palette != palettes().end() && index < palette->second.entries.size()
                        ? colorref(palette->second.entries[index])
                        : index * 0x010101;
            }
            d->colors.push_back(p);
        }
    }
    return true;
}
uint32_t own_dib(Dib d, uint32_t bits_out = 0) {
    uint32_t h = make_dib(d.width, d.height, d.bpp, d.compression, bits_out);
    if (!h)
        return 0;
    d.bits = dibs()[h].bits;
    d.owned = true;
    dibs()[h] = std::move(d);
    return h;
}
void create_section(X86 *c) {
    Dib d;
    uint32_t out = arg(c, 3);
    if (arg(c, 4) || arg(c, 5) || !out || !gm_valid(out, 4) ||
        !describe_dib(arg(c, 1), arg(c, 2), arg(c, 0), &d)) {
        set_eax(c, 0);
        return;
    }
    set_eax(c, own_dib(d, out));
}
void create_bitmap(X86 *c) {
    int32_t w = int32_t(arg(c, 0)), h = int32_t(arg(c, 1));
    uint32_t bpp = arg(c, 3), bits = arg(c, 4);
    if (arg(c, 2) != 1 || w <= 0 || h <= 0 ||
        !(bpp == 1 || bpp == 4 || bpp == 8 || bpp == 16 || bpp == 24 || bpp == 32)) {
        set_eax(c, 0);
        return;
    }
    uint64_t stride = ((uint64_t(w) * bpp + 15) / 16) * 2;
    if (stride * h > GUEST_SIZE / 4 || (bits && !gm_valid(bits, uint32_t(stride * h)))) {
        set_eax(c, 0);
        return;
    }
    uint32_t bitmap = make_dib(w, -h, uint16_t(bpp), 0, 0);
    auto *d = dib_of(bitmap);
    if (d && bits)
        for (int y = 0; y < h; ++y)
            memcpy(g_mem + d->bits + y * d->stride, g_mem + bits + size_t(y) * stride,
                   size_t(stride));
    set_eax(c, bitmap);
}
void create_dibitmap(X86 *c) {
    Dib d;
    uint32_t info = arg(c, 4) ? arg(c, 4) : arg(c, 1), bits = arg(c, 3);
    if (!describe_dib(info, arg(c, 5), arg(c, 0), &d) ||
        ((arg(c, 2) & 4) && (!bits || !gm_valid(bits, d.size)))) {
        set_eax(c, 0);
        return;
    }
    uint32_t bitmap = own_dib(d);
    if (bitmap && (arg(c, 2) & 4))
        memcpy(g_mem + dib_of(bitmap)->bits, g_mem + bits, d.size);
    set_eax(c, bitmap);
}
void bitmap_bits(X86 *c) {
    auto *d = dib_of(arg(c, 0));
    uint32_t out = arg(c, 2), n = d ? std::min(d->size, arg(c, 1)) : 0;
    if (!d || (out && !gm_valid(out, n))) {
        set_eax(c, 0);
        return;
    }
    if (out)
        memcpy(g_mem + out, g_mem + d->bits, n);
    set_eax(c, out ? n : d->size);
}
void color_table(X86 *c) {
    auto *d = dib_in_dc(arg(c, 0));
    uint32_t start = arg(c, 1), count = arg(c, 2), out = arg(c, 3);
    if (!d || d->bpp > 8 || !out || start >= d->colors.size()) {
        set_eax(c, 0);
        return;
    }
    count = std::min<uint32_t>(count, uint32_t(d->colors.size()) - start);
    if (!gm_valid(out, count * 4)) {
        set_eax(c, 0);
        return;
    }
    for (uint32_t i = 0; i < count; ++i)
        wr32(out + 4 * i, d->colors[start + i]);
    set_eax(c, count);
}
// A borrowed descriptor lends the existing pixel conversion path to uploads.
struct DibDc {
    uint32_t bitmap, dc;
    explicit DibDc(Dib d) {
        d.owned = false;
        bitmap = g_next_bitmap++;
        dibs()[bitmap] = std::move(d);
        dc = g_next_dc++;
        dcs()[dc].bitmap = bitmap;
    }
    ~DibDc() {
        dcs().erase(dc);
        dibs().erase(bitmap);
    }
};
void set_dibits(X86 *c) {
    auto *dest = dib_of(arg(c, 1));
    Dib src;
    uint32_t start = arg(c, 2), count = arg(c, 3), bits = arg(c, 4);
    if (!dest || !describe_dib(arg(c, 5), arg(c, 6), arg(c, 0), &src) || !bits) {
        set_eax(c, 0);
        return;
    }
    uint32_t rows = uint32_t(std::abs(int64_t(dest->height)));
    if (start >= rows) {
        set_eax(c, 0);
        return;
    }
    count = std::min({count, rows - start, uint32_t(std::abs(int64_t(src.height)))});
    if (!count || !gm_valid(bits, count * src.stride)) {
        set_eax(c, 0);
        return;
    }
    bool top = src.height < 0;
    src.height = top ? -int32_t(count) : int32_t(count);
    src.bits = bits;
    src.size = count * src.stride;
    DibDc input(src), output(*dest);
    for (uint32_t scan = 0; scan < count; ++scan)
        for (int x = 0; x < std::min(src.width, dest->width); ++x) {
            uint32_t p;
            if (read_pixel(input.dc, x, top ? scan : count - 1 - scan, &p))
                write_pixel(output.dc, x, dest->height < 0 ? start + scan : rows - 1 - start - scan,
                            p);
        }
    set_eax(c, count);
}
void dib_to_device(X86 *c, bool stretch) {
    Dib src;
    uint32_t bits = arg(c, 9);
    if (!describe_dib(arg(c, 10), arg(c, 11), arg(c, 0), &src) || !bits) {
        set_eax(c, 0);
        return;
    }
    uint32_t count = uint32_t(std::abs(int64_t(src.height))), start = stretch ? 0 : arg(c, 7);
    if (start >= count) {
        set_eax(c, 0);
        return;
    }
    if (!stretch)
        count = std::min(arg(c, 8), count - start);
    if (!count || !gm_valid(bits, count * src.stride)) {
        set_eax(c, 0);
        return;
    }
    bool top = src.height < 0;
    if (!stretch)
        src.height = top ? -int32_t(count) : int32_t(count);
    src.bits = bits;
    src.size = count * src.stride;
    DibDc input(src);
    if (stretch) {
        // Reuse StretchBlt's clipping, ROP and primary routing via a nested
        // shim call on a fresh stack frame, preserving this import's args.
        uint32_t before = c->r[R_ESP];
        uint32_t values[] = {arg(c, 0), arg(c, 1), arg(c, 2), arg(c, 3), arg(c, 4), input.dc,
                             arg(c, 5), arg(c, 6), arg(c, 7), arg(c, 8), arg(c, 12)};
        for (int i = 10; i >= 0; --i) {
            c->r[R_ESP] -= 4;
            wr32(c->r[R_ESP], values[i]);
        }
        c->r[R_ESP] -= 4;
        wr32(c->r[R_ESP], 0);
        imports_dispatch(c, imports_resolve("GDI32.dll", "StretchBlt"));
        bool ok = c->r[R_EAX] != 0;
        c->r[R_ESP] = before;
        set_eax(c, ok ? uint32_t(std::abs(int64_t(int32_t(values[9])))) : 0);
    } else {
        int32_t dx = int32_t(arg(c, 1)), dy = int32_t(arg(c, 2)), sx = int32_t(arg(c, 5)),
                sy = int32_t(arg(c, 6));
        uint32_t width = arg(c, 3), height = arg(c, 4), lines = 0;
        Rect clip = clip_box(arg(c, 0));
        for (int64_t y = std::max<int64_t>(0, int64_t(clip.t) - dy);
             y < std::min<int64_t>(height, int64_t(clip.b) - dy); ++y) {
            int64_t scan = top ? int64_t(sy) + y : int64_t(sy) + height - 1 - y;
            if (scan < start || scan >= int64_t(start) + count)
                continue;
            bool written = false;
            for (int64_t x = std::max<int64_t>(0, int64_t(clip.l) - dx);
                 x < std::min<int64_t>(width, int64_t(clip.r) - dx); ++x) {
                uint32_t p;
                int64_t row = top ? scan - start : count - 1 - (scan - start);
                if (read_pixel(input.dc, int64_t(sx) + x, row, &p))
                    written |= write_pixel(arg(c, 0), int64_t(dx) + x, int64_t(dy) + y, p);
            }
            if (written)
                ++lines;
        }
        set_eax(c, lines);
    }
}
void stretch_dibits(X86 *c) {
    dib_to_device(c, true);
}
void set_dibits_device(X86 *c) {
    dib_to_device(c, false);
}
} // namespace
void gdi_bitmaps_register() {
#define G(n, a, f)                                                                                 \
    {                                                                                              \
        "GDI32.dll", n, a, f                                                                       \
    }
    static const ImportShim shims[] = {
        G("CreateDIBSection", 6, create_section),      G("CreateBitmap", 5, create_bitmap),
        G("CreateDIBitmap", 6, create_dibitmap),       G("SetDIBits", 7, set_dibits),
        G("SetDIBitsToDevice", 12, set_dibits_device), G("StretchDIBits", 13, stretch_dibits),
        G("GetDIBColorTable", 4, color_table),         G("GetBitmapBits", 3, bitmap_bits)};
#undef G
    imports_register(shims, sizeof(shims) / sizeof(shims[0]));
}
void gdi_bind_surface_dc(uint32_t dc, int w, int h, int bpp, uint32_t pitch, uint32_t bits,
                         const uint32_t *palette) {
    gdi_unbind_surface_dc(dc);
    Dib d;
    d.width = w;
    d.height = -h;
    d.bpp = uint16_t(bpp);
    d.bits = bits;
    d.stride = pitch;
    d.size = pitch * h;
    d.owned = false;
    if (bpp == 16) {
        d.masks[0] = 0xf800;
        d.masks[1] = 0x07e0;
        d.masks[2] = 0x001f;
    }
    if (bpp == 8)
        for (uint32_t i = 0; i < 256; ++i)
            d.colors.push_back(palette ? palette[i] : i * 0x010101);
    uint32_t bitmap = g_next_bitmap++;
    dibs()[bitmap] = std::move(d);
    dcs()[dc].bitmap = bitmap;
}
void gdi_unbind_surface_dc(uint32_t dc) {
    auto *d = dc_of(dc);
    if (!d)
        return;
    auto *bitmap = dib_in_dc(dc);
    if (bitmap && !bitmap->owned)
        dibs().erase(d->bitmap);
    dcs().erase(dc);
}
