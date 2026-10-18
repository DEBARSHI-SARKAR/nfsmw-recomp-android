// keypad_modifiers.h - Shift, Ctrl and Alt on the keypad: hold to chord, tap
// to latch for the next key, double tap to lock. Emits the key down/up the
// game should see; the host pushes them as key events. Pure: no SDL.
#pragma once
#include <stdint.h>

#include <vector>

struct KeypadKeyEvent {
    int scancode;
    bool down;
};

constexpr uint64_t kKeypadTapNs = 250ull * 1000000ull;       // a lift sooner is a tap
constexpr uint64_t kKeypadDoubleTapNs = 400ull * 1000000ull; // two taps this close lock

class KeypadModifiers {
  public:
    // A finger landed on / lifted from a modifier key.
    void press(int scancode, uint64_t now_ns, std::vector<KeypadKeyEvent> *out);
    void release(int scancode, uint64_t now_ns, std::vector<KeypadKeyEvent> *out);
    // The system took the finger away: a held modifier releases, nothing latches.
    void cancel(int scancode, std::vector<KeypadKeyEvent> *out);
    // A non-modifier key lifted: latched modifiers release.
    void key_lifted(uint64_t now_ns, std::vector<KeypadKeyEvent> *out);
    // Focus loss or backgrounding: everything releases.
    void cancel_all(std::vector<KeypadKeyEvent> *out);
    // keypad_modifier_bit() bits of the modifiers that are latched or locked.
    unsigned lit() const;

  private:
    enum State { Off, Held, Latched, Locked };
    struct Slot {
        int scancode = 0;
        State state = Off;
        uint64_t pressed_at = 0; // when the finger landed
        uint64_t last_tap = 0;   // when the last tap lifted (0: none yet)
        bool was_lit = false;    // pressed while Latched or Locked
    };
    Slot slots_[3];
    Slot *slot(int scancode);
    void set(Slot &s, State next, std::vector<KeypadKeyEvent> *out);
};
