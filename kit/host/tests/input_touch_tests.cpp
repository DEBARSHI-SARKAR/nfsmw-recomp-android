// input_touch_tests.cpp - the gesture table, one case per row.
#include "../input_touch.h"
#include "../script_touch.h"

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

static const uint64_t MS = 1000000ull;

static void test_tap_places_one_presented_frame_before_pressing() {
    TouchMapper m;
    std::vector<TouchAction> out;
    m.frames_presented(10);
    m.finger_down({1, 100, 100}, 0, &out);
    m.finger_up({1, 100, 100}, 20 * MS, &out);
    CHECK(out.size() == 1 && out[0].kind == TouchAction::Motion && out[0].place &&
          out[0].x == 100 && out[0].y == 100);
    out.clear();
    m.tick(20 * MS, &out);
    CHECK(out.empty());
    m.tick(100 * MS, &out); // known presents take precedence over the 60 ms fallback
    CHECK(out.empty());
    m.frames_presented(11);
    CHECK(out.empty()); // reporting a frame does not emit the press; tick does
    m.tick(100 * MS, &out);
    CHECK(out.size() == 1 && out[0].kind == TouchAction::Button && out[0].down &&
          out[0].button == 0 && out[0].x == 100 && out[0].y == 100);
    out.clear();
    m.frames_presented(12);
    m.tick(190 * MS, &out);
    CHECK(out.empty()); // 90 ms, but only one frame since the press
    m.frames_presented(13);
    m.tick(190 * MS, &out);
    CHECK(out.size() == 1 && out[0].kind == TouchAction::Button && !out[0].down &&
          out[0].button == 0 && out[0].x == 100 && out[0].y == 100);
}

static void test_tap_without_presents_presses_after_60_ms() {
    TouchMapper m;
    std::vector<TouchAction> out;
    m.finger_down({1, 100, 100}, 0, &out);
    m.finger_up({1, 100, 100}, 20 * MS, &out);
    CHECK(out.size() == 1 && out[0].kind == TouchAction::Motion && out[0].x == 100 &&
          out[0].y == 100);
    out.clear();
    m.tick(80 * MS - 1, &out);
    CHECK(out.empty());
    m.tick(80 * MS, &out);
    CHECK(out.size() == 1 && out[0].kind == TouchAction::Button && out[0].down &&
          out[0].button == 0 && out[0].x == 100 && out[0].y == 100);
    out.clear();
    m.tick(170 * MS - 1, &out);
    CHECK(out.empty());
    m.tick(170 * MS, &out);
    CHECK(out.size() == 1 && out[0].kind == TouchAction::Button && !out[0].down &&
          out[0].button == 0 && out[0].x == 100 && out[0].y == 100);
}

static void test_a_new_finger_finishes_a_pending_press_first() {
    TouchMapper m;
    std::vector<TouchAction> out;
    m.frames_presented(10);
    m.finger_down({1, 100, 100}, 0, &out);
    m.finger_up({1, 100, 100}, 20 * MS, &out);
    out.clear();
    m.finger_down({2, 200, 200}, 30 * MS, &out);
    CHECK(out.size() == 2 && out[0].kind == TouchAction::Button && out[0].down &&
          out[0].button == 0 && out[0].x == 100 && out[0].y == 100 &&
          out[1].kind == TouchAction::Button && !out[1].down && out[1].button == 0 &&
          out[1].x == 100 && out[1].y == 100);
    out.clear();
    m.finger_up({2, 200, 200}, 50 * MS, &out);
    CHECK(out.size() == 1 && out[0].kind == TouchAction::Motion && out[0].x == 200 &&
          out[0].y == 200);
    out.clear();
    m.frames_presented(11);
    m.tick(60 * MS, &out);
    CHECK(out.size() == 1 && out[0].kind == TouchAction::Button && out[0].down && out[0].x == 200 &&
          out[0].y == 200);
    out.clear();
    m.frames_presented(13);
    m.tick(150 * MS, &out);
    CHECK(out.size() == 1 && out[0].kind == TouchAction::Button && !out[0].down &&
          out[0].x == 200 && out[0].y == 200);
}

static void test_focus_loss_discards_a_pending_press() {
    TouchMapper m;
    std::vector<TouchAction> out;
    m.frames_presented(10);
    m.finger_down({1, 100, 100}, 0, &out);
    m.finger_up({1, 100, 100}, 20 * MS, &out);
    out.clear();
    m.cancel_all(&out);
    CHECK(out.empty()); // the press never reached the guest, so it owes no release
    m.frames_presented(20);
    m.tick(1000 * MS, &out);
    CHECK(out.empty());
    m.finger_down({2, 200, 200}, 1010 * MS, &out);
    CHECK(out.empty()); // no old click to flush on the next finger either
}

// The smoke driver must exercise the mapper: no button on finger-down, a
// placement on lift, a press on a later frame, then the present-gated release.
static void test_smoke_tap_drives_the_mapper() {
    HostScriptTouch tap;
    std::vector<TouchAction> out;
    tap.start(24, 8, 640, 480, 0, 10, &out);
    CHECK(tap.active() && out.empty());
    tap.tick(79 * MS, 10, &out);
    CHECK(out.empty() && !tap.pending(79 * MS, 10));
    tap.tick(80 * MS, 10, &out);
    CHECK(out.size() == 1 && out[0].kind == TouchAction::Motion && out[0].x == 24 && out[0].y == 8);
    out.clear();
    tap.tick(100 * MS, 10, &out);
    CHECK(tap.active() && out.empty());
    CHECK(tap.pending(100 * MS, 11));
    tap.tick(100 * MS, 11, &out);
    CHECK(tap.active() && out.size() == 1 && out[0].kind == TouchAction::Button && out[0].down &&
          out[0].x == 24 && out[0].y == 8);
    out.clear();
    tap.tick(190 * MS, 12, &out);
    CHECK(tap.active() && out.empty());
    CHECK(tap.pending(190 * MS, 13));
    tap.tick(190 * MS, 13, &out);
    CHECK(!tap.active() && out.size() == 1 && out[0].kind == TouchAction::Button && !out[0].down &&
          out[0].x == 24 && out[0].y == 8);
}

static void test_tap_is_left_click() {
    TouchMapper m;
    std::vector<TouchAction> out;
    m.finger_down({1, 100, 200}, 0, &out);
    m.finger_up({1, 101, 201}, 80 * MS, &out);
    CHECK(out.size() == 1 && out[0].kind == TouchAction::Motion && out[0].x == 101 &&
          out[0].y == 201); // place now; the press is held
    const uint64_t press_at = 80 * MS + kTouchPressDelayNs;
    m.tick(press_at, &out);
    CHECK(out.size() == 2);
    CHECK(out[1].kind == TouchAction::Button && out[1].button == 0 && out[1].down);
    m.tick(press_at + kTouchClickHoldNs / 2, &out);
    CHECK(out.size() == 2); // still held
    m.tick(press_at + kTouchClickHoldNs, &out);
    CHECK(out.size() == 3 && out[2].kind == TouchAction::Button && out[2].button == 0 &&
          !out[2].down);
    // The release lands where the press did. (The press point was once read
    // back out of the action vector after another action had been pushed into
    // it, which reallocates: on a device the release then carried 0,0.)
    CHECK(out[2].x == 101 && out[2].y == 201);
}

static void test_release_lands_where_the_press_did_whatever_the_vector_did() {
    TouchMapper m;
    for (size_t reserve = 0; reserve < 6; ++reserve) {
        std::vector<TouchAction> out;
        out.reserve(reserve);
        m.finger_down({1, 300, 200}, 0, &out);
        m.finger_up({1, 300, 200}, 20 * MS, &out);
        m.tick(20 * MS + kTouchPressDelayNs, &out);
        m.tick(20 * MS + kTouchPressDelayNs + kTouchClickHoldNs, &out);
        CHECK(out.size() == 3 && !out[2].down && out[2].x == 300 && out[2].y == 200);
    }
}

static void test_a_new_finger_releases_a_held_click_first() {
    TouchMapper m;
    std::vector<TouchAction> out;
    m.finger_down({1, 0, 0}, 0, &out);
    m.finger_up({1, 0, 0}, 20 * MS, &out);
    m.tick(80 * MS, &out);
    out.clear();
    m.finger_down({2, 50, 50}, 90 * MS, &out);
    CHECK(out.size() == 1 && out[0].kind == TouchAction::Button && !out[0].down);
}

static void test_long_press_is_right_click() {
    TouchMapper m;
    std::vector<TouchAction> out;
    m.finger_down({1, 50, 60}, 0, &out);
    m.tick(300 * MS, &out);
    CHECK(out.empty());
    m.tick(360 * MS, &out);
    // The rest only places the cursor; the button waits for the lift.
    CHECK(out.size() == 1 && out[0].kind == TouchAction::Motion && out[0].place && out[0].x == 50);
    out.clear();
    m.finger_up({1, 50, 60}, 380 * MS, &out);
    CHECK(out.size() == 1 && out[0].kind == TouchAction::Motion);
    m.tick(380 * MS + kTouchPressDelayNs, &out);
    CHECK(out.size() == 2 && out[0].kind == TouchAction::Motion &&
          out[1].kind == TouchAction::Button && out[1].button == 1 && out[1].down);
    m.tick(380 * MS + kTouchPressDelayNs + kTouchClickHoldNs, &out);
    CHECK(out.size() == 3 && out[2].kind == TouchAction::Button && out[2].button == 1 &&
          !out[2].down);
}

static void test_long_press_then_drag_is_a_wheel_button_drag() {
    TouchMapper m;
    std::vector<TouchAction> out;
    m.finger_down({1, 50, 60}, 0, &out);
    m.tick(360 * MS, &out); // cursor placed
    out.clear();
    m.finger_motion({1, 55, 62}, 400 * MS, &out);
    CHECK(out.empty()); // still resting
    m.finger_motion({1, 120, 90}, 500 * MS, &out);
    CHECK(out.size() == 2);
    CHECK(out[0].kind == TouchAction::Button && out[0].button == 2 && out[0].down &&
          out[0].x == 50 && out[0].y == 60);
    CHECK(out[1].kind == TouchAction::Motion && out[1].x == 120 && !out[1].place);
    out.clear();
    m.finger_motion({1, 125, 92}, 600 * MS, &out);
    CHECK(out.size() == 1 && !out[0].place);
    out.clear();
    m.finger_up({1, 130, 95}, 900 * MS, &out);
    CHECK(out.size() == 2 && out[0].kind == TouchAction::Motion && !out[0].place &&
          out[1].kind == TouchAction::Button && out[1].button == 2 && !out[1].down);
    out.clear();
    m.tick(2000 * MS, &out);
    CHECK(out.empty()); // no right click after a drag
}

static void test_edge_hold_scrolls_then_moves_the_cursor_inside() {
    TouchMapper m;
    m.set_bounds(1000, 800);
    std::vector<TouchAction> out;
    m.finger_down({1, 5, 400}, 0, &out);
    m.tick(360 * MS, &out);
    CHECK(out.size() == 1 && out[0].kind == TouchAction::Motion && out[0].x == 0 &&
          out[0].y == 400); // snapped onto the left edge
    out.clear();
    m.tick(1500 * MS, &out);
    CHECK(out.empty()); // an edge hold is not a right click
    m.finger_up({1, 6, 402}, 2000 * MS, &out);
    CHECK(out.size() == 1 && out[0].kind == TouchAction::Motion && out[0].place &&
          out[0].x == kTouchEdgeRelease && out[0].y == 400);
    m.tick(3000 * MS, &out);
    CHECK(out.size() == 1); // and no click
}

static void test_tap_near_an_edge_clicks_at_the_finger() {
    TouchMapper m;
    m.set_bounds(800, 600);
    std::vector<TouchAction> out;
    m.finger_down({1, 5, 400}, 0, &out);
    m.finger_up({1, 5, 400}, 50 * MS, &out);
    CHECK(out.size() == 1 && out[0].kind == TouchAction::Motion && out[0].x == 5 &&
          out[0].y == 400);
    m.tick(50 * MS + kTouchPressDelayNs, &out);
    CHECK(out.size() == 2 && out[1].kind == TouchAction::Button && out[1].button == 0 &&
          out[1].down && out[1].x == 5 && out[1].y == 400);
    out.clear();
    m.tick(50 * MS + kTouchPressDelayNs + kTouchClickHoldNs, &out);
    CHECK(out.size() == 1 && out[0].kind == TouchAction::Button && out[0].button == 0 &&
          !out[0].down && out[0].x == 5 && out[0].y == 400); // release, no nudge
    out.clear();
    m.tick(1000 * MS, &out);
    CHECK(out.empty()); // no later nudge
}

static void test_no_bounds_means_no_snapping() {
    TouchMapper m;
    std::vector<TouchAction> out;
    m.finger_down({1, 2, 3}, 0, &out);
    m.finger_up({1, 2, 3}, 50 * MS, &out);
    CHECK(out.size() == 1 && out[0].x == 2 && out[0].y == 3);
    m.tick(50 * MS + kTouchPressDelayNs, &out);
    m.tick(50 * MS + kTouchPressDelayNs + kTouchClickHoldNs, &out);
    CHECK(out.size() == 3); // release, no nudge
}

static void test_drag_is_left_drag() {
    TouchMapper m;
    std::vector<TouchAction> out;
    m.finger_down({1, 10, 10}, 0, &out);
    m.finger_motion({1, 20, 10}, 20 * MS, &out);
    CHECK(out.empty()); // under the travel threshold
    m.finger_motion({1, 45, 10}, 40 * MS, &out);
    CHECK(out.size() == 3); // Motion to start, Button down, Motion to here
    CHECK(out[0].kind == TouchAction::Motion && out[0].x == 10 && out[0].place);
    CHECK(out[1].kind == TouchAction::Button && out[1].button == 0 && out[1].down);
    CHECK(out[2].kind == TouchAction::Motion && out[2].x == 45);
    out.clear();
    m.finger_up({1, 55, 10}, 60 * MS, &out);
    CHECK(out.size() == 2 && out[0].kind == TouchAction::Motion &&
          out[1].kind == TouchAction::Button && !out[1].down);
}

static void test_two_finger_drag_pans_with_arrows() {
    TouchMapper m;
    std::vector<TouchAction> out;
    m.finger_down({1, 100, 100}, 0, &out);
    m.finger_down({2, 140, 100}, 5 * MS, &out);
    m.finger_motion({1, 100, 130}, 30 * MS, &out);
    m.finger_motion({2, 140, 130}, 30 * MS, &out); // centroid moved 30 down: one step
    CHECK(out.size() == 2);
    CHECK(out[0].kind == TouchAction::Key && out[0].scancode == SDL_SCANCODE_DOWN && out[0].down);
    CHECK(out[1].kind == TouchAction::Key && out[1].scancode == SDL_SCANCODE_DOWN && !out[1].down);
    out.clear();
    m.finger_up({1, 100, 130}, 60 * MS, &out);
    m.finger_up({2, 140, 130}, 60 * MS, &out);
    CHECK(out.empty()); // no click from a pan
}

static void test_two_finger_tap_is_right_click_three_is_f10_four_toggles_keyboard() {
    TouchMapper m;
    std::vector<TouchAction> out;
    m.finger_down({1, 0, 0}, 0, &out);
    m.finger_down({2, 10, 0}, 0, &out);
    m.finger_up({1, 0, 0}, 50 * MS, &out);
    m.finger_up({2, 10, 0}, 50 * MS, &out);
    // Placed between the fingers, then pressed and released as a right click.
    CHECK(out.size() == 1 && out[0].kind == TouchAction::Motion && out[0].place && out[0].x == 5 &&
          out[0].y == 0);
    out.clear();
    m.tick(110 * MS, &out);
    CHECK(out.size() == 1 && out[0].kind == TouchAction::Button && out[0].button == 1 &&
          out[0].down && out[0].x == 5);
    out.clear();
    m.tick(210 * MS, &out);
    CHECK(out.size() == 1 && out[0].kind == TouchAction::Button && out[0].button == 1 &&
          !out[0].down);
    out.clear();
    m.finger_down({1, 0, 0}, 300 * MS, &out);
    m.finger_down({2, 10, 0}, 300 * MS, &out);
    m.finger_down({3, 20, 0}, 300 * MS, &out);
    m.finger_up({1, 0, 0}, 350 * MS, &out);
    m.finger_up({2, 10, 0}, 350 * MS, &out);
    m.finger_up({3, 20, 0}, 350 * MS, &out);
    CHECK(out.size() == 2 && out[0].scancode == SDL_SCANCODE_F10);
    out.clear();
    CHECK(!m.text_input_wanted());
    for (int i = 1; i <= 4; ++i)
        m.finger_down({i, 10.0 * i, 0}, 400 * MS, &out);
    for (int i = 1; i <= 4; ++i)
        m.finger_up({i, 10.0 * i, 0}, 450 * MS, &out);
    CHECK(out.empty() && m.text_input_wanted());
}

static void test_second_finger_cancels_pending_tap() {
    TouchMapper m;
    std::vector<TouchAction> out;
    m.finger_down({1, 0, 0}, 0, &out);
    m.finger_down({2, 10, 0}, 10 * MS, &out);
    m.tick(400 * MS, &out);
    CHECK(out.empty()); // no long press once a second finger joined
}

// The game samples its buttons once per frame. A release timed from the clock
// alone can land before the frame after the press ever sampled, so once the
// host reports presented frames the release also waits for two of them.
static void test_click_release_waits_for_two_presented_frames() {
    TouchMapper m;
    std::vector<TouchAction> out;
    m.frames_presented(10);
    m.finger_down({1, 100, 200}, 0, &out);
    m.finger_up({1, 100, 200}, 20 * MS, &out);
    m.frames_presented(11);
    m.tick(30 * MS, &out);
    CHECK(out.size() == 2 && out[1].kind == TouchAction::Button && out[1].down);
    m.tick(30 * MS + kTouchClickHoldNs, &out);
    CHECK(out.size() == 2); // the hold time passed, but no frame sampled yet
    m.frames_presented(12);
    m.tick(30 * MS + kTouchClickHoldNs + 10 * MS, &out);
    CHECK(out.size() == 2); // one frame saw the press; the next must too
    m.frames_presented(13);
    m.tick(30 * MS + kTouchClickHoldNs + 20 * MS, &out);
    CHECK(out.size() == 3 && out[2].kind == TouchAction::Button && !out[2].down);
}

static void test_click_release_waits_for_the_hold_time_even_when_frames_flew() {
    TouchMapper m;
    std::vector<TouchAction> out;
    m.frames_presented(10);
    m.finger_down({1, 100, 200}, 0, &out);
    m.finger_up({1, 100, 200}, 20 * MS, &out);
    m.frames_presented(11);
    m.tick(30 * MS, &out);
    m.frames_presented(20);
    m.tick(30 * MS + kTouchClickHoldNs - 1, &out);
    CHECK(out.size() == 2);
    m.tick(30 * MS + kTouchClickHoldNs, &out);
    CHECK(out.size() == 3 && !out[2].down);
}

// A game that stopped presenting (a modal wait, a stalled frame) still gets
// its release, so the button is not left down forever.
static void test_a_stalled_game_still_gets_its_release() {
    TouchMapper m;
    std::vector<TouchAction> out;
    m.frames_presented(10);
    m.finger_down({1, 100, 200}, 0, &out);
    m.finger_up({1, 100, 200}, 20 * MS, &out);
    m.frames_presented(11);
    m.tick(30 * MS, &out);
    m.tick(30 * MS + kTouchClickHoldMaxNs - MS, &out);
    CHECK(out.size() == 2);
    m.tick(30 * MS + kTouchClickHoldMaxNs, &out);
    CHECK(out.size() == 3 && !out[2].down);
}

// The system keeps a strip along some window edges for itself (a status bar,
// a gesture zone): fingers there never reach the app, so the nearest a finger
// gets to that edge is the strip's far side. The host reports the strip as an
// inset and the snap margin grows by it on that edge alone.
static void test_edge_insets_widen_the_snap_on_that_edge_only() {
    TouchMapper m;
    m.set_bounds(1000, 800);
    m.set_edge_insets(0, 24, 0, 0);
    std::vector<TouchAction> out;
    m.finger_down({1, 500, 35}, 0, &out);
    m.tick(360 * MS, &out);
    CHECK(out.size() == 1 && out[0].kind == TouchAction::Motion && out[0].y == 0 &&
          out[0].x == 500); // 35 < 16 + 24: snapped onto the top edge
    out.clear();
    m.finger_up({1, 500, 35}, 2000 * MS, &out);
    out.clear();
    m.finger_down({2, 500, 45}, 3000 * MS, &out);
    m.tick(3360 * MS, &out);
    CHECK(out.size() == 1 && out[0].kind == TouchAction::Motion && out[0].y == 45); // 45 >= 40
    out.clear();
    m.finger_up({2, 500, 45}, 5000 * MS, &out); // a right click, not an edge hold
    m.tick(5000 * MS + kTouchPressDelayNs, &out);
    m.tick(5000 * MS + kTouchPressDelayNs + kTouchClickHoldNs, &out);
    out.clear();
    m.finger_down({3, 500, 780}, 6000 * MS, &out);
    m.tick(6360 * MS, &out);
    CHECK(out.size() == 1 && out[0].kind == TouchAction::Motion &&
          out[0].y == 780); // the bottom margin is still 16
}

// The system can take a finger away mid-drag (an edge gesture it claims). The
// button it held lets go where the cursor was placed, not at the origin: a
// release at 0,0 also moves the game's cursor there, and a game that scrolls
// when the cursor touches an edge then flies to its top-left corner.
static void test_a_cancelled_drag_releases_where_it_was() {
    TouchMapper m;
    m.set_bounds(1000, 800);
    std::vector<TouchAction> out;
    m.finger_down({1, 500, 400}, 0, &out);
    m.finger_motion({1, 540, 400}, 50 * MS, &out); // beyond the tap travel: a drag
    CHECK(out.size() == 3 && out[1].kind == TouchAction::Button && out[1].down);
    out.clear();
    m.finger_cancel(1, &out);
    CHECK(out.size() == 1 && out[0].kind == TouchAction::Button && !out[0].down &&
          out[0].x == 540 && out[0].y == 400);
    out.clear();
    m.finger_down({2, 300, 300}, 1000 * MS, &out);
    m.finger_motion({2, 300, 350}, 1050 * MS, &out);
    out.clear();
    m.cancel_all(&out);
    CHECK(out.size() == 1 && out[0].kind == TouchAction::Button && !out[0].down &&
          out[0].x == 300 && out[0].y == 350);
}

// A hardware pointer cannot enter the strip the system keeps along an edge
// either: it stops at the strip's inner side. A pointer resting there means
// the edge, and the game's edge scroll needs the edge itself.
static void test_a_pointer_against_a_system_strip_means_the_edge() {
    CHECK(pointer_behind_strip(32.1, 32) == 0);
    CHECK(pointer_behind_strip(47.9, 32) == 0); // a hand's tremor against the strip
    CHECK(pointer_behind_strip(48, 32) == 48);  // clear of the strip: as it is
    CHECK(pointer_behind_strip(3, 0) == 3);     // no strip: nothing to snap
}

// iPadOS pushes a pointer that touched the top strip back down in a glide of
// its own (34, 40, 45, 49, 53, 56, 58, 60, 62, 64 points on one device). The
// edge must outlast the glide: once the pointer has touched the strip it stays
// on the edge until it has come clearly away.
static void test_the_edge_outlasts_the_pointer_glide_off_the_strip() {
    PointerStripLatch latch;
    CHECK(latch.apply(200, 32) == 200);
    CHECK(latch.apply(34.7, 32) == 0); // touched the strip
    CHECK(latch.apply(49.1, 32) == 0); // the glide: still the edge
    CHECK(latch.apply(63.8, 32) == 0);
    CHECK(latch.apply(95.9, 32) == 0);
    CHECK(latch.apply(96, 32) == 96); // clearly away: released
    CHECK(latch.apply(60, 32) == 60); // and no longer the edge on the way back
    CHECK(latch.apply(40, 0) == 40);  // no strip: never latches
}

// Portrait: the game image is a rectangle inside the window, not the whole
// window. With an origin the edges are that rectangle's edges, so an edge hold
// scrolls at the image's top and bottom rather than at the window's.
static void test_origin_moves_the_edges_onto_the_game_rectangle() {
    TouchMapper m;
    m.set_bounds(390, 293); // the game image, in points
    m.set_origin(0, 47);    // pinned below a 47-point status bar
    std::vector<TouchAction> out;
    m.finger_down({1, 200, 50}, 0, &out); // 3 points into the image
    m.tick(360 * MS, &out);
    CHECK(out.size() == 1 && out[0].kind == TouchAction::Motion && out[0].x == 200 &&
          out[0].y == 47); // snapped onto the image's top edge
    out.clear();
    m.finger_up({1, 200, 50}, 2000 * MS, &out);
    CHECK(out.size() == 1 && out[0].kind == TouchAction::Motion && out[0].x == 200 &&
          out[0].y == 47 + kTouchEdgeRelease); // moved back inside the image
    m.tick(3000 * MS, &out);
    out.clear();
    m.finger_down({2, 200, 335}, 4000 * MS, &out); // 3 points above the image's bottom
    m.tick(4360 * MS, &out);
    CHECK(out.size() == 1 && out[0].kind == TouchAction::Motion &&
          out[0].y == 47 + 293 - 1); // the image's last row, not the window's
    out.clear();
    m.finger_up({2, 200, 335}, 6000 * MS, &out);
    CHECK(out.size() == 1 && out[0].y == 47 + 293 - 1 - kTouchEdgeRelease);
    m.tick(7000 * MS, &out);
    out.clear();
    m.finger_down({3, 200, 70}, 8000 * MS, &out); // 23 points in: not an edge
    m.tick(8360 * MS, &out);
    CHECK(out.size() == 1 && out[0].y == 70);
}

int main() {
    test_tap_places_one_presented_frame_before_pressing();
    test_tap_without_presents_presses_after_60_ms();
    test_a_new_finger_finishes_a_pending_press_first();
    test_focus_loss_discards_a_pending_press();
    test_smoke_tap_drives_the_mapper();
    test_the_edge_outlasts_the_pointer_glide_off_the_strip();
    test_release_lands_where_the_press_did_whatever_the_vector_did();
    test_a_pointer_against_a_system_strip_means_the_edge();
    test_a_cancelled_drag_releases_where_it_was();
    test_edge_insets_widen_the_snap_on_that_edge_only();
    test_click_release_waits_for_two_presented_frames();
    test_click_release_waits_for_the_hold_time_even_when_frames_flew();
    test_a_stalled_game_still_gets_its_release();
    test_tap_is_left_click();
    test_a_new_finger_releases_a_held_click_first();
    test_long_press_is_right_click();
    test_long_press_then_drag_is_a_wheel_button_drag();
    test_edge_hold_scrolls_then_moves_the_cursor_inside();
    test_tap_near_an_edge_clicks_at_the_finger();
    test_no_bounds_means_no_snapping();
    test_origin_moves_the_edges_onto_the_game_rectangle();
    test_drag_is_left_drag();
    test_two_finger_drag_pans_with_arrows();
    test_two_finger_tap_is_right_click_three_is_f10_four_toggles_keyboard();
    test_second_finger_cancels_pending_tap();
    if (g_failures) {
        fprintf(stderr, "%d failures\n", g_failures);
        return 1;
    }
    printf("input_touch_tests: ok\n");
    return 0;
}
