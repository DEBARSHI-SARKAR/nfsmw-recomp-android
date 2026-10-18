// report_lock.cpp - the mutex a host's run bookkeeping is written under.
//
// This is one mutex and nothing else, in a file of its own, because of who has
// to take it. A host's counters are written from the guest thread in
// host_present, host_d3d_draw and the rest, and read from the watchdog thread
// when it prints a report; every one of those writers has to hold this, and
// they live in files that have no business linking the loader, the shims or
// anything else boot.cpp needs. Splitting it out is what lets present.mm take
// the same lock the watchdog does without dragging the whole boot sequence
// into a test binary that only wants to check a palette expansion.
//
// boot.h declares these; boot.cpp uses the trylock from its watchdog.
#include "boot.h"

#include "../platform/os.h"

#include <mutex>

namespace {
std::mutex g_report_m;
}

void boot_report_lock() {
    g_report_m.lock();
}
void boot_report_unlock() {
    g_report_m.unlock();
}

// Tries for `seconds` and says whether it got it. The watchdog must never wait
// forever for a lock held by a guest thread that has stopped making progress -
// that would turn "report and exit" into another hang.
bool boot_report_trylock_for(double seconds) {
    for (int i = 0; i < (int)(seconds * 100.0) + 1; ++i) {
        if (g_report_m.try_lock())
            return true;
        os_sleep_us(10 * 1000);
    }
    return false;
}
