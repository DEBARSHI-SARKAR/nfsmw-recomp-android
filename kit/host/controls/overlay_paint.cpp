// overlay_paint.cpp - see overlay_paint.h.
#include "overlay_paint.h"

#include "pad_art.h"

#include <algorithm>

namespace controls {

namespace {

Paint flat(int r, int g, int b, int a) {
    Paint p;
    p.kind = Paint::Flat;
    p.c0 = Rgba{uint8_t(r), uint8_t(g), uint8_t(b), uint8_t(a)};
    p.replace = true;
    return p;
}

// One control, wherever it is drawn: the play overlay's layers and the
// editor's layer draw an untouched control identically.
void paint_one(Canvas &c, const DrawControl &d, const Rect &r) {
    const int x = d.rect.x - r.x, y = d.rect.y - r.y, w = d.rect.w, h = d.rect.h;
    switch (d.kind) {
    // An action (the built-ins' F10) reads as a labelled key, not as pad art:
    // it stands for something outside the game.
    case Kind::Action:
    case Kind::Key: {
        if (d.lit)
            c.rect(x, y, w, h, flat(120, 160, 255, 220));
        else
            c.rect(x, y, w, h, flat(40, 48, 64, 200));
        const char *label = d.label.c_str();
        const Rgba text_color = d.lit ? Rgba{10, 12, 20, 255} : Rgba{235, 242, 255, 255};
        // A label too wide for a small key (inside a 2px margin each side)
        // drops to the 1x font.
        const int scale = c.text_width(label, 2) > w - 4 ? 1 : 2;
        c.text(x + (w - c.text_width(label, scale)) / 2, y + (h - 8 * scale) / 2, label, text_color,
               scale, true);
        break;
    }
    case Kind::Toggle: {
        c.rect(x, y, w, h, flat(6, 9, 15, 150));
        c.rect(x + 2, y + 2, w - 4, h - 4, flat(40, 48, 64, 200));
        const char *label = d.group_visible ? d.label.c_str() : d.label_off.c_str();
        c.text(x + (w - c.text_width(label)) / 2, y + (h - 16) / 2, label, Rgba{235, 242, 255, 255},
               2, true);
        break;
    }
    default:
        paint_control(c, d, r.x, r.y); // the DualSense look (pad_art.cpp)
        break;
    }
}

// The editor's accent, on the selection outline and the snap guides.
constexpr int kAccentR = 255, kAccentG = 200, kAccentB = 64;

// One key-style round rect with a centred label: the toolbar's tools and the
// picker's rows. `lit` inverts it, the way a latched modifier key inverts.
void paint_editor_key(Canvas &c, const DrawControl &d, const Rect &r) {
    const int x = d.rect.x - r.x, y = d.rect.y - r.y, w = d.rect.w, h = d.rect.h;
    if (w <= 0 || h <= 0)
        return;
    const double radius = std::min(8.0, std::min(w, h) / 3.0);
    c.round_rect(x, y, w, h, radius,
                 d.lit ? flat(kAccentR, kAccentG, kAccentB, 235) : flat(40, 48, 64, 235));
    const char *label = d.label.c_str();
    const Rgba text_color = d.lit ? Rgba{10, 12, 20, 255} : Rgba{235, 242, 255, 255};
    const int scale = c.text_width(label, 2) > w - 8 ? 1 : 2;
    c.text(x + (w - c.text_width(label, scale)) / 2, y + (h - 8 * scale) / 2, label, text_color,
           scale, true);
}

} // namespace

// The whole drawable is dimmed, the edited layout is drawn over it at rest,
// and the editor's own furniture sits on top: the grid dots the drag snaps
// to, the selection's outline, its guides, the toolbar and the open picker.
void paint_editor(Canvas &c, const ControlsView &view, const Rect &r) {
    c.rect(-r.x, -r.y, view.dw, view.dh, flat(0, 0, 0, 110));
    // The snap grid, from the anchor area's corner (editor.cpp measures it
    // from the same origin), under the controls so they stay readable.
    if (view.grid_step > 0 && !view.grid_area.empty()) {
        const int dot = std::max(1, view.grid_step / 10);
        const Rect &a = view.grid_area;
        for (int gy = a.y; gy < a.y + a.h; gy += view.grid_step)
            for (int gx = a.x; gx < a.x + a.w; gx += view.grid_step)
                c.rect(gx - r.x, gy - r.y, dot, dot, flat(255, 255, 255, 40));
    }
    for (const Rect &b : view.backdrops)
        c.rect(b.x - r.x, b.y - r.y, b.w, b.h, flat(6, 9, 15, 150));
    for (const DrawControl &d : view.controls)
        paint_one(c, d, r);
    // The selection: a 3 px accent frame on the control's own edge.
    if (view.selected >= 0 && view.selected < int(view.controls.size())) {
        const Rect &b = view.controls[view.selected].rect;
        const int x = b.x - r.x, y = b.y - r.y, w = b.w, h = b.h, t = 3;
        const Paint accent = flat(kAccentR, kAccentG, kAccentB, 255);
        c.rect(x, y, w, t, accent);
        c.rect(x, y + h - t, w, t, accent);
        c.rect(x, y, t, h, accent);
        c.rect(x + w - t, y, t, h, accent);
    }
    for (const Rect &g : view.guides)
        c.rect(g.x - r.x, g.y - r.y, g.w, g.h, flat(kAccentR, kAccentG, kAccentB, 200));
    for (const DrawControl &d : view.toolbar)
        paint_editor_key(c, d, r);
    if (!view.picker.empty())
        c.rect(view.picker.x - r.x, view.picker.y - r.y, view.picker.w, view.picker.h,
               flat(6, 9, 15, 235));
    for (const DrawControl &d : view.picker_rows)
        paint_editor_key(c, d, r);
}

void paint_layer(Canvas &c, const ControlsView &view, int layer, const Rect &r) {
    // The editor owns the one layer it publishes; nothing else is drawn.
    if (view.editing) {
        paint_editor(c, view, r);
        return;
    }
    // Portrait: the area below the game is opaque, whatever the opacity.
    if (layer == 0 && !view.controls_area.empty())
        c.rect(view.controls_area.x - r.x, view.controls_area.y - r.y, view.controls_area.w,
               view.controls_area.h, flat(12, 14, 18, 255));
    for (size_t i = 0; i < view.backdrops.size(); ++i) {
        if (i >= view.backdrop_layers.size() || view.backdrop_layers[i] != layer)
            continue;
        const Rect &b = view.backdrops[i];
        c.rect(b.x - r.x, b.y - r.y, b.w, b.h, flat(6, 9, 15, 150));
    }
    for (const DrawControl &d : view.controls)
        if (d.layer == layer)
            paint_one(c, d, r);
}

void paint_overlay(Canvas &c, const ControlsView &view, const Rect &r) {
    int layers = int(view.layers.size());
    for (const DrawControl &d : view.controls)
        layers = std::max(layers, d.layer + 1);
    for (int layer = 0; layer < layers; ++layer)
        paint_layer(c, view, layer, r);
}

} // namespace controls
