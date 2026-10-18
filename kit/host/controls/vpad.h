// vpad.h - the shared virtual pad: 13 buttons, a hat and six axes, merged
// from the on-screen controls and a physical controller, plus the buffered
// edge queue that DirectInput/XInput read from. SDL-free.
// Design: docs/superpowers/specs/2026-09-17-touch-controls-design.md.
#pragma once

#include <cstdint>
#include <mutex>

#include "../../dx/host_api.h"

namespace controls {

// bit = 1 << int(PadButton) (layout.h's PadButton enum order).
enum PadBit : uint16_t {
    kPadCross = 1 << 0,
    kPadCircle = 1 << 1,
    kPadSquare = 1 << 2,
    kPadTriangle = 1 << 3,
    kPadL1 = 1 << 4,
    kPadR1 = 1 << 5,
    kPadL2 = 1 << 6,
    kPadR2 = 1 << 7,
    kPadL3 = 1 << 8,
    kPadR3 = 1 << 9,
    kPadSelect = 1 << 10,
    kPadStart = 1 << 11,
    kPadPs = 1 << 12,
};

enum PadHat : uint8_t { kHatUp = 1, kHatRight = 2, kHatDown = 4, kHatLeft = 8 };

// A pad's whole live state: buttons/hat as bit sets, sticks in [-1, 1]
// (+y down, screen convention) and triggers in [0, 1].
struct PadState {
    uint16_t buttons = 0;
    uint8_t hat = 0;
    float lx = 0, ly = 0, rx = 0, ry = 0;
    float l2 = 0, r2 = 0;

    bool operator==(const PadState &o) const {
        return buttons == o.buttons && hat == o.hat && lx == o.lx && ly == o.ly && rx == o.rx &&
               ry == o.ry && l2 == o.l2 && r2 == o.r2;
    }
    bool operator!=(const PadState &o) const {
        return !(*this == o);
    }
};

// Combines two sources: buttons and hat OR together; each axis keeps
// whichever side has the larger magnitude.
PadState merge(const PadState &a, const PadState &b);

// A stick's output for a finger offset (dx, dy) in pixels from its centre.
// m = |offset| / radius, clamped to 1; below `deadzone` the output is 0,
// otherwise it is rescaled so the deadzone edge starts at 0 and the radius
// edge reaches 1, keeping the offset's direction.
void stick_output(double dx, double dy, double radius_px, double deadzone, float *x, float *y);

// Dpad direction for an offset (dx, dy) from its centre; `half` is half the
// dpad's size in pixels. Below a quarter of `half` the result is neutral;
// otherwise the angle picks one of 8 sectors, 45 degrees each and centred on
// the axes and diagonals (a diagonal sets two bits).
uint8_t dpad_hat(double dx, double dy, double half);

// One buffered change to a Vpad's merged state, in emission order.
// kind 0: button `index` (PadButton order), value 0/1.
// kind 1: hat, value = the new PadHat bits.
// kind 2: axis `index` 0..5 (lx, ly, rx, ry, l2, r2), value = the axis * 32767, rounded.
struct PadEdge {
    uint32_t sequence;
    uint8_t kind;
    uint8_t index;
    int32_t value;
};

enum { kPadSourceTouch = 0, kPadSourceController = 1, kPadSourceCount = 2 };

// Thread-safe (one mutex): the host (input thread) writes through
// set_source/request_rumble/set_controller_connected, and the guest (game
// thread) reads through state/packet/next_edge/rumble/controller_connected.
// The edge queue is a ring of 256 entries; a reader more than 256 changes
// behind loses the oldest ones and picks up from whatever remains, matching
// DirectInput buffer overflow (DI_BUFFEROVERFLOW is handled in Task 15).
class Vpad {
  public:
    // Replaces `source`'s state and re-merges every source. Queues an edge
    // for each button/hat/axis that changed in the merged result (axis edges
    // only when their scaled integer value changes) and bumps `packet` once
    // if the merge changed at all.
    void set_source(int source, const PadState &s);
    PadState state() const;
    uint32_t packet() const;
    // The oldest queued edge with sequence > after_sequence, if any.
    bool next_edge(uint32_t after_sequence, PadEdge *out) const;

    void request_rumble(uint16_t low, uint16_t high);
    uint64_t rumble_serial() const;
    void rumble(uint16_t *low, uint16_t *high) const;

    bool controller_connected() const;
    void set_controller_connected(bool on);

    // Back to the constructed state: no sources, no edges, no rumble. This
    // also resets the edge sequence counter to 0, so any reader tracking an
    // `after_sequence` must reset its own tracking too, or it will treat
    // pre-reset sequences as still-future ones. Only safe at startup and in
    // tests, never while a reader (game thread) might be mid-poll.
    void reset();

  private:
    void push_edge(uint8_t kind, uint8_t index, int32_t value); // caller holds mutex_

    mutable std::mutex mutex_;
    PadState sources_[kPadSourceCount];
    PadState merged_;
    uint32_t packet_ = 0;

    PadEdge ring_[256] = {};
    uint32_t edge_count_ = 0; // total edges ever pushed; also the last sequence

    uint16_t rumble_low_ = 0, rumble_high_ = 0;
    uint64_t rumble_serial_ = 0;
    bool controller_connected_ = false;
};

// The process-wide pad: the touch router and the SDL gamepad source
// (Task 10 on) write to it; the DirectInput/XInput adapters read it.
Vpad &vpad();

// Scales a PadState to the wire format the host_pad_* adapters
// (vpad_host_api.cpp) send the guest: sticks to the full int16 range (* 32767,
// rounded), triggers to a byte (* 255, rounded). Y is NOT flipped here —
// PadState and HostPadState both keep +y down (screen convention); it is
// the XInput adapter (dx/xinput.cpp, Task 12) that flips ly/ry to XInput's
// +y up convention on its way out.
HostPadState to_host(const PadState &s);

// SDL_GamepadButton and SDL_GamepadAxis values, spelled out so pad_from_sdl
// stays SDL-free (controls_tests.cpp checks them against SDL's enums).
// kSdlPadButtonCount stops after the touchpad button; the rest are unused.
enum SdlPadButton : int {
    kSdlPadSouth = 0,
    kSdlPadEast = 1,
    kSdlPadWest = 2,
    kSdlPadNorth = 3,
    kSdlPadBack = 4,
    kSdlPadGuide = 5,
    kSdlPadStart = 6,
    kSdlPadLeftStick = 7,
    kSdlPadRightStick = 8,
    kSdlPadLeftShoulder = 9,
    kSdlPadRightShoulder = 10,
    kSdlPadDpadUp = 11,
    kSdlPadDpadDown = 12,
    kSdlPadDpadLeft = 13,
    kSdlPadDpadRight = 14,
    kSdlPadButtonCount = 21,
};
enum SdlPadAxis : int {
    kSdlAxisLeftX = 0,
    kSdlAxisLeftY = 1,
    kSdlAxisRightX = 2,
    kSdlAxisRightY = 3,
    kSdlAxisLeftTrigger = 4,
    kSdlAxisRightTrigger = 5,
    kSdlAxisCount = 6,
};

// A physical controller's state, read through SDL's standard mapping, as a
// PadState. `buttons` is indexed by SdlPadButton (kSdlPadButtonCount
// entries), `axes` by SdlPadAxis (kSdlAxisCount entries). Face buttons map
// by position (south = cross, east = circle, west = square, north =
// triangle), back/guide/start to select/ps/start, the dpad to the hat.
// Sticks are v / 32767 clamped to [-1, 1], zeroed as a pair inside a 0.08
// radial dead zone; SDL's +y is already down. Triggers are v / 32767 clamped
// to [0, 1], and past 0.5 also set the l2/r2 bit.
PadState pad_from_sdl(const bool buttons[kSdlPadButtonCount], const int16_t axes[kSdlAxisCount]);

} // namespace controls
