// page_track_tests.cpp - the read and write sets a known access pattern
// produces, against a list derived by hand from that pattern.
//
// The point of each case is that it would fail if the tracker guessed: a
// read-only page must not appear as written, a written page must appear as
// written whether or not it was read first, and an untouched page must not
// appear at all.
#include "../page_track.h"
#include "../../tests/mods_tests.h"
#include "../../../runtime/guest.h"
#include "../../../runtime/memory.h"

#include <stdlib.h>
#include <string.h>
#include <atomic>
#include <thread>
#include <vector>
#include <barrier>
#include <sys/mman.h>
#include <signal.h>

namespace {

const pop_pagetrack::Touch *find(const pop_pagetrack::Touch *t, size_t n, uint32_t addr) {
    for (size_t i = 0; i < n; ++i)
        if (t[i].address == addr)
            return &t[i];
    return nullptr;
}

} // namespace

MOD_TEST_SUITE(pagetrack_read_and_write_sets_are_exact) {
    setenv("RECOMP_TESTING", "1", 1);
    mem_init();
    const size_t page = pop_pagetrack::page_size();
    MOD_CHECK(page >= 4096);

    // Four pages well inside the arena, chosen so nothing else in the process
    // touches them during the window: read one, write one, read-then-write
    // one, and leave one alone.
    const uint32_t base = 0x02000000u & ~(uint32_t)(page - 1);
    const uint32_t p_read = base;
    const uint32_t p_write = base + (uint32_t)page;
    const uint32_t p_both = base + (uint32_t)(2 * page);
    const uint32_t p_none = base + (uint32_t)(3 * page);

    // Known contents before the window, so the entry snapshot can be checked
    // against something rather than against itself.
    memset(g_mem + p_read, 0xA1, page);
    memset(g_mem + p_write, 0xB2, page);
    memset(g_mem + p_both, 0xC3, page);
    memset(g_mem + p_none, 0xD4, page);

    MOD_CHECK(pop_pagetrack::begin(4096));

    volatile uint8_t sink = 0;
    sink = g_mem[p_read + 7];                // a read, and only a read
    g_mem[p_write + 11] = 0x5A;              // a write, never read first
    sink = g_mem[p_both + 3];                // read...
    g_mem[p_both + 3] = (uint8_t)(sink + 1); // ...then written
    (void)sink;

    const pop_pagetrack::Touch *touched = nullptr;
    size_t n = 0;
    const char *why = nullptr;
    MOD_CHECK(pop_pagetrack::end(&touched, &n, &why));
    MOD_CHECK_STR(why, "");

    // Exactly the three pages that were touched, and not the fourth.
    MOD_CHECK_EQ(n, 3u);
    const pop_pagetrack::Touch *tr = find(touched, n, p_read);
    const pop_pagetrack::Touch *tw = find(touched, n, p_write);
    const pop_pagetrack::Touch *tb = find(touched, n, p_both);
    MOD_CHECK(tr && tw && tb);
    MOD_CHECK(find(touched, n, p_none) == nullptr);
    if (!tr || !tw || !tb)
        return;

    // Read-only stays read-only. This is the assertion a tracker that granted
    // read-write on first touch would fail.
    MOD_CHECK(tr->read);
    MOD_CHECK(!tr->written);

    // A page written without being read first is written, and is not claimed
    // to have been read.
    MOD_CHECK(tw->written);
    MOD_CHECK(!tw->read);

    // Read then written is both: the second fault is what records the write,
    // and without it this page would be read-only in the record while its
    // contents had changed.
    MOD_CHECK(tb->read);
    MOD_CHECK(tb->written);

    // The entry snapshot is what the page held BEFORE the window, not after.
    MOD_CHECK_EQ(tr->entry[7], 0xA1u);
    MOD_CHECK_EQ(tw->entry[11], 0xB2u);
    MOD_CHECK_EQ(tb->entry[3], 0xC3u);
    MOD_CHECK_EQ(g_mem[p_write + 11], 0x5Au); // and the write really landed
}

MOD_TEST_SUITE(pagetrack_refuses_beyond_its_bound) {
    setenv("RECOMP_TESTING", "1", 1);
    mem_init();
    const size_t page = pop_pagetrack::page_size();

    // A bound of two, and three pages touched: the capture is rejected rather
    // than silently truncated, because a partial read set would replay as a
    // pass while the real function read something the record never mentions.
    MOD_CHECK(pop_pagetrack::begin(2));
    volatile uint8_t sink = 0;
    for (int i = 0; i < 3; ++i)
        sink = g_mem[0x03000000u + i * page];
    (void)sink;

    const pop_pagetrack::Touch *touched = nullptr;
    size_t n = 0;
    const char *why = nullptr;
    MOD_CHECK(!pop_pagetrack::end(&touched, &n, &why));
    MOD_CHECK(why && strstr(why, "more pages") != nullptr);
}

MOD_TEST_SUITE(pagetrack_needs_testing_mode) {
    unsetenv("RECOMP_TESTING");
    mem_init();
    // Not a test-mode process: tracking refuses rather than protecting the
    // arena of a run that is not expecting it.
    MOD_CHECK(!pop_pagetrack::begin(4096));
    MOD_CHECK(!pop_pagetrack::active());
    setenv("RECOMP_TESTING", "1", 1);
}

// Many threads taking the first touch of many pages at the same moment.
//
// This is the case `volatile` did not cover. Two handlers that read the same
// g_touched both wrote their snapshot into the same slot and one page left the
// capture, while end() still reported success. The claim this module makes is
// that the page set is complete, so a lost page is not a tolerable outcome; it
// is the one outcome that would silently certify a wrong native replacement.
//
// The pages are spread across threads so that first touches genuinely collide,
// and every thread starts from one release of a spin barrier rather than from
// its own creation, which would stagger them apart.
MOD_TEST_SUITE(pagetrack_survives_concurrent_first_touches) {
    setenv("RECOMP_TESTING", "1", 1);
    mem_init();
    const size_t page = pop_pagetrack::page_size();
    const uint32_t base = 0x05000000u & ~(uint32_t)(page - 1);
    const unsigned threads = 8;
    const unsigned per_thread = 16;
    const unsigned total = threads * per_thread;

    // Seeded before the window, so each page's entry snapshot has a value only
    // that page can have and a lost or crossed snapshot is visible.
    for (unsigned i = 0; i < total; ++i)
        wr32(base + (uint32_t)(i * page), 0xa0000000u + i);

    MOD_CHECK(pop_pagetrack::begin(total + 16));

    std::atomic<unsigned> ready{0};
    std::atomic<bool> go{false};
    std::vector<std::thread> pool;
    for (unsigned t = 0; t < threads; ++t) {
        pool.emplace_back([&, t] {
            ready.fetch_add(1);
            while (!go.load(std::memory_order_acquire)) {
            }
            // Interleaved, not blocked: thread t takes pages t, t+8, t+16...
            // so two threads are never far apart in the arena.
            for (unsigned i = t; i < total; i += threads) {
                volatile uint32_t seen = rd32(base + (uint32_t)(i * page));
                (void)seen;
                wr32(base + (uint32_t)(i * page), 0xb0000000u + i);
            }
        });
    }
    while (ready.load() < threads) {
    }
    go.store(true, std::memory_order_release);
    for (auto &th : pool)
        th.join();

    const pop_pagetrack::Touch *touches = nullptr;
    size_t count = 0;
    const char *why = "unset";
    MOD_CHECK(pop_pagetrack::end(&touches, &count, &why));
    MOD_CHECK(why != nullptr && !*why);

    // Every page appears exactly once, read and written, with its own entry
    // snapshot. A lost slot shows up as a missing page; a crossed one as the
    // wrong entry bytes.
    MOD_CHECK(count >= total);
    unsigned found = 0;
    for (unsigned i = 0; i < total; ++i) {
        const uint32_t addr = base + (uint32_t)(i * page);
        const pop_pagetrack::Touch *t = find(touches, count, addr);
        MOD_CHECK(t != nullptr);
        if (!t)
            continue;
        ++found;
        MOD_CHECK(t->read);
        MOD_CHECK(t->written);
        uint32_t entry_word = 0;
        memcpy(&entry_word, t->entry, sizeof entry_word);
        MOD_CHECK_EQ(entry_word, 0xa0000000u + i);
        MOD_CHECK_EQ(rd32(addr), 0xb0000000u + i);
    }
    MOD_CHECK_EQ(found, total);

    // And no address is reported twice, which a shared slot could also produce.
    unsigned duplicates = 0;
    for (size_t i = 0; i < count; ++i)
        for (size_t j = i + 1; j < count; ++j)
            if (touches[i].address == touches[j].address)
                ++duplicates;
    MOD_CHECK_EQ(duplicates, 0u);
}

// Every worker faults on every page. Separate bytes avoid a C++ data race on
// the guest contents; a barrier at each page makes the protection faults race.
MOD_TEST_SUITE(pagetrack_same_pages_accept_concurrent_readers_and_writers) {
    setenv("RECOMP_TESTING", "1", 1);
    mem_init();
    const size_t page = pop_pagetrack::page_size();
    const uint32_t base = 0x09000000u;
    constexpr unsigned threads = 8, pages = 64;
    for (bool write : {false, true}) {
        memset(g_mem + base, 0x35, pages * page);
        MOD_CHECK(pop_pagetrack::begin(pages));
        std::barrier rendezvous(threads);
        std::vector<std::thread> pool;
        for (unsigned t = 0; t < threads; ++t)
            pool.emplace_back([&, t] {
                for (unsigned i = 0; i < pages; ++i) {
                    rendezvous.arrive_and_wait();
                    volatile uint8_t *byte = g_mem + base + i * page + t;
                    if (write)
                        *byte = (uint8_t)(0x40 + t);
                    else {
                        const uint8_t seen = *byte;
                        (void)seen;
                    }
                }
            });
        for (auto &worker : pool)
            worker.join();
        const pop_pagetrack::Touch *touches = nullptr;
        size_t count = 0;
        const char *why = nullptr;
        MOD_CHECK(pop_pagetrack::end(&touches, &count, &why));
        MOD_CHECK_STR(why, "");
        MOD_CHECK_EQ(count, pages);
        for (unsigned i = 0; i < pages; ++i) {
            const auto *touch = find(touches, count, base + i * page);
            MOD_CHECK(touch != nullptr);
            if (!touch)
                continue;
            MOD_CHECK_EQ(touch->read, !write);
            MOD_CHECK_EQ(touch->written, write);
            for (unsigned t = 0; t < threads; ++t) {
                MOD_CHECK_EQ(touch->entry[t], 0x35);
                MOD_CHECK_EQ(g_mem[base + i * page + t], write ? 0x40 + t : 0x35);
            }
        }
    }
}

namespace {
std::atomic<bool> snapshot_entered{false}, release_snapshot{false};
void hold_snapshot(size_t) {
    snapshot_entered.store(true);
    while (!release_snapshot.load()) {
    }
}
uint8_t *foreign_page = nullptr;
size_t foreign_page_size = 0;
volatile sig_atomic_t foreign_faults = 0;
void recover_foreign_fault(int, siginfo_t *, void *) {
    foreign_faults = 1;
    mprotect(foreign_page, foreign_page_size, PROT_READ | PROT_WRITE);
}
} // namespace

MOD_TEST_SUITE(pagetrack_end_drains_a_handler_before_restoring_permissions) {
    setenv("RECOMP_TESTING", "1", 1);
    mem_init();
    const size_t page = pop_pagetrack::page_size();
    const uint32_t base = 0x0a000000u;
    constexpr unsigned pages = 64;
    memset(g_mem + base, 0x31, pages * page);
    snapshot_entered = false;
    release_snapshot = false;
    pop_pagetrack::test_before_snapshot(hold_snapshot);
    MOD_CHECK(pop_pagetrack::begin(pages));
    std::thread faulting([&] {
        for (unsigned i = 0; i < pages; ++i) {
            volatile uint8_t seen = g_mem[base + i * page];
            (void)seen;
        }
    });
    while (!snapshot_entered.load()) {
    }
    bool ended = false;
    const char *why = nullptr;
    std::atomic<bool> end_returned{false};
    std::thread closing([&] {
        ended = pop_pagetrack::end(nullptr, nullptr, &why);
        end_returned.store(true);
    });
    while (pop_pagetrack::active()) {
    }
    // Give the old end implementation time to return before releasing the
    // snapshot. Correct end must wait for this handler's pending mprotect.
    for (unsigned i = 0; i < 4096; ++i)
        std::this_thread::yield();
    MOD_CHECK(!end_returned.load());
    release_snapshot = true;
    faulting.join();
    closing.join();
    pop_pagetrack::test_before_snapshot(nullptr);
    MOD_CHECK(ended);
    MOD_CHECK_STR(why, "");
    // Write to EVERY arena page, including the page whose handler overlapped
    // end. A page left PROT_READ crashes here rather than passing silently.
    for (size_t address = 0; address < GUEST_SIZE; address += page) {
        volatile uint8_t *byte = g_mem + address;
        const uint8_t saved = *byte;
        *byte = (uint8_t)(saved ^ 0xff);
        MOD_CHECK_EQ(*byte, (uint8_t)(saved ^ 0xff));
        *byte = saved;
    }
}

MOD_TEST_SUITE(pagetrack_repeat_fault_on_a_granted_page_is_foreign) {
    setenv("RECOMP_TESTING", "1", 1);
    mem_init();
    foreign_page_size = pop_pagetrack::page_size();
    foreign_page = g_mem + 0x0b000000u;
    foreign_faults = 0;
    struct sigaction recover{}, old_segv{}, old_bus{};
    recover.sa_sigaction = recover_foreign_fault;
    recover.sa_flags = SA_SIGINFO;
    sigemptyset(&recover.sa_mask);
    sigaction(SIGSEGV, &recover, &old_segv);
    sigaction(SIGBUS, &recover, &old_bus);
    MOD_CHECK(pop_pagetrack::begin(1));
    volatile uint8_t *byte = foreign_page;
    *byte = 7;
    // External protection is not a tracker transition. One retry is allowed;
    // its repeat must reach the previous handler instead of looping forever.
    MOD_CHECK_EQ(mprotect(foreign_page, foreign_page_size, PROT_NONE), 0);
    *byte = 8;
    const char *why = nullptr;
    MOD_CHECK(!pop_pagetrack::end(nullptr, nullptr, &why));
    // The same refusal also covers a new thread inheriting a dead thread's
    // pthread key; the diagnostic must name that ambiguity.
    MOD_CHECK_STR(why, "retry identity reused");
    MOD_CHECK_EQ(foreign_faults, 1);
    MOD_CHECK_EQ(*byte, 8);
    sigaction(SIGSEGV, &old_segv, nullptr);
    sigaction(SIGBUS, &old_bus, nullptr);
}

namespace {
std::atomic<unsigned> retry_bound_forwarded{0};
size_t retry_bound_page_size = 0;
void recover_retry_bound_fault(int, siginfo_t *info, void *) {
    // Each worker owns a separate page. Recover only the faulting page so
    // another worker cannot skip the retry table because we granted its page.
    const uintptr_t page = (uintptr_t)info->si_addr & ~(retry_bound_page_size - 1);
    mprotect((void *)page, retry_bound_page_size, PROT_READ | PROT_WRITE);
    retry_bound_forwarded.fetch_add(1, std::memory_order_relaxed);
}
} // namespace

MOD_TEST_SUITE(pagetrack_retry_thread_exhaustion_is_rejected) {
    setenv("RECOMP_TESTING", "1", 1);
    mem_init();
    // Exercise the actual 256-slot table, without changing the production
    // limit. Keep every worker alive until end() so pthread IDs cannot be
    // recycled and accidentally make 257 threads look like fewer identities.
    constexpr unsigned threads = 257;
    const uint32_t base = 0x0c000000u;
    const size_t page = pop_pagetrack::page_size();
    retry_bound_page_size = page;
    retry_bound_forwarded.store(0);
    MOD_CHECK(retry_bound_forwarded.is_lock_free());
    std::barrier all_faulted(threads + 1);
    std::barrier capture_ended(threads + 1);
    std::vector<int> protected_ok(threads, -1);
    std::vector<std::thread> workers;
    workers.reserve(threads);
    struct sigaction recover{}, old_segv{}, old_bus{};
    recover.sa_sigaction = recover_retry_bound_fault;
    recover.sa_flags = SA_SIGINFO;
    sigemptyset(&recover.sa_mask);
    MOD_CHECK_EQ(sigaction(SIGSEGV, &recover, &old_segv), 0);
    MOD_CHECK_EQ(sigaction(SIGBUS, &recover, &old_bus), 0);
    MOD_CHECK(pop_pagetrack::begin(threads));
    for (unsigned i = 0; i < threads; ++i) {
        volatile uint8_t *byte = g_mem + base + i * page;
        *byte = 7; // First touch grants state 3 without using a retry slot.
    }
    for (unsigned i = 0; i < threads; ++i) {
        workers.emplace_back([&, i] {
            volatile uint8_t *byte = g_mem + base + i * page;
            protected_ok[i] = mprotect((void *)byte, page, PROT_NONE);
            // A real fault at an already granted page consumes one identity.
            // Its repeat reaches our previous handler; the 257th identity
            // must exhaust the table on its first attempt. Both can recover.
            *byte = 8;
            all_faulted.arrive_and_wait();
            capture_ended.arrive_and_wait();
        });
    }
    all_faulted.arrive_and_wait();
    const char *why = nullptr;
    size_t count = 0;
    MOD_CHECK(!pop_pagetrack::end(nullptr, &count, &why));
    // Earlier repeat faults also mark the capture unattributed. The explicit
    // exhaustion reason must take precedence; a generic refusal is not proof
    // that running out of identity slots was detected.
    MOD_CHECK_STR(why, "the capture exceeded the fault retry thread bound");
    MOD_CHECK(!pop_pagetrack::active());
    MOD_CHECK_EQ(count, threads);
    MOD_CHECK_EQ(retry_bound_forwarded.load(), threads);
    capture_ended.arrive_and_wait();
    for (auto &worker : workers)
        worker.join();
    for (unsigned i = 0; i < threads; ++i) {
        MOD_CHECK_EQ(protected_ok[i], 0);
        MOD_CHECK_EQ(g_mem[base + i * page], 8);
    }
    MOD_CHECK_EQ(sigaction(SIGSEGV, &old_segv, nullptr), 0);
    MOD_CHECK_EQ(sigaction(SIGBUS, &old_bus, nullptr), 0);

    // Exhaustion belongs to that capture: a fresh window must still succeed.
    MOD_CHECK(pop_pagetrack::begin(1));
    volatile uint8_t *byte = g_mem + base;
    *byte = 9;
    MOD_CHECK(pop_pagetrack::end(nullptr, nullptr, &why));
    MOD_CHECK_STR(why, "");
}
