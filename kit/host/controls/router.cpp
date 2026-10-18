// router.cpp - see router.h.
#include "router.h"

#include "../keypad_layout.h"

#include <algorithm>
#include <cmath>

namespace controls {

namespace {
// The group named `id`, or -1. A Toggle's target may name none (it then
// names a layout, or "next").
int group_named(const Layout &l, const std::string &id) {
    for (size_t i = 0; i < l.groups.size(); ++i)
        if (l.groups[i].id == id)
            return int(i);
    return -1;
}
} // namespace

void Router::set_layout(Layout *layout, ControlsSink &sink) {
    cancel_all(sink); // releases everything held against the old layout
    layout_ = layout;
    states_.clear();
    if (layout_) {
        states_.resize(layout_->groups.size());
        for (size_t g = 0; g < layout_->groups.size(); ++g)
            states_[g].resize(layout_->groups[g].controls.size());
    }
    ++generation_;
}

void Router::set_screen(const Screen &s) {
    screen_ = s;
}

void Router::set_claim_area(const Rect &area) {
    claim_area_ = area;
}

void Router::set_enabled(bool on, ControlsSink &sink) {
    enabled_ = on;
    if (!on)
        cancel_all(sink); // releases everything held, and bumps generation
    else
        ++generation_;
}

bool Router::enabled() const {
    return enabled_;
}

void Router::set_toggles_only(bool on, ControlsSink &sink) {
    if (on == toggles_only_)
        return;
    toggles_only_ = on;
    if (on)
        cancel_all(sink); // releases everything held, and bumps generation
    else
        ++generation_;
}

bool Router::toggles_only() const {
    return toggles_only_;
}

void Router::set_pressed(int group, int control, bool pressed) {
    if (group < 0 || group >= int(states_.size()))
        return;
    if (control < 0 || control >= int(states_[group].size()))
        return;
    states_[group][control].pressed = pressed;
}

void Router::key_down(const Control &c, uint64_t now_ns, ControlsSink &sink) {
    if (keypad_is_modifier(c.scancode)) {
        std::vector<KeypadKeyEvent> events;
        modifiers_.press(c.scancode, now_ns, &events);
        for (const KeypadKeyEvent &e : events)
            sink.key(e.scancode, e.down);
    } else {
        sink.key(c.scancode, true);
    }
}

void Router::key_up(const Control &c, uint64_t now_ns, ControlsSink &sink) {
    if (keypad_is_modifier(c.scancode)) {
        std::vector<KeypadKeyEvent> events;
        modifiers_.release(c.scancode, now_ns, &events);
        for (const KeypadKeyEvent &e : events)
            sink.key(e.scancode, e.down);
    } else {
        sink.key(c.scancode, false);
        std::vector<KeypadKeyEvent> events;
        modifiers_.key_lifted(now_ns, &events);
        for (const KeypadKeyEvent &e : events)
            sink.key(e.scancode, e.down);
    }
}

void Router::key_cancel(const Control &c, ControlsSink &sink) {
    if (keypad_is_modifier(c.scancode)) {
        std::vector<KeypadKeyEvent> events;
        modifiers_.cancel(c.scancode, &events);
        for (const KeypadKeyEvent &e : events)
            sink.key(e.scancode, e.down);
    } else {
        sink.key(c.scancode, false); // no key_lifted: a cancelled key releases nothing else
    }
}

bool Router::has_owner(int group, int control) const {
    for (const auto &kv : fingers_)
        if (!kv.second.gap && kv.second.group == group && kv.second.control == control)
            return true;
    return false;
}

// A stick's base at rest or after release: the rect centre, in drawable
// pixels (never (0, 0) — that only happened to be the rect's own origin in
// earlier layouts, but is not generally meaningful).
static void reset_stick(ControlState &cs, const Layout &l, int group, int control,
                        const Screen &s) {
    const Rect r = control_rect(l, group, control, s);
    cs.knob_x = cs.knob_y = 0;
    cs.base_x = r.x + r.w / 2.0;
    cs.base_y = r.y + r.h / 2.0;
}

bool Router::finger_down(int64_t id, double px, double py, uint64_t now_ns, ControlsSink &sink) {
    if (!enabled_ || !layout_)
        return false;
    Hit h = hit_test(*layout_, screen_, px, py);
    // Auto-hide leaves only layout switches live. Group toggles cannot show
    // their keys while hardware keeps the layout hidden, and must pass through.
    if (toggles_only_ && h.group >= 0 &&
        (h.gap || layout_->groups[h.group].controls[h.control].kind != Kind::Toggle ||
         group_named(*layout_, layout_->groups[h.group].controls[h.control].target) >= 0))
        h = Hit();
    if (h.group < 0) {
        if (toggles_only_ || !claim_area_.contains(px, py))
            return false; // the game's own area
        fingers_[id] = Owned{-1, -1, true};
        return true; // the controls area: claimed, and does nothing
    }

    if (h.gap) {
        fingers_[id] = Owned{h.group, -1, true};
        return true; // claimed; a gap does nothing
    }

    const Control &c = layout_->groups[h.group].controls[h.control];
    // A stick or dpad has a single owner: a second finger on top of one
    // already held is claimed (so TouchMapper never sees it) but inert.
    const bool second_owner =
        (c.kind == Kind::Stick || c.kind == Kind::Dpad) && has_owner(h.group, h.control);
    fingers_[id] = Owned{h.group, h.control, false, !second_owner};
    if (second_owner)
        return true;

    set_pressed(h.group, h.control, true);
    ++generation_;

    switch (c.kind) {
    case Kind::Key:
        key_down(c, now_ns, sink);
        break;
    case Kind::Toggle: {
        const int target = group_named(*layout_, c.target);
        if (target >= 0) {
            layout_->groups[target].visible = !layout_->groups[target].visible;
            sink.group_visibility_changed();
        } else {
            sink.switch_layout(c.target);
        }
        break;
    }
    case Kind::Action:
        sink.action(c.action);
        break;
    case Kind::Button:
        break; // its pad bit comes from recompute_pad() below, from ownership alone
    case Kind::Dpad: {
        const Rect r = control_rect(*layout_, h.group, h.control, screen_);
        const double cx = r.x + r.w / 2.0, cy = r.y + r.h / 2.0;
        states_[h.group][h.control].hat = dpad_hat(px - cx, py - cy, r.w / 2.0);
        break;
    }
    case Kind::Stick: {
        const Rect r = control_rect(*layout_, h.group, h.control, screen_);
        // The knob's travel is its own radius (points), scaled like any
        // other length; the rect (w/h) is only the zone: hit test and, for
        // a floating stick, the base's clamp.
        const double radius = std::lround(c.radius * layout_->scale * screen_.scale);
        double bx, by;
        if (c.floating) {
            bx = std::clamp(px, double(r.x), double(r.x + r.w));
            by = std::clamp(py, double(r.y), double(r.y + r.h));
        } else {
            bx = r.x + r.w / 2.0;
            by = r.y + r.h / 2.0;
        }
        ControlState &cs = states_[h.group][h.control];
        cs.base_x = bx;
        cs.base_y = by;
        float ox, oy;
        stick_output(px - bx, py - by, radius, c.deadzone, &ox, &oy);
        cs.knob_x = ox;
        cs.knob_y = oy;
        break;
    }
    }
    recompute_pad();
    sink.tap();
    return true;
}

bool Router::finger_motion(int64_t id, double px, double py, uint64_t, ControlsSink &) {
    // Keys, buttons, toggles and actions ignore motion; sticks and the dpad
    // track a dragging knob or hat direction from it.
    const auto it = fingers_.find(id);
    if (it == fingers_.end())
        return false;
    const Owned &o = it->second;
    if (o.gap || o.group < 0 || o.control < 0)
        return true;
    const Control &c = layout_->groups[o.group].controls[o.control];
    if ((c.kind == Kind::Dpad || c.kind == Kind::Stick) && !o.primary)
        return true; // a stick/dpad's non-owning finger does nothing

    if (c.kind == Kind::Dpad) {
        const Rect r = control_rect(*layout_, o.group, o.control, screen_);
        const double cx = r.x + r.w / 2.0, cy = r.y + r.h / 2.0;
        const uint8_t new_hat = dpad_hat(px - cx, py - cy, r.w / 2.0);
        ControlState &cs = states_[o.group][o.control];
        if (new_hat != cs.hat) {
            cs.hat = new_hat;
            recompute_pad();
            ++generation_;
        }
    } else if (c.kind == Kind::Stick) {
        const double radius = std::lround(c.radius * layout_->scale * screen_.scale);
        ControlState &cs = states_[o.group][o.control];
        float ox, oy;
        stick_output(px - cs.base_x, py - cs.base_y, radius, c.deadzone, &ox, &oy);
        if (double(ox) != cs.knob_x || double(oy) != cs.knob_y) {
            cs.knob_x = ox;
            cs.knob_y = oy;
            recompute_pad();
            ++generation_;
        }
    }
    return true;
}

bool Router::finger_up(int64_t id, uint64_t now_ns, ControlsSink &sink) {
    const auto it = fingers_.find(id);
    if (it == fingers_.end())
        return false;
    const Owned o = it->second;
    fingers_.erase(it);
    if (o.gap)
        return true;

    const Control &c = layout_->groups[o.group].controls[o.control];
    if ((c.kind == Kind::Stick || c.kind == Kind::Dpad) && !o.primary)
        return true; // a stick/dpad's non-owning finger's lift does nothing

    // A Button/Key's drawn `pressed` stays true while another finger still
    // holds it; a Stick/Dpad has only the one owner, so it always clears.
    if (c.kind == Kind::Button || c.kind == Kind::Key) {
        if (!has_owner(o.group, o.control))
            set_pressed(o.group, o.control, false);
    } else {
        set_pressed(o.group, o.control, false);
    }
    ++generation_;
    if (c.kind == Kind::Key)
        key_up(c, now_ns, sink);
    else if (c.kind == Kind::Dpad)
        states_[o.group][o.control].hat = 0;
    else if (c.kind == Kind::Stick)
        reset_stick(states_[o.group][o.control], *layout_, o.group, o.control, screen_);
    recompute_pad();
    return true;
}

bool Router::finger_cancel(int64_t id, ControlsSink &sink) {
    const auto it = fingers_.find(id);
    if (it == fingers_.end())
        return false;
    const Owned o = it->second;
    fingers_.erase(it);
    if (o.gap)
        return true;

    const Control &c = layout_->groups[o.group].controls[o.control];
    if ((c.kind == Kind::Stick || c.kind == Kind::Dpad) && !o.primary)
        return true; // a stick/dpad's non-owning finger's cancel does nothing

    if (c.kind == Kind::Button || c.kind == Kind::Key) {
        if (!has_owner(o.group, o.control))
            set_pressed(o.group, o.control, false);
    } else {
        set_pressed(o.group, o.control, false);
    }
    ++generation_;
    if (c.kind == Kind::Key)
        key_cancel(c, sink);
    else if (c.kind == Kind::Dpad)
        states_[o.group][o.control].hat = 0;
    else if (c.kind == Kind::Stick)
        reset_stick(states_[o.group][o.control], *layout_, o.group, o.control, screen_);
    recompute_pad();
    return true;
}

void Router::cancel_all(ControlsSink &sink) {
    // Every held non-modifier key releases directly; the modifier slots
    // release themselves below, whether or not a finger still holds them.
    for (const auto &kv : fingers_) {
        const Owned &o = kv.second;
        if (o.gap || o.group < 0 || o.control < 0)
            continue;
        set_pressed(o.group, o.control, false);
        const Control &c = layout_->groups[o.group].controls[o.control];
        if (c.kind == Kind::Key && !keypad_is_modifier(c.scancode))
            sink.key(c.scancode, false);
        else if (c.kind == Kind::Dpad)
            states_[o.group][o.control].hat = 0;
        else if (c.kind == Kind::Stick)
            reset_stick(states_[o.group][o.control], *layout_, o.group, o.control, screen_);
    }
    fingers_.clear();

    std::vector<KeypadKeyEvent> events;
    modifiers_.cancel_all(&events);
    for (const KeypadKeyEvent &e : events)
        sink.key(e.scancode, e.down);

    recompute_pad();
    ++generation_;
}

bool Router::owns(int64_t id) const {
    return fingers_.count(id) != 0;
}

unsigned Router::lit() const {
    return modifiers_.lit();
}

const ControlState &Router::state(int group, int control) const {
    static const ControlState kZero;
    if (group < 0 || group >= int(states_.size()))
        return kZero;
    if (control < 0 || control >= int(states_[group].size()))
        return kZero;
    return states_[group][control];
}

uint32_t Router::generation() const {
    return generation_;
}

const Layout *Router::layout() const {
    return layout_;
}

const PadState &Router::pad() const {
    return pad_;
}

void Router::recompute_pad() {
    PadState p;
    if (layout_) {
        for (const auto &kv : fingers_) {
            const Owned &o = kv.second;
            if (o.gap || o.group < 0 || o.control < 0)
                continue;
            const Control &c = layout_->groups[o.group].controls[o.control];
            const ControlState &cs = states_[o.group][o.control];
            PadState q;
            switch (c.kind) {
            case Kind::Button:
                q.buttons = uint16_t(1u << int(c.button));
                if (c.button == PadButton::L2)
                    q.l2 = 1.0f;
                else if (c.button == PadButton::R2)
                    q.r2 = 1.0f;
                break;
            case Kind::Dpad:
                q.hat = cs.hat;
                break;
            case Kind::Stick:
                if (c.stick == 0) {
                    q.lx = float(cs.knob_x);
                    q.ly = float(cs.knob_y);
                } else {
                    q.rx = float(cs.knob_x);
                    q.ry = float(cs.knob_y);
                }
                break;
            default:
                continue;
            }
            p = merge(p, q);
        }
    }
    pad_ = p;
}

} // namespace controls
