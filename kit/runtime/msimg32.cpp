// Software msimg32 operations over the shared GDI canvas. All access runs
// under the guest scheduler baton; guest pointers are validated before reads.
#include "gdi32_internal.h"
#include "win32.h"
#include <algorithm>
#include <cmath>

namespace {
using namespace gdi;
void fail(X86 *c, uint32_t error = 87) {
    set_last_error(error); // ERROR_INVALID_PARAMETER; unusable DCs use INVALID_HANDLE (6).
    set_eax(c, 0);
}
bool canvas(uint32_t dc) {
    int w, h;
    return dc_size(dc, &w, &h);
}
struct Vertex {
    int32_t x, y;
    uint32_t rgb;
};
Vertex vertex(uint32_t p) {
    return {int32_t(rd32(p)), int32_t(rd32(p + 4)),
            uint32_t(rd16(p + 8) >> 8) << 16 | uint32_t(rd16(p + 10) >> 8) << 8 |
                uint32_t(rd16(p + 12) >> 8)};
}
uint32_t interpolate(Vertex a, Vertex b, Vertex c, double wa, double wb, double wc) {
    uint32_t pixel = 0xff000000;
    for (unsigned shift = 0; shift < 24; shift += 8) {
        double channel = ((a.rgb >> shift) & 255) * wa + ((b.rgb >> shift) & 255) * wb +
                         ((c.rgb >> shift) & 255) * wc;
        pixel |= uint32_t(std::clamp(std::lround(channel), 0l, 255l)) << shift;
    }
    return pixel;
}
// Rectangle edges are exclusive at right/bottom, as in Rectangle. Triangles
// sample pixel centers. TRIVERTEX alpha is ignored by GradientFill itself.
void gradient_fill(X86 *c) {
    uint32_t dc = arg(c, 0), vertices = arg(c, 1), nv = arg(c, 2), mesh = arg(c, 3), nm = arg(c, 4),
             mode = arg(c, 5), stride = mode == 2 ? 12 : 8;
    if (!canvas(dc)) {
        fail(c, 6);
        return;
    }
    if (mode > 2 || !nv || !vertices || !mesh || nv > GUEST_SIZE / 16 || nm > GUEST_SIZE / stride ||
        !gm_valid(vertices, nv * 16) || !gm_valid(mesh, nm * stride)) {
        fail(c);
        return;
    }
    // Validate the whole mesh before drawing, including unused triangle slots.
    for (uint32_t i = 0; i < nm * (stride / 4); ++i)
        if (rd32(mesh + i * 4) >= nv) {
            fail(c);
            return;
        }
    Rect clip = clip_box(dc);
    for (uint32_t i = 0; i < nm; ++i) {
        uint32_t p = mesh + i * stride;
        Vertex a = vertex(vertices + 16 * rd32(p)), b = vertex(vertices + 16 * rd32(p + 4));
        if (mode != 2) {
            if (a.x >= b.x || a.y >= b.y)
                continue;
            for (int64_t y = std::max(a.y, clip.t); y < std::min(b.y, clip.b); ++y)
                for (int64_t x = std::max(a.x, clip.l); x < std::min(b.x, clip.r); ++x) {
                    double t = mode == 0 ? double(x - a.x) / (int64_t(b.x) - a.x)
                                         : double(y - a.y) / (int64_t(b.y) - a.y);
                    write_pixel(dc, x, y, interpolate(a, b, a, 1 - t, t, 0));
                }
        } else {
            Vertex d = vertex(vertices + 16 * rd32(p + 8));
            auto edge = [](Vertex u, Vertex v, double x, double y) {
                return (double(v.x) - u.x) * (y - u.y) - (double(v.y) - u.y) * (x - u.x);
            };
            double area = edge(a, b, d.x, d.y);
            if (area == 0)
                continue;
            int32_t left = std::max(clip.l, std::min({a.x, b.x, d.x})),
                    right = std::min(clip.r, std::max({a.x, b.x, d.x})),
                    top = std::max(clip.t, std::min({a.y, b.y, d.y})),
                    bottom = std::min(clip.b, std::max({a.y, b.y, d.y}));
            for (int64_t y = top; y < bottom; ++y)
                for (int64_t x = left; x < right; ++x) {
                    double wa = edge(b, d, x + .5, y + .5) / area,
                           wb = edge(d, a, x + .5, y + .5) / area, wc = 1 - wa - wb;
                    if (wa >= 0 && wb >= 0 && wc >= 0)
                        write_pixel(dc, x, y, interpolate(a, b, d, wa, wb, wc));
                }
        }
    }
    set_eax(c, 1);
}
// Both blits use nearest-neighbor sampling and snapshot the bounded source
// samples before writing. The shared pixel path applies each DC's mapping and
// clipping; work and storage are bounded by the destination surface.
void image_blt(X86 *c, bool alpha_blend) {
    uint32_t dst = arg(c, 0), src = arg(c, 5), blend = arg(c, 10);
    if (!canvas(dst) || !canvas(src)) {
        fail(c, 6);
        return;
    }
    int64_t x = int32_t(arg(c, 1)), y = int32_t(arg(c, 2)), w = int32_t(arg(c, 3)),
            h = int32_t(arg(c, 4)), sx = int32_t(arg(c, 6)), sy = int32_t(arg(c, 7)),
            sw = int32_t(arg(c, 8)), sh = int32_t(arg(c, 9));
    bool per_pixel = (blend >> 24) == 1;
    if (w <= 0 || h <= 0 || sw <= 0 || sh <= 0 ||
        (alpha_blend &&
         ((blend & 0xffff) || (blend >> 24) > 1 || (per_pixel && !dc_has_alpha(src))))) {
        fail(c);
        return;
    }
    Rect clip = clip_box(dst);
    int64_t left = std::max<int64_t>(x, clip.l), right = std::min<int64_t>(x + w, clip.r),
            top = std::max<int64_t>(y, clip.t), bottom = std::min<int64_t>(y + h, clip.b);
    if (right <= left || bottom <= top) {
        set_eax(c, 1);
        return;
    }
    if (uint64_t(right - left) * (bottom - top) > GUEST_SIZE / 4) {
        fail(c);
        return;
    }
    struct Sample {
        uint32_t pixel = 0;
        bool valid = false;
    };
    std::vector<Sample> samples(size_t((right - left) * (bottom - top)));
    for (int64_t yy = top; yy < bottom; ++yy)
        for (int64_t xx = left; xx < right; ++xx) {
            auto &sample = samples[size_t((yy - top) * (right - left) + xx - left)];
            sample.valid = read_pixel(src, sx + (xx - x) * sw / w, sy + (yy - y) * sh / h,
                                      &sample.pixel, true);
        }
    uint32_t constant = (blend >> 16) & 255;
    for (int64_t yy = top; yy < bottom; ++yy)
        for (int64_t xx = left; xx < right; ++xx) {
            auto &sample = samples[size_t((yy - top) * (right - left) + xx - left)];
            if (!sample.valid)
                continue;
            uint32_t pixel = sample.pixel;
            if (!alpha_blend) {
                if (colorref(pixel) != (blend & 0xffffff))
                    write_pixel(dst, xx, yy, pixel);
                continue;
            }
            uint32_t old;
            if (!read_pixel(dst, xx, yy, &old, true))
                continue;
            uint32_t opacity = per_pixel ? ((pixel >> 24) * constant + 127) / 255 : constant;
            uint32_t result = (opacity + ((old >> 24) * (255 - opacity) + 127) / 255) << 24;
            for (unsigned shift = 0; shift < 24; shift += 8) {
                uint32_t channel = (((pixel >> shift) & 255) * constant +
                                    ((old >> shift) & 255) * (255 - opacity) + 127) /
                                   255;
                result |= std::min(channel, 255u) << shift;
            }
            write_pixel(dst, xx, yy, result);
        }
    set_eax(c, 1);
}
void alpha_blend(X86 *c) {
    image_blt(c, true);
}
void transparent_blt(X86 *c) {
    image_blt(c, false);
}
} // namespace
void msimg32_register() {
    static const ImportShim shims[] = {{"msimg32.dll", "GradientFill", 6, gradient_fill},
                                       {"msimg32.dll", "AlphaBlend", 11, alpha_blend},
                                       {"msimg32.dll", "TransparentBlt", 11, transparent_blt}};
    imports_register(shims, sizeof shims / sizeof shims[0]);
}
