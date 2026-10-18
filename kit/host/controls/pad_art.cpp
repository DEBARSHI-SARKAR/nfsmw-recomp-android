// pad_art.cpp - see pad_art.h.
#include "pad_art.h"

#include <algorithm>
#include <cctype>
#include <cmath>
#include <string>
#include <utility>
#include <vector>

#ifndef M_PI // MSVC headers define it only on request
#define M_PI 3.14159265358979323846
#endif

namespace controls {

namespace {

using Points = std::vector<std::pair<double, double>>;

const Rgba kRim{90, 96, 110, 255};
const Rgba kLabel{220, 226, 238, 255};
const Rgba kLit{124, 178, 232, 255}; // the cross's blue, for lit arrows and triggers

// `c` with each colour channel moved by `d` and alpha scaled by `a`.
Rgba shade(Rgba c, int d, double a = 1.0) {
    const auto ch = [d](int v) { return uint8_t(std::clamp(v + d, 0, 255)); };
    return Rgba{ch(c.r), ch(c.g), ch(c.b), uint8_t(std::lround(c.a * std::clamp(a, 0.0, 1.0)))};
}

Paint flat(Rgba c) {
    Paint p;
    p.c0 = c;
    return p;
}

Paint linear(Rgba top, Rgba bottom, double x0, double y0, double x1, double y1) {
    Paint p;
    p.kind = Paint::Linear;
    p.c0 = top;
    p.c1 = bottom;
    p.x0 = x0;
    p.y0 = y0;
    p.x1 = x1;
    p.y1 = y1;
    return p;
}

Paint radial(Rgba inner, Rgba outer, double cx, double cy, double r) {
    Paint p;
    p.kind = Paint::Radial;
    p.c0 = inner;
    p.c1 = outer;
    p.x0 = cx;
    p.y0 = cy;
    p.x1 = r;
    return p;
}

// The drawn text: the control's own label, else its button's name in capitals.
std::string label_of(const DrawControl &c) {
    std::string s = c.label;
    if (s.empty() && c.kind == Kind::Button)
        s = pad_button_name(c.button);
    for (char &ch : s)
        ch = char(std::toupper(static_cast<unsigned char>(ch)));
    return s;
}

// Centres `s` on (cx, cy) at the largest 6x8 scale that fits max_w x max_h
// (at least 1x).
void label(Canvas &cv, double cx, double cy, const std::string &s, Rgba color, double max_w,
           double max_h) {
    if (s.empty())
        return;
    int scale = std::max(1, int(max_h * 0.45 / 8));
    while (scale > 1 && cv.text_width(s.c_str(), scale) > max_w * 0.85)
        --scale;
    const int w = cv.text_width(s.c_str(), scale);
    cv.text(int(std::lround(cx - w / 2.0)), int(std::lround(cy - 4.0 * scale)), s.c_str(), color,
            scale);
}

// A face button's glyph, stroked around (cx, cy) with s = r * 0.42.
void face_glyph(Canvas &cv, PadButton b, double cx, double cy, double r) {
    const double s = r * 0.42, width = r * 0.14;
    const auto at = [&](double x, double y) { return std::make_pair(cx + x, cy + y); };
    switch (b) {
    case PadButton::Cross: {
        const Paint p = flat(Rgba{124, 178, 232, 255});
        cv.stroke({at(-s, -s), at(s, s)}, width, false, p);
        cv.stroke({at(s, -s), at(-s, s)}, width, false, p);
        break;
    }
    case PadButton::Circle: {
        Points pts;
        for (int i = 0; i < 24; ++i) {
            const double t = i * 2 * M_PI / 24;
            pts.push_back(at(s * std::cos(t), s * std::sin(t)));
        }
        cv.stroke(pts, width, true, flat(Rgba{255, 102, 102, 255}));
        break;
    }
    case PadButton::Square: {
        const double h = 0.8 * s; // side 1.6 s
        cv.stroke({at(-h, -h), at(h, -h), at(h, h), at(-h, h)}, width, true,
                  flat(Rgba{255, 105, 248, 255}));
        break;
    }
    case PadButton::Triangle:
        cv.stroke({at(0, -s), at(0.95 * s, 0.7 * s), at(-0.95 * s, 0.7 * s)}, width, true,
                  flat(Rgba{64, 226, 160, 255}));
        break;
    default:
        break;
    }
}

// A round button: dark disc with a highlight up and left, a rim, and either
// a face glyph or a text label. Pressed brightens and shrinks it slightly.
void round_button(Canvas &cv, const DrawControl &c, double x, double y, double w, double h) {
    const double cx = x + w / 2, cy = y + h / 2;
    double r = std::min(w, h) / 2;
    const int lift = c.pressed ? 40 : 0;
    if (c.pressed)
        r *= 0.94;
    const double rim = std::max(2.0, r * 0.05);
    cv.disc(cx, cy, r,
            radial(shade(Rgba{58, 62, 72, 255}, lift), shade(Rgba{22, 24, 30, 255}, lift),
                   cx - r * 0.35, cy - r * 0.35, r * 1.5));
    cv.ring(cx, cy, r, r - rim, flat(shade(kRim, lift)));
    const bool face = c.button == PadButton::Cross || c.button == PadButton::Circle ||
                      c.button == PadButton::Square || c.button == PadButton::Triangle;
    if (face && c.label.empty())
        face_glyph(cv, c.button, cx, cy, r);
    else
        label(cv, cx, cy, label_of(c), kLabel, 1.6 * r, 1.6 * r);
}

// A trapezoid inside (x, y, w, h), `slant` narrower on each side at the top.
Points trapezoid(double x, double y, double w, double h, double slant) {
    return {{x + slant, y}, {x + w - slant, y}, {x + w, y + h}, {x, y + h}};
}

// L1/R1/L2/R2: a rimmed trapezoid wider at the bottom, shaded top to bottom;
// a trigger fills from the bottom by its value.
void shoulder(Canvas &cv, const DrawControl &c, double x, double y, double w, double h) {
    const int lift = c.pressed ? 40 : 0;
    const double slant = w * 0.08, rim = std::max(1.5, h * 0.04);
    cv.polygon(trapezoid(x, y, w, h, slant), flat(shade(kRim, lift)));
    // The face, inset by the rim (the slanted sides by a little more).
    const double fx = x + rim * 1.3, fy = y + rim, fw = w - rim * 2.6, fh = h - 2 * rim;
    const double fslant = slant * fh / h;
    cv.polygon(trapezoid(fx, fy, fw, fh, fslant),
               linear(shade(Rgba{72, 78, 92, 255}, lift), shade(Rgba{30, 33, 42, 255}, lift), x, y,
                      x, y + h));
    const bool trigger = c.button == PadButton::L2 || c.button == PadButton::R2;
    const double value = c.pressed ? 1.0 : 0.0; // the on-screen trigger is all or nothing
    if (trigger && value > 0) {
        const double top = fy + fh * (1 - value);
        const double in = fslant * value; // the slanted sides' inset at `top`
        cv.polygon({{fx + in, top}, {fx + fw - in, top}, {fx + fw, fy + fh}, {fx, fy + fh}},
                   flat(shade(kLit, 0, 0.55)));
    }
    label(cv, x + w / 2, y + h / 2, label_of(c), kLabel, w, h);
}

// Select, Start and Action: a pill with its label.
void pill(Canvas &cv, const DrawControl &c, double x, double y, double w, double h) {
    const int lift = c.pressed ? 40 : 0;
    const double r = std::min(w, h) / 2;
    cv.round_rect(x, y, w, h, r, flat(shade(kRim, lift)));
    const double rim = std::max(1.5, h * 0.05);
    cv.round_rect(x + rim, y + rim, w - 2 * rim, h - 2 * rim, r - rim,
                  linear(shade(Rgba{62, 67, 80, 255}, lift), shade(Rgba{32, 35, 44, 255}, lift), x,
                         y, x, y + h));
    label(cv, x + w / 2, y + h / 2, label_of(c), kLabel, w, h);
}

// Four arrow buttons on a recessed disc; each lights with its hat bit.
void dpad(Canvas &cv, const DrawControl &c, double x, double y, double w, double h) {
    const double cx = x + w / 2, cy = y + h / 2, r = std::min(w, h) / 2;
    cv.disc(cx, cy, r, radial(Rgba{18, 20, 26, 255}, Rgba{30, 33, 40, 255}, cx, cy, r));
    cv.ring(cx, cy, r, r - std::max(1.5, r * 0.04), flat(Rgba{56, 60, 72, 255}));
    const double a = r * 0.24, outer = r * 0.86, shoulder_at = r * 0.36, tip = r * 0.16;
    // Up, right, down, left: the arrow for "up", rotated a quarter turn each.
    const uint8_t bits[4] = {1, 2, 4, 8};
    const double dirs[4][2] = {{0, -1}, {1, 0}, {0, 1}, {-1, 0}};
    for (int i = 0; i < 4; ++i) {
        const double ux = dirs[i][0], uy = dirs[i][1]; // outward
        const double px_ = -uy, py_ = ux;              // across
        const auto pt = [&](double along, double across) {
            return std::make_pair(cx + ux * along + px_ * across, cy + uy * along + py_ * across);
        };
        const Points arrow = {pt(outer, -a), pt(outer, a), pt(shoulder_at, a), pt(tip, 0),
                              pt(shoulder_at, -a)};
        const bool lit = (c.hat & bits[i]) != 0;
        const auto [ox, oy] = pt(outer, 0);
        const auto [ix, iy] = pt(tip, 0);
        cv.polygon(arrow,
                   lit ? linear(shade(kLit, 30), kLit, ox, oy, ix, iy)
                       : linear(Rgba{80, 86, 100, 255}, Rgba{48, 52, 62, 255}, ox, oy, ix, iy));
    }
}

// A stick's base: a dark well with a rim ring. A floating stick's base is
// faint while idle and follows the touch while held.
void stick(Canvas &cv, const DrawControl &c, double x, double y, double w, double h, int ox,
           int oy) {
    const double r = c.radius_px > 0 ? c.radius_px : std::min(w, h) / 2;
    double cx = x + w / 2, cy = y + h / 2;
    if (c.pressed) {
        cx = c.base_x - ox;
        cy = c.base_y - oy;
    }
    const double alpha = c.floating && !c.pressed ? 0.35 : 1.0;
    cv.disc(cx, cy, r * 0.93,
            radial(shade(Rgba{14, 15, 20, 255}, 0, alpha), shade(Rgba{32, 35, 43, 255}, 0, alpha),
                   cx, cy, r));
    cv.ring(cx, cy, r, r * 0.86,
            linear(shade(Rgba{104, 110, 126, 255}, 0, alpha),
                   shade(Rgba{46, 50, 60, 255}, 0, alpha), cx, cy - r, cx, cy + r));
    if (!c.pressed) {
        // The resting knob. The canvas is re-rastered when the stick is
        // pressed (the revision includes it), so this never lingers under
        // the moving knob quad.
        const double kr = knob_radius(int(std::lround(r)));
        if (alpha >= 1.0) {
            paint_knob(cv, cx, cy, kr, false);
        } else {
            cv.disc(cx, cy, kr, flat(Rgba{70, 75, 88, uint8_t(255 * alpha)}));
        }
    }
}

} // namespace

double knob_radius(int radius_px) {
    return radius_px * 0.45;
}

void paint_knob(Canvas &cv, double cx, double cy, double r, bool pressed) {
    const int lift = pressed ? 25 : 0;
    // A soft shadow ring, the cap, then a concave dish: darker at the upper
    // left (the lip catches the light at the lower right) with a rim.
    cv.disc(cx, cy, r,
            radial(shade(Rgba{92, 98, 114, 255}, lift), shade(Rgba{40, 44, 54, 255}, lift),
                   cx - r * 0.3, cy - r * 0.3, r * 1.4));
    cv.disc(cx, cy, r * 0.74,
            radial(shade(Rgba{30, 33, 41, 255}, lift), shade(Rgba{64, 69, 82, 255}, lift),
                   cx - r * 0.25, cy - r * 0.25, r * 0.95));
    cv.ring(cx, cy, r, r * 0.9, flat(shade(Rgba{120, 126, 142, 255}, lift)));
}

void paint_control(Canvas &cv, const DrawControl &c, int ox, int oy) {
    const double x = c.rect.x - ox, y = c.rect.y - oy, w = c.rect.w, h = c.rect.h;
    if (w <= 0 || h <= 0)
        return;
    switch (c.kind) {
    case Kind::Button:
        switch (c.button) {
        case PadButton::L1:
        case PadButton::R1:
        case PadButton::L2:
        case PadButton::R2:
            shoulder(cv, c, x, y, w, h);
            break;
        case PadButton::Select:
        case PadButton::Start:
            pill(cv, c, x, y, w, h);
            break;
        default: // face buttons, L3/R3 and PS
            round_button(cv, c, x, y, w, h);
            break;
        }
        break;
    case Kind::Dpad:
        dpad(cv, c, x, y, w, h);
        break;
    case Kind::Stick:
        stick(cv, c, x, y, w, h, ox, oy);
        break;
    case Kind::Action:
        pill(cv, c, x, y, w, h);
        break;
    case Kind::Key:
    case Kind::Toggle:
        break; // overlay_paint.cpp keeps the keypad's own look
    }
}

} // namespace controls
