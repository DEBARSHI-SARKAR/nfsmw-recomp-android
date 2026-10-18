// keypad_layout.cpp - see keypad_layout.h.
#include "keypad_layout.h"

bool keypad_is_modifier(int scancode) {
    return scancode == kScanLShift || scancode == kScanLCtrl || scancode == kScanLAlt;
}
unsigned keypad_modifier_bit(int scancode) {
    return scancode == kScanLShift  ? 1u
           : scancode == kScanLCtrl ? 2u
           : scancode == kScanLAlt  ? 4u
                                    : 0u;
}
