// keypad_modifiers.cpp - see keypad_modifiers.h.
#include "keypad_modifiers.h"

#include "keypad_layout.h"

KeypadModifiers::Slot *KeypadModifiers::slot(int scancode) {
    static const int order[3] = {kScanLShift, kScanLCtrl, kScanLAlt};
    for (int i = 0; i < 3; ++i) {
        slots_[i].scancode = order[i];
        if (order[i] == scancode)
            return &slots_[i];
    }
    return nullptr;
}

// Key down leaves Off; key up enters it. Every other transition is silent:
// the game sees the modifier down for the whole latched or locked span.
void KeypadModifiers::set(Slot &s, State next, std::vector<KeypadKeyEvent> *out) {
    if (s.state == Off && next != Off)
        out->push_back({s.scancode, true});
    else if (s.state != Off && next == Off)
        out->push_back({s.scancode, false});
    s.state = next;
}

void KeypadModifiers::press(int scancode, uint64_t now, std::vector<KeypadKeyEvent> *out) {
    Slot *s = slot(scancode);
    if (!s)
        return;
    s->was_lit = s->state == Latched || s->state == Locked;
    s->pressed_at = now;
    if (s->state == Off)
        set(*s, Held, out);
}

void KeypadModifiers::release(int scancode, uint64_t now, std::vector<KeypadKeyEvent> *out) {
    Slot *s = slot(scancode);
    if (!s || s->state == Off)
        return;
    const bool tap = now - s->pressed_at < kKeypadTapNs;
    const bool second = s->last_tap != 0 && now - s->last_tap < kKeypadDoubleTapNs;
    if (s->was_lit) {
        s->was_lit = false;
        if (!tap)
            return; // a hold on a lit modifier: nothing changes
        // A second tap soon after the latching tap locks; any other tap turns it off.
        if (s->state == Latched && second)
            set(*s, Locked, out);
        else
            set(*s, Off, out);
        s->last_tap = now;
        return;
    }
    if (!tap) {
        set(*s, Off, out); // held to chord, and lifted
        return;
    }
    set(*s, second ? Locked : Latched, out);
    s->last_tap = now;
}

void KeypadModifiers::cancel(int scancode, std::vector<KeypadKeyEvent> *out) {
    Slot *s = slot(scancode);
    if (!s)
        return;
    if (s->state == Held)
        set(*s, Off, out);
    s->was_lit = false;
}

void KeypadModifiers::key_lifted(uint64_t, std::vector<KeypadKeyEvent> *out) {
    slot(kScanLShift); // names the slots
    for (Slot &s : slots_)
        if (s.state == Latched)
            set(s, Off, out);
}

void KeypadModifiers::cancel_all(std::vector<KeypadKeyEvent> *out) {
    slot(kScanLShift);
    for (Slot &s : slots_) {
        set(s, Off, out);
        s.was_lit = false;
        s.last_tap = 0;
    }
}

unsigned KeypadModifiers::lit() const {
    unsigned bits = 0;
    for (const Slot &s : slots_)
        if (s.state == Latched || s.state == Locked)
            bits |= keypad_modifier_bit(s.scancode);
    return bits;
}
