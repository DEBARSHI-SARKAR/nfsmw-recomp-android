// raster.cpp - see raster.h.
#include "raster.h"

#include "../../mods/mods_internal.h"

#include <algorithm>
#include <cmath>
#include <cstring>

namespace controls {

namespace {

double clamp01(double t) {
    return std::clamp(t, 0.0, 1.0);
}

// The paint's colour at a canvas point. Flat is constant; the gradients are
// evaluated once per pixel (at its centre), not per supersample - plenty for
// the pad's soft shading and much simpler than tracking colour alongside
// coverage.
Rgba eval_paint(const Paint &p, double x, double y) {
    if (p.kind == Paint::Flat)
        return p.c0;
    double t;
    if (p.kind == Paint::Linear) {
        const double dx = p.x1 - p.x0, dy = p.y1 - p.y0;
        const double len2 = dx * dx + dy * dy;
        t = len2 > 0 ? ((x - p.x0) * dx + (y - p.y0) * dy) / len2 : 0.0;
    } else { // Radial
        const double dx = x - p.x0, dy = y - p.y0;
        t = p.x1 > 0 ? std::sqrt(dx * dx + dy * dy) / p.x1 : 0.0;
    }
    t = clamp01(t);
    Rgba out;
    out.r = uint8_t(std::lround(p.c0.r + (p.c1.r - p.c0.r) * t));
    out.g = uint8_t(std::lround(p.c0.g + (p.c1.g - p.c0.g) * t));
    out.b = uint8_t(std::lround(p.c0.b + (p.c1.b - p.c0.b) * t));
    out.a = uint8_t(std::lround(p.c0.a + (p.c1.a - p.c0.a) * t));
    return out;
}

// The shortest distance from (px,py) to the segment a-b.
double segment_dist(double px, double py, double ax, double ay, double bx, double by) {
    const double dx = bx - ax, dy = by - ay;
    const double len2 = dx * dx + dy * dy;
    double t = len2 > 0 ? ((px - ax) * dx + (py - ay) * dy) / len2 : 0.0;
    t = clamp01(t);
    const double cx = ax + t * dx, cy = ay + t * dy;
    const double ex = px - cx, ey = py - cy;
    return std::sqrt(ex * ex + ey * ey);
}

// Even-odd ray-casting point-in-polygon test.
bool inside_polygon(double px, double py, const std::vector<std::pair<double, double>> &pts) {
    bool in = false;
    const size_t n = pts.size();
    for (size_t i = 0, j = n - 1; i < n; j = i++) {
        const double xi = pts[i].first, yi = pts[i].second;
        const double xj = pts[j].first, yj = pts[j].second;
        if (((yi > py) != (yj > py)) && (px < (xj - xi) * (py - yi) / (yj - yi) + xi))
            in = !in;
    }
    return in;
}

} // namespace

Canvas::Canvas(std::vector<uint8_t> &px, int w, int h, double opacity)
    : px_(px), w_(w), h_(h), opacity_(clamp01(opacity)) {}

template <class Inside>
void Canvas::fill_shape(double bx0, double by0, double bx1, double by1, const Paint &p,
                        const Inside &inside) {
    // A player-edited layout can hand a shape a huge, negative or NaN
    // coordinate; clamp to the canvas (and bail on NaN, which clamp() does
    // not resolve) before any floor/ceil + int cast, so those casts always
    // see a finite value in range rather than undefined behaviour.
    if (std::isnan(bx0) || std::isnan(by0) || std::isnan(bx1) || std::isnan(by1))
        return;
    bx0 = std::clamp(bx0, 0.0, double(w_));
    by0 = std::clamp(by0, 0.0, double(h_));
    bx1 = std::clamp(bx1, 0.0, double(w_));
    by1 = std::clamp(by1, 0.0, double(h_));
    // The sample grid starts at each pixel's own (x, y) rather than its
    // centre (see below), so a pixel exactly at the shape's far bound can
    // still have an inside sample there; pad the upper bound by one pixel
    // to include it (an all-miss column/row elsewhere costs nothing).
    const int x0 = std::max(0, int(std::floor(bx0)));
    const int y0 = std::max(0, int(std::floor(by0)));
    const int x1 = std::min(w_, int(std::ceil(bx1)) + 1);
    const int y1 = std::min(h_, int(std::ceil(by1)) + 1);
    for (int y = y0; y < y1; ++y) {
        for (int x = x0; x < x1; ++x) {
            // 4x4 supersampling: coverage is the fraction of the 16 sample
            // points of a 4x4 sub-grid, starting at the pixel's own (x, y),
            // inside the shape. (Not sub-cell centres: that grid keeps a
            // pixel index equal to its top-left sample exactly on the
            // boundary it inside-tests as "<=", so an axis-aligned rect on
            // whole-pixel bounds still gets coverage 1 like the old Canvas.)
            int hits = 0;
            for (int sy = 0; sy < 4; ++sy) {
                const double py = y + sy / 4.0;
                for (int sx = 0; sx < 4; ++sx) {
                    const double px = x + sx / 4.0;
                    hits += inside(px, py) ? 1 : 0;
                }
            }
            if (hits == 0)
                continue;
            const double coverage = hits / 16.0;
            const Rgba c = eval_paint(p, x + 0.5, y + 0.5);
            uint8_t *dst = &px_[(size_t(y) * w_ + x) * 4];
            if (p.replace) {
                // Matches the old (non-anti-aliased) Canvas::fill exactly at
                // full coverage: round alpha once, then truncate colour *
                // alpha / 255 in integer math, same as `r * a / 255` there.
                const int a_scaled = int(std::lround(c.a * coverage * opacity_));
                dst[0] = uint8_t(int(c.r) * a_scaled / 255);
                dst[1] = uint8_t(int(c.g) * a_scaled / 255);
                dst[2] = uint8_t(int(c.b) * a_scaled / 255);
                dst[3] = uint8_t(a_scaled);
            } else {
                // Source-over in premultiplied space.
                const double a = (c.a / 255.0) * coverage * opacity_;
                const double na = 1.0 - a;
                dst[0] = uint8_t(std::lround(c.r * a + dst[0] * na));
                dst[1] = uint8_t(std::lround(c.g * a + dst[1] * na));
                dst[2] = uint8_t(std::lround(c.b * a + dst[2] * na));
                dst[3] = uint8_t(std::lround(a * 255.0 + dst[3] * na));
            }
        }
    }
}

void Canvas::rect(double x, double y, double w, double h, const Paint &p) {
    fill_shape(x, y, x + w, y + h, p, [=](double px, double py) {
        return px >= x && px < x + w && py >= y && py < y + h;
    });
}

void Canvas::round_rect(double x, double y, double w, double h, double radius, const Paint &p) {
    const double cx = x + w / 2.0, cy = y + h / 2.0;
    const double hw = w / 2.0, hh = h / 2.0;
    const double r = std::max(0.0, std::min({radius, hw, hh}));
    fill_shape(x, y, x + w, y + h, p, [=](double px, double py) {
        // Inigo Quilez's rounded-box distance: inside when <= 0.
        const double qx = std::abs(px - cx) - (hw - r);
        const double qy = std::abs(py - cy) - (hh - r);
        const double ax = std::max(qx, 0.0), ay = std::max(qy, 0.0);
        const double d = std::sqrt(ax * ax + ay * ay) + std::min(std::max(qx, qy), 0.0) - r;
        return d <= 0.0;
    });
}

void Canvas::disc(double cx, double cy, double r, const Paint &p) {
    fill_shape(cx - r, cy - r, cx + r, cy + r, p, [=](double px, double py) {
        const double dx = px - cx, dy = py - cy;
        return dx * dx + dy * dy <= r * r;
    });
}

void Canvas::ring(double cx, double cy, double r_outer, double r_inner, const Paint &p) {
    fill_shape(cx - r_outer, cy - r_outer, cx + r_outer, cy + r_outer, p,
               [=](double px, double py) {
                   const double dx = px - cx, dy = py - cy;
                   const double d2 = dx * dx + dy * dy;
                   return d2 <= r_outer * r_outer && d2 >= r_inner * r_inner;
               });
}

void Canvas::polygon(const std::vector<std::pair<double, double>> &pts, const Paint &p) {
    if (pts.size() < 3)
        return;
    double bx0 = pts[0].first, by0 = pts[0].second, bx1 = bx0, by1 = by0;
    for (const auto &pt : pts) {
        bx0 = std::min(bx0, pt.first);
        by0 = std::min(by0, pt.second);
        bx1 = std::max(bx1, pt.first);
        by1 = std::max(by1, pt.second);
    }
    fill_shape(bx0, by0, bx1, by1, p,
               [&](double px, double py) { return inside_polygon(px, py, pts); });
}

void Canvas::stroke(const std::vector<std::pair<double, double>> &pts, double width, bool closed,
                    const Paint &p) {
    if (pts.size() < 2)
        return;
    const double half = width / 2.0;
    double bx0 = pts[0].first, by0 = pts[0].second, bx1 = bx0, by1 = by0;
    for (const auto &pt : pts) {
        bx0 = std::min(bx0, pt.first);
        by0 = std::min(by0, pt.second);
        bx1 = std::max(bx1, pt.first);
        by1 = std::max(by1, pt.second);
    }
    fill_shape(bx0 - half, by0 - half, bx1 + half, by1 + half, p, [&](double px, double py) {
        const size_t n = pts.size();
        for (size_t i = 0; i + 1 < n; ++i)
            if (segment_dist(px, py, pts[i].first, pts[i].second, pts[i + 1].first,
                             pts[i + 1].second) <= half)
                return true;
        if (closed && n > 2 &&
            segment_dist(px, py, pts[n - 1].first, pts[n - 1].second, pts[0].first,
                         pts[0].second) <= half)
            return true;
        return false;
    });
}

void Canvas::text(int x, int y, const char *s, Rgba c, int scale, bool replace) {
    Paint p;
    p.kind = Paint::Flat;
    p.c0 = c;
    p.replace = replace;
    for (; *s; ++s, x += 6 * scale) {
        const uint8_t *glyph = mods_font6x8_glyph(*s);
        for (int row = 0; row < 8; ++row)
            for (int col = 0; col < 6; ++col)
                if (glyph[row] & (0x20 >> col))
                    rect(x + col * scale, y + row * scale, scale, scale, p);
    }
}

int Canvas::text_width(const char *s, int scale) const {
    return int(strlen(s)) * 6 * scale;
}

Rgba Canvas::at(int x, int y) const {
    if (x < 0 || y < 0 || x >= w_ || y >= h_)
        return Rgba{};
    const uint8_t *p = &px_[(size_t(y) * w_ + x) * 4];
    return Rgba{p[0], p[1], p[2], p[3]};
}

} // namespace controls
