// capture_seam_win32.cpp - the capture harness entry points on Windows, where
// the page-tracking implementation (mprotect and a SIGSEGV handler in
// mods/native) does not exist yet. Every call reports that capture is
// unavailable, which is what a capture mod checks first.
#include "pop_mod_api.h"

#include <stdint.h>

extern "C" {

void mods_capture_unwound(void) {}

int pop_capture_available(void) {
    return 0;
}

int pop_capture_begin(uint32_t max_pages, uint32_t max_calls) {
    (void)max_pages;
    (void)max_calls;
    return 0;
}

int pop_capture_write(const char *path, uint32_t target, const pop_cpu_v1 *entry,
                      const pop_cpu_v1 *exit_state, uint32_t live_flags, const char **why) {
    (void)path;
    (void)target;
    (void)entry;
    (void)exit_state;
    (void)live_flags;
    if (why)
        *why = "capture is not available on this platform";
    return 0;
}

} // extern "C"
