// Software exception dispatch and live host checkpoints over synthetic guest frames.
#include "../imports.h"
#include "../loader.h"
#include "../memory.h"
#include "../profile.h"
#include "../seh.h"
#include "../win32.h"
#include "../../platform/os.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <initializer_list>

static int checks, failures;
#define CHECK(x)                                                                                   \
    do {                                                                                           \
        ++checks;                                                                                  \
        if (!(x)) {                                                                                \
            ++failures;                                                                            \
            fprintf(stderr, "FAIL line %d: %s\n", __LINE__, #x);                                   \
        }                                                                                          \
    } while (0)

static uint32_t seen[16], flags_seen[16], visits, unhandled;
static uint32_t first_record, first_context, expected_esp, expected_flags;
static uint32_t handler_search, handler_accept, handler_continue;
static uint32_t landing_runs, after_raise, final_esp, unwound_mod_esp;
static X86 expected_cpu;
static constexpr uint32_t LANDING = 0x0d02a080;
static constexpr uint32_t CLEANUP = LANDING + 16, SURGERY = LANDING + 32;
static constexpr uint32_t CALLER_RETURN = LANDING + 48;
static uint32_t cleanup_handler, outer_handler, cleanup_runs, outer_runs, caller_runs;
static uint32_t callback_sp, cleanup_reg, outer_reg;
static bool raise_in_cleanup, unknown_sentinel;
static void cleanup_block(X86 *c);
static void surgery(X86 *c);

static uint32_t invoke(X86 *c, const char *name, std::initializer_list<uint32_t> args) {
    return guest_call(c, imports_resolve("KERNEL32.dll", name), args.begin(), (int)args.size());
}

static void registration(X86 *c, uint32_t at, uint32_t next, uint32_t handler) {
    wr32(at, next);
    wr32(at + 4, handler);
    wr32(at + 8, c->r[R_EBP]);
    wr32(c->fs_base, at);
}

static void search(X86 *c) {
    uint32_t record = arg(c, 0), context = arg(c, 2);
    CHECK(arg(c, 3) == 0);
    CHECK(visits < 16);
    if (visits < 16) {
        seen[visits] = arg(c, 1);
        flags_seen[visits++] = rd32(record + 4);
    }
    if (!first_record) {
        first_record = record;
        first_context = context;
    }
    CHECK(record == first_record);
    CHECK(context != 0 && gm_valid(context, 0x2cc));
    c->r[R_EAX] = 1;
}

static void continue_execution(X86 *c) {
    c->r[R_EAX] = 0;
}

static void record_unhandled(X86 *c, uint32_t record, uint32_t context) {
    ++unhandled;
    CHECK(visits == 2);
    CHECK(record == first_record && context == first_context);
    CHECK(rd32(record) == 0x12345678);
    CHECK(rd32(record + 4) == 1);
    CHECK(rd32(record + 8) == 0);
    CHECK(rd32(record + 12) == GUEST_RETURN_SENTINEL);
    CHECK(rd32(record + 16) == 15);
    for (uint32_t i = 0; i < 15; ++i)
        CHECK(rd32(record + 20 + 4 * i) == 100 + i);
    CHECK(rd32(context) == 0x10003);
    const int regs[] = {R_EDI, R_ESI, R_EBX, R_EDX, R_ECX, R_EAX, R_EBP};
    for (uint32_t i = 0; i < 7; ++i)
        CHECK(rd32(context + 0x9c + i * 4) == expected_cpu.r[regs[i]]);
    CHECK(rd32(context + 0xb8) == GUEST_RETURN_SENTINEL);
    CHECK(rd32(context + 0xc0) == expected_flags);
    CHECK(rd32(context + 0xc4) == expected_esp);
}

// A landing restores the guest frame, unlinks it, and performs its guest RET.
static void block(X86 *c) {
    ++landing_runs;
    CHECK(heap_owns(first_record)); // the abandoned dispatcher still owns live exception data
    CHECK(rd32(first_record) == 0x12345678);
    CHECK(c->r[R_EAX] == 0xabcdef);
    CHECK(recomp_seh_pending_target() == 0);
    CHECK(recomp_seh_test_frame_count(c) == 2); // dispatcher and its callees remain live
    CHECK(c->r[R_ESP] < c->r[R_EBP]);           // still on the dispatcher's guest stack
    uint32_t reg = c->r[R_EBP];
    wr32(c->fs_base, rd32(reg));
    c->r[R_ESP] = reg + 12;
    recomp_seh_frame_leave(c);
    c->eip = rd32(c->r[R_ESP]);
    c->r[R_ESP] += 4;
    recomp_return(c);
    final_esp = c->r[R_ESP];
}

// These are the test's tiny dispatch tables. Calls never intercept an unwind;
// jumps intercept before lookup, including an already-known landing entry.
extern "C" int recomp_is_call_return(uint32_t target) {
    return target == GUEST_RETURN_SENTINEL || target == CALLER_RETURN;
}
extern "C" int32_t recomp_index_of(uint32_t target) {
    // A call-return can also be an entry. The landing's RET must prefer
    // its pending caller, rather than dispatch that entry a second time.
    return target == LANDING || target == GUEST_RETURN_SENTINEL ? 0 : -1;
}
extern "C" void recomp_call(X86 *c, uint32_t target) {
    if (target == CLEANUP) {
        cleanup_block(c);
        return;
    }
    if (target == SURGERY) {
        surgery(c);
        return;
    }
    if (target == LANDING) {
        block(c);
        return;
    }
    CHECK(imports_dispatch(c, target));
}
extern "C" void recomp_jump(X86 *c, uint32_t target) {
    if (recomp_seh_pending_target())
        recomp_seh_intercept(c, target);
    recomp_call(c, target);
}
extern "C" void mods_hooks_unwind_to_esp(uint32_t esp) {
    unwound_mod_esp = esp;
}

static void accept(X86 *c) {
    uint32_t reg = arg(c, 1), record = arg(c, 0);
    invoke(c, "RtlUnwind", {reg, 0, record, 0xabcdef});
    CHECK(recomp_seh_pending_target() == reg);
    CHECK(c->r[R_ESP] < reg);
    c->r[R_EBP] = reg;
    recomp_profile_push(11); // abandoned by the nonlocal transfer
    recomp_jump(c, LANDING);
    CHECK(false);
}

static void callee(X86 *c) {
    c->r[R_ESP] -= 64;
    registration(c, c->r[R_ESP], rd32(c->fs_base), handler_search);
    {
        jmp_buf *b_ = recomp_seh_frame_enter(c);
        if (setjmp(*b_)) {
            recomp_seh_land(c);
            return;
        }
    }
    invoke(c, "RaiseException", {0x12345678, 0, 0, 0});
    ++after_raise;
}

static void establishing(X86 *c) {
    c->r[R_ESP] -= 12;
    registration(c, c->r[R_ESP], 0xffffffff, handler_accept);
    {
        jmp_buf *b_ = recomp_seh_frame_enter(c);
        if (setjmp(*b_)) {
            recomp_seh_land(c);
            return;
        }
    }
    callee(c);
    ++after_raise;
}

static void clear_observations() {
    visits = unhandled = first_record = first_context = 0;
}

static void chain_walk() {
    X86 c;
    loader_init_context(&c);
    clear_observations();
    uint32_t outer = c.r[R_ESP] - 32, inner = outer - 12;
    registration(&c, outer, 0xffffffff, handler_search);
    registration(&c, inner, outer, handler_search);
    c.r[R_ESP] = inner - 32;
    for (int i = 0; i < 8; ++i)
        if (i != R_ESP)
            c.r[i] = 0x12340000u + 0x101u * i;
    x86_set_eflags(&c, 0xed7);
    uint32_t info = heap_alloc(64, true);
    for (uint32_t i = 0; i < 16; ++i)
        wr32(info + 4 * i, 100 + i);
    expected_cpu = c;
    expected_flags = x86_get_eflags(&c);
    expected_esp = c.r[R_ESP] - 20;
    uint32_t blocks = heap_stats().used_blocks;
    recomp_seh_test_unhandled_hook(record_unhandled);
    invoke(&c, "RaiseException", {0x12345678, 1, 16, info});
    CHECK(visits == 2 && seen[0] == inner && seen[1] == outer && unhandled == 1);
    CHECK(heap_stats().used_blocks == blocks);
    CHECK(rd32(c.fs_base) == inner);
    recomp_seh_test_unhandled_hook(nullptr);
    heap_free(info);
}

// A call into the first 64 KB faults on Windows, and the program's handlers
// see an access violation: an execute fault at the target, raised at the
// call's return address. A nil interface's vtable reads back as zero, so this
// is what calling through one does. A call to any other unknown address is a
// translation gap, not a fault, and no handler sees it.
static uint32_t null_calls;
static constexpr uint32_t NULL_CALL_RETURN = 0x00401234;
static void record_null_call(X86 *, uint32_t record, uint32_t) {
    ++null_calls;
    CHECK(rd32(record) == 0xc0000005u);
    CHECK(rd32(record + 4) == 0);
    CHECK(rd32(record + 12) == NULL_CALL_RETURN);
    CHECK(rd32(record + 16) == 2);
    CHECK(rd32(record + 20) == 8);
    CHECK(rd32(record + 24) == 0x64);
}
static void null_call_faults() {
    X86 c;
    loader_init_context(&c);
    clear_observations();
    null_calls = 0;
    uint32_t reg = c.r[R_ESP] - 32;
    registration(&c, reg, 0xffffffff, handler_search);
    c.r[R_ESP] = reg - 36;
    wr32(c.r[R_ESP], NULL_CALL_RETURN); // the CALL's return address
    const uint32_t esp = c.r[R_ESP];
    recomp_seh_test_unhandled_hook(record_null_call);
    recomp_unknown_call(&c, 0x64);
    CHECK(visits == 1 && seen[0] == reg && null_calls == 1);
    // Taken by nothing - here only because the test hook stands in for the
    // abort - the call returns zero, as it always did.
    CHECK(c.r[R_ESP] == esp + 4 && c.eip == NULL_CALL_RETURN && c.r[R_EAX] == 0);
    clear_observations();
    c.r[R_ESP] = esp;
    recomp_unknown_call(&c, 0x00c00000);
    CHECK(visits == 0 && null_calls == 1);
    CHECK(c.r[R_ESP] == esp + 4 && c.eip == NULL_CALL_RETURN);
    recomp_seh_test_unhandled_hook(nullptr);
    wr32(c.fs_base, 0xffffffff);
}

static void unwind_and_leave() {
    X86 c;
    loader_init_context(&c);
    clear_observations();
    uint32_t outer = c.r[R_ESP] - 12, inner = outer - 12;
    c.r[R_ESP] = outer;
    registration(&c, outer, 0xffffffff, handler_search);
    recomp_seh_frame_enter(&c);
    c.r[R_ESP] = inner;
    registration(&c, inner, outer, handler_search);
    recomp_seh_frame_enter(&c);
    // The measured normal restoration pops three words before the FS store.
    c.r[R_ESP] += 12;
    wr32(c.fs_base, outer);
    recomp_seh_frame_leave(&c);
    CHECK(recomp_seh_test_frame_count(&c) == 1);
    recomp_seh_frame_leave(&c); // equality and no-op leave preserve the outer
    CHECK(recomp_seh_test_frame_count(&c) == 1);
    c.r[R_ESP] = inner;
    registration(&c, inner, outer, handler_search);
    recomp_seh_frame_enter(&c);
    uint32_t blocks = heap_stats().used_blocks;
    CHECK(invoke(&c, "RtlUnwind", {outer, 0, 0, 0x77}) == 0x77);
    CHECK(visits == 1 && seen[0] == inner && (flags_seen[0] & 2));
    CHECK(rd32(c.fs_base) == outer && recomp_seh_pending_target() == outer);
    CHECK(heap_stats().used_blocks == blocks);
    // Unwind left stale checkpoints. A later normal restoration drops all
    // strictly below ESP, including the former inner registration.
    c.r[R_ESP] = outer + 12;
    wr32(c.fs_base, 0xffffffff);
    recomp_seh_frame_leave(&c);
    CHECK(recomp_seh_test_frame_count(&c) == 0);
    recomp_seh_reset(&c);
    clear_observations();
    c.r[R_ESP] = inner;
    registration(&c, outer, 0xffffffff, handler_search);
    registration(&c, inner, outer, handler_search);
    invoke(&c, "RtlUnwind", {0, 0, 0, 0x88});
    CHECK(visits == 2 && (flags_seen[0] & 2) && (flags_seen[1] & 2));
    CHECK(rd32(c.fs_base) == 0xffffffff && recomp_seh_pending_target() == 0);
}

static void landing() {
    X86 c;
    loader_init_context(&c);
    clear_observations();
    uint32_t before = c.r[R_ESP], blocks = heap_stats().used_blocks;
    recomp_profile_push(7);
    uint32_t depth = recomp_profile_depth();
    establishing(&c);
    ++caller_runs;
    CHECK(landing_runs == 1 && after_raise == 0);
    CHECK(caller_runs == 1);
    CHECK(final_esp == before + 4 && c.r[R_ESP] == final_esp);
    CHECK(c.eip == GUEST_RETURN_SENTINEL);
    CHECK(recomp_seh_test_frame_count(&c) == 0);
    CHECK(recomp_profile_depth() == depth);
    CHECK(unwound_mod_esp == before - 12);
    CHECK(heap_stats().used_blocks == blocks);
    recomp_profile_pop();
    registration(&c, c.r[R_ESP], 0xffffffff, handler_search);
    recomp_seh_frame_enter(&c);
    loader_init_context(&c); // reusing a context must not retain its old env
    CHECK(recomp_seh_test_frame_count(&c) == 0);
}

// Translated constructor helper: POP its return, install three words, JMP
// through the saved return register without popping the registration again.
static void installing_helper(X86 *c, bool install) {
    uint64_t mark = recomp_seh_frame_mark(c);
    uint32_t ret = rd32(c->r[R_ESP]);
    c->r[R_ESP] += 4;
    if (install) {
        c->r[R_ESP] -= 12;
        registration(c, c->r[R_ESP], rd32(c->fs_base), handler_accept);
        // Also exercise helpers publishing caller-reserved words above their
        // own saved registers: enter must use FS:[0], not current ESP.
        c->r[R_ESP] -= 16;
        jmp_buf *b_ = recomp_seh_frame_enter(c);
        if (setjmp(*b_)) {
            recomp_seh_land(c);
            CHECK(false); // This helper has returned before any raise.
            return;
        }
        c->r[R_ESP] += 16;
    }
    recomp_seh_frame_orphan(c, mark);
    c->eip = ret;
}

static void adopting_caller(X86 *c, bool raise, bool install) {
    c->r[R_ESP] -= 4;
    wr32(c->r[R_ESP], CALLER_RETURN);
    installing_helper(c, install);
    {
        jmp_buf *b_ = recomp_seh_frame_adopt(c);
        CHECK((b_ != nullptr) == install);
        if (b_) {
            if (setjmp(*b_)) {
                recomp_seh_land(c);
                return;
            }
        }
    }
    CHECK(recomp_seh_frame_adopt(c) == nullptr); // Cannot adopt twice.
    if (raise) {
        callee(c);
        CHECK(false);
    }
    if (install) {
        // Standalone unlink helper: POP return; POP FS:[zero]; ADD ESP,8;
        // JMP saved return. The caller owns the checkpoint it retires.
        c->r[R_ESP] -= 4;
        wr32(c->r[R_ESP], CALLER_RETURN);
        uint32_t ret = rd32(c->r[R_ESP]);
        c->r[R_ESP] += 4;
        wr32(c->fs_base, rd32(c->r[R_ESP]));
        c->r[R_ESP] += 4;
        recomp_seh_frame_leave(c);
        c->r[R_ESP] += 8;
        c->eip = ret;
    }
    c->eip = rd32(c->r[R_ESP]);
    c->r[R_ESP] += 4;
    recomp_return(c);
}

static void adopted_landing() {
    for (unsigned mode = 0; mode < 3; ++mode) {
        X86 c;
        loader_init_context(&c);
        clear_observations();
        landing_runs = caller_runs = after_raise = 0;
        uint32_t before = c.r[R_ESP];
        adopting_caller(&c, mode == 0, mode != 2);
        ++caller_runs;
        CHECK(caller_runs == 1 && after_raise == 0);
        CHECK(landing_runs == (mode == 0 ? 1u : 0u));
        CHECK(c.r[R_ESP] == before + 4 && c.eip == GUEST_RETURN_SENTINEL);
        CHECK(rd32(c.fs_base) == 0xffffffff);
        CHECK(recomp_seh_test_frame_count(&c) == 0);
        recomp_seh_reset(&c);
    }
}

// A cleanup landing can return to the dispatcher from a deeper helper. Its
// sentinel belongs to that handler invocation, not the establishing function.
static void surgery(X86 *c) {
    c->r[R_ESP] = callback_sp;
    c->eip = rd32(c->r[R_ESP]);
    c->r[R_ESP] += 4;
    c->r[R_EAX] = 1;
    CHECK(c->eip == GUEST_RETURN_SENTINEL);
    if (unknown_sentinel)
        recomp_unknown_call(c, c->eip);
    else
        recomp_return(c);
    CHECK(false); // must escape the helper, landing, and accepting handler
}

static void cleanup_block(X86 *c) {
    ++cleanup_runs;
    CHECK(recomp_seh_test_frame_count(c) == 2);
    CHECK(heap_owns(first_record));
    wr32(c->fs_base, outer_reg); // nested raises search outside this cleanup
    if (raise_in_cleanup) {
        invoke(c, "RaiseException", {0x87654321, 0, 0, 0});
        CHECK(false);
    } else {
        recomp_call(c, SURGERY);
        CHECK(false);
    }
}

static void cleanup_accept(X86 *c) {
    if (rd32(arg(c, 0) + 4) & 2) {
        c->r[R_EAX] = 1;
        return;
    }
    callback_sp = c->r[R_ESP];
    first_record = arg(c, 0);
    invoke(c, "RtlUnwind", {arg(c, 1), 0, first_record, 0xabcdef});
    recomp_jump(c, CLEANUP);
    CHECK(false);
}

static void outer_accept(X86 *c) {
    ++outer_runs;
    CHECK(cleanup_runs == 1);
    CHECK(arg(c, 1) == outer_reg);
    CHECK(rd32(arg(c, 0)) == (raise_in_cleanup ? 0x87654321u : 0x12345678u));
    // Reuse the completion landing's assertions with the still-live original
    // record. The nested record is owned by the nested dispatcher as well.
    accept(c);
}

static void cleanup_establishing(X86 *c) {
    c->r[R_ESP] -= 12;
    cleanup_reg = c->r[R_ESP];
    registration(c, cleanup_reg, outer_reg, cleanup_handler);
    {
        jmp_buf *b_ = recomp_seh_frame_enter(c);
        if (setjmp(*b_)) {
            recomp_seh_land(c);
            return;
        }
    }
    invoke(c, "RaiseException", {0x12345678, 0, 0, 0});
    ++after_raise;
}

static void outer_establishing(X86 *c) {
    c->r[R_ESP] -= 12;
    outer_reg = c->r[R_ESP];
    registration(c, outer_reg, 0xffffffff, outer_handler);
    {
        jmp_buf *b_ = recomp_seh_frame_enter(c);
        if (setjmp(*b_)) {
            recomp_seh_land(c);
            return;
        }
    }
    cleanup_establishing(c);
    ++after_raise;
}

static void cleanup_landing(bool nested, bool unknown = false) {
    X86 c;
    loader_init_context(&c);
    clear_observations();
    landing_runs = cleanup_runs = outer_runs = caller_runs = after_raise = 0;
    raise_in_cleanup = nested;
    unknown_sentinel = unknown;
    uint32_t before = c.r[R_ESP], blocks = heap_stats().used_blocks;
    wr32(before, CALLER_RETURN);
    recomp_profile_push(7);
    uint32_t depth = recomp_profile_depth();
    outer_establishing(&c);
    ++caller_runs;
    CHECK(cleanup_runs == 1 && outer_runs == 1 && landing_runs == 1);
    CHECK(caller_runs == 1 && after_raise == 0);
    CHECK(c.eip == CALLER_RETURN && c.r[R_ESP] == before + 4);
    CHECK(rd32(c.fs_base) == 0xffffffff);
    CHECK(recomp_seh_test_frame_count(&c) == 0);
    CHECK(recomp_profile_depth() == depth);
    CHECK(heap_stats().used_blocks == blocks);
    recomp_profile_pop();
    // Completion abandoned nested guest_call invocations. A fresh callback
    // must still work, with no stale environment left on its thread's stack.
    CHECK(invoke(&c, "GetCurrentProcessId", {}) != 0);
}

static void fatal_case(const char *which) {
    X86 c;
    loader_init_context(&c);
    uint32_t reg = c.r[R_ESP] - 32;
    c.r[R_ESP] = reg;
    registration(&c, reg, 0xffffffff, handler_search);
    if (!strcmp(which, "cycle"))
        wr32(reg, reg);
    if (!strcmp(which, "invalid"))
        wr32(c.fs_base, HEAP_BASE);
    if (!strcmp(which, "continue"))
        wr32(reg + 4, handler_continue);
    if (!strcmp(which, "missing-target"))
        invoke(&c, "RtlUnwind", {reg + 12, 0, 0, 0});
    if (!strcmp(which, "missing-checkpoint")) {
        invoke(&c, "RtlUnwind", {reg, 0, 0, 0});
        recomp_jump(&c, LANDING);
    }
    invoke(&c, "RaiseException", {0x12345678, 0, 0, 0});
}

static void teardown() {
    X86 c;
    loader_init_context(&c);
    c.r[R_ESP] -= 12;
    registration(&c, c.r[R_ESP], 0xffffffff, handler_search);
    recomp_seh_frame_enter(&c);
    invoke(&c, "RtlUnwind", {c.r[R_ESP], 0, 0, 0});
    CHECK(recomp_seh_pending_target() != 0);
    sched_run_thread_unwind_frames();
    CHECK(recomp_seh_test_frame_count(&c) == 0);
    CHECK(recomp_seh_pending_target() == 0);
}

static unsigned delay_target_calls;
static void delay_target(X86 *c) {
    ++delay_target_calls;
    CHECK(arg(c, 0) == 17 && arg(c, 1) == 29);
    CHECK(c->r[R_EAX] == 0x1234 && c->r[R_EDX] == 0x5678 && c->r[R_ECX] == 0x9abc);
    c->r[R_EAX] = arg(c, 0) + arg(c, 1);
}

static void delay_load_return() {
    X86 c;
    loader_init_context(&c);
    uint32_t original_sp = c.r[R_ESP];
    uint32_t target = imports_alloc_trampoline("test", "delay_target", delay_target, 2);
    // A Delphi delay-load adapter restores EDX/ECX, exchanges the resolved
    // import with saved EAX on the stack, then RETs into that import. The
    // original caller's return and arguments remain below the popped target.
    c.r[R_ESP] -= 16;
    wr32(c.r[R_ESP], target);
    wr32(c.r[R_ESP] + 4, GUEST_RETURN_SENTINEL);
    wr32(c.r[R_ESP] + 8, 17);
    wr32(c.r[R_ESP] + 12, 29);
    c.r[R_EAX] = 0x1234;
    c.r[R_EDX] = 0x5678;
    c.r[R_ECX] = 0x9abc;
    c.eip = rd32(c.r[R_ESP]);
    c.r[R_ESP] += 4;
    recomp_return(&c);
    CHECK(delay_target_calls == 1);
    CHECK(c.r[R_EAX] == 46);
    CHECK(c.r[R_ESP] == original_sp && c.eip == GUEST_RETURN_SENTINEL);
    recomp_return(&c);
    CHECK(delay_target_calls == 1); // the original continuation returns once
}

// Capture the first invalid chain at the boundary that observes it, before a
// later RaiseException diagnoses only an unusable registration. Child runs
// isolate the cached logging switch and the deliberately damaged chains.
static int diagnostic_case(const char *which, const char *path) {
    CHECK(freopen(path, "w", stderr) != nullptr);
    X86 c;
    loader_init_context(&c);
    const uint32_t reg = c.r[R_ESP] - 1024;
    registration(&c, reg, 0xffffffff, handler_search);
    c.r[R_ESP] = reg - 32;
    c.eip = CALLER_RETURN;
    invoke(&c, "GetTickCount", {}); // last known good observation
    uint32_t next = reg;
    if (!strcmp(which, "diag-outside"))
        next = LANDING;
    if (!strcmp(which, "diag-backwards"))
        next = reg - 12;
    if (!strcmp(which, "diag-depth")) {
        for (uint32_t i = 0; i < 65; ++i) {
            wr32(reg + i * 12, i == 64 ? 0xffffffff : reg + (i + 1) * 12);
            wr32(reg + i * 12 + 4, handler_search);
        }
    } else {
        wr32(reg, next);
    }
    c.eip = CALLER_RETURN;
    if (!strcmp(which, "diag-enter")) {
        c.r[R_ESP] = reg;
        recomp_seh_frame_enter(&c);
    } else if (!strcmp(which, "diag-leave")) {
        recomp_seh_frame_leave(&c);
    } else if (!strcmp(which, "diag-raise")) {
        recomp_seh_raise(&c, 0x12345678, 0, 0, 0);
    } else {
        invoke(&c, "GetTickCount", {});
    }
    // Repeated observations must not bury the first corruption in log spam.
    invoke(&c, "GetTickCount", {});
    CHECK(rd32(c.fs_base) == reg);
    recomp_seh_reset(&c);
    return failures ? 1 : 0;
}

static void chain_diagnostics(const char *exe) {
    for (const char *which : {"diag-import", "diag-enter", "diag-leave", "diag-raise", "diag-depth",
                              "diag-outside", "diag-backwards"}) {
        char path[4096];
        snprintf(path, sizeof path, "%s/recomp-seh-XXXXXX", os_temp_dir());
        int fd = os_mkstemp(path);
        CHECK(fd >= 0);
        if (fd < 0)
            continue;
        os_fd_close(fd);
        const char *args[] = {exe, which, path, nullptr};
        int64_t pid = 0;
        int code = -1;
        CHECK(os_spawn(args, &pid) == 0 && os_wait(pid, &code) == 0);
        CHECK(code == (!strcmp(which, "diag-raise") ? 134 : 0));
        FILE *f = fopen(path, "rb");
        CHECK(f != nullptr);
        char log[16384] = {};
        if (f) {
            fread(log, 1, sizeof log - 1, f);
            fclose(f);
        }
        const char *first = strstr(log, "SEH chain violation");
        CHECK(first != nullptr);
        if (first) {
            CHECK(strstr(first + 1, "SEH chain violation") == nullptr);
            CHECK(strstr(first, "GetTickCount") != nullptr);
            CHECK(strstr(first, "last valid") != nullptr);
        }
        os_unlink(path);
    }
}

int main(int argc, char **argv) {
    const bool diagnostic = argc > 2 && !strncmp(argv[1], "diag-", 5);
    if (diagnostic)
        os_setenv("RECOMP_LOG", "2");
    mem_init();
    imports_init();
    handler_search = imports_alloc_trampoline("SEH.dll", "search", search, ARGC_CDECL);
    handler_accept = imports_alloc_trampoline("SEH.dll", "accept", accept, ARGC_CDECL);
    handler_continue =
        imports_alloc_trampoline("SEH.dll", "continue", continue_execution, ARGC_CDECL);
    cleanup_handler = imports_alloc_trampoline("SEH.dll", "cleanup", cleanup_accept, ARGC_CDECL);
    outer_handler = imports_alloc_trampoline("SEH.dll", "outer", outer_accept, ARGC_CDECL);
    if (diagnostic)
        return diagnostic_case(argv[1], argv[2]);
    if (argc > 1) {
        fatal_case(argv[1]);
        return 1;
    }
    delay_load_return();
    chain_walk();
    null_call_faults();
    unwind_and_leave();
    landing();
    adopted_landing();
    cleanup_landing(false);
    cleanup_landing(false, true);
    cleanup_landing(true);
    teardown();
    char exe[4096];
    CHECK(os_exe_path(exe, sizeof exe) == 0);
    chain_diagnostics(exe);
    for (const char *which :
         {"cycle", "invalid", "continue", "missing-target", "missing-checkpoint", "unhandled"}) {
        const char *args[] = {exe, which, nullptr};
        int64_t pid = 0;
        int code = -1;
        CHECK(os_spawn(args, &pid) == 0 && os_wait(pid, &code) == 0 && code == 134);
    }
    mem_shutdown();
    printf("seh_tests: %d checks, %d failures\n", checks, failures);
    return failures ? 1 : 0;
}
