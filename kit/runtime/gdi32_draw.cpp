// Software raster operations over the shared DC pixel path. Destination work
// is bounded by the backing surface; blits snapshot sources before any write.
#include "gdi32_internal.h"
#include "guest.h"
#include "../platform/os.h"
#include "display_seam.h"
#include "win32.h"
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <cstring>
#include <deque>
using namespace gdi;
namespace {
int32_t si(X86 *c, int i) {
    return int32_t(arg(c, i));
}
Rect rectangle(X86 *c, int first = 1) {
    return {si(c, first), si(c, first + 1), si(c, first + 2), si(c, first + 3)};
}
Rect read_rect(uint32_t p) {
    return {int32_t(rd32(p)), int32_t(rd32(p + 4)), int32_t(rd32(p + 8)), int32_t(rd32(p + 12))};
}
bool nonempty(Rect r) {
    return r.l < r.r && r.t < r.b;
}
Rect intersection(Rect a, Rect b) {
    return {std::max(a.l, b.l), std::max(a.t, b.t), std::min(a.r, b.r), std::min(a.b, b.b)};
}
// ROP3's high byte is a truth table indexed by pattern, source and destination.
uint32_t raster(uint32_t code, uint32_t p, uint32_t s, uint32_t d) {
    uint32_t out = 0;
    for (unsigned i = 0; i < 8; ++i)
        if (code & (1u << i))
            out |= (i & 4 ? p : ~p) & (i & 2 ? s : ~s) & (i & 1 ? d : ~d);
    return out | 0xff000000;
}
uint32_t brush(uint32_t dc) {
    uint32_t p = 0;
    auto *d = dc_of(dc);
    if (d)
        brush_color(d->brush, &p);
    return p;
}
void pen_pixel(uint32_t dc, int64_t x, int64_t y, uint32_t p) {
    uint32_t old;
    auto *d = dc_of(dc);
    if (!d || !read_pixel(dc, x, y, &old))
        return;
    uint32_t code = uint32_t(d->rop2 - 1), out = 0;
    for (unsigned i = 0; i < 4; ++i)
        if (code & (1u << i))
            out |= (i & 2 ? p : ~p) & (i & 1 ? old : ~old);
    write_pixel(dc, x, y, out | 0xff000000);
}
// `mask` is MaskBlt's monochrome bitmap, sampled from (mx, my) one bit per
// destination pixel: a set bit takes the foreground raster operation, byte 2
// of `rop`, and a clear one the background, byte 3 (what MAKEROP4 builds).
// Without a mask every pixel takes the foreground, which is an ordinary blit.
bool blit(uint32_t dst, int32_t x, int32_t y, int32_t w, int32_t h, uint32_t src, int32_t sx,
          int32_t sy, int32_t sw, int32_t sh, uint32_t rop, uint32_t mask = 0, int32_t mx = 0,
          int32_t my = 0) {
    int dw, dh, srcw, srch;
    if (!dc_size(dst, &dw, &dh) || !dc_size(src, &srcw, &srch) || !w || !h || !sw || !sh)
        return false;
    int64_t width = std::abs(int64_t(w)), height = std::abs(int64_t(h));
    Rect clip = clip_box(dst);
    int64_t left = std::max<int64_t>(clip.l, w < 0 ? int64_t(x) - width : x),
            top = std::max<int64_t>(clip.t, h < 0 ? int64_t(y) - height : y);
    int64_t right = std::min<int64_t>(clip.r, w < 0 ? x : int64_t(x) + width),
            bottom = std::min<int64_t>(clip.b, h < 0 ? y : int64_t(y) + height);
    if (right <= left || bottom <= top)
        return true;
    if (uint64_t(right - left) * (bottom - top) > GUEST_SIZE / 4)
        return false;
    struct Sample {
        uint32_t p = 0;
        bool valid = false;
    };
    std::vector<Sample> copy(size_t((right - left) * (bottom - top)));
    for (int64_t yy = top; yy < bottom; ++yy)
        for (int64_t xx = left; xx < right; ++xx) {
            int64_t ix = w < 0 ? int64_t(x) - 1 - xx : xx - x,
                    iy = h < 0 ? int64_t(y) - 1 - yy : yy - y;
            int64_t px = sw < 0 ? int64_t(sx) - 1 - ix * std::abs(int64_t(sw)) / width
                                : int64_t(sx) + ix * sw / width;
            int64_t py = sh < 0 ? int64_t(sy) - 1 - iy * std::abs(int64_t(sh)) / height
                                : int64_t(sy) + iy * sh / height;
            auto &sample = copy[size_t((yy - top) * (right - left) + xx - left)];
            sample.valid = read_pixel(src, px, py, &sample.p);
        }
    // Colour and monochrome are converted, not colour-matched: blitting into a
    // 1-bit bitmap turns every pixel of the source's background colour white
    // and the rest black, and blitting out of one turns white into the
    // destination's background colour and black into its text colour. That
    // conversion is how a transparency mask is built and used, so without it a
    // mask comes out as a luminance map and a transparent draw keeps the wrong
    // half of the image.
    const bool to_mono = dc_is_monochrome(dst) && !dc_is_monochrome(src);
    const bool from_mono = dc_is_monochrome(src) && !dc_is_monochrome(dst);
    auto *src_dc = dc_of(src);
    auto *dst_dc = dc_of(dst);
    const uint32_t src_bk = src_dc ? gdi::argb(src_dc->bk_color) & 0xffffffu : 0xffffffu;
    const uint32_t dst_bk = dst_dc ? gdi::argb(dst_dc->bk_color) & 0xffffffu : 0xffffffu;
    const uint32_t dst_text = dst_dc ? gdi::argb(dst_dc->text_color) & 0xffffffu : 0u;
    if (to_mono || from_mono)
        for (auto &sample : copy) {
            if (!sample.valid)
                continue;
            if (to_mono)
                sample.p = (sample.p & 0xffffffu) == src_bk ? 0xffffffffu : 0xff000000u;
            else
                sample.p = 0xff000000u | ((sample.p & 0xffffffu) ? dst_bk : dst_text);
        }
    uint32_t pattern = brush(dst);
    for (int64_t yy = top; yy < bottom; ++yy)
        for (int64_t xx = left; xx < right; ++xx) {
            auto &sample = copy[size_t((yy - top) * (right - left) + xx - left)];
            uint32_t old;
            if (!sample.valid || !read_pixel(dst, xx, yy, &old))
                continue;
            unsigned index = (rop >> 16) & 255;
            if (mask) {
                bool set = true;
                // A mask bit outside the bitmap leaves the pixel alone rather
                // than guessing an operation for it.
                if (!mask_bit(mask, int64_t(mx) + xx - x, int64_t(my) + yy - y, &set))
                    continue;
                index = set ? index : (rop >> 24) & 255;
            }
            write_pixel(dst, xx, yy, raster(index, pattern, sample.p, old));
        }
    return true;
}
// Window blits target an active DirectDraw primary. Its seam pairs the write
// with the existing readback, mutation recorder and present machinery.
void blit_shim(X86 *c, int mode) {
    // The guest's return address, read before anything touches the frame. A
    // zero here is this file's own nested StretchBlt dispatch, which pushes a
    // zero in the return slot, so an internal draw is never mistaken for one
    // the guest asked for.
    const uint32_t blit_ret = rd32(c->r[R_ESP]);
    uint32_t dest = arg(c, 0), primary = 0;
    auto *dc = dc_of(dest);
    if (dc && !dc->memory && !dc->bitmap)
        primary = ddraw_gdi_begin_primary();
    if (primary) {
        // Preserve mapping and clipping when the primary supplies storage.
        DcState state = *dc;
        state.bitmap = dc_of(primary)->bitmap;
        state.surface = 0;
        static_cast<DcState &>(*dc_of(primary)) = state;
        dest = primary;
    }
    bool ok = blit(dest, si(c, 1), si(c, 2), si(c, 3), si(c, 4), arg(c, 5), si(c, 6), si(c, 7),
                   mode == 1 ? si(c, 8) : si(c, 3), mode == 1 ? si(c, 9) : si(c, 4),
                   arg(c, mode == 1   ? 10
                          : mode == 2 ? 11
                                      : 8),
                   mode == 2 ? arg(c, 8) : 0, mode == 2 ? si(c, 9) : 0, mode == 2 ? si(c, 10) : 0);
    if (primary)
        ddraw_gdi_end_primary(primary);
    // A refused blit is an anomaly worth naming: the guest asked for a draw and
    // got nothing, and the usual cause is a device context with no bitmap
    // behind it, which the geometry below makes obvious. RECOMP_TRACE_GDI=1
    // reports every blit instead, which is how "the picture was never drawn"
    // is told apart from "the picture was drawn and lost".
    static const bool trace = recomp_env("TRACE_GDI") != nullptr;
    if (!ok || trace) {
        int dw = -1, dh = -1, sw2 = -1, sh2 = -1;
        dc_size(dest, &dw, &dh);
        dc_size(arg(c, 5), &sw2, &sh2);
        LOGW("gdi: %s %s dst=%08x(%dx%d) src=%08x(%dx%d) at %d,%d %dx%d rop=%08x ret=%08x",
             ok ? "" : "REFUSED",
             mode == 1   ? "stretch"
             : mode == 2 ? "mask"
                         : "blit",
             dest, dw, dh, arg(c, 5), sw2, sh2, si(c, 1), si(c, 2), si(c, 3), si(c, 4),
             arg(c, mode == 1   ? 10
                    : mode == 2 ? 11
                                : 8),
             blit_ret);
        if (!ok) {
            // Who asked for it. A frame whose locals were never initialised
            // says the routine was entered past its own setup, which the
            // caller chain identifies.
            std::string line;
            for (uint32_t ret : win32_return_chain(c->r[R_EBP], 8)) {
                char word[16];
                snprintf(word, sizeof word, " %08x", ret);
                line += word;
            }
            LOGW("gdi:   refused from EBP=%08x ESI=%08x chain:%s", c->r[R_EBP], c->r[R_ESI],
                 line.c_str());
        }
    }
    set_eax(c, ok);
}
void bitblt(X86 *c) {
    blit_shim(c, 0);
}
void stretchblt(X86 *c) {
    blit_shim(c, 1);
}
void maskblt(X86 *c) {
    blit_shim(c, 2);
}
void patblt(X86 *c) {
    uint32_t dc = arg(c, 0);
    int w, h;
    if (!dc_size(dc, &w, &h)) {
        set_eax(c, 0);
        return;
    }
    Rect clip = clip_box(dc);
    int64_t r = int64_t(si(c, 1)) + si(c, 3), b = int64_t(si(c, 2)) + si(c, 4);
    uint32_t p = brush(dc);
    for (int64_t y = std::max(si(c, 2), clip.t); y < std::min<int64_t>(b, clip.b); ++y)
        for (int64_t x = std::max(si(c, 1), clip.l); x < std::min<int64_t>(r, clip.r); ++x) {
            uint32_t old;
            if (read_pixel(dc, x, y, &old))
                write_pixel(dc, x, y, raster((arg(c, 5) >> 16) & 255, p, 0, old));
        }
    set_eax(c, 1);
}
void line_to(X86 *c) {
    auto *dc = dc_of(arg(c, 0));
    if (!dc) {
        set_eax(c, 0);
        return;
    }
    int32_t x = si(c, 1), y = si(c, 2);
    line(arg(c, 0), dc->pos_x, dc->pos_y, x, y);
    dc->pos_x = x;
    dc->pos_y = y;
    set_eax(c, 1);
}
void box(X86 *c, bool ellipse = false) {
    uint32_t hdc = arg(c, 0);
    auto *dc = dc_of(hdc);
    int w, h;
    if (!dc || !dc_size(hdc, &w, &h)) {
        set_eax(c, 0);
        return;
    }
    Rect r = rectangle(c), clip = intersection(r, clip_box(hdc));
    uint32_t p = 0;
    bool filled = brush_color(dc->brush, &p);
    if (!nonempty(r)) {
        set_eax(c, 1);
        return;
    }
    if (!ellipse) {
        if (filled) {
            auto pen = objects().find(dc->pen);
            Rect interior = r;
            if (pen != objects().end() && pen->second.style != 5 && int64_t(r.r) - r.l > 1 &&
                int64_t(r.b) - r.t > 1)
                interior = {r.l + 1, r.t + 1, r.r - 1, r.b - 1};
            Rect bounds = intersection(interior, clip);
            for (int64_t y = bounds.t; y < bounds.b; ++y)
                for (int64_t x = bounds.l; x < bounds.r; ++x)
                    pen_pixel(hdc, x, y, p);
        }
        line(hdc, r.l, r.t, r.r - 1, r.t);
        line(hdc, r.r - 1, r.t, r.r - 1, r.b - 1);
        line(hdc, r.r - 1, r.b - 1, r.l, r.b - 1);
        line(hdc, r.l, r.b - 1, r.l, r.t);
    } else {
        double rx = (double(r.r) - r.l) / 2, ry = (double(r.b) - r.t) / 2, cx = r.l + rx,
               cy = r.t + ry;
        auto inside = [&](double x, double y) {
            double a = (x + .5 - cx) / rx, b = (y + .5 - cy) / ry;
            return a * a + b * b <= 1;
        };
        auto pen = objects().find(dc->pen);
        for (int64_t y = clip.t; y < clip.b; ++y)
            for (int64_t x = clip.l; x < clip.r; ++x)
                if (inside(x, y)) {
                    if (filled)
                        write_pixel(hdc, x, y, p);
                    if (pen != objects().end() && pen->second.style != 5 &&
                        (!inside(x - 1, y) || !inside(x + 1, y) || !inside(x, y - 1) ||
                         !inside(x, y + 1)))
                        pen_pixel(hdc, x, y, argb(pen->second.color));
                }
    }
    set_eax(c, 1);
}
void rect(X86 *c) {
    box(c);
}
void ellipse(X86 *c) {
    box(c, true);
}
void points(X86 *c, bool polygon, bool to) {
    uint32_t dc = arg(c, 0), at = arg(c, 1), n = arg(c, 2);
    auto *d = dc_of(dc);
    if (!d || !at || n > GUEST_SIZE / 8 || !gm_valid(at, n * 8)) {
        set_eax(c, 0);
        return;
    }
    std::vector<std::pair<int32_t, int32_t>> p;
    if (to)
        p.emplace_back(d->pos_x, d->pos_y);
    for (uint32_t i = 0; i < n; ++i)
        p.emplace_back(int32_t(rd32(at + i * 8)), int32_t(rd32(at + i * 8 + 4)));
    uint32_t color;
    if (polygon && p.size() > 2 && brush_color(d->brush, &color)) {
        Rect clip = clip_box(dc);
        for (int64_t y = clip.t; y < clip.b; ++y) {
            std::vector<double> edges;
            for (size_t i = 0, j = p.size() - 1; i < p.size(); j = i++) {
                double y0 = p[i].second, y1 = p[j].second;
                if ((y0 <= y + .5 && y1 > y + .5) || (y1 <= y + .5 && y0 > y + .5))
                    edges.push_back(p[i].first +
                                    (y + .5 - y0) * (double(p[j].first) - p[i].first) / (y1 - y0));
            }
            std::sort(edges.begin(), edges.end());
            for (size_t i = 0; i + 1 < edges.size(); i += 2)
                for (int64_t x = std::max<double>(clip.l, std::ceil(edges[i] - .5));
                     x < std::min<double>(clip.r, edges[i + 1] - .5); ++x)
                    write_pixel(dc, x, y, color);
        }
    }
    for (size_t i = 1; i < p.size(); ++i)
        line(dc, p[i - 1].first, p[i - 1].second, p[i].first, p[i].second);
    if (polygon && p.size() > 1)
        line(dc, p.back().first, p.back().second, p[0].first, p[0].second);
    if (to && !p.empty()) {
        d->pos_x = p.back().first;
        d->pos_y = p.back().second;
    }
    set_eax(c, 1);
}
void polyline(X86 *c) {
    points(c, false, false);
}
void polygon(X86 *c) {
    points(c, true, false);
}
void polyto(X86 *c) {
    points(c, false, true);
}
void arc(X86 *c, bool to, bool pie) {
    uint32_t dc = arg(c, 0);
    auto *d = dc_of(dc);
    if (!d) {
        set_eax(c, 0);
        return;
    }
    if (to)
        line(dc, d->pos_x, d->pos_y, si(c, 5), si(c, 6));
    line(dc, si(c, 5), si(c, 6), si(c, 7), si(c, 8));
    if (pie) {
        int32_t x = int32_t((int64_t(si(c, 1)) + si(c, 3)) / 2),
                y = int32_t((int64_t(si(c, 2)) + si(c, 4)) / 2);
        line(dc, si(c, 7), si(c, 8), x, y);
        line(dc, x, y, si(c, 5), si(c, 6));
    }
    if (to) {
        d->pos_x = si(c, 7);
        d->pos_y = si(c, 8);
    }
    set_eax(c, 1);
}
void arc_simple(X86 *c) {
    arc(c, false, false);
}
void arc_to(X86 *c) {
    arc(c, true, false);
}
void pie(X86 *c) {
    arc(c, false, true);
}
void angle_arc(X86 *c) {
    auto *d = dc_of(arg(c, 0));
    float start, sweep;
    uint32_t a = arg(c, 4), b = arg(c, 5);
    memcpy(&start, &a, 4);
    memcpy(&sweep, &b, 4);
    if (!d || !std::isfinite(start) || !std::isfinite(sweep) || arg(c, 3) > INT_MAX) {
        set_eax(c, 0);
        return;
    }
    auto point = [&](double angle) {
        double rad = angle * 3.141592653589793 / 180;
        return std::pair<int32_t, int32_t>{
            int32_t(std::clamp<double>(si(c, 1) + arg(c, 3) * std::cos(rad), INT_MIN, INT_MAX)),
            int32_t(std::clamp<double>(si(c, 2) - arg(c, 3) * std::sin(rad), INT_MIN, INT_MAX))};
    };
    auto p = point(start), q = point(double(start) + sweep);
    line(arg(c, 0), d->pos_x, d->pos_y, p.first, p.second);
    line(arg(c, 0), p.first, p.second, q.first, q.second);
    d->pos_x = q.first;
    d->pos_y = q.second;
    set_eax(c, 1);
}
void flood(X86 *c) {
    uint32_t dc = arg(c, 0), color = 0, initial;
    auto *d = dc_of(dc);
    int32_t x = si(c, 1), y = si(c, 2);
    if (!d || !brush_color(d->brush, &color) || !read_pixel(dc, x, y, &initial)) {
        set_eax(c, 0);
        return;
    }
    uint32_t boundary = argb(arg(c, 3)); // fourth argument is COLORREF; fifth is fill mode.
    bool surface = arg(c, 4) == 1;
    Rect r = clip_box(dc);
    int64_t width = int64_t(r.r) - r.l, height = int64_t(r.b) - r.t;
    if (width <= 0 || height <= 0 || uint64_t(width) * height > GUEST_SIZE / 4) {
        set_eax(c, 0);
        return;
    }
    std::vector<uint8_t> seen(size_t(width * height));
    std::deque<std::pair<int32_t, int32_t>> queue{{x, y}};
    while (!queue.empty()) {
        auto [px, py] = queue.front();
        queue.pop_front();
        if (px < r.l || py < r.t || px >= r.r || py >= r.b)
            continue;
        size_t index = size_t((int64_t(py) - r.t) * width + px - r.l);
        if (seen[index])
            continue;
        seen[index] = 1;
        uint32_t old;
        if (!read_pixel(dc, px, py, &old) || (surface ? old != boundary : old == boundary))
            continue;
        write_pixel(dc, px, py, color);
        if (px > r.l)
            queue.emplace_back(px - 1, py);
        if (px < r.r - 1)
            queue.emplace_back(px + 1, py);
        if (py > r.t)
            queue.emplace_back(px, py - 1);
        if (py < r.b - 1)
            queue.emplace_back(px, py + 1);
    }
    set_eax(c, 1);
}
void create_region(X86 *c) {
    Object o;
    o.kind = Object::Region;
    o.rect = rectangle(c, 0);
    set_eax(c, make_object(o));
}
void set_region(X86 *c) {
    auto it = objects().find(arg(c, 0));
    if (it == objects().end() || it->second.kind != Object::Region) {
        set_eax(c, 0);
        return;
    }
    it->second.rect = rectangle(c);
    set_eax(c, 1);
}
void region_box(X86 *c) {
    auto it = objects().find(arg(c, 0));
    uint32_t p = arg(c, 1);
    if (it == objects().end() || it->second.kind != Object::Region || !p || !gm_valid(p, 16)) {
        set_eax(c, 0);
        return;
    }
    Rect r = it->second.rect;
    wr32(p, r.l);
    wr32(p + 4, r.t);
    wr32(p + 8, r.r);
    wr32(p + 12, r.b);
    set_eax(c, nonempty(r) ? 2 : 1);
}
void frame_region(X86 *c) {
    auto it = objects().find(arg(c, 1));
    uint32_t color;
    int32_t w = si(c, 3), h = si(c, 4);
    if (it == objects().end() || it->second.kind != Object::Region ||
        !brush_color(arg(c, 2), &color) || w <= 0 || h <= 0) {
        set_eax(c, 0);
        return;
    }
    Rect r = it->second.rect, clip = intersection(r, clip_box(arg(c, 0)));
    for (int64_t y = clip.t; y < clip.b; ++y)
        for (int64_t x = clip.l; x < clip.r; ++x)
            if (x < int64_t(r.l) + w || x >= int64_t(r.r) - w || y < int64_t(r.t) + h ||
                y >= int64_t(r.b) - h)
                write_pixel(arg(c, 0), x, y, color);
    set_eax(c, 1);
}
void clip_rect(X86 *c, bool exclude) {
    uint32_t hdc = arg(c, 0);
    auto *dc = dc_of(hdc);
    int w, h;
    if (!dc || !dc_size(hdc, &w, &h)) {
        set_eax(c, 0);
        return;
    }
    Rect cut = to_device(hdc, rectangle(c));
    if (!dc->clipped) {
        dc->clip = {{0, 0, w, h}};
        dc->clipped = true;
    }
    std::vector<Rect> result;
    for (Rect old : dc->clip) {
        Rect hit = intersection(old, cut);
        if (!nonempty(hit)) {
            if (exclude)
                result.push_back(old);
            continue;
        }
        if (!exclude)
            result.push_back(hit);
        else {
            for (Rect piece : {Rect{old.l, old.t, old.r, hit.t}, Rect{old.l, hit.b, old.r, old.b},
                               Rect{old.l, hit.t, hit.l, hit.b}, Rect{hit.r, hit.t, old.r, hit.b}})
                if (nonempty(piece))
                    result.push_back(piece);
        }
    }
    dc->clip = std::move(result);
    set_eax(c, dc->clip.empty() ? 1 : dc->clip.size() == 1 ? 2 : 3);
}
void intersect_clip(X86 *c) {
    clip_rect(c, false);
}
void exclude_clip(X86 *c) {
    clip_rect(c, true);
}
void get_clip(X86 *c) {
    uint32_t out = arg(c, 1);
    auto *dc = dc_of(arg(c, 0));
    if (!dc || !out || !gm_valid(out, 16)) {
        set_eax(c, 0);
        return;
    }
    Rect r = clip_box(arg(c, 0));
    wr32(out, r.l);
    wr32(out + 4, r.t);
    wr32(out + 8, r.r);
    wr32(out + 12, r.b);
    set_eax(c, !nonempty(r) ? 1 : dc->clip.size() > 1 ? 3 : 2);
}
void visible(X86 *c) {
    uint32_t p = arg(c, 1);
    if (!p || !gm_valid(p, 16)) {
        set_eax(c, 0);
        return;
    }
    Rect r = intersection(read_rect(p), clip_box(arg(c, 0)));
    for (int64_t y = r.t; y < r.b; ++y)
        for (int64_t x = r.l; x < r.r; ++x)
            if (drawable(arg(c, 0), x, y)) {
                set_eax(c, 1);
                return;
            }
    set_eax(c, 0);
}
} // namespace
namespace gdi {
// Clip parametric endpoints before Bresenham so enormous guest coordinates
// cannot turn a tiny on-screen line into billions of off-screen iterations.
void line(uint32_t dc, int32_t x, int32_t y, int32_t x1, int32_t y1) {
    auto *d = dc_of(dc);
    if (!d)
        return;
    auto pen = objects().find(d->pen);
    if (pen == objects().end() || pen->second.style == 5)
        return;
    Rect r = clip_box(dc);
    if (!nonempty(r))
        return;
    double dx = double(x1) - x, dy = double(y1) - y, t0 = 0, t1 = 1;
    auto edge = [&](double p, double q) {
        if (p == 0)
            return q >= 0;
        double t = q / p;
        if (p < 0)
            t0 = std::max(t0, t);
        else
            t1 = std::min(t1, t);
        return t0 <= t1;
    };
    if (!edge(-dx, double(x) - r.l) || !edge(dx, double(r.r) - 1 - x) ||
        !edge(-dy, double(y) - r.t) || !edge(dy, double(r.b) - 1 - y))
        return;
    int64_t ax = std::llround(x + dx * t0), ay = std::llround(y + dy * t0),
            bx = std::llround(x + dx * t1), by = std::llround(y + dy * t1);
    int64_t vx = std::abs(bx - ax), vy = -std::abs(by - ay), stepx = ax < bx ? 1 : -1,
            stepy = ay < by ? 1 : -1, err = vx + vy;
    int width = int(std::clamp<int64_t>(std::abs(int64_t(pen->second.width)), 1, 4096));
    uint32_t color = argb(pen->second.color);
    for (;;) {
        if (ax == x1 && ay == y1)
            break; // Win32 excludes the terminal pixel.
        for (int oy = -(width / 2); oy < width - width / 2; ++oy)
            for (int ox = -(width / 2); ox < width - width / 2; ++ox)
                pen_pixel(dc, ax + ox, ay + oy, color);
        if (ax == bx && ay == by)
            break;
        int64_t e = err * 2;
        if (e >= vy) {
            err += vy;
            ax += stepx;
        }
        if (e <= vx) {
            err += vx;
            ay += stepy;
        }
    }
}
void register_draw() {
#define G(n, a, f)                                                                                 \
    {                                                                                              \
        "GDI32.dll", n, a, f                                                                       \
    }
    static const ImportShim shims[] = {G("BitBlt", 9, bitblt),
                                       G("StretchBlt", 11, stretchblt),
                                       G("MaskBlt", 12, maskblt),
                                       G("PatBlt", 6, patblt),
                                       G("LineTo", 3, line_to),
                                       G("Polyline", 3, polyline),
                                       G("Polygon", 3, polygon),
                                       G("Rectangle", 5, rect),
                                       G("RoundRect", 7, rect),
                                       G("Ellipse", 5, ellipse),
                                       G("Arc", 9, arc_simple),
                                       G("ArcTo", 9, arc_to),
                                       G("AngleArc", 6, angle_arc),
                                       G("Chord", 9, arc_simple),
                                       G("Pie", 9, pie),
                                       G("PolyBezier", 3, polyline),
                                       G("PolyBezierTo", 3, polyto),
                                       G("ExtFloodFill", 5, flood),
                                       G("CreateRectRgn", 4, create_region),
                                       G("SetRectRgn", 5, set_region),
                                       G("GetRgnBox", 2, region_box),
                                       G("FrameRgn", 5, frame_region),
                                       G("IntersectClipRect", 5, intersect_clip),
                                       G("ExcludeClipRect", 5, exclude_clip),
                                       G("GetClipBox", 2, get_clip),
                                       G("RectVisible", 2, visible)};
#undef G
    imports_register(shims, sizeof(shims) / sizeof(shims[0]));
}
} // namespace gdi
