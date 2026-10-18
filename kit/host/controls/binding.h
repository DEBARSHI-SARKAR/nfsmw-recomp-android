// binding.h - the mapped binding: turns the shared virtual pad into the keys
// and mouse input a game already reads, per RECOMP_CONTROLS_MAPPED (and a
// player's override file) and a per-tick clock. SDL-free (uses SDL_Scancode
// values spelled out in keypad_layout.h), so it links into the host-free
// unit tests, same as layout.h and vpad.h.
// Design: docs/superpowers/specs/2026-09-17-touch-controls-design.md.
#pragma once

#include "../input_touch.h"
#include "../keypad_layout.h"
#include "layout.h"
#include "vpad.h"

#include <cstdint>
#include <string>
#include <vector>

namespace controls {

enum class StickMode { Cursor, Arrows, HorizontalArrows, Wasd, Scroll, Wheel, None };

// What a pad button (or, via a stick/dpad key, a synthesized press) does to
// the game: nothing, a key, a mouse button, a wheel notch, or a host action.
struct Target {
    enum Type { None, Key, Mouse, Wheel, Action } type = None;
    int value = 0;      // Key: scancode; Mouse: 0 left 1 right 2 middle; Wheel: +1 up / -1 down
    std::string action; // Action: "settings" | "system_keyboard" | "edit_layout"
};

// Every RECOMP_CONTROLS_MAPPED key, defaulted the same as tools/game_config.py's
// MAPPED_DEFAULTS so a default-constructed table (what the SDL-free tests
// build, and what a totally malformed RECOMP_CONTROLS_MAPPED falls back to)
// means the same thing a fresh game.toml does.
struct MappedTable {
    StickMode left = StickMode::Arrows, right = StickMode::Cursor;
    StickMode dpad = StickMode::Arrows; // Arrows | Wasd | None
    double cursor_speed = 900;          // points per second at full deflection
    // PadButton order: Cross, Circle, Square, Triangle, L1, R1, L2, R2, L3,
    // R3, Select, Start, Ps.
    Target buttons[int(PadButton::Count)] = {
        Target{Target::Mouse, 0, ""},           // cross: mouse_left
        Target{Target::Mouse, 1, ""},           // circle: mouse_right
        Target{Target::Key, kScanSpace, ""},    // square: key:Space
        Target{Target::Key, kScanTab, ""},      // triangle: key:Tab
        Target{Target::Key, kScanPageUp, ""},   // l1: key:PageUp
        Target{Target::Key, kScanPageDown, ""}, // r1: key:PageDown
        Target{Target::Mouse, 2, ""},           // l2: mouse_middle
        Target{Target::Key, kScanLShift, ""},   // r2: key:LShift
        Target{},                               // l3: none
        Target{},                               // r3: none
        Target{Target::Key, kScanF10, ""},      // select: key:F10
        Target{Target::Key, kScanEscape, ""},   // start: key:Escape
        Target{Target::Action, 0, "settings"},  // ps: action:settings
    };
};

// "k=v;k=v" (RECOMP_CONTROLS_MAPPED's syntax, and <profile>/controls/binding.txt's).
// Applies over *table; unknown keys/values fail the whole parse (*error names
// the problem) and leave *table unchanged.
bool parse_mapped(const std::string &text, MappedTable *table, std::string *error);
// Writes every key, sorted, in the same syntax; parse_mapped(write_mapped(t), ...) round-trips.
std::string write_mapped(const MappedTable &table);
// Only the keys of `table` that differ from `base`, in the same syntax (""
// when none do). The editor saves this over RECOMP_CONTROLS_MAPPED's table,
// so <profile>/controls/binding.txt holds the player's changes alone and the
// game's own defaults stay free to move.
std::string write_mapped_diff(const MappedTable &base, const MappedTable &table);
// A target's spelling: "key:Space", "mouse_left", "wheel_up", "action:settings", "none".
std::string target_name(const Target &t);

// Turns one tick of the shared virtual pad into TouchActions (the same
// key/mouse/wheel vocabulary host/sdl/main.cpp's touch path emits, in window
// points) and host action names (routed like ControlsSink::action). Holds no
// SDL state; the host drives it from controls_host.cpp.
class Binding {
  public:
    void set_table(const MappedTable &t) {
        table_ = t;
    }
    // What the editor opens on, and edits a copy of.
    const MappedTable &table() const {
        return table_;
    }
    // The window's size in points, for the Cursor stick mode's clamp. The
    // first call while no real position is known (no set_cursor yet) centres
    // the cursor; every call re-clamps the current position to the new size.
    void set_bounds(double w, double h);
    // A real pointer or a touch placed the cursor here (window points): the
    // Cursor stick mode continues from this position instead of its own.
    void set_cursor(double x, double y);
    // One input tick: `dt` is `now_ns` since the previous tick, clamped to 50
    // ms (0 on the first tick). Appends every action this tick produced.
    void tick(const PadState &pad, uint64_t now_ns, std::vector<TouchAction> *out,
              std::vector<std::string> *actions);
    // Releases every key and mouse button currently held by this binding and
    // resets its stick/dpad accumulators and press state. A pad button still
    // down afterwards is latched (see release_latch_): it fires nothing more
    // until the pad reports it released.
    void release_all(std::vector<TouchAction> *out);
    double cursor_x() const {
        return cursor_x_;
    }
    double cursor_y() const {
        return cursor_y_;
    }

  private:
    enum class AxisDir { None, Neg, Pos };

    void apply_button_edge(const Target &t, bool down, std::vector<TouchAction> *out,
                           std::vector<std::string> *actions);
    void apply_dpad(uint8_t hat, std::vector<TouchAction> *out);
    void apply_stick(int index, float vx, float vy, double dt, std::vector<TouchAction> *out);
    // Arrows/Wasd: one axis' hysteresis press/release, tracked per stick.
    void update_axis(int index, bool y_axis, float v, bool wasd, std::vector<TouchAction> *out);
    // Cursor mode releases anything an earlier Arrows/Wasd/dpad-style hold left behind.
    void release_axis(int index, std::vector<TouchAction> *out);
    // Ref-counted: a scancode two sources both want held (the defaults alias
    // left_stick=arrows onto dpad=arrows, for one) is pressed once and
    // released only once nothing wants it any more.
    void press_key(int scancode, std::vector<TouchAction> *out);
    void release_key(int scancode, std::vector<TouchAction> *out);
    bool key_held(int scancode) const;
    // A momentary tap (Scroll mode): skipped entirely when the key is
    // already held by a sustained source, so the tap's Up never releases a
    // hold it does not own.
    void tap_key(int scancode, std::vector<TouchAction> *out);
    void emit_wheel(int notches, std::vector<TouchAction> *out);
    // Clamp to [0, w-1] x [0, h-1]: the window's last valid point on each axis.
    void clamp_cursor();

    MappedTable table_;
    double bounds_w_ = 0, bounds_h_ = 0;
    double cursor_x_ = 0, cursor_y_ = 0;
    double emit_x_ = 0, emit_y_ = 0; // the cursor's position as of the last Motion emitted
    bool cursor_known_ = false;      // a real position (set_cursor, or a centred set_bounds)
    bool has_last_ = false;
    uint64_t last_ns_ = 0;

    uint16_t prev_buttons_ = 0; // the pad's own buttons, as of the previous tick
    // Bits release_all forced up while the pad still held them: apply_button_edge
    // is skipped for a latched bit until the pad itself reports it released,
    // so a one-shot target (Action, Wheel, a Mouse press) does not re-fire on
    // the very next tick just because the internal edge state was reset.
    uint16_t release_latch_ = 0;

    int dpad_active_sc_[4] = {0, 0, 0, 0}; // up, right, down, left; the scancode currently held

    AxisDir stick_x_dir_[2] = {AxisDir::None, AxisDir::None};
    AxisDir stick_y_dir_[2] = {AxisDir::None, AxisDir::None};
    int stick_x_sc_[2] = {0, 0};
    int stick_y_sc_[2] = {0, 0};

    double pan_acc_x_[2] = {0, 0}, pan_acc_y_[2] = {0, 0}; // Scroll mode
    double wheel_acc_[2] = {0, 0};                         // Wheel mode

    // Every scancode currently held, from any source, ref-counted.
    struct KeyHold {
        int scancode;
        int count;
    };
    std::vector<KeyHold> held_keys_;
    int mouse_hold_[3] = {0, 0, 0}; // ref-counted, one per mouse button
};

} // namespace controls
