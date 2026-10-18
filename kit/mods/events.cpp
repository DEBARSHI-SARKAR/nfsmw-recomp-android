#include "display_settings.h"
// events.cpp - named originals re-exposed as registrations.
//
// The runtime installs these hooks BEFORE any user mod loads and owns them:
// they are attributed to MODS_OWNER_RUNTIME, so no user mod's rollback can
// remove them.
//
//   on_turn        before/after on the inner scheduler   004ec6f0
//   on_frame       before/after on the outer driver      004a5590
//   on_level_load  after load_objs (0040c690), fired only when its AL result
//                  is non-zero - that byte IS objs0_loaded, the game's own
//                  record that the object set loaded
//   on_level_end   before the next-level tail            0042c6d0
//
// Pause has no event: mods poll mods_game_paused().
#include "mods_internal.h"
#include "../runtime/mods_seam.h"

#include <deque>
#include <stdio.h>
#include <string.h>
#include <vector>

namespace {

struct Sub {
    uint32_t id, owner;
    int32_t which; // 0 frame, 1 turn, 2 level_load, 3 level_end
    int32_t phase;
    PopEventFn fn;
    void *user;
    const char *desc;
};

// A deque: fire() holds indices across a callback that may subscribe, and a
// vector would move the elements under it.
std::deque<Sub> &subs() {
    static std::deque<Sub> v;
    return v;
}
uint32_t g_next_id = 1;
bool g_installed = false;
uint32_t g_hook_ids[6] = {0};

void fire(int32_t which, int32_t phase) {
    // Iterated by index over a container that only ever grows at the back, and
    // bounded by the count taken now: a callback that subscribes changes the
    // NEXT firing, never this one. No temporary container is built, because a
    // guest longjmp out of a callback would jump straight over its destructor.
    size_t n = subs().size();
    for (size_t i = 0; i < n && i < subs().size(); ++i) {
        const Sub s = subs()[i]; // a value copy: unsubscribing is safe
        if (s.which != which)
            continue;
        if (which < 2 && s.phase != phase)
            continue;
        const char *prev = mods_push_active_callback(s.desc);
        uint32_t depth = mods_view_depth();
        mods_view_push();
        s.fn(mods_api_for(s.owner), s.user);
        mods_view_truncate(depth); // exact, even if the callback nested
        mods_pop_active_callback(prev);
    }
}

void turn_before(const PopModApi *, pop_cpu_v1 *, PopHookInvocation *, void *) {
    fire(1, POP_EVENT_BEFORE);
}
void turn_after(const PopModApi *, pop_cpu_v1 *, PopHookInvocation *, void *) {
    fire(1, POP_EVENT_AFTER);
}
void frame_before(const PopModApi *, pop_cpu_v1 *, PopHookInvocation *, void *) {
    fire(0, POP_EVENT_BEFORE);
}
void frame_after(const PopModApi *, pop_cpu_v1 *, PopHookInvocation *, void *) {
    fire(0, POP_EVENT_AFTER);
}

void level_load_after(const PopModApi *, pop_cpu_v1 *cpu, PopHookInvocation *, void *) {
    // load_objs returns objs0_loaded in AL. A failed load - a missing
    // objects/objs0_<n>.ver, which read_obj_hdr reports - leaves it zero and
    // jumps straight to the epilogue, so nothing fires.
    if ((cpu->eax & 0xffu) != 0u)
        fire(2, 0);
}
void level_end_before(const PopModApi *, pop_cpu_v1 *, PopHookInvocation *, void *) {
    mods_present_level_end();
    fire(3, 0);
}

PopModStatus add(uint32_t owner, int32_t which, int32_t phase, PopEventFn fn, void *user,
                 uint32_t *out_id, const char *what) {
    if (!fn || !out_id)
        return POP_E_INVAL;
    if (!g_installed)
        return POP_E_STATE;
    char buf[96];
    snprintf(buf, sizeof buf, "mod %u %s callback", owner, what);
    Sub s{g_next_id++, owner, which, phase, fn, user, mods_intern_desc(buf)};
    subs().push_back(s);
    *out_id = s.id;
    return POP_OK;
}

} // namespace

bool mods_events_init() {
    if (g_installed)
        return true;
    struct {
        const char *name;
        PopHookFn fn;
        int32_t mode;
    } wanted[] = {
        {"on_turn", turn_before, POP_HOOK_BEFORE},
        {"on_turn", turn_after, POP_HOOK_AFTER},
        {"on_frame", frame_before, POP_HOOK_BEFORE},
        {"on_frame", frame_after, POP_HOOK_AFTER},
        {"on_level_load", level_load_after, POP_HOOK_AFTER},
        {"on_level_end", level_end_before, POP_HOOK_BEFORE},
    };
    for (size_t i = 0; i < sizeof wanted / sizeof wanted[0]; ++i) {
        const auto &w = wanted[i];
        uint32_t addr = mods_symbol_event(w.name);
        uint32_t id = 0;
        // A game that names no routine for an event has no such event: its
        // subscribers are accepted and never called.
        if (!addr) {
            char key[64];
            snprintf(key, sizeof key, "mods.event.absent.%s", w.name);
            log_once(key, "mods: this game names no routine for %s; its subscribers never run",
                     w.name);
            continue;
        }
        if (!mods_symbol_hookable(addr) ||
            mods_hook_install_ex(MODS_OWNER_RUNTIME, addr, 0, w.fn, w.mode, POP_HOOK_NO_GAME_VIEW,
                                 nullptr, &id) != POP_OK) {
            LOGW("mods: event %s is not a hookable entry symbol (%08x)", w.name, addr);
            return false;
        }
        g_hook_ids[i] = id;
    }
    // Forwarders read no entity state. fire() takes a separate immutable view
    // for each actual subscriber, including nested callbacks.
    g_installed = true;
    return true;
}

void mods_events_reset() {
    // Called from mods_hooks_reset, which has already emptied the registry: the
    // ids are gone with it, so all this has to do is stop believing they are
    // installed. Anything else would leave a suite - or a shutdown - with an
    // events module certain of hooks that no longer exist.
    subs().clear();
    for (uint32_t &id : g_hook_ids)
        id = 0;
    g_installed = false;
}

void mods_events_remove_all(uint32_t owner) {
    if (owner == MODS_OWNER_RUNTIME)
        return; // the runtime's are not a mod's
    for (auto it = subs().begin(); it != subs().end();)
        it = (it->owner == owner) ? subs().erase(it) : it + 1;
    mods_input_remove_all(owner);
}

PopModStatus mods_on_frame(uint32_t o, int32_t p, PopEventFn f, void *u, uint32_t *id) {
    return add(o, 0, p, f, u, id, "on_frame");
}
PopModStatus mods_on_turn(uint32_t o, int32_t p, PopEventFn f, void *u, uint32_t *id) {
    return add(o, 1, p, f, u, id, "on_turn");
}
PopModStatus mods_on_level_load(uint32_t o, PopEventFn f, void *u, uint32_t *id) {
    return add(o, 2, 0, f, u, id, "on_level_load");
}
PopModStatus mods_on_level_end(uint32_t o, PopEventFn f, void *u, uint32_t *id) {
    return add(o, 3, 0, f, u, id, "on_level_end");
}
PopModStatus mods_on_key(uint32_t o, PopKeyFn f, void *u, uint32_t *id) {
    return mods_input_add_key(o, f, u, id);
}
PopModStatus mods_on_mouse(uint32_t o, PopMouseFn f, void *u, uint32_t *id) {
    return mods_input_add_mouse(o, f, u, id);
}

void mods_fill_events_api(PopModApi *api) {
    api->on_frame = [](const PopModApi *a, int32_t p, PopEventFn f, void *u, uint32_t *id) {
        return mods_on_frame(a->mod_index, p, f, u, id);
    };
    api->on_turn = [](const PopModApi *a, int32_t p, PopEventFn f, void *u, uint32_t *id) {
        return mods_on_turn(a->mod_index, p, f, u, id);
    };
    api->on_level_load = [](const PopModApi *a, PopEventFn f, void *u, uint32_t *id) {
        return mods_on_level_load(a->mod_index, f, u, id);
    };
    api->on_level_end = [](const PopModApi *a, PopEventFn f, void *u, uint32_t *id) {
        return mods_on_level_end(a->mod_index, f, u, id);
    };
    api->on_key = [](const PopModApi *a, PopKeyFn f, void *u, uint32_t *id) {
        return mods_on_key(a->mod_index, f, u, id);
    };
    api->on_mouse = [](const PopModApi *a, PopMouseFn f, void *u, uint32_t *id) {
        return mods_on_mouse(a->mod_index, f, u, id);
    };
    api->entity_count = [](const PopModApi *) { return mods_entity_count(); };
    api->entity_slot = [](const PopModApi *, uint32_t n, uint32_t *s) {
        return mods_entity_slot(n, s);
    };
    api->entity = [](const PopModApi *, uint32_t slot, PopEntityView *out) {
        return mods_entity(slot, out);
    };
    api->tribe = [](const PopModApi *, uint32_t i, PopTribeView *out) {
        return mods_tribe(i, out);
    };
}
