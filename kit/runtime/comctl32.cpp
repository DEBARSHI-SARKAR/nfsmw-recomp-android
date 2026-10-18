// Common-control image caches and flat scrollbars. The guest scheduler owns
// these maps. Images own pixel snapshots, never host pointers passed as handles.
#include "imports.h"
#include "gdi_image.h"
#include "memory.h"
#include "resources.h"
#include "win32.h"
#include <algorithm>
#include <map>
#include <array>
#include <cstdio>

namespace {
constexpr uint32_t NONE = 0xffffffffu;
struct ImageList {
    int32_t cx = 0, cy = 0;
    uint32_t background = NONE, flags = 0, bitmap = 0, mask = 0;
    std::vector<GdiImage> images;
    std::array<int32_t, 16> overlays;
    ImageList() {
        overlays.fill(-1);
    }
};
std::map<uint32_t, ImageList> &lists() {
    static std::map<uint32_t, ImageList> m;
    return m;
}
uint32_t next_list = 0x00080000;
void sync(ImageList &il);
ImageList *list(uint32_t handle) {
    auto it = lists().find(handle);
    if (it == lists().end())
        return nullptr;
    sync(it->second);
    return &it->second;
}
bool dimensions(int32_t cx, int32_t cy, uint32_t count = 1) {
    return cx > 0 && cy > 0 && uint64_t(cx) * cy <= GUEST_SIZE / 4 &&
           uint64_t(cx) * cy * count <= GUEST_SIZE / 4;
}
void invalidate(ImageList &il) {
    if (il.bitmap)
        gdi_delete_bitmap(il.bitmap);
    if (il.mask)
        gdi_delete_bitmap(il.mask);
    il.bitmap = il.mask = 0;
}
uint32_t create(int32_t cx, int32_t cy, uint32_t flags) {
    if (!dimensions(cx, cy))
        return 0;
    uint32_t handle = next_list++;
    auto &il = lists()[handle];
    il.cx = cx;
    il.cy = cy;
    il.flags = flags;
    return handle;
}
GdiImage crop(const GdiImage &src, int32_t x, int32_t cx, int32_t cy) {
    GdiImage image;
    image.width = cx;
    image.height = cy;
    image.pixels.assign(size_t(cx) * cy, 0);
    for (int32_t y = 0; y < std::min(cy, src.height); ++y)
        for (int32_t col = 0; col < cx && x + col < src.width; ++col)
            image.pixels[size_t(y) * cx + col] = src.pixels[size_t(y) * src.width + x + col];
    return image;
}
// IMAGEINFO exposes writable guest bitmaps. Refresh snapshots before each
// operation so edits through their DCs remain visible to image-list callers.
void sync(ImageList &il) {
    if (!il.bitmap)
        return;
    GdiImage strip, mask;
    if (!gdi_read_bitmap(il.bitmap, &strip, true))
        return;
    if (il.mask && gdi_read_bitmap(il.mask, &mask) && mask.width == strip.width &&
        mask.height == strip.height)
        for (size_t p = 0; p < strip.pixels.size(); ++p)
            if (mask.pixels[p] & 0xffffff)
                strip.pixels[p] = 0;
    for (size_t i = 0; i < il.images.size(); ++i)
        il.images[i] = crop(strip, int32_t(i) * il.cx, il.cx, il.cy);
}
bool bitmap_image(uint32_t bitmap, uint32_t mask, GdiImage *image) {
    if (!gdi_read_bitmap(bitmap, image))
        return false;
    if (mask) {
        GdiImage m;
        if (!gdi_read_bitmap(mask, &m) || m.width < image->width || m.height < image->height)
            return false;
        for (int32_t y = 0; y < image->height; ++y)
            for (int32_t x = 0; x < image->width; ++x)
                if (m.pixels[size_t(y) * m.width + x] & 0xffffff)
                    image->pixels[size_t(y) * image->width + x] = 0;
    }
    return true;
}
int32_t add(ImageList &il, const GdiImage &strip) {
    uint32_t count = uint32_t(strip.width / il.cx), before = uint32_t(il.images.size());
    if (!count || strip.height < il.cy || count > UINT32_MAX - before ||
        !dimensions(il.cx, il.cy, before + count))
        return -1;
    for (uint32_t i = 0; i < count; ++i)
        il.images.push_back(crop(strip, int32_t(i) * il.cx, il.cx, il.cy));
    invalidate(il);
    return int32_t(before);
}
void il_Create(X86 *c) {
    set_eax(c, create(int32_t(arg(c, 0)), int32_t(arg(c, 1)), arg(c, 2)));
}
void il_Add(X86 *c) {
    ImageList *il = list(arg(c, 0));
    GdiImage image;
    set_eax(c, il && bitmap_image(arg(c, 1), arg(c, 2), &image) ? uint32_t(add(*il, image)) : NONE);
}
void il_Replace(X86 *c) {
    ImageList *il = list(arg(c, 0));
    GdiImage image;
    if (!il || arg(c, 1) >= il->images.size() || !bitmap_image(arg(c, 2), arg(c, 3), &image)) {
        set_eax(c, 0);
        return;
    }
    il->images[arg(c, 1)] = crop(image, 0, il->cx, il->cy);
    invalidate(*il);
    set_eax(c, 1);
}
void il_ReplaceIcon(X86 *c) {
    ImageList *il = list(arg(c, 0));
    GdiImage image;
    uint32_t i = arg(c, 1);
    if (!il || !gdi_read_icon(arg(c, 2), &image)) {
        set_eax(c, NONE);
        return;
    }
    if (i == NONE) {
        i = uint32_t(il->images.size());
        if (!dimensions(il->cx, il->cy, i + 1)) {
            set_eax(c, NONE);
            return;
        }
        il->images.push_back(crop(image, 0, il->cx, il->cy));
    } else if (i < il->images.size())
        il->images[i] = crop(image, 0, il->cx, il->cy);
    else {
        set_eax(c, NONE);
        return;
    }
    invalidate(*il);
    set_eax(c, i);
}
void il_Remove(X86 *c) {
    ImageList *il = list(arg(c, 0));
    uint32_t i = arg(c, 1);
    if (!il || (i != NONE && i >= il->images.size())) {
        set_eax(c, 0);
        return;
    }
    if (i == NONE) {
        il->images.clear();
        il->overlays.fill(-1);
    } else {
        il->images.erase(il->images.begin() + i);
        for (int32_t &overlay : il->overlays) {
            if (overlay == int32_t(i))
                overlay = -1;
            else if (overlay > int32_t(i))
                --overlay;
        }
    }
    invalidate(*il);
    set_eax(c, 1);
}
void il_GetImageCount(X86 *c) {
    auto il = list(arg(c, 0));
    set_eax(c, il ? uint32_t(il->images.size()) : 0);
}
void il_SetImageCount(X86 *c) {
    auto il = list(arg(c, 0));
    uint32_t count = arg(c, 1);
    if (!il || !dimensions(il->cx, il->cy, count)) {
        set_eax(c, 0);
        return;
    }
    GdiImage empty;
    empty.width = il->cx;
    empty.height = il->cy;
    empty.pixels.resize(size_t(il->cx) * il->cy);
    il->images.resize(count, empty);
    for (auto &overlay : il->overlays)
        if (overlay >= int64_t(count))
            overlay = -1;
    invalidate(*il);
    set_eax(c, 1);
}
void il_GetIconSize(X86 *c) {
    auto il = list(arg(c, 0));
    uint32_t x = arg(c, 1), y = arg(c, 2);
    if (!il || !x || !y || !gm_valid(x, 4) || !gm_valid(y, 4)) {
        set_eax(c, 0);
        return;
    }
    wr32(x, uint32_t(il->cx));
    wr32(y, uint32_t(il->cy));
    set_eax(c, 1);
}
void il_SetIconSize(X86 *c) {
    auto il = list(arg(c, 0));
    int32_t x = int32_t(arg(c, 1)), y = int32_t(arg(c, 2));
    if (!il || !dimensions(x, y)) {
        set_eax(c, 0);
        return;
    }
    il->images.clear();
    il->overlays.fill(-1);
    il->cx = x;
    il->cy = y;
    invalidate(*il);
    set_eax(c, 1);
}
void il_GetBkColor(X86 *c) {
    auto il = list(arg(c, 0));
    set_eax(c, il ? il->background : NONE);
}
void il_SetBkColor(X86 *c) {
    auto il = list(arg(c, 0));
    set_eax(c, il ? il->background : NONE);
    if (il)
        il->background = arg(c, 1);
}
// Resolve masks and overlays into a snapshot before drawing; the DC and GDI
// remain responsible for where pixels live. COLORREF is BGR, pixels are BGRA.
GdiImage render(const ImageList &il, uint32_t i, uint32_t style, uint32_t background) {
    GdiImage image = il.images[i];
    uint32_t slot = (style >> 8) & 15;
    if (slot && il.overlays[slot] >= 0 && uint32_t(il.overlays[slot]) < il.images.size()) {
        const auto &overlay = il.images[il.overlays[slot]];
        for (size_t p = 0; p < image.pixels.size(); ++p)
            if (overlay.pixels[p] >> 24)
                image.pixels[p] = overlay.pixels[p];
    }
    if (background == 0xff000000u)
        background = il.background; // CLR_DEFAULT
    uint32_t rgb = ((background & 255) << 16) | (background & 0xff00) | ((background >> 16) & 255);
    for (auto &p : image.pixels) {
        if (style & 0x10)
            p = p >> 24 ? 0xff000000 : 0xffffffff; // ILD_MASK
        else if (!(style & 1) && background != NONE && !(p >> 24))
            p = rgb | 0xff000000;
    }
    return image;
}
void draw(X86 *c, bool extended) {
    auto il = list(arg(c, 0));
    uint32_t i = arg(c, 1);
    if (!il || i >= il->images.size()) {
        set_eax(c, 0);
        return;
    }
    int32_t w = extended && arg(c, 5) ? int32_t(arg(c, 5)) : il->cx;
    int32_t h = extended && arg(c, 6) ? int32_t(arg(c, 6)) : il->cy;
    auto image = render(*il, i, arg(c, extended ? 9 : 5), extended ? arg(c, 7) : il->background);
    set_eax(c, w >= 0 && h >= 0 &&
                   gdi_draw_image(arg(c, 2), image, int32_t(arg(c, 3)), int32_t(arg(c, 4)), w, h));
}
void il_Draw(X86 *c) {
    draw(c, false);
}
void il_DrawEx(X86 *c) {
    draw(c, true);
}
void il_GetIcon(X86 *c) {
    auto il = list(arg(c, 0));
    uint32_t i = arg(c, 1);
    set_eax(c,
            il && i < il->images.size() ? gdi_create_icon(render(*il, i, arg(c, 2) | 1, NONE)) : 0);
}
void il_GetImageInfo(X86 *c) {
    auto il = list(arg(c, 0));
    uint32_t i = arg(c, 1), out = arg(c, 2);
    if (!il || i >= il->images.size() || !out || !gm_valid(out, 32)) {
        set_eax(c, 0);
        return;
    }
    if (!il->bitmap) {
        GdiImage strip;
        strip.width = il->cx * int32_t(il->images.size());
        strip.height = il->cy;
        strip.pixels.resize(size_t(strip.width) * strip.height);
        for (size_t n = 0; n < il->images.size(); ++n)
            for (int32_t y = 0; y < il->cy; ++y)
                std::copy_n(il->images[n].pixels.begin() + size_t(y) * il->cx, il->cx,
                            strip.pixels.begin() + size_t(y) * strip.width + n * il->cx);
        il->bitmap = gdi_image_bitmap(strip);
        if (il->flags & 1)
            il->mask = gdi_image_mask(strip);
    }
    if (!il->bitmap) {
        set_eax(c, 0);
        return;
    }
    memset(g_mem + out, 0, 32);
    wr32(out, il->bitmap);
    wr32(out + 4, il->mask);
    wr32(out + 16, i * il->cx);
    wr32(out + 24, (i + 1) * il->cx);
    wr32(out + 28, il->cy);
    set_eax(c, 1);
}
void il_Copy(X86 *c) {
    auto dst = list(arg(c, 0)), src = list(arg(c, 2));
    uint32_t di = arg(c, 1), si = arg(c, 3);
    if (!dst || !src || di >= dst->images.size() || si >= src->images.size() ||
        dst->cx != src->cx || dst->cy != src->cy || arg(c, 4) > 1) {
        set_eax(c, 0);
        return;
    }
    if (arg(c, 4) == 1)
        std::swap(dst->images[di], src->images[si]); // ILCF_SWAP
    else
        dst->images[di] = src->images[si];
    invalidate(*dst);
    invalidate(*src);
    set_eax(c, 1);
}
void destroy(uint32_t h) {
    auto il = list(h);
    if (il) {
        invalidate(*il);
        lists().erase(h);
    }
}
void il_Destroy(X86 *c) {
    uint32_t h = arg(c, 0);
    bool found = list(h);
    destroy(h);
    set_eax(c, found);
}
void il_LoadImageW(X86 *c) {
    // ImageList_LoadImage accepts IMAGE_BITMAP only, unlike LoadImage.
    // Both PE bitmap resources and uncompressed BMP files use the DIB decoder.
    if (arg(c, 5) != 0) {
        set_eax(c, 0);
        return;
    }
    uint32_t temp = 0, data = 0, bytes = 0, pixel_offset = 0;
    if (arg(c, 6) & 0x10) { // LR_LOADFROMFILE
        std::string path = win32_host_path(gm_wstr(arg(c, 1)));
        FILE *f = path.empty() ? nullptr : fopen(path.c_str(), "rb");
        if (f) {
            fseek(f, 0, SEEK_END);
            long n = ftell(f);
            rewind(f);
            if (n >= 54 && uint64_t(n) < GUEST_SIZE) {
                temp = heap_alloc(uint32_t(n));
                if (temp && fread(g_mem + temp, 1, size_t(n), f) == size_t(n) &&
                    rd16(temp) == 0x4d42 && rd32(temp + 10) >= 54 &&
                    rd32(temp + 10) <= uint32_t(n)) {
                    pixel_offset = rd32(temp + 10) - 14;
                    data = temp + 14;
                    bytes = uint32_t(n) - 14;
                }
            }
            fclose(f);
        }
    } else {
        uint32_t entry = resource_find(2, arg(c, 1));
        if (entry)
            data = resource_data(entry, &bytes);
    }
    GdiImage image;
    bool ok = data && gdi_decode_image(data, bytes, &image, pixel_offset);
    if (temp)
        heap_free(temp);
    if (!ok) {
        set_eax(c, 0);
        return;
    }
    uint32_t color = arg(c, 4);
    if (color == 0xff000000u)
        color = (image.pixels[0] & 0xff00) | ((image.pixels[0] >> 16) & 255) |
                ((image.pixels[0] & 255) << 16);
    if (color != NONE) {
        uint32_t rgb = (color & 0xff00) | ((color >> 16) & 255) | ((color & 255) << 16);
        for (auto &p : image.pixels)
            if ((p & 0xffffff) == rgb)
                p = 0;
    }
    uint32_t handle = create(arg(c, 2) ? int32_t(arg(c, 2)) : image.height, image.height, 0x21);
    if (handle && add(*list(handle), image) < 0) {
        destroy(handle);
        handle = 0;
    }
    set_eax(c, handle);
}
void fail(X86 *c) {
    set_eax(c, 0);
}
void yes(X86 *c) {
    set_eax(c, 1);
}
struct Drag {
    uint32_t image = 0;
    int32_t x = 0, y = 0, hx = 0, hy = 0;
} drag;
void il_EndDrag(X86 *c) {
    destroy(drag.image);
    drag = {};
    set_eax(c, 0);
}
void il_BeginDrag(X86 *c) {
    auto il = list(arg(c, 0));
    uint32_t i = arg(c, 1);
    if (!il || i >= il->images.size()) {
        set_eax(c, 0);
        return;
    }
    auto image = il->images[i];
    destroy(drag.image);
    drag = {};
    drag.image = create(image.width, image.height, 0x20);
    if (drag.image)
        list(drag.image)->images.push_back(std::move(image));
    drag.hx = int32_t(arg(c, 2));
    drag.hy = int32_t(arg(c, 3));
    set_eax(c, drag.image != 0);
}
void il_DragEnter(X86 *c) {
    drag.x = int32_t(arg(c, 1));
    drag.y = int32_t(arg(c, 2));
    set_eax(c, 1);
}
void il_DragMove(X86 *c) {
    drag.x = int32_t(arg(c, 0));
    drag.y = int32_t(arg(c, 1));
    set_eax(c, 1);
}
void il_GetDragImage(X86 *c) {
    if (arg(c, 0) && gm_valid(arg(c, 0), 8)) {
        wr32(arg(c, 0), drag.x);
        wr32(arg(c, 0) + 4, drag.y);
    }
    if (arg(c, 1) && gm_valid(arg(c, 1), 8)) {
        wr32(arg(c, 1), drag.hx);
        wr32(arg(c, 1) + 4, drag.hy);
    }
    set_eax(c, drag.image);
}
void il_SetOverlayImage(X86 *c) {
    auto il = list(arg(c, 0));
    uint32_t i = arg(c, 1), slot = arg(c, 2);
    bool ok = il && i < il->images.size() && slot > 0 && slot < 16;
    if (ok)
        il->overlays[slot] = int32_t(i);
    set_eax(c, ok);
}
// Shared scrollbar state for FlatSB and the plain window API. The exported
// bodies below use the plain Win32 argument layouts so user32 can reuse them.
struct Scroll {
    bool visible = true;
    uint32_t disabled = 0;
    int32_t min = 0, max = 100, pos = 0;
    uint32_t page = 0;
};
std::map<std::pair<uint32_t, uint32_t>, Scroll> scrollbars;
Scroll &scroll(X86 *c) {
    return scrollbars[{arg(c, 0), arg(c, 1)}];
}
void clamp(Scroll &s) {
    if (s.max < s.min)
        s.max = s.min;
    uint64_t range = uint64_t(int64_t(s.max) - s.min) + 1;
    s.page = uint32_t(std::min<uint64_t>(s.page, range));
    int64_t last = int64_t(s.max) - (s.page ? s.page - 1 : 0);
    s.pos = int32_t(std::max<int64_t>(s.min, std::min<int64_t>(last, s.pos)));
}
std::map<std::pair<uint32_t, uint32_t>, uint32_t> scroll_props;
void set_prop(X86 *c) {
    scroll_props[{arg(c, 0), arg(c, 1)}] = arg(c, 2);
    set_eax(c, 1);
}
void get_prop(X86 *c) {
    uint32_t out = arg(c, 2);
    if (!out || !gm_valid(out, 4)) {
        set_eax(c, 0);
        return;
    }
    wr32(out, scroll_props[{arg(c, 0), arg(c, 1)}]);
    set_eax(c, 1);
}
} // namespace
void win32_get_scroll_pos(X86 *c) {
    set_eax(c, scroll(c).pos);
}
void win32_set_scroll_pos(X86 *c) {
    auto &s = scroll(c);
    int32_t old = s.pos;
    s.pos = int32_t(arg(c, 2));
    clamp(s);
    set_eax(c, old);
}
void win32_get_scroll_info(X86 *c) {
    uint32_t out = arg(c, 2);
    if (!out || !gm_valid(out, 28) || rd32(out) != 28) {
        set_eax(c, 0);
        return;
    }
    auto &s = scroll(c);
    uint32_t mask = rd32(out + 4);
    if (mask & 1) {
        wr32(out + 8, s.min);
        wr32(out + 12, s.max);
    }
    if (mask & 2)
        wr32(out + 16, s.page);
    if (mask & 4)
        wr32(out + 20, s.pos);
    if (mask & 16)
        wr32(out + 24, s.pos);
    set_eax(c, 1);
}
void win32_set_scroll_info(X86 *c) {
    uint32_t in = arg(c, 2);
    if (!in || !gm_valid(in, 28) || rd32(in) != 28) {
        set_eax(c, 0);
        return;
    }
    auto &s = scroll(c);
    uint32_t mask = rd32(in + 4);
    if (mask & 1) {
        s.min = int32_t(rd32(in + 8));
        s.max = int32_t(rd32(in + 12));
    }
    if (mask & 2)
        s.page = rd32(in + 16);
    if (mask & 4)
        s.pos = int32_t(rd32(in + 20));
    clamp(s);
    set_eax(c, s.pos);
}
// Plain USER32 and FlatSB both own these same per-window records.
void win32_get_scroll_range(X86 *c) {
    uint32_t lo = arg(c, 2), hi = arg(c, 3);
    if (!lo || !hi || !gm_valid(lo, 4) || !gm_valid(hi, 4)) {
        set_eax(c, 0);
        return;
    }
    auto &s = scroll(c);
    wr32(lo, s.min);
    wr32(hi, s.max);
    set_eax(c, 1);
}
void win32_set_scroll_range(X86 *c) {
    auto &s = scroll(c);
    s.min = int32_t(arg(c, 2));
    s.max = int32_t(arg(c, 3));
    clamp(s);
    set_eax(c, 1);
}
void win32_show_scroll_bar(X86 *c) {
    uint32_t bar = arg(c, 1);
    bool visible = arg(c, 2) != 0;
    if (bar == 3) {
        scrollbars[{arg(c, 0), 0}].visible = visible;
        scrollbars[{arg(c, 0), 1}].visible = visible;
    } else
        scroll(c).visible = visible;
    set_eax(c, 1);
}
void win32_enable_scroll_bar(X86 *c) {
    uint32_t bar = arg(c, 1), flags = arg(c, 2);
    bool changed = false;
    for (uint32_t i = 0; i < 4; ++i)
        if ((bar == 3 && i < 2) || (bar != 3 && i == bar)) {
            auto &s = scrollbars[{arg(c, 0), i}];
            changed |= s.disabled != flags;
            s.disabled = flags;
        }
    set_eax(c, changed);
}
void win32_forget_scrollbars(uint32_t hwnd) {
    for (auto i = scrollbars.begin(); i != scrollbars.end();)
        if (i->first.first == hwnd)
            i = scrollbars.erase(i);
        else
            ++i;
    for (auto i = scroll_props.begin(); i != scroll_props.end();)
        if (i->first.first == hwnd)
            i = scroll_props.erase(i);
        else
            ++i;
}
namespace {
const ImportShim shims[] = {
#define I(name, n) {"COMCTL32.dll", "ImageList_" #name, n, il_##name}
    I(Create, 5),
    I(Add, 3),
    I(Replace, 4),
    I(ReplaceIcon, 3),
    I(Remove, 2),
    I(GetImageCount, 1),
    I(SetImageCount, 2),
    I(GetIconSize, 3),
    I(SetIconSize, 3),
    I(GetBkColor, 1),
    I(SetBkColor, 2),
    I(Draw, 6),
    I(DrawEx, 10),
    I(GetIcon, 3),
    I(GetImageInfo, 3),
    I(Copy, 5),
    I(Destroy, 1),
    I(LoadImageW, 7),
    I(BeginDrag, 4),
    I(EndDrag, 0),
    I(DragEnter, 3),
    I(DragMove, 2),
    I(GetDragImage, 2),
    I(SetOverlayImage, 3),
#undef I
    {"COMCTL32.dll", "ImageList_Read", 1, fail},
    {"COMCTL32.dll", "ImageList_DrawIndirect", 1, fail},
    {"COMCTL32.dll", "ImageList_Write", 2, fail},
    {"COMCTL32.dll", "ImageList_DragLeave", 1, yes},
    {"COMCTL32.dll", "ImageList_DragShowNolock", 1, yes},
    {"COMCTL32.dll", "InitializeFlatSB", 1, yes},
    {"COMCTL32.dll", "_TrackMouseEvent", 1, yes},
    {"COMCTL32.dll", "FlatSB_GetScrollPos", 2, win32_get_scroll_pos},
    {"COMCTL32.dll", "FlatSB_SetScrollPos", 4, win32_set_scroll_pos},
    {"COMCTL32.dll", "FlatSB_GetScrollInfo", 3, win32_get_scroll_info},
    {"COMCTL32.dll", "FlatSB_SetScrollInfo", 4, win32_set_scroll_info},
    {"COMCTL32.dll", "FlatSB_SetScrollProp", 4, set_prop},
    {"COMCTL32.dll", "FlatSB_GetScrollProp", 3, get_prop},
};
} // namespace
void comctl32_register() {
    imports_register(shims, sizeof shims / sizeof shims[0]);
}
