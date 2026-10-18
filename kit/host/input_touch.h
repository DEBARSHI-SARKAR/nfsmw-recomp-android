// input_touch.h - fingers become the mouse and keys the game already reads.
//
// A pure gesture state machine: it sees finger down/motion/up in window points
// plus a clock, and emits the mouse motion, mouse buttons and key taps that
// the host's existing input path consumes. No SDL calls, so the tests drive
// it with plain numbers. The gesture table is in the M1 iOS design spec.
#pragma once
#include <stdint.h>

#include <vector>

// Gesture thresholds, in window points and nanoseconds.
constexpr double kTouchTapTravel = 20.0; // a resting finger drifts a few points
constexpr uint64_t kTouchLongPressNs = 350ull * 1000000ull;
constexpr double kTouchPanStep = 24.0;
// Place a tap before pressing so a frame can sample the new cursor position.
// Without presented-frame counts, wait this long before emitting the press.
constexpr uint64_t kTouchPressDelayNs = 60ull * 1000000ull;
// A synthesized click stays pressed this long: a game that samples its mouse
// buttons once per frame never sees a press and release inside one frame.
constexpr uint64_t kTouchClickHoldNs = 90ull * 1000000ull;
// And, once the host reports presented frames, for this many of them: the
// clock alone says nothing about when the game last sampled its buttons, and
// a game presenting at 15 frames a second can miss a 90 ms press entirely.
// The press must be seen by one sample and the release by a later one.
constexpr uint32_t kTouchClickHoldFrames = 2;
// A game that stops presenting still gets its release after this long.
constexpr uint64_t kTouchClickHoldMaxNs = 400ull * 1000000ull;
// A held or dragging finger this close to a side is placed exactly on it: games
// scroll when the cursor sits on the outermost row or column, which a finger
// on a bezel never quite reaches. When such a hold ends the cursor is moved
// back inside by kTouchEdgeRelease so the scrolling stops with the finger.
constexpr double kTouchEdgeMargin = 16.0;
constexpr double kTouchEdgeRelease = 48.0;

// A hardware pointer stops at the inner side of a strip the system keeps along
// a window edge (a status bar): it cannot go further. A pointer resting within
// kPointerStripSlack of that side is placed on the edge itself, which is where
// a game that scrolls at its edges is looking. The slack is a hand's tremor:
// a game's edge scroll ramps up over a second of the cursor staying put, and a
// pointer pushed against the strip wanders a dozen points. Zero inset: the
// value as it is.
constexpr double kPointerStripSlack = 16.0;
inline double pointer_behind_strip(double v, double inset) {
    return inset > 0 && v < inset + kPointerStripSlack ? 0 : v;
}

// The system may push a pointer that touched the strip back out on its own
// (iPadOS glides it some 30 points away). The edge has to outlast that: once
// the pointer has touched the strip it stays on the edge until it has come
// kPointerStripRelease past the strip, a distance the glide does not reach
// and a hand leaving the edge crosses at once.
constexpr double kPointerStripRelease = 64.0;
class PointerStripLatch {
  public:
    double apply(double v, double inset) {
        if (inset <= 0) {
            latched_ = false;
            return v;
        }
        if (v < inset + kPointerStripSlack)
            latched_ = true;
        else if (v >= inset + kPointerStripRelease)
            latched_ = false;
        return latched_ ? 0 : v;
    }

  private:
    bool latched_ = false;
};

struct TouchPoint {
    int64_t id;
    double x, y; // window points
};

struct TouchAction {
    enum Kind { Motion, Button, Key, Wheel } kind;
    // Motion only: also place the game's own cursor here. True for a press
    // and for a left drag; false while the wheel button is held, when the
    // game scrolls or rotates from relative movement instead.
    bool place = true;
    double x = 0, y = 0; // Motion, Button, Wheel (the event's position)
    int button = 0;      // Button: 0 left, 1 right, 2 middle (wheel)
    bool down = false;   // Button, Key
    int scancode = 0;    // Key: an SDL_Scancode value
    int wheel = 0;       // Wheel: notches, +1 up / -1 down
};

class TouchMapper {
  public:
    // The window's size in points. Enables edge snapping; zero disables it.
    void set_bounds(double w, double h);
    // Where those bounds start, in window points: the game image's top-left
    // corner when it does not fill the window (portrait on a phone). Edge
    // snapping then works on the image's edges. Zero by default.
    void set_origin(double x, double y);
    // Strips along the window's edges the system keeps for itself (a status
    // bar, a gesture zone), in points. A finger never reaches the app from
    // inside one, so the snap margin on that edge grows by the strip's depth.
    void set_edge_insets(double left, double top, double right, double bottom);
    void finger_down(TouchPoint p, uint64_t now_ns, std::vector<TouchAction> *out);
    void finger_motion(TouchPoint p, uint64_t now_ns, std::vector<TouchAction> *out);
    void finger_up(TouchPoint p, uint64_t now_ns, std::vector<TouchAction> *out);
    // Fires deferred presses, releases and long presses. Call once per pump.
    void tick(uint64_t now_ns, std::vector<TouchAction> *out);
    // The host's running count of presented frames. Once told, a click presses
    // one frame after placement and releases kTouchClickHoldFrames after press.
    void frames_presented(uint32_t count);
    // The system took the finger away (SDL_EVENT_FINGER_CANCELED): forget it
    // without a click; a drag it was holding is released.
    void finger_cancel(int64_t id, std::vector<TouchAction> *out);
    // Focus loss or backgrounding: every finger is gone. Releases anything held.
    void cancel_all(std::vector<TouchAction> *out);
    // Toggled by a four-finger tap; the host shows or hides the keyboard.
    bool text_input_wanted() const {
        return text_input_;
    }

  private:
    struct Finger {
        int64_t id;
        double x0, y0, x, y;
        uint64_t t0;
    };
    std::vector<Finger> fingers_; // currently down, in order of arrival
    int max_fingers_ = 0;         // most fingers down during this gesture
    bool dragging_ = false;       // one-finger drag in progress (left held)
    bool long_fired_ = false;     // the finger has rested for the long-press time
    bool middle_held_ = false;    // a drag after the long press: wheel button down
    bool text_input_ = false;
    double pan_cx_ = 0, pan_cy_ = 0, pan_acc_x_ = 0, pan_acc_y_ = 0;
    double tap2_x_ = 0, tap2_y_ = 0; // a two-finger tap right-clicks here
    double bounds_w_ = 0, bounds_h_ = 0;
    double origin_x_ = 0, origin_y_ = 0;
    double inset_l_ = 0, inset_t_ = 0, inset_r_ = 0, inset_b_ = 0;
    bool snapped_ = false;               // the gesture's placed point sits on a window edge
    double placed_x_ = 0, placed_y_ = 0; // the last placed point
    // Where the cursor goes once an edge hold is over, after any held release.
    bool nudge_pending_ = false;
    double nudge_x_ = 0, nudge_y_ = 0;
    // A click's press waits for a frame after placement, or the time deadline
    // when the host has not supplied presented-frame counts.
    bool press_pending_ = false;
    int press_button_ = 0;
    double press_x_ = 0, press_y_ = 0;
    uint64_t press_deadline_ = 0;
    uint32_t presents_at_place_ = 0;
    // A click's release, held back until kTouchClickHoldNs after its press and,
    // when presents are reported, until kTouchClickHoldFrames of them.
    bool release_pending_ = false;
    int release_button_ = 0;
    double release_x_ = 0, release_y_ = 0;
    uint64_t release_due_ = 0;
    uint64_t release_deadline_ = 0;
    bool presents_known_ = false;
    uint32_t presents_ = 0;
    uint32_t presents_at_press_ = 0;
    bool release_ready(uint64_t now) const;
    void place(std::vector<TouchAction> *out, double x, double y, bool snap = true);
    void click(std::vector<TouchAction> *out, int button, double x, double y, uint64_t now);
    void press_held(std::vector<TouchAction> *out, uint64_t now);
    void end_edge_hold(std::vector<TouchAction> *out);
    void release_held(std::vector<TouchAction> *out);
    double centroid_x() const;
    double centroid_y() const;
    void reset_gesture();
};
