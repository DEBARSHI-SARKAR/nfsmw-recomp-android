#include "display_settings.h"
// input_filter.cpp - on_key/on_mouse fire in the host BEFORE the guest sees
// the same input, and may consume it.
//
// CONSUMPTION IS DECIDED AT THE PRESS. Once a press is consumed, its repeats
// and its release are consumed with it, so the guest never holds a key it will
// not see released. Conversely, a press the guest already saw cannot have its
// release taken away, whatever a callback returns: a half-delivered key is
// exactly the stuck key this rule exists to prevent.
//
// Suppressing one decision covers all four paths the guest has, because every
// one of them is fed downstream of this gate: the DirectInput immediate state,
// the buffered events the shim derives by diffing that state, the posted Win32
// message, and GetAsyncKeyState.
#include "mods_internal.h"
#include "../runtime/win32.h"
#include <stdio.h>
#include <string.h>
#include <vector>

namespace {

struct KeySub {
    uint32_t id, owner;
    PopKeyFn fn;
    void *user;
    const char *desc;
};
struct MouseSub {
    uint32_t id, owner;
    PopMouseFn fn;
    void *user;
    const char *desc;
};

std::vector<KeySub> &keys() {
    static std::vector<KeySub> v;
    return v;
}
std::vector<MouseSub> &mice() {
    static std::vector<MouseSub> v;
    return v;
}
uint32_t g_next_id = 1;

bool g_consumed_key[256]; // this layer swallowed the press
bool g_guest_key[256];    // the guest believes it is down
bool g_consumed_btn[8];
bool g_guest_btn[8];

// A callback runs on the guest's own terms or not at all.
//
// The host services its event loop from inside a scheduler idle slice, where
// another guest thread may hold the baton and be running guest code. A
// callback dispatched there captures a view of guest memory that is changing
// under it and touches the settings, heap and event registries beside that
// thread's hooks. The hosts hold input back until they hold the baton; this
// says so once if one ever stops, because the symptom otherwise is a rare
// wrong answer rather than anything that looks like a bug.
void check_baton(const char *what) {
    if (sched_holds_baton())
        return;
    static bool told = false;
    if (told)
        return;
    told = true;
    LOGW("mods: an %s callback ran without the scheduler baton; the host is "
         "dispatching input from an idle slice and a callback's view of the "
         "guest is not coherent",
         what);
}

bool ask_keys(int32_t dik, int32_t vk, int32_t down) {
    bool consumed = false;
    std::vector<KeySub> now = keys();
    if (!now.empty())
        check_baton("on_key");
    for (const KeySub &s : now) {
        const char *prev = mods_push_active_callback(s.desc);
        mods_view_push();
        if (s.fn(mods_api_for(s.owner), dik, vk, down, s.user))
            consumed = true;
        mods_view_pop();
        mods_pop_active_callback(prev);
    }
    return consumed;
}

bool ask_mice(int32_t x, int32_t y, int32_t dx, int32_t dy, int32_t buttons, int32_t wheel) {
    bool consumed = false;
    std::vector<MouseSub> now = mice();
    if (!now.empty())
        check_baton("on_mouse");
    for (const MouseSub &s : now) {
        const char *prev = mods_push_active_callback(s.desc);
        mods_view_push();
        if (s.fn(mods_api_for(s.owner), x, y, dx, dy, buttons, wheel, s.user))
            consumed = true;
        mods_view_pop();
        mods_pop_active_callback(prev);
    }
    return consumed;
}

} // namespace

PopModStatus mods_input_add_key(uint32_t owner, PopKeyFn fn, void *user, uint32_t *out_id) {
    if (!fn || !out_id)
        return POP_E_INVAL;
    char buf[96];
    snprintf(buf, sizeof buf, "mod %u on_key callback", owner);
    KeySub s{g_next_id++, owner, fn, user, mods_intern_desc(buf)};
    keys().push_back(s);
    *out_id = s.id;
    return POP_OK;
}

PopModStatus mods_input_add_mouse(uint32_t owner, PopMouseFn fn, void *user, uint32_t *out_id) {
    if (!fn || !out_id)
        return POP_E_INVAL;
    char buf[96];
    snprintf(buf, sizeof buf, "mod %u on_mouse callback", owner);
    MouseSub s{g_next_id++, owner, fn, user, mods_intern_desc(buf)};
    mice().push_back(s);
    *out_id = s.id;
    return POP_OK;
}

void mods_input_remove_all(uint32_t owner) {
    for (auto it = keys().begin(); it != keys().end();)
        it = (it->owner == owner) ? keys().erase(it) : it + 1;
    for (auto it = mice().begin(); it != mice().end();)
        it = (it->owner == owner) ? mice().erase(it) : it + 1;
}

void mods_input_release_all() {
    memset(g_consumed_key, 0, sizeof g_consumed_key);
    memset(g_guest_key, 0, sizeof g_guest_key);
    memset(g_consumed_btn, 0, sizeof g_consumed_btn);
    memset(g_guest_btn, 0, sizeof g_guest_btn);
}

bool mods_input_key(uint8_t dik, uint8_t vk, bool down) {
    if (down) {
        if (g_consumed_key[dik])
            return true; // a repeat of a consumed press
        if (g_guest_key[dik])
            return false; // a repeat the guest is seeing
        if (ask_keys(dik, vk, 1)) {
            g_consumed_key[dik] = true;
            return true;
        }
        g_guest_key[dik] = true;
        return false;
    }
    if (g_consumed_key[dik]) {
        g_consumed_key[dik] = false;
        ask_keys(dik, vk, 0); // told, but cannot change it
        return true;
    }
    g_guest_key[dik] = false;
    ask_keys(dik, vk, 0);
    return false; // the guest saw the press
}

bool mods_input_button(int button, bool down, int32_t x, int32_t y) {
    if (button < 0 || button >= 8)
        return false;
    if (down) {
        if (g_consumed_btn[button])
            return true;
        if (g_guest_btn[button])
            return false;
        if (ask_mice(x, y, 0, 0, 1 << button, 0)) {
            g_consumed_btn[button] = true;
            return true;
        }
        g_guest_btn[button] = true;
        return false;
    }
    if (g_consumed_btn[button]) {
        g_consumed_btn[button] = false;
        ask_mice(x, y, 0, 0, 0, 0);
        return true;
    }
    g_guest_btn[button] = false;
    ask_mice(x, y, 0, 0, 0, 0);
    return false;
}

bool mods_input_motion(int32_t x, int32_t y, int32_t dx, int32_t dy) {
    return ask_mice(x, y, dx, dy, 0, 0);
}

bool mods_input_wheel(int32_t dz) {
    return ask_mice(0, 0, 0, 0, 0, dz);
}
