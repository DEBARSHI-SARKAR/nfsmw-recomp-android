// keypad_tests.cpp - the keypad scancodes and the modifier latch machine. The
// keypad geometry is pinned in controls_tests.cpp against the legacy oracle.
#include "../keypad_layout.h"
#include "../keypad_modifiers.h"

#include <SDL3/SDL_scancode.h>
#include <stdio.h>

static int g_failures = 0;
#define CHECK(c)                                                                                   \
    do {                                                                                           \
        if (!(c)) {                                                                                \
            fprintf(stderr, "FAIL %s:%d: %s\n", __FILE__, __LINE__, #c);                           \
            ++g_failures;                                                                          \
        }                                                                                          \
    } while (0)

// The layout spells SDL's scancodes out to stay SDL-free; keep them honest.
static_assert(
    int(kScanA) == int(SDL_SCANCODE_A) && int(kScanZ) == int(SDL_SCANCODE_Z) &&
        int(kScan1) == int(SDL_SCANCODE_1) && int(kScan0) == int(SDL_SCANCODE_0) &&
        int(kScanReturn) == int(SDL_SCANCODE_RETURN) &&
        int(kScanEscape) == int(SDL_SCANCODE_ESCAPE) &&
        int(kScanBackspace) == int(SDL_SCANCODE_BACKSPACE) &&
        int(kScanTab) == int(SDL_SCANCODE_TAB) && int(kScanSpace) == int(SDL_SCANCODE_SPACE) &&
        int(kScanMinus) == int(SDL_SCANCODE_MINUS) &&
        int(kScanEquals) == int(SDL_SCANCODE_EQUALS) &&
        int(kScanLeftBracket) == int(SDL_SCANCODE_LEFTBRACKET) &&
        int(kScanRightBracket) == int(SDL_SCANCODE_RIGHTBRACKET) &&
        int(kScanBackslash) == int(SDL_SCANCODE_BACKSLASH) &&
        int(kScanSemicolon) == int(SDL_SCANCODE_SEMICOLON) &&
        int(kScanApostrophe) == int(SDL_SCANCODE_APOSTROPHE) &&
        int(kScanGrave) == int(SDL_SCANCODE_GRAVE) && int(kScanComma) == int(SDL_SCANCODE_COMMA) &&
        int(kScanPeriod) == int(SDL_SCANCODE_PERIOD) &&
        int(kScanSlash) == int(SDL_SCANCODE_SLASH) && int(kScanF1) == int(SDL_SCANCODE_F1) &&
        int(kScanF12) == int(SDL_SCANCODE_F12) && int(kScanInsert) == int(SDL_SCANCODE_INSERT) &&
        int(kScanHome) == int(SDL_SCANCODE_HOME) && int(kScanPageUp) == int(SDL_SCANCODE_PAGEUP) &&
        int(kScanDelete) == int(SDL_SCANCODE_DELETE) && int(kScanEnd) == int(SDL_SCANCODE_END) &&
        int(kScanPageDown) == int(SDL_SCANCODE_PAGEDOWN) &&
        int(kScanRight) == int(SDL_SCANCODE_RIGHT) && int(kScanLeft) == int(SDL_SCANCODE_LEFT) &&
        int(kScanDown) == int(SDL_SCANCODE_DOWN) && int(kScanUp) == int(SDL_SCANCODE_UP) &&
        int(kScanLCtrl) == int(SDL_SCANCODE_LCTRL) &&
        int(kScanLShift) == int(SDL_SCANCODE_LSHIFT) && int(kScanLAlt) == int(SDL_SCANCODE_LALT),
    "keypad_layout.h scancodes drifted from SDL");

static void test_modifier_predicate() {
    CHECK(keypad_is_modifier(kScanLShift) && keypad_is_modifier(kScanLCtrl) &&
          keypad_is_modifier(kScanLAlt));
    CHECK(!keypad_is_modifier(kScanA) && !keypad_is_modifier(kScanReturn));
    CHECK(keypad_modifier_bit(kScanLShift) == 1u && keypad_modifier_bit(kScanLCtrl) == 2u &&
          keypad_modifier_bit(kScanLAlt) == 4u && keypad_modifier_bit(kScanA) == 0u);
}

static const uint64_t MS = 1000000ull;

static void test_hold_chords() {
    KeypadModifiers m;
    std::vector<KeypadKeyEvent> out;
    m.press(kScanLShift, 0, &out);
    CHECK(out.size() == 1 && out[0].scancode == kScanLShift && out[0].down);
    CHECK(m.lit() == 0); // held is not lit
    out.clear();
    m.release(kScanLShift, 300 * MS, &out); // held 300 ms: a hold, not a tap
    CHECK(out.size() == 1 && !out[0].down);
    CHECK(m.lit() == 0);
}

static void test_tap_latches_for_the_next_key() {
    KeypadModifiers m;
    std::vector<KeypadKeyEvent> out;
    m.press(kScanLCtrl, 0, &out);
    m.release(kScanLCtrl, 100 * MS, &out); // a tap
    CHECK(out.size() == 1 && out[0].down); // still down: latched
    CHECK(m.lit() == 2u);
    out.clear();
    m.key_lifted(500 * MS, &out); // the next key's release ends the latch
    CHECK(out.size() == 1 && out[0].scancode == kScanLCtrl && !out[0].down);
    CHECK(m.lit() == 0);
}

static void test_double_tap_locks_until_the_next_tap() {
    KeypadModifiers m;
    std::vector<KeypadKeyEvent> out;
    m.press(kScanLAlt, 0, &out);
    m.release(kScanLAlt, 100 * MS, &out);
    m.press(kScanLAlt, 300 * MS, &out); // within 400 ms of the first tap
    m.release(kScanLAlt, 350 * MS, &out);
    CHECK(out.size() == 1 && out[0].down); // one down, never released
    CHECK(m.lit() == 4u);
    out.clear();
    m.key_lifted(1000 * MS, &out);
    m.key_lifted(2000 * MS, &out);
    CHECK(out.empty()); // locked survives keys
    m.press(kScanLAlt, 3000 * MS, &out);
    m.release(kScanLAlt, 3050 * MS, &out); // a tap while locked: off
    CHECK(out.size() == 1 && !out[0].down);
    CHECK(m.lit() == 0);
}

static void test_a_slow_second_press_is_a_new_latch_not_a_lock() {
    KeypadModifiers m;
    std::vector<KeypadKeyEvent> out;
    m.press(kScanLShift, 0, &out);
    m.release(kScanLShift, 100 * MS, &out); // latched
    out.clear();
    m.press(kScanLShift, 900 * MS, &out); // later than 400 ms after the tap
    CHECK(out.empty());                   // already down
    m.release(kScanLShift, 950 * MS, &out);
    CHECK(out.size() == 1 && !out[0].down); // a tap on a latched modifier turns it off
    CHECK(m.lit() == 0);
}

static void test_a_hold_on_a_lit_modifier_keeps_it() {
    KeypadModifiers m;
    std::vector<KeypadKeyEvent> out;
    m.press(kScanLCtrl, 0, &out);
    m.release(kScanLCtrl, 50 * MS, &out);
    m.press(kScanLCtrl, 100 * MS, &out);
    m.release(kScanLCtrl, 140 * MS, &out); // locked
    CHECK(m.lit() == 2u);
    out.clear();
    m.press(kScanLCtrl, 1000 * MS, &out);
    m.release(kScanLCtrl, 1400 * MS, &out); // a chord hold while locked: still locked
    CHECK(out.empty() && m.lit() == 2u);
}

static void test_cancel_releases_without_latching() {
    KeypadModifiers m;
    std::vector<KeypadKeyEvent> out;
    m.press(kScanLCtrl, 0, &out);
    out.clear();
    m.cancel(kScanLCtrl, &out);
    CHECK(out.size() == 1 && !out[0].down && m.lit() == 0);
    m.press(kScanLShift, 0, &out);
    m.release(kScanLShift, 50 * MS, &out); // latched
    out.clear();
    m.cancel_all(&out);
    CHECK(out.size() == 1 && out[0].scancode == kScanLShift && !out[0].down && m.lit() == 0);
}

int main() {
    test_modifier_predicate();
    test_hold_chords();
    test_tap_latches_for_the_next_key();
    test_double_tap_locks_until_the_next_tap();
    test_a_slow_second_press_is_a_new_latch_not_a_lock();
    test_a_hold_on_a_lit_modifier_keeps_it();
    test_cancel_releases_without_latching();
    if (g_failures) {
        fprintf(stderr, "%d failures\n", g_failures);
        return 1;
    }
    printf("keypad_tests: ok\n");
    return 0;
}
