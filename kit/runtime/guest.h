// guest.h - guest address space layout, memory accessors and shared helpers
// for the recompiled Populous: The Beginning runtime.
#pragma once

// The CPU state, memory accessors and instruction helpers are owned by the
// translator. Compile the runtime with -I<repo root> (the first form) or with
// -I on the directory holding a copy of x86.h, as the recomp_gen target does
// for the generated sources.
#if __has_include("runtime/x86.h")
#include "runtime/x86.h"
#else
#include "x86.h"
#endif

#include <stdint.h>
#include <stddef.h>
#include <string.h>
#include <string>

// ---------------------------------------------------------------------------
// Guest address space. The GUEST_* macros come from x86.h (the translator owns
// them); the constants below are the runtime's names for the same layout plus
// the few regions x86.h does not spell out.
// ---------------------------------------------------------------------------
static const uint32_t IMAGE_BASE = GUEST_IMAGE_BASE; // PE preferred base, no relocation
// The image end is IMAGE_BASE + SizeOfImage, read from the PE headers at load
// time: see loader_image_limit(). x86.h's GUEST_IMAGE_END is a size, not an
// end address, so it must not be used as a bound.
static const uint32_t HEAP_BASE = GUEST_HEAP_BASE; // heap arena start
static const uint32_t HEAP_LIMIT = GUEST_HEAP_END; // heap arena end (exclusive)
static const uint32_t STACK_TOP = GUEST_STACK_TOP; // initial ESP region top, grows down
// 8 MB. A fixed megabyte was exhausted by Siege of Avalon's 1.19 launcher on
// Play, although that executable reserves only a megabyte on Windows
// (SizeOfStackReserve 0x100000): the same code runs deeper under the kit than
// natively, and why is not yet established. Until it is, the guest gets
// headroom rather than the program's own reserve. The region below the stack
// down to GUEST_HEAP_END is otherwise unused.
static const uint32_t STACK_SIZE = 0x00800000u;
static const uint32_t STACK_LIMIT = STACK_TOP - STACK_SIZE;
static const uint32_t TEB_BASE = GUEST_TEB_BASE; // FS segment base
static const uint32_t TEB_SIZE = 0x1000u;
static const uint32_t TLS_BASE = TEB_BASE + 0x1000u; // TLS slot array
static const uint32_t TLS_SLOTS = 64;
static const uint32_t TRAMP_BASE = GUEST_SHIM_BASE; // import shim trampolines
static const uint32_t TRAMP_STRIDE = GUEST_SHIM_STRIDE;
static const uint32_t TRAMP_MAX = 4096; // 4096 * 16 = 64 KB of trampolines
static const uint32_t TRAMP_LIMIT = TRAMP_BASE + TRAMP_STRIDE * TRAMP_MAX;

// ---------------------------------------------------------------------------
// Memory accessors. Loads and stores use x86.h's rd8/rd16/rd32 and
// wr8/wr16/wr32; the helpers here cover what x86.h does not.
// ---------------------------------------------------------------------------
static inline bool gm_valid(uint32_t a, uint32_t n) {
    return a < GUEST_SIZE && n <= GUEST_SIZE - a;
}
static inline uint8_t *gm_ptr(uint32_t a) {
    return g_mem + a;
}

// Read a NUL-terminated guest string (bounded). a == 0 yields "".
std::string gm_str(uint32_t a, size_t max_len = 0x8000);
// Write a NUL-terminated string into guest memory, truncating to cap bytes
// including the terminator. Returns the number of bytes written excluding NUL.
uint32_t gm_put_str(uint32_t a, const char *s, uint32_t cap);
// Read a NUL-terminated UTF-16LE guest string as UTF-8 (bounded in code units).
// a == 0 yields "". Unpaired surrogates become U+FFFD.
std::string gm_wstr(uint32_t a, size_t max_chars = 0x8000);
// Write s as UTF-16LE, stopping at NUL and truncating to cap units including
// the terminator, without splitting surrogate pairs or leaving the guest arena.
// Invalid UTF-8 bytes become U+FFFD. Returns units written excluding NUL.
uint32_t gm_put_wstr(uint32_t a, const std::string &s, uint32_t cap);

// ---------------------------------------------------------------------------
// Logging. RECOMP_LOG=0 silences everything, 1 (default) prints warnings and
// one-shot notices, 2 traces every import call and its returned EAX.
// ---------------------------------------------------------------------------
int log_level();
void log_msg(int level, const char *fmt, ...) __attribute__((format(printf, 2, 3)));
// Logs at most once for a given key. Returns true the first time.
bool log_once(const char *key, const char *fmt, ...) __attribute__((format(printf, 2, 3)));

#define LOGW(...) log_msg(1, __VA_ARGS__)
#define LOGV(...)                                                                                  \
    do {                                                                                           \
        if (log_level() >= 2)                                                                      \
            log_msg(2, __VA_ARGS__);                                                               \
    } while (0)

// ---------------------------------------------------------------------------
// Calling into guest code from a shim (WNDPROC dispatch, thread bodies,
// timer callbacks). Pushes args right-to-left plus a sentinel return address,
// runs the guest function through recomp_call and returns EAX. ESP is restored
// afterwards regardless of the callee's own stack discipline.
// ---------------------------------------------------------------------------

uint32_t guest_call(X86 *c, uint32_t fn, const uint32_t *args, int nargs);
static inline uint32_t guest_call(X86 *c, uint32_t fn) {
    return guest_call(c, fn, nullptr, 0);
}
static inline uint32_t guest_call(X86 *c, uint32_t fn, uint32_t a0) {
    uint32_t a[1] = {a0};
    return guest_call(c, fn, a, 1);
}
static inline uint32_t guest_call(X86 *c, uint32_t fn, uint32_t a0, uint32_t a1) {
    uint32_t a[2] = {a0, a1};
    return guest_call(c, fn, a, 2);
}
static inline uint32_t guest_call(X86 *c, uint32_t fn, uint32_t a0, uint32_t a1, uint32_t a2) {
    uint32_t a[3] = {a0, a1, a2};
    return guest_call(c, fn, a, 3);
}
static inline uint32_t guest_call(X86 *c, uint32_t fn, uint32_t a0, uint32_t a1, uint32_t a2,
                                  uint32_t a3) {
    uint32_t a[4] = {a0, a1, a2, a3};
    return guest_call(c, fn, a, 4);
}
