// input_tests.cpp - the consumption state machine.
//
// What it decides: whether the guest sees an event at all. That the decision
// actually suppresses the DirectInput state, GetAsyncKeyState and the message
// queue is checked in the host tests, which link the host's input layer.
#include "mods_tests.h"
#include "../mods_internal.h"
#include "../../runtime/win32.h"
#include <string>
#include <vector>

namespace {
std::vector<std::string> g_seen;
PopModApi g_api;
void setup() {
    g_seen.clear();
    mods_input_remove_all(MODS_OWNER_FIRST_MOD);
    mods_input_release_all();
    memset(&g_api, 0, sizeof g_api);
    g_api.mod_index = MODS_OWNER_FIRST_MOD;
    g_api.mod_id = "test.input";
    mods_fill_events_api(&g_api);
}
} // namespace

MOD_TEST_SUITE(input_press_release_pairing) {
    setup();
    uint32_t id = 0;
    // Consume G (DIK 0x22) and nothing else. NOT F10: the host reserves DIK
    // 0x44 for the settings page, whose runtime on_key consumes it to toggle
    // the page and then consumes every other key while the page is open.
    // A suite that pressed it would be testing the page, not this filter.
    MOD_CHECK_EQ(mods_on_key(
                     MODS_OWNER_FIRST_MOD,
                     [](const PopModApi *, int32_t dik, int32_t, int32_t down, void *) -> int32_t {
                         g_seen.push_back(std::string(down ? "down " : "up ") +
                                          std::to_string(dik));
                         return dik == 0x22 ? 1 : 0;
                     },
                     nullptr, &id),
                 POP_OK);

    MOD_CHECK(mods_input_key(0x22, 0x47, true)); // consumed
    // Auto-repeat of a consumed press stays consumed, and the callback is not
    // asked again: the decision was made at the press.
    MOD_CHECK(mods_input_key(0x22, 0x47, true));
    MOD_CHECK_EQ(g_seen.size(), 1u);
    // And the matching release goes with it, so the guest never has a key it
    // believes is still down.
    MOD_CHECK(mods_input_key(0x22, 0x47, false));
    MOD_CHECK(!mods_input_key(0x22, 0x47, false)); // a second release is real

    // A key nobody claims passes through, and its release passes through too.
    MOD_CHECK(!mods_input_key(0x01, 0x1b, true));
    MOD_CHECK(!mods_input_key(0x01, 0x1b, false));

    // A callback that only tries to consume a RELEASE of a press the guest
    // already saw is refused: consumption is decided at the press.
    mods_input_remove_all(MODS_OWNER_FIRST_MOD);
    MOD_CHECK_EQ(mods_on_key(
                     MODS_OWNER_FIRST_MOD,
                     [](const PopModApi *, int32_t, int32_t, int32_t down, void *) -> int32_t {
                         return down ? 0 : 1;
                     },
                     nullptr, &id),
                 POP_OK);
    MOD_CHECK(!mods_input_key(0x1e, 0x41, true));  // the guest saw it
    MOD_CHECK(!mods_input_key(0x1e, 0x41, false)); // so it must see the release
}

MOD_TEST_SUITE(input_focus_loss_clears_the_state) {
    setup();
    static int g_asked = 0;
    g_asked = 0;
    uint32_t id = 0;
    MOD_CHECK_EQ(mods_on_key(
                     MODS_OWNER_FIRST_MOD,
                     [](const PopModApi *, int32_t, int32_t, int32_t down, void *) -> int32_t {
                         if (down)
                             ++g_asked;
                         return 1;
                     },
                     nullptr, &id),
                 POP_OK);
    MOD_CHECK(mods_input_key(0x22, 0x47, true));
    MOD_CHECK_EQ(g_asked, 1);
    // The window lost the focus: nothing is held any more, on either side.
    mods_input_release_all();
    // The release that arrives afterwards belongs to nothing, so it is not
    // swallowed as a pair - the guest never saw the press either.
    MOD_CHECK(!mods_input_key(0x22, 0x47, false));
    // And the next press is decided afresh rather than treated as a repeat.
    MOD_CHECK(mods_input_key(0x22, 0x47, true));
    MOD_CHECK_EQ(g_asked, 2);
}

// A callback sees the guest as the guest sees itself: it runs on a thread that
// holds the scheduler baton, so nothing else is inside guest code while it
// looks. The hosts guarantee that by holding input back until they hold the
// baton; this asserts the property from inside a callback, which is the only
// place it can be observed.
MOD_TEST_SUITE(input_callbacks_run_holding_the_baton) {
    setup();
    // This thread drives the filter directly, as a host's tick does, so it is
    // the run thread and it holds the baton.
    sched_set_guest_thread(true);
    static int g_ran = 0;
    static bool g_sole_holder = false;
    g_ran = 0;
    g_sole_holder = false;
    uint32_t id = 0;
    MOD_CHECK_EQ(mods_on_key(
                     MODS_OWNER_FIRST_MOD,
                     [](const PopModApi *, int32_t, int32_t, int32_t, void *) -> int32_t {
                         ++g_ran;
                         g_sole_holder = sched_holds_baton();
                         return 0;
                     },
                     nullptr, &id),
                 POP_OK);
    MOD_CHECK(!mods_input_key(0x22, 0x47, true));
    MOD_CHECK_EQ(g_ran, 1);
    MOD_CHECK(g_sole_holder);
    mods_input_key(0x22, 0x47, false);
    mods_input_remove_all(MODS_OWNER_FIRST_MOD);
}

MOD_TEST_SUITE(input_mouse_consumption) {
    setup();
    uint32_t id = 0;
    MOD_CHECK_EQ(mods_on_mouse(
                     MODS_OWNER_FIRST_MOD,
                     [](const PopModApi *, int32_t x, int32_t, int32_t, int32_t, int32_t buttons,
                        int32_t, void *) -> int32_t { return (buttons && x < 100) ? 1 : 0; },
                     nullptr, &id),
                 POP_OK);
    MOD_CHECK(mods_input_button(0, true, 40, 40));
    MOD_CHECK(mods_input_button(0, false, 40, 40)); // the paired release
    MOD_CHECK(!mods_input_button(1, true, 400, 40));
    MOD_CHECK(!mods_input_button(1, false, 400, 40));
    MOD_CHECK(!mods_input_motion(400, 40, 1, 1));
    MOD_CHECK(!mods_input_wheel(1));
}
