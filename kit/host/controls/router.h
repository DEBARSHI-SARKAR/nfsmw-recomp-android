// router.h - the SDL-free finger router: decides which on-screen control a
// finger belongs to and drives key, action, layout-switch and haptic-tap
// events from it. Replaces the keypad logic host/sdl/main.cpp used to carry
// directly; the host still owns SDL and calls this with plain numbers.
// Design: docs/superpowers/specs/2026-09-17-touch-controls-design.md.
#pragma once

#include "layout.h"
#include "vpad.h"

#include <cstdint>
#include <map>
#include <string>
#include <vector>

#include "../keypad_modifiers.h"

namespace controls {

// What the router does with a routed event; the host implements this over
// its real key/gesture/layout-store plumbing (and a test implements it over
// a vector of strings).
class ControlsSink {
  public:
    virtual ~ControlsSink() = default;
    virtual void key(int scancode, bool down) = 0;
    virtual void
    action(const std::string &name) = 0; // "settings", "system_keyboard", "edit_layout"
    virtual void switch_layout(const std::string &target) = 0; // a layout name or "next"
    virtual void group_visibility_changed() = 0;               // persist Layout group visibility
    virtual void tap() = 0;                                    // haptic tick on a press
};

// A control's live, drawable state, indexed by (group, control). `pressed`
// stays true while any finger still owns the control (Button and Key; a
// Stick/Dpad has only ever one owner).
struct ControlState {
    bool pressed = false;
    double knob_x = 0, knob_y = 0; // Stick: output in [-1, 1]
    // Stick: the base's drawable-pixel position, i.e. where the knob's
    // output is measured from. Always valid: the rect centre at rest and
    // after release, the finger position (floating) or the rect centre
    // (fixed) while held.
    double base_x = 0, base_y = 0;
    uint8_t hat = 0; // Dpad: 1 up, 2 right, 4 down, 8 left
};

// Owns no SDL state: fingers arrive as (id, point, time) and leave as
// key/action/switch_layout/tap calls on the sink passed to each call. A
// finger the router claims (its `finger_*` returns true) must not also be
// given to any other input path (the touch gesture mapper, in particular).
class Router {
  public:
    // Not owned. Releases everything the router currently holds against the
    // old layout — exactly as cancel_all(sink) would — before swapping in
    // the new one and rebuilding its per-control state.
    void set_layout(Layout *layout, ControlsSink &sink);
    void set_screen(const Screen &s);
    // Portrait: the controls area. While enabled, a finger landing in it that
    // hits no control is still claimed, and does nothing, so the gesture mapper only
    // sees fingers on the game image. Empty (the default) claims nothing.
    void set_claim_area(const Rect &area);
    // false: hit_test never claims a new finger, and every finger currently
    // held is released exactly as cancel_all() would release it.
    void set_enabled(bool on, ControlsSink &sink);
    bool enabled() const;
    // true: the active layout is auto-hidden (controls_host.cpp) but its
    // layout-switch toggles stay live so the player can switch. Group toggles,
    // keys, gaps and the portrait claim area pass through, and make_view draws
    // only layout switches. Turning it on releases every finger held, exactly
    // as cancel_all() would, without changing saved group visibility.
    void set_toggles_only(bool on, ControlsSink &sink);
    bool toggles_only() const;
    // True when the finger belongs to the controls (the caller must not give it to TouchMapper).
    bool finger_down(int64_t id, double px, double py, uint64_t now_ns, ControlsSink &sink);
    bool finger_motion(int64_t id, double px, double py, uint64_t now_ns, ControlsSink &sink);
    bool finger_up(int64_t id, uint64_t now_ns, ControlsSink &sink);
    bool finger_cancel(int64_t id, ControlsSink &sink);
    void cancel_all(ControlsSink &sink);
    bool owns(int64_t id) const;
    unsigned lit() const; // keypad_modifier_bit() bits
    const ControlState &state(int group,
                              int control) const; // a static zero state when out of range
    uint32_t generation() const;                  // bumps whenever anything drawn changes
    const Layout *layout() const;
    // The OR of every currently-owned Button/Dpad/Stick control; recomputed
    // whenever a finger claiming one of them lands, moves or lifts.
    const PadState &pad() const;

  private:
    // What a live finger is sitting on: a control (group/control >= 0), or a
    // visible grid group's own gap (control == -1, gap == true). `primary`
    // is only meaningful for Stick/Dpad, which allow just one real owner: a
    // second finger claimed on top of it is inert (primary == false).
    struct Owned {
        int group = -1, control = -1;
        bool gap = false;
        bool primary = true;
    };

    void set_pressed(int group, int control, bool pressed);
    // Whether some other currently-owned finger already sits on (group,
    // control): gates a Button/Key's drawn `pressed` (stays true while any
    // owner remains) and a Stick/Dpad's single-owner claim.
    bool has_owner(int group, int control) const;
    // Down on a Key control: modifiers go through modifiers_; anything else
    // is a plain sink.key(scancode, true).
    void key_down(const Control &c, uint64_t now_ns, ControlsSink &sink);
    // Up on a Key control: modifiers release through modifiers_; anything
    // else is sink.key(scancode, false) followed by key_lifted(). Legacy
    // quirk, ported as-is from host/sdl/main.cpp's g_keypad_fingers map: the
    // sink's key event is not reference-counted across the fingers that
    // land on it, so if two fingers land on the same key, either one
    // lifting sends key(false), and the other's later lift sends it again
    // (only the drawn `pressed` state is reference-counted, via has_owner).
    void key_up(const Control &c, uint64_t now_ns, ControlsSink &sink);
    // Cancel on a Key control: modifiers cancel through modifiers_ (no
    // latch survives); anything else is sink.key(scancode, false) alone.
    void key_cancel(const Control &c, ControlsSink &sink);
    // Rebuilds pad_ from every currently-owned Button/Dpad/Stick control.
    void recompute_pad();

    Layout *layout_ = nullptr; // not owned
    Screen screen_;
    Rect claim_area_;
    bool enabled_ = true;
    bool toggles_only_ = false;
    std::map<int64_t, Owned> fingers_;
    std::vector<std::vector<ControlState>> states_; // sized from layout_
    KeypadModifiers modifiers_;
    uint32_t generation_ = 0;
    PadState pad_;
};

} // namespace controls
