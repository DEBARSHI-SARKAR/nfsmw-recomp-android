// page_track.cpp - see page_track.h.
//
// SIGNAL SAFETY. The handler runs on whichever thread faulted. Everything it
// touches is preallocated in begin(): there is no allocation, no lock and no
// container growth in the handler, because none of those is safe there and a
// capture harness that deadlocks inside a fault is worse than one that cannot
// run at all. The page table is a flat array indexed by page number, so
// recording a touch is two stores and a memcpy.
#include "page_track.h"
#include "../../runtime/guest.h"

#include <atomic>
#include <signal.h>
#if defined(__linux__) || defined(__ANDROID__)
#include <sys/ucontext.h>
#endif
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/mman.h>
#include <pthread.h>
#include <sched.h>
#include "../../platform/os.h"

namespace pop_pagetrack {
namespace {

size_t g_page = 0;
size_t g_pages_total = 0;   // pages in the arena
size_t g_max_pages = 0;     // the bound the capture may not exceed
uint8_t *g_entry = nullptr; // max_pages * page, the entry snapshots
Touch *g_touch = nullptr;   // max_pages entries, in first-touch order

// SHARED BETWEEN FAULT HANDLERS ON DIFFERENT THREADS, so every one of these is
// an atomic and not a `volatile`. volatile orders nothing and makes nothing
// indivisible: two threads faulting on two different pages at the same moment
// both read the same g_touched, both wrote their snapshot into the same slot,
// and one page vanished from a capture that end() then called clean. The claim
// this module exists to make is that the page set is complete, so that is not
// a tolerable race.
//
// Every operation below is lock-free on arm64 and therefore usable from a
// signal handler; a mutex would not be. The per-page state is a compare-exchange
// so that exactly one thread wins the right to snapshot a page, and the slot
// index is a fetch-add so two winners never get the same slot.
//
//   state 0 untouched, 1 claimed (snapshot in progress), 2 read, 3 read-write
std::atomic<uint8_t> *g_state = nullptr; // per arena page
std::atomic<uint32_t> *g_slot = nullptr; // arena page -> g_entry index, or ~0
std::atomic<size_t> g_touched{0};
std::atomic<bool> g_active{false};
std::atomic<bool> g_overflow{false};
std::atomic<bool> g_unattributed{false};
std::atomic<unsigned> g_in_flight{0};

// A retry belongs to the faulting thread as well as the page and state: one
// global bit would mistake the second concurrent loser for a repeat fault.
// Preallocate the bits and identity slots so even a thread's first fault needs
// no TLS allocation. Darwin's pthread_self() only reads the thread pointer.
// Rows live until end(), so a later thread can reuse an exited thread's key.
// We cannot distinguish that from a repeat on the original thread: refuse
// conservatively and name the reused retry identity in the diagnostic.
constexpr size_t kRetryThreads = 256;
std::atomic<uintptr_t> g_retry_owner[kRetryThreads]{};
uint8_t *g_retry = nullptr; // two bits per page per faulting thread
size_t g_retry_stride = 0;
std::atomic<bool> g_retry_overflow{false};
std::atomic<bool> g_retry_reused{false};

bool repeat_grant(size_t page, uint8_t state) {
    const uintptr_t self = (uintptr_t)pthread_self();
    for (size_t i = 0; i < kRetryThreads; ++i) {
        uintptr_t owner = g_retry_owner[i].load(std::memory_order_relaxed);
        if (!owner)
            g_retry_owner[i].compare_exchange_strong(owner, self);
        if (owner && owner != self)
            continue;
        uint8_t &bits = g_retry[i * g_retry_stride + page / 4];
        const uint8_t bit = (uint8_t)(1u << (2 * (page % 4) + state - 2));
        const bool repeat = (bits & bit) != 0;
        bits |= bit;
        if (repeat)
            g_retry_reused.store(true, std::memory_order_release);
        return repeat;
    }
    g_retry_overflow.store(true, std::memory_order_release);
    return true; // refuse rather than retry a foreign fault indefinitely
}

#ifdef POPM_TESTING
// A test can hold a real fault immediately before its first mprotect, making
// the otherwise timing-dependent end()/handler overlap deterministic.
std::atomic<void (*)(size_t)> g_before_snapshot{nullptr};
#endif

struct sigaction g_old_segv, g_old_bus;

// Was this a write? On arm64 the exception syndrome register's WnR bit says
// so directly, which is the whole answer and needs no decoding.
//
// The plan's amendment says to decode the faulting instruction with the
// runtime's x86 decoder. That cannot be done here: the code that faults is
// this host's own arm64 instructions, translated from x86 ahead of time, so
// there is no x86 instruction at the fault to decode. The syndrome register is
// the hardware's own classification of the same access and is exact.
bool fault_was_write(void *ctx) {
#if defined(__aarch64__) && defined(__APPLE__)
    ucontext_t *uc = (ucontext_t *)ctx;
    if (!uc || !uc->uc_mcontext)
        return false;
    const uint64_t esr = uc->uc_mcontext->__es.__esr;
    // EC 0x24/0x25 is a data abort; bit 6 of ISS is WnR.
    const uint64_t ec = (esr >> 26) & 0x3f;
    if (ec != 0x24 && ec != 0x25)
        return false;
    return (esr & (1u << 6)) != 0;
#elif defined(__aarch64__) && (defined(__linux__) || defined(__ANDROID__))
    ucontext_t *uc = (ucontext_t *)ctx;
    if (!uc)
        return false;
    const uint8_t *p = (const uint8_t *)uc->uc_mcontext.__reserved;
    const uint8_t *end = p + sizeof uc->uc_mcontext.__reserved;
    while (end - p >= 8) {
        struct {
            uint32_t magic;
            uint32_t size;
        } header;
        memcpy(&header, p, sizeof header);
        if (header.magic == 0 || header.size < 8 || header.size > (size_t)(end - p))
            break;
        // ESR_MAGIC identifies the kernel's esr_context record.
        if (header.magic == 0x45535201 && header.size >= 16) {
            uint64_t esr;
            memcpy(&esr, p + 8, sizeof esr);
            const uint64_t ec = (esr >> 26) & 0x3f;
            if (ec != 0x24 && ec != 0x25)
                return false;
            return (esr & (1u << 6)) != 0;
        }
        p += header.size;
    }
    return false;
#else
    (void)ctx;
    return false;
#endif
}

void forward_fault(int sig, siginfo_t *info, void *ctx) {
    // Not ours: a real fault, which must report the way it always did.
    //
    // Call the previous handler directly rather than reinstalling it and
    // returning. Reinstalling would uninstall THIS handler, and every page
    // of the arena is still inaccessible, so the next guest access would
    // hit an unhandled fault and kill the process for a reason that has
    // nothing to do with the fault that arrived. One stray address outside
    // the arena must not disarm tracking.
    struct sigaction *old = (sig == SIGBUS) ? &g_old_bus : &g_old_segv;
    if ((old->sa_flags & SA_SIGINFO) && old->sa_sigaction) {
        old->sa_sigaction(sig, info, ctx);
        return;
    }
    if (old->sa_handler && old->sa_handler != SIG_DFL && old->sa_handler != SIG_IGN) {
        old->sa_handler(sig);
        return;
    }
    // No handler to defer to: restore the default and let the access
    // retry into it, which ends the process the way it would have anyway.
    sigaction(sig, old, nullptr);
    return;
}

// Handle a fault in a tracked guest page, capturing its first-touch state before restoring access.
// Only preallocated signal-safe state is available here; unrelated faults go to the previous handler.
void handler(int sig, siginfo_t *info, void *ctx) {
    // Entry and the active test are sequentially consistent with end(): once
    // end sees zero, no later entrant can still observe active == true.
    g_in_flight.fetch_add(1);
    struct Flight {
        bool counted = true;
        void leave() {
            if (counted) {
                g_in_flight.fetch_sub(1);
                counted = false;
            }
        }
        ~Flight() {
            leave();
        }
    } flight;
    uint8_t *addr = (uint8_t *)(info ? info->si_addr : nullptr);
    const bool arena = g_mem && addr && addr >= g_mem && addr < g_mem + GUEST_SIZE;
    const bool tracking = g_active.load();
    if (!arena) {
        // A previous handler may longjmp and never run C++ destructors.
        flight.leave();
        forward_fault(sig, info, ctx);
        return;
    }
    // During teardown the arena may still be protected. Let this access retry
    // until end restores it; forwarding here would kill a valid guest access.
    if (!tracking)
        return;

    const size_t page_no = (size_t)(addr - g_mem) / g_page;
    uint8_t *page = g_mem + page_no * g_page;
    const bool write = fault_was_write(ctx);

    uint8_t expected = 0;
    if (g_state[page_no].compare_exchange_strong(expected, 1, std::memory_order_acq_rel)) {
        // This thread and no other now owns the first touch of this page.
        const size_t slot = g_touched.fetch_add(1, std::memory_order_acq_rel);
        if (slot >= g_max_pages) {
            // Over the bound. Grant everything so the run can finish and be
            // rejected cleanly rather than faulting for ever. The counter is
            // left past the bound on purpose: end() reads it to say so.
            g_overflow.store(true, std::memory_order_release);
            mprotect(page, g_page, PROT_READ | PROT_WRITE);
            g_state[page_no].store(3, std::memory_order_release);
            return;
        }
        // The page's contents before the candidate touched it. Reading them
        // needs access, so it is granted, copied, then narrowed again to what
        // this access actually needs. Another thread faulting on this same
        // page meanwhile finds state 1 and spins below rather than proceeding
        // on a half-written snapshot.
#ifdef POPM_TESTING
        if (auto before = g_before_snapshot.load())
            before(page_no);
#endif
        mprotect(page, g_page, PROT_READ);
        memcpy(g_entry + slot * g_page, page, g_page);
        g_slot[page_no].store((uint32_t)slot, std::memory_order_release);
        g_touch[slot].address = (uint32_t)(page - g_mem);
        g_touch[slot].read = !write;
        g_touch[slot].written = write;
        g_touch[slot].entry = g_entry + slot * g_page;
        if (write)
            mprotect(page, g_page, PROT_READ | PROT_WRITE);
        // Published last: until this store lands the page is state 1, and a
        // second thread waits rather than reading a slot that is not filled in.
        g_state[page_no].store(write ? 3 : 2, std::memory_order_release);
        return;
    }

    // Another thread is between the claim and the publish for this page. Wait
    // for it rather than act on a snapshot that is not finished. This is a
    // handful of instructions on the other thread and it cannot deadlock: the
    // claimer never waits on anything.
    while (expected == 1) {
        expected = g_state[page_no].load(std::memory_order_acquire);
    }

    if ((!write && (expected == 2 || expected == 3)) || (write && expected == 3)) {
        // The winner has already granted this access. Its signal was queued
        // before that grant, so return and retry once for this thread/page/
        // state. A second fault with the same identity may be foreign, or a
        // new thread may have inherited an exited thread's pthread key.
        if (!repeat_grant(page_no, expected))
            return;
        g_unattributed.store(true, std::memory_order_release);
        flight.leave();
        forward_fault(sig, info, ctx);
        return;
    }

    if (expected == 2 && write) {
        // Read-granted and now written: the second fault this design exists to
        // get, and the one that makes a read-then-write page attributable.
        // Claim the upgrade too, so simultaneous writers never race on the
        // non-atomic Touch fields. State 1 also makes other writers wait.
        if (!g_state[page_no].compare_exchange_strong(expected, 1))
            return;
        const uint32_t slot = g_slot[page_no].load(std::memory_order_acquire);
        if (slot != 0xffffffffu)
            g_touch[slot].written = true;
        mprotect(page, g_page, PROT_READ | PROT_WRITE);
        // Only the thread that moves it out of 2 does the work; a second
        // writer finds 3 below and is already served.
        g_state[page_no].store(3, std::memory_order_release);
        return;
    }

    // Already read-write and still faulting: not something this tracker did.
    g_unattributed.store(true, std::memory_order_release);
    mprotect(page, g_page, PROT_READ | PROT_WRITE);
}

} // namespace

size_t page_size() {
    return g_page ? g_page : (size_t)getpagesize();
}
bool active() {
    return g_active.load(std::memory_order_acquire);
}
#ifdef POPM_TESTING
void test_before_snapshot(void (*hook)(size_t)) {
    g_before_snapshot.store(hook);
}
#endif

// Begin a bounded first-touch capture window for test-only native replacement validation.
// Allocate all handler storage before protecting pages; active windows cannot be nested.
bool begin(size_t max_pages) {
    if (g_active.load(std::memory_order_acquire) || !g_mem || !max_pages)
        return false;
    const char *testing = recomp_env("TESTING");
    if (!testing || !*testing)
        return false;

    // The previous window's buffers, released here and not in end(): the Touch
    // entries end() hands out point into g_entry, so the caller must be able to
    // read them after the window has closed. The next window is the first
    // moment they are certainly finished with.
    free(g_state);
    free(g_slot);
    free(g_entry);
    free(g_touch);
    free(g_retry);
    g_state = nullptr;
    g_slot = nullptr;
    g_entry = nullptr;
    g_touch = nullptr;

    g_page = (size_t)getpagesize();
    g_pages_total = (size_t)GUEST_SIZE / g_page;
    g_max_pages = max_pages;
    g_retry_stride = (g_pages_total + 3) / 4;
    g_retry = (uint8_t *)calloc(kRetryThreads, g_retry_stride);
    for (auto &owner : g_retry_owner)
        owner.store(0, std::memory_order_relaxed);

    // Everything the handler can touch, allocated now: nothing below is safe
    // to do from inside a fault.
    // calloc gives the all-zero object representation, which for these atomic
    // types is the value zero; they are then written only through atomic
    // operations. The slot table is filled with the "no slot" marker one entry
    // at a time because memset over an atomic array is not defined to produce
    // a valid value.
    g_state = (std::atomic<uint8_t> *)calloc(g_pages_total, sizeof(std::atomic<uint8_t>));
    g_slot = (std::atomic<uint32_t> *)calloc(g_pages_total, sizeof(std::atomic<uint32_t>));
    g_entry = (uint8_t *)malloc(max_pages * g_page);
    g_touch = (Touch *)calloc(max_pages, sizeof(Touch));
    if (!g_state || !g_slot || !g_entry || !g_touch || !g_retry) {
        free(g_state);
        free(g_slot);
        free(g_entry);
        free(g_touch);
        free(g_retry);
        g_retry = nullptr;
        g_state = nullptr;
        g_slot = nullptr;
        g_entry = nullptr;
        g_touch = nullptr;
        return false;
    }
    for (size_t i = 0; i < g_pages_total; ++i)
        g_slot[i].store(0xffffffffu, std::memory_order_relaxed);
    // These must be lock-free to be usable from a fault handler. If the
    // platform ever gave a locking implementation the handler would deadlock,
    // so refuse to arm instead of finding out inside a signal.
    if (!g_state[0].is_lock_free() || !g_slot[0].is_lock_free() || !g_touched.is_lock_free() ||
        !g_in_flight.is_lock_free() || !g_retry_owner[0].is_lock_free()) {
        free(g_state);
        free(g_slot);
        free(g_entry);
        free(g_touch);
        free(g_retry);
        g_retry = nullptr;
        g_state = nullptr;
        g_slot = nullptr;
        g_entry = nullptr;
        g_touch = nullptr;
        return false;
    }
    g_touched.store(0, std::memory_order_relaxed);
    g_overflow.store(false, std::memory_order_relaxed);
    g_unattributed.store(false, std::memory_order_relaxed);
    g_retry_overflow.store(false, std::memory_order_relaxed);
    g_retry_reused.store(false, std::memory_order_relaxed);

    struct sigaction sa;
    memset(&sa, 0, sizeof sa);
    sa.sa_sigaction = handler;
    sa.sa_flags = SA_SIGINFO | SA_ONSTACK;
    sigemptyset(&sa.sa_mask);
    sigaddset(&sa.sa_mask, SIGSEGV);
    sigaddset(&sa.sa_mask, SIGBUS);
    if (sigaction(SIGSEGV, &sa, &g_old_segv) != 0)
        return false;
    if (sigaction(SIGBUS, &sa, &g_old_bus) != 0) {
        sigaction(SIGSEGV, &g_old_segv, nullptr);
        return false;
    }

    g_active.store(true, std::memory_order_release);
    if (mprotect(g_mem, GUEST_SIZE, PROT_NONE) != 0) {
        g_active.store(false, std::memory_order_release);
        sigaction(SIGSEGV, &g_old_segv, nullptr);
        sigaction(SIGBUS, &g_old_bus, nullptr);
        return false;
    }
    return true;
}

// End page tracking, wait for in-flight handlers and restore normal guest memory access.
// Returned touch records remain valid until the next window replaces their backing storage.
bool end(const Touch **out, size_t *count, const char **why) {
    if (!g_active.load(std::memory_order_acquire)) {
        if (why)
            *why = "tracking was not running";
        return false;
    }
    g_active.store(false);
    unsigned spins = 0;
    while (g_in_flight.load() != 0) {
        if (++spins >= 1024) {
            sched_yield();
            spins = 0;
        }
    }
    mprotect(g_mem, GUEST_SIZE, PROT_READ | PROT_WRITE);
    sigaction(SIGSEGV, &g_old_segv, nullptr);
    sigaction(SIGBUS, &g_old_bus, nullptr);

    // Clamped: on overflow the counter runs past the bound, because the
    // fetch-add that detects the overflow has already incremented it. What was
    // actually filled in is at most g_max_pages.
    size_t touched = g_touched.load(std::memory_order_acquire);
    if (touched > g_max_pages)
        touched = g_max_pages;
    if (out)
        *out = g_touch;
    if (count)
        *count = touched;
    if (g_retry_overflow.load(std::memory_order_acquire)) {
        if (why)
            *why = "the capture exceeded the fault retry thread bound";
        return false;
    }
    if (g_overflow.load(std::memory_order_acquire)) {
        if (why)
            *why = "the candidate touched more pages than the capture bound allows";
        return false;
    }
    if (g_retry_reused.load(std::memory_order_acquire)) {
        if (why)
            *why = "retry identity reused";
        return false;
    }
    if (g_unattributed.load(std::memory_order_acquire)) {
        if (why)
            *why = "a fault inside the arena could not be attributed to a page access";
        return false;
    }
    if (why)
        *why = "";
    return true;
}

} // namespace pop_pagetrack
