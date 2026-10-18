// overlay_view.cpp - make_view (overlay.h): no GPU, so the unit tests link it.
#include "overlay.h"

#include "../keypad_layout.h"
#include "editor.h"
#include "router.h"

#include <algorithm>
#include <cmath>
#include <cstring>

namespace controls {

namespace {

// FNV-1a over the view's fields: the revision the presenter compares.
struct Hash {
    uint64_t h = 1469598103934665603ull;
    void bytes(const void *p, size_t n) {
        const unsigned char *b = static_cast<const unsigned char *>(p);
        for (size_t i = 0; i < n; ++i) {
            h ^= b[i];
            h *= 1099511628211ull;
        }
    }
    void num(int64_t v) {
        bytes(&v, sizeof v);
    }
    void real(double v) {
        bytes(&v, sizeof v);
    }
    void str(const std::string &s) {
        num(int64_t(s.size()));
        bytes(s.data(), s.size());
    }
    void rect(const Rect &r) {
        num(r.x);
        num(r.y);
        num(r.w);
        num(r.h);
    }
};

Rect unite(const Rect &a, const Rect &b) {
    if (a.empty())
        return b;
    if (b.empty())
        return a;
    const int x0 = std::min(a.x, b.x), y0 = std::min(a.y, b.y);
    const int x1 = std::max(a.x + a.w, b.x + b.w), y1 = std::max(a.y + a.h, b.y + b.h);
    return Rect{x0, y0, x1 - x0, y1 - y0};
}

// Where a control can draw: its rect, and for a stick the whole base circle
// around a finger anywhere in its zone.
Rect drawn_rect(const DrawControl &d) {
    if (d.kind != Kind::Stick || d.radius_px <= 0)
        return d.rect;
    const int r = d.radius_px + 1;
    return Rect{d.rect.x - r, d.rect.y - r, d.rect.w + 2 * r, d.rect.h + 2 * r};
}

// What paint_overlay draws for one control: a key's press or a stick's knob
// offset is not drawn (the knob is its own quad), so neither is hashed.
// Extend this with every field a later task starts drawing.
void hash_control(Hash &h, const DrawControl &d) {
    h.num(int(d.kind));
    h.rect(d.rect);
    if (d.kind == Kind::Key) {
        h.str(d.label);
        h.num(d.lit ? 1 : 0);
    } else if (d.kind == Kind::Toggle) {
        h.str(d.group_visible ? d.label : d.label_off);
    } else {
        // The pad art (pad_art.cpp): labels, the button's glyph, its press,
        // the dpad's lit arrows and a stick's base.
        h.str(d.label);
        h.num(int(d.button));
        h.num(d.pressed ? 1 : 0);
        h.num(d.hat);
        if (d.kind == Kind::Stick) {
            h.num(d.radius_px);
            h.num(d.floating ? 1 : 0);
            if (d.pressed) { // at rest the base sits at the rect's centre
                h.real(d.base_x);
                h.real(d.base_y);
            }
        }
    }
}

int group_named(const Layout &l, const std::string &id) {
    for (size_t i = 0; i < l.groups.size(); ++i)
        if (l.groups[i].id == id)
            return int(i);
    return -1;
}

} // namespace

ControlsView make_view(const Layout &l, const Router &r, const Screen &s, double opacity) {
    ControlsView v;
    v.wanted = true;
    v.dw = s.dw;
    v.dh = s.dh;
    v.opacity = opacity;
    const bool toggles_only = r.toggles_only();
    // An auto-hidden layout draws only its layout switch: group HIDE/KEYS
    // tabs cannot reveal controls while hardware keeps them hidden. The portrait
    // controls strip has no controls left to sit under.
    if (!toggles_only)
        v.controls_area = s.controls_area;
    for (int g = 0; g < int(l.groups.size()); ++g) {
        const Group &grp = l.groups[g];
        if (grp.visible && grp.has_grid && !toggles_only) {
            v.backdrops.push_back(group_rect(l, g, s));
            v.backdrop_layers.push_back(g + 1);
        }
        for (int c = 0; c < int(grp.controls.size()); ++c) {
            const Control &ctl = grp.controls[c];
            // A toggle's tab is drawn even while its own group is hidden.
            if ((!grp.visible && ctl.kind != Kind::Toggle) ||
                (toggles_only && (ctl.kind != Kind::Toggle || group_named(l, ctl.target) >= 0)))
                continue;
            const ControlState &st = r.state(g, c);
            DrawControl d;
            d.kind = ctl.kind;
            d.rect = control_rect(l, g, c, s);
            d.label = ctl.label;
            d.pressed = st.pressed;
            d.lit = ctl.kind == Kind::Key && (r.lit() & keypad_modifier_bit(ctl.scancode)) != 0;
            d.button = ctl.button;
            d.knob_x = st.knob_x;
            d.knob_y = st.knob_y;
            d.base_x = st.base_x;
            d.base_y = st.base_y;
            d.hat = st.hat;
            d.floating = ctl.floating;
            d.layer = g + 1;
            // Scaled like the router's own travel (router.cpp), so the knob
            // quad lands where the stick's output says it is.
            if (ctl.kind == Kind::Stick)
                d.radius_px = int(std::lround(ctl.radius * l.scale * s.scale));
            if (ctl.kind == Kind::Toggle) {
                const int target = group_named(l, ctl.target);
                d.group_visible = target < 0 || l.groups[target].visible;
                d.label_off = ctl.label_off;
            }
            v.controls.push_back(d);
        }
    }

    // One hash per layer, each seeded with what every layer depends on.
    const size_t n = l.groups.size() + 1;
    std::vector<Hash> hashes(n);
    v.layers.assign(n, ControlsView::Layer{});
    for (Hash &h : hashes) {
        h.num(v.dw);
        h.num(v.dh);
        h.real(v.opacity);
    }
    v.layers[0].rect = v.controls_area;
    hashes[0].rect(v.controls_area);
    for (size_t i = 0; i < v.backdrops.size(); ++i) {
        const int layer = v.backdrop_layers[i];
        v.layers[layer].rect = unite(v.layers[layer].rect, v.backdrops[i]);
        hashes[layer].num(1);
        hashes[layer].rect(v.backdrops[i]);
    }
    for (const DrawControl &d : v.controls) {
        v.layers[d.layer].rect = unite(v.layers[d.layer].rect, drawn_rect(d));
        hash_control(hashes[d.layer], d);
    }
    Hash h;
    for (size_t i = 0; i < n; ++i) {
        hashes[i].rect(v.layers[i].rect);
        v.layers[i].revision = hashes[i].h;
        h.num(int64_t(hashes[i].h));
    }
    // Knobs are separate GPU quads, so motion must publish a fresh view even
    // though every cached layer raster stays valid. Otherwise controls_host
    // drops the moved view and the presenter keeps the finger-down position.
    for (size_t i = 0; i < v.controls.size(); ++i) {
        const DrawControl &d = v.controls[i];
        if (d.kind == Kind::Stick && d.pressed) {
            h.num(int64_t(i));
            h.real(d.knob_x);
            h.real(d.knob_y);
        }
    }
    v.revision = h.h;
    return v;
}

namespace {

// One toolbar item or picker row, as the key-style round rect the editor's
// layer draws: `lit` marks a tool that is on (Snap).
DrawControl editor_key(const Rect &r, const std::string &label, bool lit) {
    DrawControl d;
    d.kind = Kind::Key;
    d.rect = r;
    d.label = label;
    d.lit = lit;
    d.layer = 0;
    return d;
}

} // namespace

ControlsView make_view(const Editor &e, const Screen &s) {
    const Layout &l = e.layout();
    // The edited layout is placed in the editor's content screen, which
    // keeps the toolbar's band clear; the toolbar and picker rects are
    // already in the full screen's pixels.
    const Screen &cs = e.content_screen();
    ControlsView v;
    v.wanted = true;
    v.editing = true;
    v.dw = s.dw;
    v.dh = s.dh;
    v.opacity = 1.0;
    // The dimmer, the grid and the toolbar all reach outside any control, so
    // the single layer is the whole drawable.
    v.layers.assign(1, ControlsView::Layer{});
    v.layers[0].rect = Rect{0, 0, s.dw, s.dh};

    for (int g = 0; g < int(l.groups.size()); ++g) {
        const Group &grp = l.groups[g];
        if (grp.has_grid) {
            v.backdrops.push_back(group_rect(l, g, cs));
            v.backdrop_layers.push_back(0);
        }
        for (int c = 0; c < int(grp.controls.size()); ++c) {
            const Control &ctl = grp.controls[c];
            DrawControl d;
            d.kind = ctl.kind;
            d.rect = control_rect(l, g, c, cs);
            d.label = ctl.label;
            d.button = ctl.button;
            d.floating = ctl.floating;
            d.layer = 0;
            if (ctl.kind == Kind::Stick)
                d.radius_px = int(std::lround(ctl.radius * l.scale * cs.scale));
            if (ctl.kind == Kind::Toggle) {
                const int target = group_named(l, ctl.target);
                d.group_visible = target < 0 || l.groups[target].visible;
                d.label_off = ctl.label_off;
            }
            if (g == e.selected_group() && c == e.selected_control())
                v.selected = int(v.controls.size());
            v.controls.push_back(d);
        }
    }

    v.guides = e.guides();
    for (const ToolbarItem &item : e.toolbar())
        v.toolbar.push_back(editor_key(item.rect, item.label ? item.label : "",
                                       item.tool == Tool::Snap && e.snap()));
    v.picker = e.picker_rect();
    for (const PickerItem &item : e.picker())
        v.picker_rows.push_back(editor_key(item.rect, item.label, false));
    // The 10 pt grid the drag snaps to, from the same origin editor.cpp
    // measures it from (the anchor area's top-left corner).
    if (e.snap()) {
        v.grid_area = anchor_area(l, cs);
        v.grid_step = int(std::lround(10.0 * cs.scale));
        if (v.grid_step < 2)
            v.grid_step = 0;
    }

    // Editor::generation() bumps on every selection, rect, guide, picker,
    // toolbar and snap change, so it stands in for hashing all of it.
    Hash h;
    h.num(v.dw);
    h.num(v.dh);
    h.num(int64_t(e.generation()));
    v.layers[0].revision = h.h;
    v.revision = h.h;
    return v;
}

} // namespace controls
