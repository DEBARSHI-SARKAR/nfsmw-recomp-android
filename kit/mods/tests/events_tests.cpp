// events_tests.cpp - the six events and their sequences.
#include "mods_tests.h"
#include "../mods_internal.h"
#include "../../runtime/loader.h"
#include "../../runtime/memory.h"
#include "../../runtime/win32.h"
#include "../../runtime/mods_seam.h"

#include <string>
#include <vector>

static unsigned presentation_level_ends = 0;
extern "C" void mods_present_level_end(void) {
    ++presentation_level_ends;
}

namespace {
std::vector<std::string> g_seq;
PopModApi g_api;
} // namespace

// The loader's per-mod contexts are Task 10's. This suite installs its own
// provider through the one seam; it never defines mods_api_for, because there
// is exactly one definition of that in the tree. It is declared ahead of
// setup() because setup() installs it.
static const PopModApi *test_provider(uint32_t owner) {
    return owner == MODS_OWNER_FIRST_MOD ? &g_api : nullptr;
}

namespace {

void setup() {
    // This thread drives translated code directly, so it plays the part
    // run_entry plays in a real process: it is the run thread, and saying so
    // is what makes a registry mutation from here apply inline.
    sched_set_guest_thread(true);
    g_seq.clear();
    mem_init();
    loader_load(nullptr);
    MOD_CHECK(mods_symbols_load(nullptr));
    mods_hooks_reset();
    memset(&g_api, 0, sizeof g_api);
    g_api.version = POP_MOD_API_VERSION;
    g_api.size = (uint32_t)sizeof(PopModApi);
    g_api.mod_index = MODS_OWNER_FIRST_MOD;
    g_api.mod_id = "test.events";
    mods_set_context_provider(test_provider);
    mods_fill_hooks_api(&g_api);
    mods_fill_events_api(&g_api);
    mods_hooks_set_load_order(MODS_OWNER_FIRST_MOD, 2);
    mods_hooks_set_cpu_size(MODS_OWNER_FIRST_MOD, POP_CPU_V1_BASELINE_SIZE);
    MOD_CHECK(mods_events_init());
}

void enter(uint32_t addr) {
    X86 *c = loader_context();
    loader_init_context(c);
    c->r[R_ESP] -= 4;
    wr32(c->r[R_ESP], 0x00401000u);
    int32_t i = recomp_index_of(addr);
    recomp_hook_ptrs[i](c, (uint32_t)i);
}

void enter_level_end() {
    enter(0x0042c6d0u);
}

} // namespace

MOD_TEST_SUITE(events_are_installed_on_hookable_entries) {
    setup();
    MOD_CHECK_EQ(mods_symbol_event("on_turn"), 0x004ec6f0u);
    MOD_CHECK_EQ(mods_symbol_event("on_frame"), 0x004a5590u);
    // The level-load event is on load_objs, whose AL result is the game's own
    // record of success - not on the void thunk in front of it.
    MOD_CHECK_EQ(mods_symbol_event("on_level_load"), 0x0040c690u);
    MOD_CHECK_EQ(mods_symbol_event("on_level_end"), 0x0042c6d0u);
    for (const char *n : {"on_turn", "on_frame", "on_level_load", "on_level_end"})
        MOD_CHECK(mods_symbol_hookable(mods_symbol_event(n)));
    // The runtime owns these hooks, so a user mod's rollback cannot remove them.
    MOD_CHECK_EQ(mods_hooks_installed_count(), 6u);
    mods_hooks_remove_all(MODS_OWNER_FIRST_MOD);
    MOD_CHECK_EQ(mods_hooks_installed_count(), 6u);
    const auto captures = mods_view_test_push_count();
    enter(0x004a5590u); // includes the nested turn's forwarders
    MOD_CHECK_EQ(mods_view_test_push_count(), captures);
}

MOD_TEST_SUITE(events_fire_before_and_after) {
    setup();
    uint32_t id = 0;
    MOD_CHECK_EQ(mods_on_turn(
                     MODS_OWNER_FIRST_MOD, POP_EVENT_BEFORE,
                     [](const PopModApi *api, void *) {
                         g_seq.push_back("turn-before");
                         MOD_CHECK_EQ(api->mod_index, MODS_OWNER_FIRST_MOD);
                         // The game view is live inside an event callback.
                         MOD_CHECK(api->entity_count(api) == mods_entity_count());
                     },
                     nullptr, &id),
                 POP_OK);
    MOD_CHECK_EQ(mods_on_turn(
                     MODS_OWNER_FIRST_MOD, POP_EVENT_AFTER,
                     [](const PopModApi *, void *) { g_seq.push_back("turn-after"); }, nullptr,
                     &id),
                 POP_OK);
    MOD_CHECK_EQ(mods_on_frame(
                     MODS_OWNER_FIRST_MOD, POP_EVENT_BEFORE,
                     [](const PopModApi *, void *) { g_seq.push_back("frame-before"); }, nullptr,
                     &id),
                 POP_OK);

    auto captures = mods_view_test_push_count();
    enter(0x004ec6f0u);
    MOD_CHECK_EQ(mods_view_test_push_count() - captures, 2u);
    MOD_CHECK_EQ(g_seq.size(), 2u);
    MOD_CHECK_STR(g_seq[0].c_str(), "turn-before");
    MOD_CHECK_STR(g_seq[1].c_str(), "turn-after");

    // The outer driver REACHES the inner scheduler: entering 004a5590 fires
    // on_frame and then, through the original it runs, on_turn as well. The
    // events are not independent taps on two unrelated functions, and a mod
    // that assumed one frame meant one turn callback would be wrong.
    captures = mods_view_test_push_count();
    enter(0x004a5590u);
    MOD_CHECK_EQ(mods_view_test_push_count() - captures, 3u);
    MOD_CHECK_EQ(g_seq.size(), 5u);
    MOD_CHECK_STR(g_seq[2].c_str(), "frame-before");
    MOD_CHECK_STR(g_seq[3].c_str(), "turn-before");
    MOD_CHECK_STR(g_seq[4].c_str(), "turn-after");

    // Removing this mod's subscriptions leaves the runtime's hooks in place.
    mods_events_remove_all(MODS_OWNER_FIRST_MOD);
    g_seq.clear();
    captures = mods_view_test_push_count();
    enter(0x004ec6f0u);
    MOD_CHECK_EQ(g_seq.size(), 0u);
    MOD_CHECK_EQ(mods_view_test_push_count(), captures);
}

MOD_TEST_SUITE(events_level_load_needs_a_real_success) {
    setup();
    uint32_t id = 0;
    MOD_CHECK_EQ(mods_on_level_load(
                     MODS_OWNER_FIRST_MOD,
                     [](const PopModApi *, void *) { g_seq.push_back("load"); }, nullptr, &id),
                 POP_OK);
    MOD_CHECK_EQ(mods_on_level_end(
                     MODS_OWNER_FIRST_MOD,
                     [](const PopModApi *, void *) { g_seq.push_back("end"); }, nullptr, &id),
                 POP_OK);

    // A GENUINE failure: object set 99 has no objects/objs0_99.ver, so
    // read_obj_hdr fails, load_objs jumps to its epilogue and returns
    // objs0_loaded, which is zero. No event may fire.
    X86 *c = loader_context();
    loader_init_context(c);
    wr8(0x0089ce39u, 0); // nothing loaded
    wr8(0x0089ce3au, 1); // and a different set is "current"
    uint32_t eax = guest_call(c, 0x0040c690u, 99u);
    MOD_CHECK_EQ(eax & 0xffu, 0u);
    MOD_CHECK_EQ(rd8(0x0089ce39u), 0);
    MOD_CHECK_EQ(g_seq.size(), 0u);

    // A success, driven through the same hook: the after hook reads AL.
    wr8(0x0089ce39u, 1);
    loader_init_context(c);
    c->r[R_ESP] -= 4;
    wr32(c->r[R_ESP], 0x00401000u);
    c->r[R_EAX] = 1; // what load_objs returns on success
    int32_t i = recomp_index_of(0x0040c690u);
    // Install a replace hook that returns 1 without running the original, so
    // the success path is exercised without loading half the game here.
    uint32_t rid = 0;
    MOD_CHECK_EQ(mods_hook_install(
                     MODS_OWNER_FIRST_MOD, 0x0040c690u,
                     [](const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *, void *) {
                         api->hook_return(api, cpu, 1u, 0u);
                     },
                     POP_HOOK_REPLACE, nullptr, &rid),
                 POP_OK);
    recomp_hook_ptrs[i](c, (uint32_t)i);
    MOD_CHECK_EQ(g_seq.size(), 1u);
    MOD_CHECK_STR(g_seq[0].c_str(), "load");

    // Re-entry is an ordinary sequence: end, then load.
    auto before_end = presentation_level_ends;
    enter_level_end();
    MOD_CHECK_EQ(presentation_level_ends, before_end + 1);
    recomp_hook_ptrs[i](c, (uint32_t)i);
    MOD_CHECK_EQ(g_seq.size(), 3u);
    MOD_CHECK_STR(g_seq[1].c_str(), "end");
    MOD_CHECK_STR(g_seq[2].c_str(), "load");
}
