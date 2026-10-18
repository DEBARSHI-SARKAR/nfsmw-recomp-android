// editor.cpp - the on-screen controls layout editor's model (editor.h).
#include "editor.h"

#include <algorithm>
#include <cmath>
#include <cstddef>
#include <cstdlib>
#include <utility>

namespace controls {

namespace {

// Sizes in points (spec section 9 and the Task 20 rulings).
const double kToolW = 72, kToolH = 36, kToolGap = 6, kToolMargin = 4;
const double kPickerW = 200, kPickerRow = 32, kPickerGap = 4;
const int kPickerRows = 12;
const double kGridPt = 10, kSnapPt = 6;
const double kSizeMin = 24, kSizeMax = 240, kKeyMin = 24, kKeyMax = 60, kSizeStep = 2;
const double kWheelPt = 4; // one wheel notch
const double kSlopPt = 2;  // movement below this is still a tap

const char *const kBuiltinNames[] = {"pad", "keys", "pad+keys"};

bool is_builtin(const std::string &name) {
    for (const char *b : kBuiltinNames)
        if (name == b)
            return true;
    return false;
}

const struct {
    Tool tool;
    const char *label;
} kTools[] = {
    {Tool::Add, "Add"},   {Tool::Delete, "Delete"}, {Tool::Bind, "Bind"},   {Tool::Stick, "Stick"},
    {Tool::Snap, "Snap"}, {Tool::Layout, "Layout"}, {Tool::Reset, "Reset"}, {Tool::Done, "Done"},
};

// 0 left / top, 1 centre, 2 right / bottom.
int anchor_col(Anchor a) {
    switch (a) {
    case Anchor::TopLeft:
    case Anchor::Left:
    case Anchor::BottomLeft:
        return 0;
    case Anchor::TopRight:
    case Anchor::Right:
    case Anchor::BottomRight:
        return 2;
    default:
        return 1;
    }
}

int anchor_row(Anchor a) {
    switch (a) {
    case Anchor::TopLeft:
    case Anchor::Top:
    case Anchor::TopRight:
        return 0;
    case Anchor::BottomLeft:
    case Anchor::Bottom:
    case Anchor::BottomRight:
        return 2;
    default:
        return 1;
    }
}

Anchor anchor_at(int col, int row) {
    static const Anchor table[3][3] = {
        {Anchor::TopLeft, Anchor::Top, Anchor::TopRight},
        {Anchor::Left, Anchor::Center, Anchor::Right},
        {Anchor::BottomLeft, Anchor::Bottom, Anchor::BottomRight},
    };
    return table[row][col];
}

// Which third of [start, start + len) `v` falls in.
int third(int v, int start, int len) {
    if (v * 3 < start * 3 + len)
        return 0;
    if (v * 3 < start * 3 + 2 * len)
        return 1;
    return 2;
}

// The inverse of layout.cpp's place() on one axis: the pixel offset that
// puts a `size` box at `pos` inside [start, start + len) for anchor side `side`.
int offset_for(int side, int pos, int size, int start, int len) {
    if (side == 0)
        return pos - start;
    if (side == 2)
        return start + len - size - pos;
    return pos - start - (len - size) / 2;
}

// The anchor for a rect by where its centre sits in thirds of `area`.
Anchor anchor_for(const Rect &r, const Rect &area) {
    return anchor_at(third(r.x + r.w / 2, area.x, area.w), third(r.y + r.h / 2, area.y, area.h));
}

double clamp_step(double v, double lo, double hi) {
    v = std::round(v / kSizeStep) * kSizeStep;
    return std::clamp(v, lo, hi);
}

Rect clamp_into(Rect r, const Rect &area) {
    if (r.w <= area.w)
        r.x = std::clamp(r.x, area.x, area.x + area.w - r.w);
    if (r.h <= area.h)
        r.y = std::clamp(r.y, area.y, area.y + area.h - r.h);
    return r;
}

std::string capitalised(const char *s) {
    std::string out = s;
    if (!out.empty() && out[0] >= 'a' && out[0] <= 'z')
        out[0] = char(out[0] - 'a' + 'A');
    return out;
}

void add_item(std::vector<PickerItem> *items, const std::string &label, const std::string &value) {
    items->push_back(PickerItem{label, value, Rect{}});
}

std::vector<std::string> key_names() {
    std::vector<std::string> out;
    for (int sc = 0; sc < 512; ++sc)
        if (const char *nm = scancode_name(sc))
            out.push_back(nm);
    return out;
}

bool usable_name(const std::string &name) {
    return !name.empty() && name != "." && name != ".." &&
           name.find_first_of("/\\") == std::string::npos && !is_builtin(name);
}

} // namespace

void Editor::open(const Layout &layout, Form form, const MappedTable &mapped, bool native,
                  bool snap) {
    open_ = true;
    layout_ = layout;
    form_ = form;
    mapped_ = mapped;
    mapped_changed_ = false;
    native_ = native;
    snap_ = snap;
    // The band depends on where this layout's anchors resolve, so it is
    // taken again now the layout is known.
    screen_ = content_screen(full_screen_);
    reset_transient();
    layout_toolbar();
}

void Editor::close() {
    open_ = false;
    reset_transient();
}

// Everything but the edited layout, the binding table and the settings:
// selection, gestures, picker and every pending result.
void Editor::reset_transient() {
    sel_group_ = sel_control_ = -1;
    guides_.clear();
    close_picker();
    fingers_.clear();
    dragging_ = drag_moved_ = pinching_ = false;
    drag_rect0_ = Rect{};
    pinch_d0_ = 0;
    pinch_base_ = Control{};
    pinch_key0_ = 0;
    outside_finger_ = -1;
    save_ = reset_ = cancel_ = false;
    rename_pending_ = renaming_ = false;
    rename_text_.clear();
    switch_pending_ = delete_pending_ = false;
    switch_name_.clear();
    changed();
}

// Ends a drag or pinch in progress, committing a moved drag's re-anchor
// first (the selection is still the one being dragged). Fingers stay down
// but are inert until they lift. Called before anything that changes the
// selection or the layout outside the gesture itself.
void Editor::end_gesture() {
    if (dragging_ && drag_moved_ && selection_valid())
        set_moving_rect(moving_rect(), true);
    if (dragging_ || pinching_ || !guides_.empty())
        changed();
    dragging_ = drag_moved_ = pinching_ = false;
    drag_rect0_ = Rect{};
    pinch_d0_ = 0;
    pinch_base_ = Control{};
    pinch_key0_ = 0;
    guides_.clear();
}

bool Editor::selection_valid() const {
    return sel_group_ >= 0 && sel_group_ < int(layout_.groups.size()) && sel_control_ >= 0 &&
           sel_control_ < int(layout_.groups[sel_group_].controls.size());
}

// The toolbar's band: its top margin, its height and the gap under it, in
// drawable pixels on `s`.
static double toolbar_band(const Screen &s) {
    const double scale = s.scale > 0 ? s.scale : 1.0;
    return (kToolMargin + kToolH + kToolGap) * scale;
}

// Everything the edited layout does -- drawing, hit testing, snapping and
// re-anchoring -- happens in an anchor area whose top starts below the
// toolbar, so a control anchored to the top centre (the pad built-in's KEYS
// tab) is never hidden by it. Writing the reserved rect into controls_area
// is what makes anchor_area() return it, whatever the layout's safe_inset
// says; the area is left alone when there is no room for the band.
Screen Editor::content_screen(const Screen &s) const {
    Screen c = s;
    const Rect base = anchor_area(layout_, s);
    const int band = int(std::lround(toolbar_band(s)));
    if (base.empty() || band <= 0 || base.h - band < 1)
        return c;
    c.controls_area = Rect{base.x, base.y + band, base.w, base.h - band};
    return c;
}

void Editor::set_screen(const Screen &s) {
    full_screen_ = s;
    screen_ = content_screen(s);
    layout_toolbar();
    if (picker_ != Picker::None)
        layout_picker();
    changed();
}

void Editor::set_names(std::vector<std::string> names) {
    names_ = std::move(names);
}

// The toolbar: a centred row at the top of the safe area (landscape) or of
// the controls area (portrait), shrinking its items when the row is wider
// than the area.
void Editor::layout_toolbar() {
    toolbar_.clear();
    // The full screen, not content_screen(): the toolbar owns the band it
    // takes out of the edited layout's area.
    Rect area = full_screen_.controls_area;
    if (area.empty())
        area = full_screen_.safe.empty() ? Rect{0, 0, full_screen_.dw, full_screen_.dh}
                                         : full_screen_.safe;
    const int n = int(std::size(kTools));
    int gap = int(std::lround(pt(kToolGap)));
    int margin = int(std::lround(pt(kToolMargin)));
    int w = int(std::lround(pt(kToolW)));
    int h = int(std::lround(pt(kToolH)));
    int fit = (area.w - 2 * margin - gap * (n - 1)) / n;
    if (fit < w)
        w = std::max(fit, 1);
    int total = w * n + gap * (n - 1);
    int x = area.x + (area.w - total) / 2;
    int y = area.y + margin;
    for (const auto &t : kTools) {
        toolbar_.push_back(ToolbarItem{t.tool, t.label, Rect{x, y, w, h}});
        x += w + gap;
    }
}

// Places the picker box under the tool that opened it and lists the rows
// currently scrolled into view, clipped to the box.
void Editor::layout_picker() {
    picker_view_.clear();
    Rect under;
    for (const auto &t : toolbar_)
        if (t.tool == picker_tool_)
            under = t.rect;
    if (toolbar_.empty())
        return;
    const Rect &bar = toolbar_.front().rect;
    int row = std::max(1, int(std::lround(pt(kPickerRow))));
    int w = int(std::lround(pt(kPickerW)));
    int y = bar.y + bar.h + int(std::lround(pt(kPickerGap)));
    int rows = std::min(kPickerRows, int(picker_items_.size()));
    if (screen_.dh > 0)
        rows = std::max(1, std::min(rows, (screen_.dh - y) / row));
    int x = under.w > 0 ? under.x : bar.x;
    if (screen_.dw > 0)
        x = std::max(0, std::min(x, screen_.dw - w));
    picker_box_ = Rect{x, y, w, rows * row};

    double max_scroll = std::max(0, int(picker_items_.size()) * row - picker_box_.h);
    picker_scroll_ = std::clamp(picker_scroll_, 0.0, max_scroll);
    int scroll = int(std::lround(picker_scroll_));
    for (size_t i = 0; i < picker_items_.size(); ++i) {
        int top = picker_box_.y + int(i) * row - scroll;
        int y0 = std::max(top, picker_box_.y);
        int y1 = std::min(top + row, picker_box_.y + picker_box_.h);
        if (y1 <= y0)
            continue;
        PickerItem item = picker_items_[i];
        item.rect = Rect{x, y0, w, y1 - y0};
        picker_view_.push_back(std::move(item));
    }
}

void Editor::open_picker(Picker kind, Tool from, std::vector<PickerItem> items) {
    picker_ = kind;
    picker_tool_ = from;
    picker_items_ = std::move(items);
    picker_scroll_ = 0;
    picker_held_ = false;
    layout_picker();
    changed();
}

void Editor::close_picker() {
    if (picker_ == Picker::None)
        return;
    picker_ = Picker::None;
    picker_tool_ = Tool::None;
    picker_items_.clear();
    picker_view_.clear();
    picker_box_ = Rect{};
    picker_held_ = false;
    changed();
}

void Editor::select(int group, int control) {
    if (group == sel_group_ && control == sel_control_)
        return;
    end_gesture();
    sel_group_ = group;
    sel_control_ = control;
    changed();
}

// The editor's own hit test: toggles first (as hit_test), then every group,
// hidden or not, last group and last control first. Returns the group, or -1.
int Editor::hit(double px, double py, int *control) const {
    for (size_t g = 0; g < layout_.groups.size(); ++g)
        for (size_t c = 0; c < layout_.groups[g].controls.size(); ++c)
            if (layout_.groups[g].controls[c].kind == Kind::Toggle &&
                control_rect(layout_, int(g), int(c), screen_).contains(px, py)) {
                *control = int(c);
                return int(g);
            }
    for (int g = int(layout_.groups.size()) - 1; g >= 0; --g)
        for (int c = int(layout_.groups[g].controls.size()) - 1; c >= 0; --c)
            if (control_rect(layout_, g, c, screen_).contains(px, py)) {
                *control = c;
                return g;
            }
    *control = -1;
    return -1;
}

bool Editor::selection_is_grid() const {
    if (sel_group_ < 0 || sel_group_ >= int(layout_.groups.size()))
        return false;
    const Group &g = layout_.groups[sel_group_];
    return g.has_grid && sel_control_ >= 0 && sel_control_ < int(g.controls.size()) &&
           g.controls[sel_control_].col >= 0 && g.controls[sel_control_].row >= 0;
}

// What a drag moves: a grid key's whole group box, else the control.
Rect Editor::moving_rect() const {
    if (selection_is_grid())
        return group_rect(layout_, sel_group_, screen_);
    return control_rect(layout_, sel_group_, sel_control_, screen_);
}

// Rewrites the selection's x/y (and, with `reanchor`, its anchor, picked by
// the centre's third of the anchor area) so it lands exactly on `r`.
void Editor::set_moving_rect(const Rect &r, bool reanchor) {
    if (!selection_valid())
        return;
    Rect area = anchor_area(layout_, screen_);
    double scale = screen_.scale > 0 ? screen_.scale : 1.0;
    Group &g = layout_.groups[sel_group_];
    Anchor *anchor;
    double *x, *y;
    if (selection_is_grid()) {
        anchor = &g.anchor;
        x = &g.x;
        y = &g.y;
    } else {
        Control &c = g.controls[sel_control_];
        anchor = &c.anchor;
        x = &c.x;
        y = &c.y;
    }
    if (reanchor)
        *anchor = anchor_for(r, area);
    *x = offset_for(anchor_col(*anchor), r.x, r.w, area.x, area.w) / scale;
    *y = offset_for(anchor_row(*anchor), r.y, r.h, area.y, area.h) / scale;
}

// Snapping: on each axis, the rect's edges and centre snap to another
// control's edges or centre within 6 pt; failing that, to the 10 pt grid
// (measured from the anchor area's origin). Records the lines used in guides_.
Rect Editor::snap_rect(Rect r) {
    guides_.clear();
    if (!snap_)
        return r;
    Rect area = anchor_area(layout_, screen_);
    bool grid_move = selection_is_grid();
    std::vector<Rect> others;
    for (size_t g = 0; g < layout_.groups.size(); ++g)
        for (size_t c = 0; c < layout_.groups[g].controls.size(); ++c) {
            if (int(g) == sel_group_ && (grid_move || int(c) == sel_control_))
                continue;
            Rect o = control_rect(layout_, int(g), int(c), screen_);
            if (!o.empty())
                others.push_back(o);
        }
    const double reach = pt(kSnapPt);
    const double cell = std::max(1.0, pt(kGridPt));

    // One axis: `pos`/`size` of the moving rect, and the others' start/size.
    auto snap_axis = [&](int pos, int size, bool horizontal, int origin) {
        const int mine[3] = {pos, pos + size / 2, pos + size};
        int best_shift = 0, best_line = 0;
        double best = reach + 1;
        for (const Rect &o : others) {
            int start = horizontal ? o.x : o.y;
            int len = horizontal ? o.w : o.h;
            const int theirs[3] = {start, start + len / 2, start + len};
            for (int m : mine)
                for (int t : theirs)
                    if (std::abs(t - m) <= reach && std::abs(t - m) < best) {
                        best = std::abs(t - m);
                        best_shift = t - m;
                        best_line = t;
                    }
        }
        if (best > reach) {
            best = cell;
            for (int m : mine) {
                int line = origin + int(std::lround(std::round((m - origin) / cell) * cell));
                if (std::abs(line - m) < best) {
                    best = std::abs(line - m);
                    best_shift = line - m;
                    best_line = line;
                }
            }
        }
        if (horizontal)
            guides_.push_back(Rect{best_line, area.y, 1, area.h});
        else
            guides_.push_back(Rect{area.x, best_line, area.w, 1});
        return pos + best_shift;
    };
    r.x = snap_axis(r.x, r.w, true, area.x);
    r.y = snap_axis(r.y, r.h, false, area.y);
    return r;
}

// Keeps only the guides that still touch an edge or the centre of `r`
// (the final clamp can move a snapped rect off its line).
void Editor::drop_stale_guides(const Rect &r) {
    auto on = [](int line, int pos, int size) {
        return line == pos || line == pos + size / 2 || line == pos + size;
    };
    guides_.erase(std::remove_if(guides_.begin(), guides_.end(),
                                 [&](const Rect &g) {
                                     return g.w == 1 ? !on(g.x, r.x, r.w) : !on(g.y, r.y, r.h);
                                 }),
                  guides_.end());
}

void Editor::scale_selection(const Control &base, double key0, double factor) {
    if (!selection_valid() || !(factor > 0))
        return;
    Rect before = moving_rect();
    int cx = before.x + before.w / 2, cy = before.y + before.h / 2;
    if (selection_is_grid()) {
        layout_.groups[sel_group_].grid.key = clamp_step(key0 * factor, kKeyMin, kKeyMax);
    } else {
        Control &c = layout_.groups[sel_group_].controls[sel_control_];
        if (base.w <= 0 || base.h <= 0)
            return;
        // Clamp the factor, not each side, so the aspect ratio holds.
        double lo = std::max(kSizeMin / base.w, kSizeMin / base.h);
        double hi = std::min(kSizeMax / base.w, kSizeMax / base.h);
        factor = lo > hi ? lo : std::clamp(factor, lo, hi);
        c.w = clamp_step(base.w * factor, kSizeMin, kSizeMax);
        c.h = clamp_step(base.h * factor, kSizeMin, kSizeMax);
        if (c.kind == Kind::Stick)
            c.radius = base.radius * (c.w / base.w);
    }
    Rect after = moving_rect();
    after.x = cx - after.w / 2;
    after.y = cy - after.h / 2;
    set_moving_rect(clamp_into(after, anchor_area(layout_, screen_)), false);
    changed();
}

void Editor::finger_down(int64_t id, double px, double py) {
    if (!open_)
        return;
    for (const Finger &f : fingers_)
        if (f.id == id)
            return;
    ToolbarItem const *tool = nullptr;
    for (const auto &t : toolbar_)
        if (t.rect.contains(px, py))
            tool = &t;

    if (picker_ != Picker::None) {
        if (picker_box_.contains(px, py)) {
            picker_held_ = true;
            picker_finger_ = Finger{id, px, py, px, py};
            picker_scroll0_ = picker_scroll_;
            picker_moved_ = false;
            return;
        }
        Tool from = picker_tool_;
        close_picker();
        if (tool && tool->tool != from)
            run_tool(tool->tool);
        else if (!tool)
            outside_finger_ = id;
        return;
    }
    if (tool) {
        run_tool(tool->tool);
        return;
    }

    // A second finger while the first holds the selection: pinch.
    if (fingers_.size() == 1 && dragging_ && !pinching_ && selection_valid()) {
        if (drag_moved_) {
            set_moving_rect(moving_rect(), true);
            drag_moved_ = false;
        }
        guides_.clear();
        const Finger first = fingers_.front();
        fingers_.push_back(Finger{id, px, py, px, py});
        pinching_ = true;
        pinch_d0_ = std::hypot(px - first.x, py - first.y);
        pinch_base_ = layout_.groups[sel_group_].controls[sel_control_];
        pinch_key0_ = layout_.groups[sel_group_].grid.key;
        changed();
        return;
    }
    if (!fingers_.empty())
        return;

    int control;
    int group = hit(px, py, &control);
    fingers_.push_back(Finger{id, px, py, px, py});
    select(group, control);
    dragging_ = group >= 0;
    drag_moved_ = false;
    if (dragging_)
        drag_rect0_ = moving_rect();
}

void Editor::finger_motion(int64_t id, double px, double py) {
    if (!open_)
        return;
    if (picker_held_ && picker_finger_.id == id) {
        double dy = py - picker_finger_.y0;
        if (std::abs(dy) > pt(kSlopPt))
            picker_moved_ = true;
        if (picker_moved_) {
            picker_scroll_ = picker_scroll0_ - dy;
            layout_picker();
            changed();
        }
        return;
    }
    size_t i = 0;
    while (i < fingers_.size() && fingers_[i].id != id)
        ++i;
    if (i == fingers_.size())
        return;
    fingers_[i].x = px;
    fingers_[i].y = py;

    if (pinching_) {
        if (fingers_.size() == 2 && pinch_d0_ > 0) {
            double d = std::hypot(fingers_[0].x - fingers_[1].x, fingers_[0].y - fingers_[1].y);
            scale_selection(pinch_base_, pinch_key0_, d / pinch_d0_);
        }
        return;
    }
    if (!dragging_ || i != 0 || !selection_valid())
        return;
    double dx = px - fingers_[0].x0, dy = py - fingers_[0].y0;
    if (!drag_moved_ && std::hypot(dx, dy) < pt(kSlopPt))
        return;
    drag_moved_ = true;
    Rect area = anchor_area(layout_, screen_);
    Rect r = drag_rect0_;
    r.x += int(std::lround(dx));
    r.y += int(std::lround(dy));
    r = clamp_into(snap_rect(clamp_into(r, area)), area);
    drop_stale_guides(r);
    set_moving_rect(r, false);
    changed();
}

void Editor::finger_up(int64_t id) {
    if (!open_)
        return;
    if (picker_held_ && picker_finger_.id == id) {
        picker_held_ = false;
        if (!picker_moved_)
            for (const PickerItem &it : picker_view_)
                if (it.rect.contains(picker_finger_.x0, picker_finger_.y0)) {
                    choose(PickerItem(it));
                    break;
                }
        return;
    }
    if (outside_finger_ == id) {
        outside_finger_ = -1;
        return;
    }
    size_t i = 0;
    while (i < fingers_.size() && fingers_[i].id != id)
        ++i;
    if (i == fingers_.size())
        return;
    fingers_.erase(fingers_.begin() + std::ptrdiff_t(i));
    if (pinching_) {
        // The remaining finger no longer drags until it lifts too.
        pinching_ = false;
        dragging_ = false;
        changed();
        return;
    }
    if (i == 0 && dragging_) {
        if (drag_moved_)
            set_moving_rect(moving_rect(), true);
        dragging_ = drag_moved_ = false;
        if (!guides_.empty())
            guides_.clear();
        changed();
    }
}

void Editor::finger_cancel(int64_t id) {
    if (!open_)
        return;
    if (picker_held_ && picker_finger_.id == id) {
        // No choose(): a cancelled finger never picked anything.
        picker_held_ = false;
        return;
    }
    if (outside_finger_ == id) {
        outside_finger_ = -1;
        return;
    }
    size_t i = 0;
    while (i < fingers_.size() && fingers_[i].id != id)
        ++i;
    if (i == fingers_.size())
        return;
    fingers_.erase(fingers_.begin() + std::ptrdiff_t(i));
    // A drag the system took away is undone, not committed: the control goes
    // back to where the finger picked it up, under the anchor it had (the
    // re-anchor only ever happens on a real lift). A pinch just ends, the
    // way cancel_fingers ends it.
    if (i == 0 && dragging_ && drag_moved_ && !pinching_)
        set_moving_rect(drag_rect0_, false);
    drag_moved_ = false;
    end_gesture();
}

void Editor::wheel(double notches) {
    if (!open_ || !selection_valid() || notches == 0)
        return;
    end_gesture();
    const Group &g = layout_.groups[sel_group_];
    const Control &c = g.controls[sel_control_];
    double size = selection_is_grid() ? g.grid.key : c.w;
    if (size <= 0)
        return;
    scale_selection(Control(c), g.grid.key, (size + notches * kWheelPt) / size);
}

void Editor::run_tool(Tool t) {
    end_gesture();
    switch (t) {
    case Tool::Add: {
        std::vector<PickerItem> items;
        add_item(&items, "Key", "key");
        add_item(&items, "Button", "button");
        add_item(&items, "Dpad", "dpad");
        add_item(&items, "Left stick", "stick:left");
        add_item(&items, "Right stick", "stick:right");
        add_item(&items, "Toggle", "toggle");
        add_item(&items, "Action", "action");
        open_picker(Picker::Add, t, std::move(items));
        break;
    }
    case Tool::Delete:
        delete_selection();
        break;
    case Tool::Bind:
        bind_items();
        break;
    case Tool::Stick:
        cycle_stick();
        break;
    case Tool::Snap:
        snap_ = !snap_;
        guides_.clear();
        break;
    case Tool::Layout: {
        std::vector<PickerItem> items;
        add_item(&items, "Duplicate", "duplicate");
        add_item(&items, "Rename", "rename");
        add_item(&items, "Switch", "switch");
        add_item(&items, "Delete", "delete");
        open_picker(Picker::Layout, t, std::move(items));
        break;
    }
    case Tool::Reset:
        reset_ = true;
        break;
    case Tool::Done:
        save_ = true;
        break;
    case Tool::None:
        break;
    }
    changed();
}

// Applies a picker row. Takes a copy: closing the picker clears its rows.
void Editor::choose(const PickerItem &item) {
    Picker kind = picker_;
    Tool from = picker_tool_;
    close_picker();
    end_gesture();
    const std::string &v = item.value;
    if (kind == Picker::Add && v == "button") {
        std::vector<PickerItem> items;
        for (int b = 0; b < int(PadButton::Count); ++b) {
            const char *nm = pad_button_name(PadButton(b));
            add_item(&items, capitalised(nm), std::string("button:") + nm);
        }
        open_picker(Picker::AddButton, from, std::move(items));
        return;
    }
    if (kind == Picker::Add || kind == Picker::AddButton) {
        add_control(v);
        return;
    }
    if (kind == Picker::Layout) {
        if (v == "duplicate") {
            duplicate_layout();
        } else if (v == "rename" && !is_builtin(layout_.name)) {
            rename_pending_ = renaming_ = true;
            rename_text_.clear();
        } else if (v == "switch") {
            std::vector<PickerItem> items;
            for (const std::string &n : names_)
                if (n != layout_.name)
                    add_item(&items, n, n);
            if (!items.empty())
                open_picker(Picker::Switch, from, std::move(items));
        } else if (v == "delete" && !is_builtin(layout_.name)) {
            delete_pending_ = true;
        }
        return;
    }
    if (kind == Picker::Switch) {
        switch_pending_ = true;
        switch_name_ = v;
        return;
    }
    if (kind != Picker::Bind || !selection_valid())
        return;
    Control &c = layout_.groups[sel_group_].controls[sel_control_];
    std::string err;
    switch (c.kind) {
    case Kind::Key:
        if (int sc = scancode_from_name(v)) {
            c.scancode = sc;
            c.label.clear();
        }
        break;
    case Kind::Button:
        if (native_) {
            PadButton b;
            if (pad_button_from_name(v, &b))
                c.button = b;
        } else if (parse_mapped(std::string(pad_button_name(c.button)) + "=" + v, &mapped_, &err)) {
            mapped_changed_ = true;
        }
        break;
    case Kind::Stick:
        if (parse_mapped((c.stick == 0 ? "left_stick=" : "right_stick=") + v, &mapped_, &err))
            mapped_changed_ = true;
        break;
    case Kind::Dpad:
        if (parse_mapped("dpad=" + v, &mapped_, &err))
            mapped_changed_ = true;
        break;
    case Kind::Toggle:
        c.target = v;
        break;
    case Kind::Action:
        c.action = v;
        break;
    }
    changed();
}

// Opens the Bind picker for the selection's kind (nothing to bind: no picker).
void Editor::bind_items() {
    if (!selection_valid())
        return;
    const Control &c = layout_.groups[sel_group_].controls[sel_control_];
    std::vector<PickerItem> items;
    switch (c.kind) {
    case Kind::Key:
        for (const std::string &k : key_names())
            add_item(&items, k, k);
        break;
    case Kind::Button:
        if (native_) {
            for (int b = 0; b < int(PadButton::Count); ++b)
                add_item(&items, pad_button_name(PadButton(b)), pad_button_name(PadButton(b)));
        } else {
            for (const char *t :
                 {"none", "mouse_left", "mouse_right", "mouse_middle", "wheel_up", "wheel_down"})
                add_item(&items, t, t);
            for (const std::string &k : key_names())
                add_item(&items, "key:" + k, "key:" + k);
            add_item(&items, "action:settings", "action:settings");
        }
        break;
    case Kind::Stick:
        if (!native_)
            for (const char *m :
                 {"cursor", "arrows", "horizontal_arrows", "wasd", "scroll", "wheel", "none"})
                add_item(&items, m, m);
        break;
    case Kind::Dpad:
        if (!native_)
            for (const char *m : {"arrows", "wasd", "none"})
                add_item(&items, m, m);
        break;
    case Kind::Toggle:
        for (const std::string &n : names_)
            add_item(&items, n, n);
        add_item(&items, "next", "next");
        break;
    case Kind::Action:
        for (const char *a : {"settings", "system_keyboard", "edit_layout"})
            add_item(&items, a, a);
        break;
    }
    if (!items.empty())
        open_picker(Picker::Bind, Tool::Bind, std::move(items));
}

// Adds a control at the centre of the anchor area, in the "custom" group
// (created on first use), and selects it.
void Editor::add_control(const std::string &what) {
    Control c;
    c.anchor = Anchor::Center;
    if (what == "key") {
        c.kind = Kind::Key;
        c.scancode = kScanSpace;
        c.w = c.h = 48;
    } else if (what.rfind("button:", 0) == 0) {
        c.kind = Kind::Button;
        if (!pad_button_from_name(what.substr(7), &c.button))
            return;
        c.w = c.h = 56;
    } else if (what == "dpad") {
        c.kind = Kind::Dpad;
        c.w = c.h = 140;
    } else if (what == "stick:left" || what == "stick:right") {
        c.kind = Kind::Stick;
        c.stick = what == "stick:left" ? 0 : 1;
        c.radius = 50;
        c.w = c.h = 100;
    } else if (what == "toggle") {
        c.kind = Kind::Toggle;
        c.target = "next";
        c.label = "Next";
        c.w = 72;
        c.h = 32;
    } else if (what == "action") {
        c.kind = Kind::Action;
        c.action = "settings";
        c.label = "Menu";
        c.w = c.h = 44;
    } else {
        return;
    }
    // The first of "custom", "custom-2", ... that is not a grid group.
    int group = -1;
    std::string id = "custom";
    for (int n = 2; group < 0; ++n) {
        bool grid = false;
        for (size_t g = 0; g < layout_.groups.size(); ++g)
            if (layout_.groups[g].id == id) {
                if (layout_.groups[g].has_grid)
                    grid = true;
                else if (group < 0)
                    group = int(g);
            }
        if (group >= 0 || !grid)
            break;
        id = "custom-" + std::to_string(n);
    }
    if (group < 0) {
        Group g;
        g.id = id;
        layout_.groups.push_back(std::move(g));
        group = int(layout_.groups.size()) - 1;
    }
    layout_.groups[group].controls.push_back(std::move(c));
    select(group, int(layout_.groups[group].controls.size()) - 1);
    changed();
}

// Removes the selection; a non-grid group left empty goes with it.
void Editor::delete_selection() {
    if (!selection_valid())
        return;
    Group &g = layout_.groups[sel_group_];
    g.controls.erase(g.controls.begin() + sel_control_);
    if (g.controls.empty() && !g.has_grid)
        layout_.groups.erase(layout_.groups.begin() + sel_group_);
    select(-1, -1);
    changed();
}

// Stick: floating 0.10 -> 0.15 -> 0.25 -> fixed 0.10 -> 0.15 -> 0.25 -> floating 0.10.
void Editor::cycle_stick() {
    if (!selection_valid())
        return;
    Control &c = layout_.groups[sel_group_].controls[sel_control_];
    if (c.kind != Kind::Stick)
        return;
    const double zones[] = {0.10, 0.15, 0.25};
    int zone = 0;
    for (int z = 1; z < 3; ++z)
        if (std::abs(c.deadzone - zones[z]) < std::abs(c.deadzone - zones[zone]))
            zone = z;
    int state = (c.floating ? 0 : 3) + zone;
    state = (state + 1) % 6;
    c.floating = state < 3;
    c.deadzone = zones[state % 3];
    changed();
}

// Renames the edited copy to "<name> copy" (or "<name> copy N"), a name the
// host does not know yet; Done then saves it under that name.
void Editor::duplicate_layout() {
    auto taken = [&](const std::string &n) {
        return is_builtin(n) || std::find(names_.begin(), names_.end(), n) != names_.end();
    };
    std::string base = layout_.name + " copy";
    std::string name = base;
    for (int n = 2; taken(name); ++n)
        name = base + " " + std::to_string(n);
    layout_.name = name;
    names_.push_back(name);
    changed();
}

void Editor::text(const std::string &utf8) {
    if (renaming_)
        rename_text_ += utf8;
}

void Editor::text_done() {
    if (!renaming_)
        return;
    renaming_ = rename_pending_ = false;
    if (usable_name(rename_text_)) {
        std::replace(names_.begin(), names_.end(), layout_.name, rename_text_);
        if (std::find(names_.begin(), names_.end(), rename_text_) == names_.end())
            names_.push_back(rename_text_);
        layout_.name = rename_text_;
        changed();
    }
    rename_text_.clear();
}

bool Editor::take_save() {
    return std::exchange(save_, false);
}

bool Editor::take_reset() {
    return std::exchange(reset_, false);
}

bool Editor::take_cancel() {
    return std::exchange(cancel_, false);
}

void Editor::cancel() {
    cancel_ = true;
}

void Editor::cancel_fingers() {
    end_gesture();
    fingers_.clear();
    picker_held_ = false;
    outside_finger_ = -1;
}

void Editor::done() {
    run_tool(Tool::Done);
}

bool Editor::take_switch(std::string *name) {
    if (!std::exchange(switch_pending_, false))
        return false;
    if (name)
        *name = switch_name_;
    return true;
}

bool Editor::take_delete(std::string *name) {
    if (!std::exchange(delete_pending_, false))
        return false;
    if (name)
        *name = layout_.name;
    return true;
}

bool Editor::take_rename(std::string *current) {
    if (!std::exchange(rename_pending_, false))
        return false;
    if (current)
        *current = layout_.name;
    return true;
}

} // namespace controls
