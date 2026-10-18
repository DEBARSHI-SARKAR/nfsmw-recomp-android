#include "display_settings.h"
#include "sprite_view.h"
// hooks.cpp - the mutable dispatch layer.
//
// Translated code is immutable. Every generated call site reads
// recomp_hooked[i] with an acquire load and, when it is set, calls
// recomp_hook_ptrs[i](c, i), which is this module.
//
// STORAGE. An invocation is a POD in a fixed-size thread-local array. Nothing
// here has a destructor and nothing here is heap-allocated per call, because a
// guest longjmp can jump straight over these frames: unwinding must be an
// integer assignment, not an unwind through C++ objects that the guest's
// longjmp would never run anyway.
//
// SYNCHRONISATION. The scheduler's baton already serialises guest threads. A
// mutation made from a guest thread takes the scheduler lock for the mutation
// only and publishes in order: the pointer with a release store, then the flag
// with a release store, so a reader that sees the flag sees the pointer. A
// mutation made from a host thread is QUEUED and applied by the run thread at
// a scheduler checkpoint, because the host has no baton and no right to touch
// a table a guest thread is dispatching through.
#include "mods_internal.h"
#include "options_menu.h"
#include "../runtime/mods_seam.h"
#include "../runtime/imports.h"
#include "../runtime/win32.h"

#include <deque>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>

#define MODS_MAX_CHAIN 16
#define MODS_MAX_DEPTH 32

namespace {

struct Hook {
    uint32_t id = 0, owner = 0, order = 0, seq = 0, addr = 0;
    uint32_t flags = 0;
    uint32_t return_pc = 0; // zero is the unfiltered API
    int32_t mode = POP_HOOK_BEFORE;
    PopHookFn fn = nullptr;
    void *user = nullptr;
    const char *desc = nullptr; // interned, stable for the process
};

struct Entry {
    std::vector<Hook> before, after, replace;
};

std::vector<Entry> &entries() {
    static std::vector<Entry> e;
    return e;
}
std::vector<uint32_t> &order_of_owner() {
    static std::vector<uint32_t> v;
    return v;
}
std::vector<uint32_t> &cpu_size_of_owner() {
    static std::vector<uint32_t> v;
    return v;
}
// Interned descriptions never move and are never freed: a fault handler may be
// holding one, and there are at most 65535 hooks in a process.
std::deque<std::string> &desc_pool() {
    static std::deque<std::string> d;
    return d;
}

uint32_t g_next_id = 1; // 16-bit handles, never reused
uint32_t g_seq = 0;
uint32_t g_installed = 0;

// Test seam: where the callback's pop_cpu_v1 lives, so a test can poison the
// bytes past a declared size and prove nothing wrote them.
#ifdef POPM_TESTING
// The substituted CPU buffer. Compiled only into a test binary: it lets a
// suite hand the transfer a poisoned or undersized buffer and prove the bounds
// rather than assert them. A production build has no way to redirect where a
// callback's registers live, which is how it should be.
uint8_t *g_test_cpu = nullptr;
uint32_t g_test_cpu_bytes = 0;
#endif

uint32_t order_of(uint32_t owner) {
    return owner < order_of_owner().size() ? order_of_owner()[owner] : owner;
}

uint32_t cpu_bound_for(uint32_t owner) {
    uint32_t s = owner < cpu_size_of_owner().size() ? cpu_size_of_owner()[owner] : 0;
    if (!s)
        s = POP_CPU_V1_BASELINE_SIZE;
    if (s > POP_CPU_V1_BASELINE_SIZE)
        s = POP_CPU_V1_BASELINE_SIZE;
    if (s < POP_CPU_V1_MIN_SIZE)
        s = POP_CPU_V1_MIN_SIZE;
    return s;
}

Entry &entry_for(int32_t index) {
    if (entries().size() < (size_t)recomp_func_count)
        entries().resize(recomp_func_count);
    return entries()[index];
}

} // namespace

// --------------------------------------------------------------- invocation

struct HookRef {
    PopHookFn fn;
    void *user;
    uint32_t owner;
    uint32_t bound;
    const char *desc;
    uint32_t flags;
};

struct PopHookInvocation {
    uint32_t index, addr, esp_at_entry;
    X86 *cpu;
    HookRef before[MODS_MAX_CHAIN];
    uint32_t n_before;
    HookRef after[MODS_MAX_CHAIN];
    uint32_t n_after;
    HookRef replace[MODS_MAX_CHAIN];
    uint32_t n_replace;
    uint32_t replace_pos;
    uint32_t cur_bound; // the running callback's transfer bound
    // The callback running in THIS frame, so an unwind that drops the frames
    // above can restore attribution to the one that survived. A real guest
    // longjmp never runs run_one's restore, so the saved-and-restored pointer
    // in run_one is not enough on its own.
    const char *active_desc;
    uint32_t phase;
    uint32_t view_depth; // snapshots that existed before this invocation
    uint8_t base_ran, ret_done;
};

namespace {

struct ThreadStack {
    PopHookInvocation frames[MODS_MAX_DEPTH];
    uint32_t depth;
    const char *active;
};
// Trivially destructible on purpose: a guest longjmp across these frames must
// not need to run anything.
thread_local ThreadStack t_stack = {};

// `after_ret` says the guest RET has already happened, so eip is the caller's
// return address rather than the callee entry: true for the after phase, and
// true again for a refresh taken after a delegating call returned.
void cpu_from_x86(const X86 *c, pop_cpu_v1 *out, uint32_t addr, uint32_t phase, uint32_t bound,
                  bool after_ret = false) {
    // Write only inside `bound`: a plugin's shorter struct has bytes after it
    // that belong to the plugin, not to us.
    memset(out, 0, bound);
    out->size = bound;
#define FIT(f) (offsetof(pop_cpu_v1, f) + sizeof(((pop_cpu_v1 *)0)->f) <= bound)
    if (FIT(eax))
        out->eax = c->r[R_EAX];
    if (FIT(ecx))
        out->ecx = c->r[R_ECX];
    if (FIT(edx))
        out->edx = c->r[R_EDX];
    if (FIT(ebx))
        out->ebx = c->r[R_EBX];
    if (FIT(esp))
        out->esp = c->r[R_ESP];
    if (FIT(ebp))
        out->ebp = c->r[R_EBP];
    if (FIT(esi))
        out->esi = c->r[R_ESI];
    if (FIT(edi))
        out->edi = c->r[R_EDI];
    // eip is NORMALISED: the callee entry for before/replace, the caller's
    // return address for after, which is where c->eip already points by then.
    if (FIT(eip))
        out->eip = (after_ret || phase == POP_PHASE_AFTER) ? c->eip : addr;
    if (FIT(target))
        out->target = addr;
    if (FIT(phase))
        out->phase = phase;
    if (FIT(cf))
        out->cf = c->eflags_cf;
    if (FIT(zf))
        out->zf = c->eflags_zf;
    if (FIT(sf))
        out->sf = c->eflags_sf;
    if (FIT(of))
        out->of = c->eflags_of;
    if (FIT(pf))
        out->pf = c->eflags_pf;
    if (FIT(af))
        out->af = c->eflags_af;
    if (FIT(df))
        out->df = c->eflags_df;
    if (FIT(st))
        for (int i = 0; i < 8; ++i)
            out->st[i] = c->st[i];
    if (FIT(fpu_top))
        out->fpu_top = c->fpu_top;
    if (FIT(fpu_cw))
        out->fpu_cw = c->fpu_cw;
    if (FIT(fpu_sw))
        out->fpu_sw = c->fpu_sw;
    if (FIT(fpu_tag))
        out->fpu_tag = c->fpu_tag;
#undef FIT
}

// bound comes from the INVOCATION, never from cpu->size: a callback that
// enlarges its own size field must not make the host read past its buffer.
void x86_from_cpu(X86 *c, const pop_cpu_v1 *in, uint32_t bound) {
#define FIT(f) (offsetof(pop_cpu_v1, f) + sizeof(((pop_cpu_v1 *)0)->f) <= bound)
    if (FIT(eax))
        c->r[R_EAX] = in->eax;
    if (FIT(ecx))
        c->r[R_ECX] = in->ecx;
    if (FIT(edx))
        c->r[R_EDX] = in->edx;
    if (FIT(ebx))
        c->r[R_EBX] = in->ebx;
    if (FIT(esp))
        c->r[R_ESP] = in->esp;
    if (FIT(ebp))
        c->r[R_EBP] = in->ebp;
    if (FIT(esi))
        c->r[R_ESI] = in->esi;
    if (FIT(edi))
        c->r[R_EDI] = in->edi;
    if (FIT(eip))
        c->eip = in->eip;
    if (FIT(cf))
        c->eflags_cf = in->cf;
    if (FIT(zf))
        c->eflags_zf = in->zf;
    if (FIT(sf))
        c->eflags_sf = in->sf;
    if (FIT(of))
        c->eflags_of = in->of;
    if (FIT(pf))
        c->eflags_pf = in->pf;
    if (FIT(af))
        c->eflags_af = in->af;
    if (FIT(df))
        c->eflags_df = in->df;
    if (FIT(st))
        for (int i = 0; i < 8; ++i) {
            // The v1 mod ABI exposes doubles. A no-op hook preserves the
            // runtime's exact integer; an edited value invalidates it.
            if (memcmp(&c->st[i], &in->st[i], sizeof c->st[i]))
                fset(c, (i - c->fpu_top) & 7u, in->st[i]);
        }
    if (FIT(fpu_top))
        c->fpu_top = in->fpu_top;
    if (FIT(fpu_cw))
        c->fpu_cw = in->fpu_cw;
    if (FIT(fpu_sw))
        c->fpu_sw = in->fpu_sw;
    if (FIT(fpu_tag))
        c->fpu_tag = in->fpu_tag;
#undef FIT
}

// The after phase: only eax and edx, because the frame the callback would
// have been editing is gone. pop_mod_api.h and the game's docs/MODDING.md both say so.
void x86_results_only(X86 *c, const pop_cpu_v1 *in, uint32_t bound) {
    if (offsetof(pop_cpu_v1, eax) + 4 <= bound)
        c->r[R_EAX] = in->eax;
    if (offsetof(pop_cpu_v1, edx) + 4 <= bound)
        c->r[R_EDX] = in->edx;
}

// A before or replace callback after the RET has happened - it delegated, or
// it called hook_return, and then went on editing.
//
// The contract for those two phases is that every field inside `size` is
// copied back, and this used to commit eax and edx alone: a register the
// callback set after delegating, or an FPU field it computed from the result,
// was silently dropped. The two fields that genuinely cannot come back are eip
// and esp, because the return has already happened and rolling them back over
// it would undo it. So the completed return state is preserved and everything
// else the callback touched is committed.
void x86_after_return(X86 *c, const pop_cpu_v1 *in, uint32_t bound) {
    const uint32_t eip = c->eip;
    const uint32_t esp = c->r[R_ESP];
    x86_from_cpu(c, in, bound);
    c->eip = eip;
    c->r[R_ESP] = esp;
}

// The callback's CPU buffer. Full size normally; the test seam substitutes a
// poisoned buffer so a truncated layout can be proven, not asserted.
pop_cpu_v1 *cpu_buffer(uint8_t *storage) {
#ifdef POPM_TESTING
    if (g_test_cpu)
        return (pop_cpu_v1 *)g_test_cpu;
#endif
    return (pop_cpu_v1 *)storage;
}

// Three numbers bound every transfer and the smallest wins: the host's own
// layout, the size the plugin declared, and the bytes actually available in
// the buffer being written.
uint32_t transfer_bound(uint32_t declared) {
    uint32_t capacity = (uint32_t)sizeof(pop_cpu_v1);
#ifdef POPM_TESTING
    if (g_test_cpu)
        capacity = g_test_cpu_bytes;
#endif
    uint32_t bound = declared < capacity ? declared : capacity;
    if (bound > POP_CPU_V1_BASELINE_SIZE)
        bound = POP_CPU_V1_BASELINE_SIZE;
    return bound;
}

void run_one(PopHookInvocation *inv, const HookRef &h, pop_cpu_v1 *cpu) {
    const char *prev = mods_push_active_callback(h.desc);
    const char *prev_in_frame = inv->active_desc;
    inv->active_desc = h.desc;
    inv->cur_bound = h.bound; // already passed through transfer_bound
    // One immutable game-view snapshot per callback, nested: a hook that calls
    // the original, which runs a hook of its own, gets its own view back when
    // the inner one returns.
    uint32_t views_before = mods_view_depth();
    if (h.flags & POP_HOOK_NO_GAME_VIEW)
        mods_view_push_disabled();
    else
        mods_view_push();
    h.fn(mods_api_for(h.owner), cpu, inv, h.user);
    // Restore to a DEPTH, never an unconditional pop. A callback that unwound
    // past its own frame has already had its views truncated by the unwind, and
    // popping again would take a snapshot belonging to an outer invocation that
    // is still using it.
    if (mods_view_depth() > views_before)
        mods_view_truncate(views_before);
    inv->active_desc = prev_in_frame;
    mods_pop_active_callback(prev);
}

void run_base(PopHookInvocation *inv) {
    inv->base_ran = 1;
    recomp_base_ptrs[inv->index](inv->cpu);
    inv->ret_done = 1; // the original performed the guest RET
}

void copy_chain(const std::vector<Hook> &src, HookRef *dst, uint32_t *n, uint32_t return_pc) {
    *n = 0;
    for (const Hook &h : src) {
        if (h.return_pc && h.return_pc != return_pc)
            continue;
        if (*n >= MODS_MAX_CHAIN)
            break;
        dst[*n] = {h.fn, h.user, h.owner, transfer_bound(cpu_bound_for(h.owner)), h.desc, h.flags};
        ++*n;
    }
}

} // namespace

// ------------------------------------------------------------- attribution

const char *mods_intern_desc(const char *text) {
    desc_pool().push_back(text ? text : "");
    return desc_pool().back().c_str();
}

const char *mods_push_active_callback(const char *desc) {
    const char *prev = t_stack.active;
    t_stack.active = desc;
    return prev;
}

void mods_pop_active_callback(const char *previous) {
    t_stack.active = previous;
}

const char *mods_active_callback_desc() {
    return t_stack.active ? t_stack.active : "";
}

// ---------------------------------------------------------------- dispatch

namespace {
// True while this invocation is still on this thread's stack. A callback may
// unwind past its own frame - a guest longjmp does exactly this - and once it
// has, the invocation is abandoned: no later phase of it may run, because the
// frame those phases would report against is gone.
bool inv_is_live(const PopHookInvocation *inv) {
    size_t slot = (size_t)(inv - t_stack.frames);
    return t_stack.depth > slot;
}
} // namespace

// Dispatch one guest function through a stable snapshot of its hook chain.
// Unwind abandoned invocations first; edits made by callbacks affect later calls, not this snapshot.
static void mods_hook_dispatch(X86 *c, uint32_t index) {
    // A guest longjmp may have jumped over invocations left on this thread.
    mods_hooks_unwind_to_esp(c->r[R_ESP]);
    if (t_stack.depth >= MODS_MAX_DEPTH) {
        // Deeper recursion than the foundation tracks: run the original so the
        // guest is never left mid-call, and say so once.
        LOGW("mods: hook recursion deeper than %d at %08x; running the original", MODS_MAX_DEPTH,
             recomp_func_addrs[index]);
        recomp_base_ptrs[index](c);
        return;
    }

    PopHookInvocation *inv = &t_stack.frames[t_stack.depth++];
    // Only the scalars: the three chains are 2 KB and copy_chain fills each
    // up to its count, which is all anything reads.
    inv->n_before = inv->n_after = inv->n_replace = 0;
    inv->replace_pos = inv->cur_bound = inv->phase = 0;
    inv->active_desc = nullptr;
    inv->base_ran = inv->ret_done = 0;
    inv->index = index;
    inv->addr = recomp_func_addrs[index];
    inv->cpu = c;
    inv->esp_at_entry = c->r[R_ESP];
    inv->view_depth = mods_view_depth(); // snapshots that are not ours
    {
        // The chain is captured ONCE, under the scheduler lock, and never
        // re-read: installing or removing during a callback changes the next
        // invocation, never this one.
        sched_registry_lock();
        Entry &e = entry_for((int32_t)index);
        const uint32_t return_pc = gm_valid(inv->esp_at_entry, 4) ? rd32(inv->esp_at_entry) : 0;
        copy_chain(e.before, inv->before, &inv->n_before, return_pc);
        copy_chain(e.after, inv->after, &inv->n_after, return_pc);
        copy_chain(e.replace, inv->replace, &inv->n_replace, return_pc);
        sched_registry_unlock();
    }

    uint8_t storage[sizeof(pop_cpu_v1)];
    pop_cpu_v1 *cpu = cpu_buffer(storage);

    for (uint32_t i = 0; i < inv->n_before && !inv->ret_done; ++i) {
        inv->phase = POP_PHASE_BEFORE;
        cpu_from_x86(c, cpu, inv->addr, POP_PHASE_BEFORE, inv->before[i].bound);
        run_one(inv, inv->before[i], cpu);
        // Abandoned from inside the callback: nothing of this invocation runs
        // again, and there is no frame left to commit against.
        if (!inv_is_live(inv))
            return;
        // Full copy-back while the callee has not returned. Once the RET has
        // happened - a cancel, or a delegation from inside this callback -
        // only the results may still be committed, because rolling eip and esp
        // back over a completed RET would undo it.
        if (!inv->ret_done)
            x86_from_cpu(c, cpu, inv->before[i].bound);
        else
            x86_after_return(c, cpu, inv->before[i].bound);
    }
    if (!inv_is_live(inv))
        return;

    if (!inv->ret_done) {
        if (inv->n_replace) {
            inv->replace_pos = inv->n_replace - 1; // outermost wrap first
            const HookRef &h = inv->replace[inv->replace_pos];
            inv->phase = POP_PHASE_REPLACE;
            cpu_from_x86(c, cpu, inv->addr, POP_PHASE_REPLACE, h.bound);
            run_one(inv, h, cpu);
            if (!inv_is_live(inv))
                return;
            if (!inv->ret_done) {
                x86_from_cpu(c, cpu, h.bound);
                // Neither delegated nor returned: a mod bug. Run the original
                // so the caller survives, and name the hook that did it.
                LOGW("mods: %s neither delegated nor called hook_return; "
                     "running the original",
                     h.desc ? h.desc : "a replace hook");
                run_base(inv);
            } else {
                x86_after_return(c, cpu, h.bound);
            }
        } else {
            run_base(inv);
        }
    }

    // The base, or a replace hook, may have unwound past this frame: a hook
    // reached through the original can abandon everything above its own ESP.
    // Entering the after phase then would run it against a frame that is gone.
    if (!inv_is_live(inv))
        return;

    for (uint32_t i = inv->n_after; i-- > 0;) {
        inv->phase = POP_PHASE_AFTER;
        cpu_from_x86(c, cpu, inv->addr, POP_PHASE_AFTER, inv->after[i].bound);
        run_one(inv, inv->after[i], cpu);
        if (!inv_is_live(inv))
            return;
        x86_results_only(c, cpu, inv->after[i].bound);
    }

    // Pop only what is still ours: a callback that unwound this frame already
    // dropped it, and decrementing again would take somebody else's.
    if (t_stack.depth && &t_stack.frames[t_stack.depth - 1] == inv) {
        mods_view_truncate(inv->view_depth);
        --t_stack.depth;
    }
}

// ---------------------------------------------------------------- registry

namespace {

struct Pending {
    int op;
    Hook hook;
    uint32_t id;
}; // op 0 install, 1 remove
std::vector<Pending> &pending() {
    static std::vector<Pending> v;
    return v;
}

// The table half of a reset, for a caller holding the registry lock and the
// baton. The thread-local half belongs to the calling thread alone and is done
// by mods_hooks_reset itself, coordinated or not.
void apply_reset_tables();
} // namespace
static void apply_remove_all(uint32_t owner);
namespace {
void apply_pending_locked();
}
namespace {

void publish(int32_t index) {
    Entry &e = entries()[index];
    bool any = !e.before.empty() || !e.after.empty() || !e.replace.empty();
    if (any) {
        // Pointer first, then the flag, both with release: a call site that
        // sees the flag is guaranteed to see the pointer.
        __atomic_store_n(&recomp_hook_ptrs[index], (RecompHookFn)mods_hook_dispatch,
                         __ATOMIC_RELEASE);
        __atomic_store_n(&recomp_hooked[index], (uint8_t)1, __ATOMIC_RELEASE);
    } else {
        // Removal clears the flag first; the pointer is left in place, which is
        // harmless because nothing reads it while the flag is clear.
        __atomic_store_n(&recomp_hooked[index], (uint8_t)0, __ATOMIC_RELEASE);
    }
}

// Which list a mode goes in. wrap and replace share one chain; only a second
// PLAIN replace is a conflict, which is why the mode is never rewritten.
std::vector<Hook> &chain_for(Entry &e, int32_t mode) {
    if (mode == POP_HOOK_BEFORE)
        return e.before;
    if (mode == POP_HOOK_AFTER)
        return e.after;
    return e.replace;
}

int bucket_of(int32_t mode) {
    return mode == POP_HOOK_BEFORE ? 0 : (mode == POP_HOOK_AFTER ? 1 : 2);
}

// The registry as the queue will leave it, for one address.
//
// Queued work is part of the registry state, not a separate world: a second
// replacement or a seventeenth hook must be refused at the moment it is asked
// even when neither it nor the one it collides with has been applied yet,
// because a status returned now and a failure discovered at the pump is a lie
// the caller cannot act on.
//
// Counting only the queued INSTALLS, which is what this replaced, is the same
// mistake read the other way round. A committed replacement with its removal
// already queued is not a conflict: the checkpoint frees the entry before it
// reaches the install, so refusing was a lie in the opposite direction, and a
// full chain with removals queued against it gave a false POP_E_LIMIT. So the
// answer is computed by replaying every pending operation - installs,
// removals by id, remove_all, reset - over the committed state, in the order
// they were accepted, which is the order the checkpoint will apply them in.
struct Effective {
    std::vector<Hook> chain[3];
};

Effective effective_for(uint32_t addr) {
    Effective out;
    int32_t index = recomp_index_of(addr);
    if (index >= 0) {
        Entry &e = entry_for(index);
        out.chain[0] = e.before;
        out.chain[1] = e.after;
        out.chain[2] = e.replace;
    }
    for (const Pending &p : pending()) {
        if (p.op == 0) {
            if (p.hook.addr == addr)
                out.chain[bucket_of(p.hook.mode)].push_back(p.hook);
        } else if (p.op == 1) {
            for (std::vector<Hook> &v : out.chain)
                v.erase(
                    std::remove_if(v.begin(), v.end(), [&](const Hook &h) { return h.id == p.id; }),
                    v.end());
        } else if (p.op == 2) {
            for (std::vector<Hook> &v : out.chain)
                v.erase(std::remove_if(v.begin(), v.end(),
                                       [&](const Hook &h) { return h.owner == p.hook.owner; }),
                        v.end());
        } else if (p.op == 3) {
            for (std::vector<Hook> &v : out.chain)
                v.clear();
        }
    }
    return out;
}

// Is this handle still a handle once the queue has been applied? Committed
// state replayed the same way: a removal already queued for it, a remove_all
// covering its owner, or a reset all leave it gone, and a second removal has
// to be told so rather than be accepted and turn into a no-op at the pump.
bool effective_handle_exists(uint32_t id, uint32_t *out_owner) {
    bool live = false;
    uint32_t owner = 0;
    for (const Entry &e : entries())
        for (const std::vector<Hook> *v : {&e.before, &e.after, &e.replace})
            for (const Hook &h : *v)
                if (h.id == id) {
                    live = true;
                    owner = h.owner;
                }
    for (const Pending &p : pending()) {
        if (p.op == 0) {
            if (p.hook.id == id) {
                live = true;
                owner = p.hook.owner;
            }
        } else if (p.op == 1) {
            if (p.id == id)
                live = false;
        } else if (p.op == 2) {
            if (live && owner == p.hook.owner)
                live = false;
        } else if (p.op == 3) {
            live = false;
        }
    }
    if (live && out_owner)
        *out_owner = owner;
    return live;
}

// True when something already queued would affect this entry, in which case an
// inline mutation on it must be queued BEHIND that rather than applied now.
//
// Applying the queue from inside another call, which is what this replaced,
// published every unrelated operation on it as a side effect: a queued reset
// would erase the caller's own earlier inline installs in the middle of an
// unrelated install. Queued work belongs to the scheduler's checkpoint and to
// nothing else; all an inline caller may do is get in line behind it.
//
// A queued removal names an id rather than an entry, and a queued reset or
// remove_all touches every entry, so both are taken to affect everything. That
// costs an unnecessary queue now and then and never costs correctness.
bool pending_affects(uint32_t addr) {
    for (const Pending &p : pending()) {
        if (p.op != 0)
            return true;
        if (p.hook.addr == addr)
            return true;
    }
    return false;
}

// Validation, separate from application, so a queued install is still checked
// the moment it is asked. Caller holds the registry lock.
PopModStatus validate_install(const Hook &h) {
    int32_t index = recomp_index_of(h.addr);
    if (index < 0)
        return POP_E_NOSYMBOL;
    const Effective eff = effective_for(h.addr);
    // A replacement wants the chain to itself, and a wrap already in it counts
    // - the two share one chain, which is why the mode is never rewritten.
    if (h.mode == POP_HOOK_REPLACE && !eff.chain[2].empty())
        return POP_E_CONFLICT;
    if (eff.chain[bucket_of(h.mode)].size() >= MODS_MAX_CHAIN)
        return POP_E_LIMIT;
    return POP_OK;
}

// Caller holds the registry lock and has already validated.
void apply_install(const Hook &h) {
    int32_t index = recomp_index_of(h.addr);
    Entry &e = entry_for(index);
    std::vector<Hook> &v = chain_for(e, h.mode);
    v.push_back(h);
    if (h.mode == POP_HOOK_BEFORE || h.mode == POP_HOOK_AFTER)
        std::stable_sort(v.begin(), v.end(), [](const Hook &a, const Hook &b) {
            return a.order != b.order ? a.order < b.order : a.seq < b.seq;
        });
    publish(index);
    ++g_installed;
}

bool erase_id(std::vector<Hook> &v, uint32_t id) {
    size_t before = v.size();
    v.erase(std::remove_if(v.begin(), v.end(), [&](const Hook &h) { return h.id == id; }), v.end());
    return v.size() != before;
}

} // namespace

namespace {
void apply_reset_tables() {
    // Native menu records belong to guest memory. Restore/free them only
    // where a queued reset has acquired the guest baton too.
    mods_options_reset();
    for (size_t i = 0; i < entries().size(); ++i) {
        entries()[i] = Entry();
        if (i < (size_t)recomp_func_count)
            __atomic_store_n(&recomp_hooked[i], (uint8_t)0, __ATOMIC_RELEASE);
    }
    pending().clear();
    order_of_owner().clear();
    cpu_size_of_owner().clear();
    g_installed = 0;
}
} // namespace

// Validate and register a hook owned by one mod at a recognized function/call site.
// Keep registration under the scheduler registry lock so publication is atomic to dispatch.
static PopModStatus install_hook(uint32_t owner, uint32_t addr, uint32_t return_pc, PopHookFn fn,
                                 int32_t mode, uint32_t flags, void *user, uint32_t *out_id) {
    if (!fn || !out_id)
        return POP_E_INVAL;
    *out_id = 0;
    if (flags & ~POP_HOOK_NO_GAME_VIEW)
        return POP_E_INVAL;
    if (recomp_index_of(addr) < 0)
        return POP_E_NOSYMBOL;
    // Being in the dispatch table is not enough: only a listed function start
    // or a named alternate entry has a stable cross-build meaning.
    if (!mods_symbol_hookable(addr))
        return POP_E_NOSYMBOL;
    if (mode != POP_HOOK_BEFORE && mode != POP_HOOK_AFTER && mode != POP_HOOK_REPLACE &&
        mode != POP_HOOK_WRAP)
        return POP_E_INVAL;

    Hook h;
    h.owner = owner;
    h.order = order_of(owner);
    h.addr = addr;
    h.return_pc = return_pc;
    h.flags = flags;
    h.mode = mode; // wrap stays wrap, all the way through
    h.fn = fn;
    h.user = user;

    // "mod popre.widescreen hook on 004ec6f0 (before)". The mod's ID, because
    // a crash report saying "mod 3" names nothing anyone can act on. Interned
    // once and never formatted again, so a fault handler can print it.
    const PopModApi *api = mods_api_for(owner);
    char buf[128];
    const char *what = (mode == POP_HOOK_BEFORE)  ? "before"
                       : (mode == POP_HOOK_AFTER) ? "after"
                       : (mode == POP_HOOK_WRAP)  ? "wrap"
                                                  : "replace";
    snprintf(buf, sizeof buf, "mod %s hook on %08x (%s)", api && api->mod_id ? api->mod_id : "?",
             addr, what);

    sched_registry_lock();
    if (g_next_id > 0xffffu) {
        sched_registry_unlock();
        return POP_E_LIMIT;
    }
    h.id = g_next_id;
    h.seq = g_seq + 1;
    PopModStatus st = validate_install(h); // synchronous, either way
    if (st != POP_OK) {
        sched_registry_unlock();
        return st;
    }
    ++g_next_id;
    ++g_seq;
    h.desc = mods_intern_desc(buf);
    // The locked form, because this is under the registry lock and the two
    // share the scheduler's one non-recursive mutex. Asking here rather than
    // above the lock also means the answer and the decision it drives are
    // taken at the same instant, under the same lock, so the correctness of
    // this branch is local to it rather than resting on a scheduling property
    // argued for in a comment.
    if (sched_holds_baton_locked() && !pending_affects(h.addr)) {
        apply_install(h);
    } else {
        // Either no baton - the tables belong to whichever guest thread is
        // running - or something queued already touches this entry and this
        // must not jump ahead of it. Validation has already run against
        // committed plus pending state, so the status the caller gets is the
        // truth either way.
        pending().push_back({0, h, 0});
    }
    sched_registry_unlock();
    *out_id = h.id;
    return POP_OK;
}

PopModStatus mods_hook_install(uint32_t owner, uint32_t addr, PopHookFn fn, int32_t mode,
                               void *user, uint32_t *out_id) {
    return install_hook(owner, addr, 0, fn, mode, 0, user, out_id);
}

PopModStatus mods_hook_install_ex(uint32_t owner, uint32_t addr, uint32_t return_pc, PopHookFn fn,
                                  int32_t mode, uint32_t flags, void *user, uint32_t *out_id) {
    return install_hook(owner, addr, return_pc, fn, mode, flags, user, out_id);
}

PopModStatus mods_hook_install_at_callsite(uint32_t owner, uint32_t addr, uint32_t return_pc,
                                           PopHookFn fn, int32_t mode, void *user,
                                           uint32_t *out_id) {
    if (!return_pc) {
        if (out_id)
            *out_id = 0;
        return POP_E_INVAL;
    }
    return install_hook(owner, addr, return_pc, fn, mode, 0, user, out_id);
}

// Remove a hook only when its handle belongs to the requesting mod.
// Queued installs can be canceled before publication without changing another invocation.
PopModStatus mods_hook_remove(uint32_t owner, uint32_t id) {
    sched_registry_lock();
    // The handle has to be THIS caller's.
    //
    // Handles are small integers from one sequence, so a mod that guesses or
    // reuses one could otherwise remove another mod's hook, or one of the
    // runtime's own event hooks. Nothing would put it back: a rollback undoes
    // what the failing mod registered, and this is a removal of something it
    // never registered. A foreign handle is simply not found, which is the
    // truth from where the caller stands.
    uint32_t holder = 0;
    if (!effective_handle_exists(id, &holder) || holder != owner) {
        sched_registry_unlock();
        return POP_E_NOTFOUND;
    }
    // A queued install has not been published, so cancelling it needs no
    // baton and leaves nothing behind. Without this a removal reported success
    // while the install it was meant to undo went on to publish at the pump.
    for (auto it = pending().begin(); it != pending().end(); ++it) {
        if (it->op == 0 && it->hook.id == id) {
            pending().erase(it);
            sched_registry_unlock();
            return POP_OK;
        }
    }
    if (!sched_holds_baton_locked() || !pending().empty()) {
        // Queued behind whatever is already there, for the same reason an
        // install is: the order operations were accepted in is the order they
        // are applied in, and nothing here may publish somebody else's work.
        pending().push_back({1, Hook(), id});
        sched_registry_unlock();
        return POP_OK;
    }
    for (size_t i = 0; i < entries().size(); ++i) {
        Entry &e = entries()[i];
        // Visit every phase even if an earlier list contained the hook.
        const bool removed_before = erase_id(e.before, id);
        const bool removed_after = erase_id(e.after, id);
        const bool removed_replace = erase_id(e.replace, id);
        if (removed_before || removed_after || removed_replace) {
            publish((int32_t)i);
            --g_installed;
            break;
        }
    }
    sched_registry_unlock();
    return POP_OK;
}

namespace {
// Applies everything queued, in the order it was accepted. Caller holds the
// registry lock AND the baton.
//
// An inline mutation drains this first, so acceptance order and application
// order are the same thing. Without that, an install accepted while something
// was queued could be validated against a registry the queue had not reached
// yet, and the pump would then reject what validation had already accepted -
// which is the one thing a synchronous status is supposed to rule out.
void apply_pending_locked() {
    if (pending().empty())
        return;
    std::vector<Pending> work;
    work.swap(pending());
    for (Pending &p : work) {
        if (p.op == 0) {
            // Re-checked: the registry may have moved since it was queued.
            if (validate_install(p.hook) == POP_OK)
                apply_install(p.hook);
            else
                LOGW("mods: queued install of %s no longer applies", p.hook.desc);
        } else if (p.op == 2) {
            apply_remove_all(p.hook.owner);
        } else if (p.op == 3) {
            apply_reset_tables();
        } else {
            for (size_t i = 0; i < entries().size(); ++i) {
                Entry &e = entries()[i];
                if (erase_id(e.before, p.id) || erase_id(e.after, p.id) ||
                    erase_id(e.replace, p.id)) {
                    publish((int32_t)i);
                    --g_installed;
                    break;
                }
            }
        }
    }
}
} // namespace

// Applies the queue once, before the guest entry point runs.
//
// A hook installed during pop_mod_init is queued, because the thread running
// the loader is not a guest thread and so holds no baton. Without this it
// would stay inert until the first scheduler checkpoint, which is after the
// entry point has been called - so a hook on the entry symbol itself could
// never fire, and a hook on anything the first frame touches would miss it.
//
// This is the one situation in which applying queued work without the baton is
// safe, because no guest thread exists yet and nothing is dispatching through
// the tables. That is asserted rather than assumed: asked at any other time it
// refuses and leaves the queue for the checkpoint, because publishing under a
// running dispatcher is exactly what the baton rule exists to prevent.
void mods_registry_pump_preentry(void) {
    // Check and publish under ONE acquisition of the scheduler's mutex.
    // Asking first and locking afterwards left a window in which a guest
    // thread could be created between the answer and the mutation it
    // authorised, which is the same publication-under-a-running-dispatcher
    // this is supposed to refuse.
    sched_registry_lock();
    // Two questions, because one of them alone is not the answer.
    // sched_guest_threads_stopped_locked() reports on SPAWNED threads, and the
    // main guest is not spawned: after entry it would keep saying "stopped"
    // while the guest's own entry point ran, and this would publish under it,
    // repeatedly. Guest entry having begun at all is the other half, and it is
    // monotone, which is what makes this one-shot in the way that matters -
    // once the guest is running, no later call can ever be granted.
    bool safe = !sched_guest_entry_begun_locked() && sched_guest_threads_stopped_locked();
    if (safe)
        apply_pending_locked();
    sched_registry_unlock();
    if (!safe)
        LOGW("mods: pre-entry pump asked for after guest entry or while a guest "
             "thread is running; refusing, so the queue waits for a checkpoint");
}

void mods_registry_pump(void) {
    // The tables may only change under a thread that holds the baton, and the
    // queue may only be read under the lock: an unlocked empty() check races
    // the very push it is trying to notice.
    //
    // This one asks BEFORE the lock, and deliberately keeps the plain form:
    // the scheduler calls it at every checkpoint, so the common answer is "not
    // the baton holder, do nothing", and taking the scheduler's mutex to reach
    // that answer would put a lock on the hottest path in the scheduler. No
    // lock is held here, so the plain form is the correct one to use.
    if (!sched_holds_baton())
        return;
    sched_registry_lock();
    apply_pending_locked();
    sched_registry_unlock();
}

// The body of remove_all, for a caller that holds the registry lock and the
// baton. Split out so the queued form applies exactly the same thing.
static void apply_remove_all(uint32_t owner) {
    for (size_t i = 0; i < entries().size(); ++i) {
        Entry &e = entries()[i];
        size_t before = e.before.size() + e.after.size() + e.replace.size();
        auto by_owner = [&](const Hook &h) { return h.owner == owner; };
        e.before.erase(std::remove_if(e.before.begin(), e.before.end(), by_owner), e.before.end());
        e.after.erase(std::remove_if(e.after.begin(), e.after.end(), by_owner), e.after.end());
        e.replace.erase(std::remove_if(e.replace.begin(), e.replace.end(), by_owner),
                        e.replace.end());
        size_t after = e.before.size() + e.after.size() + e.replace.size();
        g_installed -= (uint32_t)(before - after);
        publish((int32_t)i);
    }
    for (auto it = pending().begin(); it != pending().end();)
        it = (it->op == 0 && it->hook.owner == owner) ? pending().erase(it) : it + 1;
}

void mods_hooks_remove_all(uint32_t owner) {
    sched_registry_lock();
    if (sched_holds_baton_locked() && pending().empty()) {
        apply_remove_all(owner);
    } else {
        // A bulk mutation publishes exactly as a single one does, so it needs
        // the same coordination: the tables belong to whichever guest thread
        // is dispatching through them. The queued installs of this owner are
        // dropped now because nothing has published them, and the rest waits
        // for the run thread's checkpoint.
        for (auto it = pending().begin(); it != pending().end();)
            it = (it->op == 0 && it->hook.owner == owner) ? pending().erase(it) : it + 1;
        Pending p;
        p.op = 2;
        p.hook.owner = owner;
        p.id = 0;
        pending().push_back(p);
    }
    sched_registry_unlock();
}

void mods_hooks_set_load_order(uint32_t owner, uint32_t order) {
    if (order_of_owner().size() <= owner)
        order_of_owner().resize(owner + 1, owner);
    order_of_owner()[owner] = order;
}

void mods_hooks_set_cpu_size(uint32_t owner, uint32_t cpu_size) {
    if (cpu_size_of_owner().size() <= owner)
        cpu_size_of_owner().resize(owner + 1, 0);
    cpu_size_of_owner()[owner] = cpu_size;
}

uint32_t mods_hooks_installed_count() {
    return g_installed;
}

void mods_hooks_reset() {
    sched_registry_lock();
    if (sched_holds_baton_locked() && pending().empty()) {
        apply_reset_tables();
    } else {
        // Same rule as every other mutation that publishes. A queued reset
        // supersedes whatever else was waiting, so the queue is emptied first
        // and the reset is the only thing left in it.
        pending().clear();
        Pending p;
        p.op = 3;
        p.id = 0;
        pending().push_back(p);
    }
    sched_registry_unlock();
    t_stack.depth = 0;
    t_stack.active = nullptr;
    mods_view_reset();
    mods_sprite_reset();
    mods_animation_reset();
    mods_game_settings_reset();
    // The events module installed hooks of its own and remembers that it did;
    // a registry holding nothing must not leave it believing otherwise.
    mods_events_reset();
}

uint32_t mods_hook_depth() {
    return t_stack.depth;
}

#ifdef POPM_TESTING
void mods_hooks_set_test_cpu_buffer(void *buf, uint32_t bytes) {
    g_test_cpu = (uint8_t *)buf;
    g_test_cpu_bytes = bytes;
}
#endif

// ------------------------------------------------------------- delegation

// Run a guest function from inside a hook, on a scratch stack below the
// hooked frame, and put every register back afterwards.
PopModStatus mods_guest_call(const PopModApi *api, uint32_t addr, uint32_t ecx,
                             const uint32_t *args, uint32_t nargs, uint32_t *out_eax) {
    (void)api;
    if (!t_stack.depth)
        return POP_E_STATE;
    // IAT entries point at allocated runtime trampolines, not translated
    // functions. Permit those entries while rejecting arbitrary addresses.
    if (recomp_index_of(addr) < 0 && !imports_describe(addr))
        return POP_E_NOSYMBOL;
    if (nargs > 16 || (nargs && !args))
        return POP_E_INVAL;
    X86 *c = t_stack.frames[t_stack.depth - 1].cpu;
    X86 saved = *c;
    uint32_t esp = (c->r[R_ESP] - 512u) & ~3u;
    esp -= 4u * nargs;
    for (uint32_t i = 0; i < nargs; ++i)
        wr32(esp + 4u * i, args[i]);
    esp -= 4;
    wr32(esp, GUEST_RETURN_SENTINEL);
    c->r[R_ESP] = esp;
    c->r[R_ECX] = ecx;
    recomp_call(c, addr);
    uint32_t eax = c->r[R_EAX];
    *c = saved;
    if (out_eax)
        *out_eax = eax;
    return POP_OK;
}

PopModStatus mods_call_original(const PopModApi *api, uint32_t addr, pop_cpu_v1 *cpu) {
    (void)api;
    if (!t_stack.depth)
        return POP_E_STATE;
    PopHookInvocation *inv = &t_stack.frames[t_stack.depth - 1];
    if (inv->phase == POP_PHASE_AFTER)
        return POP_E_STATE;
    if (recomp_index_of(addr) < 0)
        return POP_E_NOSYMBOL;
    if (inv->base_ran || inv->ret_done)
        return POP_E_REENTRY;
    uint32_t bound = inv->cur_bound;
    if (cpu)
        x86_from_cpu(inv->cpu, cpu, bound);
    // Bypasses recomp_hook_ptrs on purpose: this is the original. Calls it
    // makes internally still go through normal generated call sites.
    inv->base_ran = 1;
    recomp_base_ptrs[recomp_index_of(addr)](inv->cpu);
    // A hook reached inside the original may have unwound past this frame.
    // Refreshing the caller's view then would write through an invocation the
    // thread no longer has.
    if (!inv_is_live(inv))
        return POP_OK;
    inv->ret_done = 1;
    // Refreshed with after_ret: the guest RET happened inside the original, so
    // eip is the caller's return address and must not be reset to the entry.
    // The callback may still edit the result, and the dispatcher commits that
    // through the results-only path when it returns.
    if (cpu)
        cpu_from_x86(inv->cpu, cpu, inv->addr, inv->phase, bound, true);
    return POP_OK;
}

// Delegate from a replacement hook to the remaining chain or original function.
// Reject repeated/after-phase delegation and stop committing state if an unwind abandoned the call.
PopModStatus mods_call_next(const PopModApi *api, PopHookInvocation *inv, pop_cpu_v1 *cpu) {
    (void)api;
    if (!inv || !t_stack.depth)
        return POP_E_INVAL;
    if (inv->phase == POP_PHASE_AFTER)
        return POP_E_STATE;
    if (inv->ret_done)
        return POP_E_REENTRY;
    uint32_t bound = inv->cur_bound;
    if (cpu)
        x86_from_cpu(inv->cpu, cpu, bound);
    if (inv->replace_pos == 0) {
        if (inv->base_ran)
            return POP_E_REENTRY;
        run_base(inv);
        if (!inv_is_live(inv))
            return POP_OK;
    } else {
        const HookRef h = inv->replace[--inv->replace_pos];
        uint8_t storage[sizeof(pop_cpu_v1)];
        pop_cpu_v1 *next = (pop_cpu_v1 *)storage;
        cpu_from_x86(inv->cpu, next, inv->addr, POP_PHASE_REPLACE, h.bound);
        uint32_t saved_bound = inv->cur_bound;
        run_one(inv, h, next);
        // Abandoned from inside the inner callback: this frame is gone, so
        // nothing may be committed through it and the base must not run.
        if (!inv_is_live(inv))
            return POP_OK;
        inv->cur_bound = saved_bound;
        if (!inv->ret_done) {
            x86_from_cpu(inv->cpu, next, h.bound);
            run_base(inv);
            if (!inv_is_live(inv))
                return POP_OK;
        } else {
            // The inner callback returned or delegated, and may have edited
            // the result afterwards. Committing only the results is the same
            // rule the dispatcher uses once the RET has happened; without it
            // the inner hook's edit is dropped and never reaches the outer
            // callback or the after hooks.
            x86_after_return(inv->cpu, next, h.bound);
        }
        ++inv->replace_pos;
    }
    // Same rule as call_original: the RET is done, so the refresh reports the
    // return address rather than pretending the callee has not been entered.
    if (cpu)
        cpu_from_x86(inv->cpu, cpu, inv->addr, inv->phase, bound, true);
    return POP_OK;
}

PopModStatus mods_hook_return(const PopModApi *api, pop_cpu_v1 *cpu, uint32_t eax,
                              uint32_t arg_bytes) {
    (void)api;
    if (!t_stack.depth)
        return POP_E_STATE;
    PopHookInvocation *inv = &t_stack.frames[t_stack.depth - 1];
    // An after hook runs once the RET has already happened: it may only edit
    // committed results.
    if (inv->phase == POP_PHASE_AFTER)
        return POP_E_STATE;
    if (inv->ret_done)
        return POP_E_REENTRY;
    X86 *c = inv->cpu;
    uint32_t bound = inv->cur_bound;
    if (cpu)
        x86_from_cpu(c, cpu, bound);
    c->r[R_EAX] = eax;
    // The guest RET: EIP from [ESP], then ESP += 4 + arg_bytes. arg_bytes is
    // the callee's stdcall cleanup size, 0 for cdecl, and is the mod's to know.
    c->eip = rd32(c->r[R_ESP]);
    c->r[R_ESP] += 4u + arg_bytes;
    inv->ret_done = 1;
    // The callback's own view has to agree with what just happened, because
    // the dispatcher commits results from it when this callback returns. Left
    // stale, that copy-back would overwrite the result the caller asked for
    // with whatever was in the buffer beforehand - which is zero.
    if (cpu) {
        if (offsetof(pop_cpu_v1, eax) + 4 <= bound)
            cpu->eax = eax;
        if (offsetof(pop_cpu_v1, eip) + 4 <= bound)
            cpu->eip = c->eip;
        if (offsetof(pop_cpu_v1, esp) + 4 <= bound)
            cpu->esp = c->r[R_ESP];
    }
    return POP_OK;
}

// ---------------------------------------------------------------- unwind

void mods_hooks_unwind_to_esp(uint32_t esp) {
    bool dropped = false;
    uint32_t keep_views = mods_view_depth();
    while (t_stack.depth && t_stack.frames[t_stack.depth - 1].esp_at_entry < esp) {
        // Every abandoned frame remembers how many snapshots existed before it
        // began, so an outer invocation keeps the view it is still using.
        keep_views = t_stack.frames[t_stack.depth - 1].view_depth;
        --t_stack.depth;
        dropped = true;
    }
    if (dropped) {
        mods_view_truncate(keep_views);
        // A real guest longjmp never runs run_one's restore, so attribution
        // would otherwise keep naming the abandoned callback and a later crash
        // would blame the wrong mod. The surviving frame knows what is running
        // in it, which is the answer.
        t_stack.active = t_stack.depth ? t_stack.frames[t_stack.depth - 1].active_desc : nullptr;
    }
    if (!t_stack.depth)
        t_stack.active = nullptr;
    // A guest longjmp jumped over hook frames. Anything a callback in one of
    // those frames had open is now unreachable: its own cleanup code will
    // never run, because the jump went straight past it. The capture harness
    // is the case that matters, since it leaves the whole guest arena
    // inaccessible and a fault handler installed, and a run that lost those
    // would not survive its next guest memory access. The harness checks the
    // current thread and surviving depth before cancelling its owning frame.
    // Weak, so a build without the harness links and does nothing here.
    if (dropped)
        mods_capture_unwound();
}

void mods_fill_hooks_api(PopModApi *api) {
    api->hook_install_ex = [](const PopModApi *a, uint32_t addr, uint32_t return_pc, PopHookFn fn,
                              int32_t mode, uint32_t flags, void *user, uint32_t *out_id) {
        return mods_hook_install_ex(a->mod_index, addr, return_pc, fn, mode, flags, user, out_id);
    };
    api->hook_install_at_callsite = [](const PopModApi *a, uint32_t addr, uint32_t return_pc,
                                       PopHookFn fn, int32_t mode, void *user, uint32_t *out_id) {
        return mods_hook_install_at_callsite(a->mod_index, addr, return_pc, fn, mode, user, out_id);
    };
    api->hook_install = [](const PopModApi *a, uint32_t addr, PopHookFn fn, int32_t mode,
                           void *user, uint32_t *out_id) {
        return mods_hook_install(a->mod_index, addr, fn, mode, user, out_id);
    };
    api->hook_remove = [](const PopModApi *a, uint32_t id) {
        return mods_hook_remove(a->mod_index, id);
    };
    api->call_original = mods_call_original;
    api->guest_call = mods_guest_call;
    api->call_next = mods_call_next;
    api->hook_return = mods_hook_return;
}

// Task 6 owns hook eligibility and Task 8 owns the game view; both are weak
// here so this task's tests link in its own wave, and the owning module's
// definition wins in every build that has one.
extern "C" __attribute__((weak)) bool mods_symbol_hookable(uint32_t addr) {
    return recomp_index_of(addr) >= 0 && addr != 0x0055dafcu && addr != 0x0055db78u;
}
// Defined for real by mods/capture_seam.cpp when the capture
// harness is linked in. See the call site in mods_hooks_unwind_to_esp.
extern "C" __attribute__((weak)) void mods_capture_unwound(void) {}
extern "C" __attribute__((weak)) void mods_view_push(void) {}
extern "C" __attribute__((weak)) void mods_view_push_disabled(void) {}
extern "C" __attribute__((weak)) void mods_view_pop(void) {}
extern "C" __attribute__((weak)) void mods_view_reset(void) {}
extern "C" __attribute__((weak)) uint32_t mods_view_depth(void) {
    return 0;
}
extern "C" __attribute__((weak)) void mods_view_truncate(uint32_t) {}
extern "C" __attribute__((weak)) void mods_events_reset(void) {}

// Entry stacks belong to the existing unwind-aware invocation stack. Sprite
// provenance never keeps a separate "current entity" that a longjmp can leak.
uint32_t mods_hook_ancestor_stack(uint32_t addr) {
    for (uint32_t i = t_stack.depth; i; --i)
        if (t_stack.frames[i - 1].addr == addr)
            return t_stack.frames[i - 1].esp_at_entry;
    return 0;
}
