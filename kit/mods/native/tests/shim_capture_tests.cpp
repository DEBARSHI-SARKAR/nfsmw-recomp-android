// shim_capture_tests.cpp - what the capture window records, and what it
// refuses.
//
// The refusals are the point. A capture that quietly recorded a call it cannot
// replay would produce a native replacement that is wrong in exactly the way
// nobody checks, so each case here asserts both that the window closed
// rejected and that the offending shim never ran.
#include "../shim_capture.h"
#include "../page_track.h"
#include "../../../runtime/mods_seam.h"
#include "../../tests/mods_tests.h"
#include "../../../runtime/guest.h"
#include "../../../runtime/imports.h"
#include "../../../runtime/loader.h"
#include "../../../runtime/memory.h"
#include "../../mods_internal.h"
#include "../../../runtime/win32.h"

#include <stdlib.h>
#include <string.h>
#include <thread>

extern "C" {
int pop_capture_begin(uint32_t, uint32_t);
int pop_capture_write(const char *, uint32_t, const pop_cpu_v1 *, const pop_cpu_v1 *, uint32_t,
                      const char **);
}

namespace {

int g_side_effect_ran = 0;
void side_effecting_shim(X86 *c) {
    ++g_side_effect_ran;
    c->r[R_EAX] = 0x1234;
}

uint32_t g_seen_args[4];
uint32_t g_seen_argc = 0;
int g_three_arg_ran = 0;
void three_arg_shim(X86 *c) {
    ++g_three_arg_ran;
    c->r[R_EAX] = 0xabcd;
}

bool record_args(const char *, const uint32_t *a, uint32_t n, uint32_t *result) {
    g_seen_argc = n;
    for (uint32_t i = 0; i < n && i < 4; ++i)
        g_seen_args[i] = a[i];
    *result = 0;
    return true;
}
bool refuse_args(const char *, const uint32_t *a, uint32_t n, uint32_t *result) {
    g_seen_argc = n;
    for (uint32_t i = 0; i < n && i < 4; ++i)
        g_seen_args[i] = a[i];
    *result = 0x5eed;
    return false;
}

int g_chained_calls = 0;
const char *g_chained_desc = nullptr;
void chained_observer(const char *desc, uint32_t) {
    ++g_chained_calls;
    g_chained_desc = desc;
}

// Puts a call frame on the guest stack and dispatches, the way recomp_call
// does. Returns EAX.
uint32_t dispatch(uint32_t tramp, const uint32_t *args, uint32_t argc) {
    static uint32_t sp = 0x03000000;
    X86 c{};
    uint32_t esp = sp - 4 * (argc + 1);
    wr32(esp, 0x00401234); // return address
    for (uint32_t i = 0; i < argc; ++i)
        wr32(esp + 4 + 4 * i, args[i]);
    c.r[R_ESP] = esp;
    imports_dispatch(&c, tramp);
    return c.r[R_EAX];
}

void prepare() {
    setenv("RECOMP_TESTING", "1", 1);
    mem_init();
    imports_init();
}

constexpr uint32_t CAPTURE_TARGET = 0x00401000u;
constexpr uint32_t UNWIND_TARGET = 0x0040c690u;
PopModApi capture_test_api{};

bool prepare_capture_hooks() {
    prepare();
    sched_set_guest_thread(true);
    mods_hooks_reset();
    const bool loaded = loader_load(nullptr);
    MOD_CHECK(loaded);
    if (!loaded)
        return false;
    // Eligibility comes from symbols.json, not just recomp_func_addrs. These
    // suites run before the symbol/hook suites and must load it themselves.
    const bool symbols = mods_symbols_load(nullptr);
    MOD_CHECK(symbols);
    if (!symbols)
        return false;
    capture_test_api = {};
    capture_test_api.version = POP_MOD_API_VERSION;
    capture_test_api.size = sizeof capture_test_api;
    capture_test_api.mod_index = 0;
    capture_test_api.mod_id = "test.capture";
    mods_fill_hooks_api(&capture_test_api);
    mods_set_context_provider([](uint32_t owner) -> const PopModApi * {
        return owner == 0 ? &capture_test_api : nullptr;
    });
    mods_hooks_set_load_order(0, 0);
    mods_hooks_set_cpu_size(0, POP_CPU_V1_BASELINE_SIZE);
    return true;
}

bool install_capture_test_hook(uint32_t target, PopHookFn callback, void *user = nullptr) {
    const int32_t index = recomp_index_of(target);
    MOD_CHECK(index >= 0);
    MOD_CHECK(mods_symbol_hookable(target));
    if (index < 0)
        return false;
    MOD_CHECK_EQ(recomp_func_addrs[index], target);
    uint32_t id = 0;
    const PopModStatus status = mods_hook_install(0, target, callback, POP_HOOK_REPLACE, user, &id);
    MOD_CHECK_EQ(status, POP_OK);
    MOD_CHECK(id != 0);
    return status == POP_OK;
}

void invoke_capture_test_hook(uint32_t target, uint32_t esp) {
    X86 c{};
    c.r[R_ESP] = esp;
    wr32(esp, 0x00401000u);
    const int32_t index = recomp_index_of(target);
    MOD_CHECK(index >= 0);
    if (index < 0)
        return;
    MOD_CHECK(recomp_hooked[index] != 0);
    MOD_CHECK(recomp_hook_ptrs[index] != nullptr);
    if (!recomp_hooked[index] || !recomp_hook_ptrs[index])
        return;
    recomp_hook_ptrs[index](&c, (uint32_t)index);
}

void unwind_capture_test_hook(const PopModApi *, pop_cpu_v1 *cpu, PopHookInvocation *, void *) {
    // Thread-exit drops all frames on the worker; on the owner this drops
    // only the nested frame and keeps the capture's opening frame.
    mods_hooks_unwind_to_esp(mods_hook_depth() == 1 ? 0xffffffffu : cpu->esp + 4);
}

} // namespace

MOD_TEST_SUITE(shimcap_records_pure_seam_calls) {
    prepare();
    uint32_t tid = imports_resolve("KERNEL32.dll", "GetCurrentThreadId");
    MOD_CHECK(tid != 0);
    if (!tid)
        return;

    MOD_CHECK(pop_shimcap::begin(8));
    MOD_CHECK(pop_shimcap::active());
    uint32_t first = dispatch(tid, nullptr, 0);
    uint32_t second = dispatch(tid, nullptr, 0);

    const pop_shimcap::Call *calls = nullptr;
    size_t count = 0;
    const char *why = "unset";
    MOD_CHECK(pop_shimcap::end(&calls, &count, &why));
    MOD_CHECK(!pop_shimcap::active());
    MOD_CHECK_EQ(count, 2u);
    if (count == 2) {
        MOD_CHECK(calls[0].function == "KERNEL32.dll!GetCurrentThreadId");
        MOD_CHECK(calls[0].arguments.empty());
        // The recorded result is the one the guest actually received. Asserting
        // a literal thread id here would test the host, not the recorder.
        MOD_CHECK_EQ(calls[0].result, first);
        MOD_CHECK_EQ(calls[1].result, second);
    }
}

MOD_TEST_SUITE(shimcap_rejects_unclassified_seams_without_running_them) {
    prepare();
    uint32_t t = imports_alloc_trampoline("test.dll", "writes_a_file", side_effecting_shim, 2);
    MOD_CHECK(t != 0);
    g_side_effect_ran = 0;

    MOD_CHECK(pop_shimcap::begin(8));
    uint32_t args[2] = {7, 9};
    uint32_t eax = dispatch(t, args, 2);

    // Not merely unrecorded: not run. The whole reason to reject inside the
    // window rather than after it is that the file must not be written.
    MOD_CHECK_EQ(g_side_effect_ran, 0);
    MOD_CHECK_EQ(eax, 0u);

    const char *why = nullptr;
    MOD_CHECK(!pop_shimcap::end(nullptr, nullptr, &why));
    MOD_CHECK(why != nullptr && strstr(why, "side-effecting") != nullptr);

    // And outside a window it runs normally, so the refusal is the window's
    // doing and not a broken trampoline.
    eax = dispatch(t, args, 2);
    MOD_CHECK_EQ(g_side_effect_ran, 1);
    MOD_CHECK_EQ(eax, 0x1234u);
}

MOD_TEST_SUITE(shimcap_catalogue_defaults_to_side_effecting) {
    MOD_CHECK(pop_shimcap::is_pure("KERNEL32.dll!GetTickCount"));
    MOD_CHECK(!pop_shimcap::is_pure("KERNEL32.dll!WriteFile"));
    MOD_CHECK(!pop_shimcap::is_pure("DSOUND.dll!IDirectSoundBuffer::Play"));
    // A name this build has never heard of is side-effecting, which is the
    // property that makes the catalogue safe to leave incomplete.
    MOD_CHECK(!pop_shimcap::is_pure("SOMEDLL.dll!InventedTomorrow"));
    MOD_CHECK(!pop_shimcap::is_pure(""));
    MOD_CHECK(!pop_shimcap::is_pure(nullptr));
    // Prefixes and suffixes of a pure name are not pure names.
    MOD_CHECK(!pop_shimcap::is_pure("KERNEL32.dll!GetTickCount64"));
    MOD_CHECK(!pop_shimcap::is_pure("KERNEL32.dll!GetTick"));
}

MOD_TEST_SUITE(shimcap_enforces_its_call_bound) {
    prepare();
    uint32_t tid = imports_resolve("KERNEL32.dll", "GetCurrentThreadId");
    if (!tid) {
        MOD_CHECK(false);
        return;
    }

    MOD_CHECK(pop_shimcap::begin(2));
    dispatch(tid, nullptr, 0);
    dispatch(tid, nullptr, 0);
    dispatch(tid, nullptr, 0); // one past the bound
    const char *why = nullptr;
    MOD_CHECK(!pop_shimcap::end(nullptr, nullptr, &why));
    MOD_CHECK(why != nullptr && strstr(why, "bound") != nullptr);

    // The bound is the replay module's, so the two cannot drift apart.
    MOD_CHECK(!pop_shimcap::begin(pop_replay::max_calls + 1));
    MOD_CHECK(!pop_shimcap::begin(0));
    MOD_CHECK(!pop_shimcap::active());
}

MOD_TEST_SUITE(shimcap_window_is_exclusive_and_needs_testing_mode) {
    prepare();
    MOD_CHECK(pop_shimcap::begin(4));
    MOD_CHECK(!pop_shimcap::begin(4)); // no nesting
    const char *why = nullptr;
    MOD_CHECK(pop_shimcap::end(nullptr, nullptr, &why));
    MOD_CHECK(!pop_shimcap::end(nullptr, nullptr, &why));
    MOD_CHECK(why != nullptr && strstr(why, "no capture window") != nullptr);

    unsetenv("RECOMP_TESTING");
    MOD_CHECK(!pop_shimcap::begin(4));
    MOD_CHECK(!pop_shimcap::active());
    setenv("RECOMP_TESTING", "1", 1);
}

MOD_TEST_SUITE(shimcap_restores_the_observer_it_displaced) {
    prepare();
    uint32_t tid = imports_resolve("KERNEL32.dll", "GetCurrentThreadId");
    if (!tid) {
        MOD_CHECK(false);
        return;
    }
    ImportReturnObserver saved = imports_set_return_observer_get();
    imports_set_return_observer(chained_observer);
    g_chained_calls = 0;

    MOD_CHECK(pop_shimcap::begin(4));
    dispatch(tid, nullptr, 0);
    // The displaced observer still sees the call: a capture must not make the
    // rest of the runtime stop reporting.
    MOD_CHECK_EQ(g_chained_calls, 1);
    MOD_CHECK(g_chained_desc != nullptr);
    MOD_CHECK(pop_shimcap::end(nullptr, nullptr, nullptr));

    MOD_CHECK_EQ((void *)imports_set_return_observer_get(), (void *)chained_observer);
    dispatch(tid, nullptr, 0);
    MOD_CHECK_EQ(g_chained_calls, 2);
    imports_set_return_observer(saved);
}

MOD_TEST_SUITE(imports_call_observer_sees_entry_arguments) {
    prepare();
    uint32_t t = imports_alloc_trampoline("test.dll", "three_args", three_arg_shim, 3);
    MOD_CHECK(t != 0);
    uint32_t args[3] = {0x11111111, 0x22222222, 0x33333333};

    g_seen_argc = 0;
    g_three_arg_ran = 0;
    imports_set_call_observer(record_args);
    uint32_t eax = dispatch(t, args, 3);
    MOD_CHECK_EQ(g_seen_argc, 3u);
    MOD_CHECK_EQ(g_seen_args[0], args[0]);
    MOD_CHECK_EQ(g_seen_args[1], args[1]);
    MOD_CHECK_EQ(g_seen_args[2], args[2]);
    MOD_CHECK_EQ(g_three_arg_ran, 1);
    MOD_CHECK_EQ(eax, 0xabcdu);

    // Refusing skips the shim and keeps the observer's result.
    imports_set_call_observer(refuse_args);
    eax = dispatch(t, args, 3);
    MOD_CHECK_EQ(g_three_arg_ran, 1);
    MOD_CHECK_EQ(eax, 0x5eedu);

    imports_set_call_observer(nullptr);
    eax = dispatch(t, args, 3);
    MOD_CHECK_EQ(g_three_arg_ran, 2);
    MOD_CHECK_EQ(eax, 0xabcdu);
}

// A guest longjmp out of the candidate must leave nothing armed.
//
// The capture mod opens both windows, calls the original, and closes them. A
// guest longjmp jumps straight over the close, so without the unwind seam the
// arena stays PROT_NONE with this module's fault handler installed over
// whatever was there before, and the next guest memory access on any thread
// faults into abandoned bookkeeping. This asserts the state the process is
// left in, not that some function was called.
MOD_TEST_SUITE(capture_windows_close_when_a_guest_jump_escapes) {
    if (!prepare_capture_hooks())
        return;
    if (!install_capture_test_hook(UNWIND_TARGET, unwind_capture_test_hook))
        return;
    bool entered = false;
    if (!install_capture_test_hook(
            CAPTURE_TARGET,
            [](const PopModApi *, pop_cpu_v1 *, PopHookInvocation *, void *user) {
                *static_cast<bool *>(user) = true;
                MOD_CHECK_EQ(mods_hook_depth(), 1);
                MOD_CHECK(pop_capture_begin(64, 8));
                // An unrelated exit must leave both windows armed until the owner's
                // jump escapes. The process-wide page window detects a missing owner
                // check; the thread-local shim window must also remain active.
                std::thread other([] { invoke_capture_test_hook(UNWIND_TARGET, 0x06030000u); });
                other.join();
                MOD_CHECK(pop_pagetrack::active());
                MOD_CHECK(pop_shimcap::active());
                mods_hooks_unwind_to_esp(0xffffffffu);
            },
            &entered))
        return;
    invoke_capture_test_hook(CAPTURE_TARGET, 0x06010000u);
    MOD_CHECK(entered);

    MOD_CHECK(!pop_pagetrack::active());
    MOD_CHECK(!pop_shimcap::active());
    const char *cancelled = nullptr;
    MOD_CHECK_EQ(pop_capture_write(nullptr, 0, nullptr, nullptr, 0, &cancelled), 0);
    MOD_CHECK_STR(cancelled, "capture cancelled by unwind");

    // The arena is reachable again. Without the cancellation this write
    // faults into a handler that is no longer tracking anything.
    const uint32_t probe = 0x06000000u;
    wr32(probe, 0xfeedface);
    MOD_CHECK_EQ(rd32(probe), 0xfeedfaceu);

    // And the dispatcher is no longer being intercepted: a side-effecting shim
    // runs again, where inside a window it would have been refused.
    uint32_t t = imports_alloc_trampoline("test.dll", "after_unwind", side_effecting_shim, 0);
    g_side_effect_ran = 0;
    MOD_CHECK_EQ(dispatch(t, nullptr, 0), 0x1234u);
    MOD_CHECK_EQ(g_side_effect_ran, 1);

    // Cancelling again with nothing open is harmless, which matters because an
    // unwind can drop frames more than once on the way out.
    mods_capture_unwound();
    MOD_CHECK(!pop_pagetrack::active());

    // And a fresh capture still arms afterwards.
    MOD_CHECK(pop_capture_begin(64, 8));
    wr32(probe, 0xabcdefu);
    const char *why = nullptr;
    MOD_CHECK_EQ(pop_capture_write(nullptr, 0, nullptr, nullptr, 0, &why), 0);
    MOD_CHECK_STR(why, "capture output path or CPU snapshot missing");
    mods_hooks_reset();
    mods_set_context_provider(nullptr);
}

MOD_TEST_SUITE(capture_survives_other_thread_exit_and_nested_unwind) {
    if (!prepare_capture_hooks())
        return;
    if (!install_capture_test_hook(UNWIND_TARGET, unwind_capture_test_hook))
        return;
    bool entered = false;
    if (!install_capture_test_hook(
            CAPTURE_TARGET,
            [](const PopModApi *, pop_cpu_v1 *cpu, PopHookInvocation *, void *user) {
                *static_cast<bool *>(user) = true;
                MOD_CHECK(pop_capture_begin(128, 8));
                std::thread other([] { invoke_capture_test_hook(UNWIND_TARGET, 0x06030000u); });
                other.join(); // owner is parked while the other thread unwinds
                MOD_CHECK(pop_pagetrack::active());
                MOD_CHECK(pop_shimcap::active());
                invoke_capture_test_hook(UNWIND_TARGET, cpu->esp - 4);
                MOD_CHECK_EQ(mods_hook_depth(), 1);
                MOD_CHECK(pop_pagetrack::active());
                MOD_CHECK(pop_shimcap::active());
                mods_hooks_unwind_to_esp(0xffffffffu);
                MOD_CHECK(!pop_pagetrack::active());
                MOD_CHECK(!pop_shimcap::active());
                const char *why = nullptr;
                MOD_CHECK_EQ(pop_capture_write(nullptr, 0, nullptr, nullptr, 0, &why), 0);
                MOD_CHECK_STR(why, "capture cancelled by unwind");
            },
            &entered))
        return;
    invoke_capture_test_hook(CAPTURE_TARGET, 0x06020000u);
    MOD_CHECK(entered);
    mods_hooks_reset();
    mods_set_context_provider(nullptr);
}
