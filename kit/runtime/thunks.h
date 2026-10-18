// Bounded execution of compiler-generated guest heap/stack entry thunks.
#pragma once
#include "x86.h"

#ifdef __cplusplus
extern "C" {
#endif

// True when the thunk reached and dispatched a known target. On failure the
// original CPU and stack contents are retained for the caller's diagnostics.
int recomp_run_thunk(X86 *c, uint32_t target);

// Generated table.c supplies entry (1), CALL continuation (2), or unknown (0).
// Runtime-only test binaries use the weak default with no translated entries.
int recomp_thunk_target_kind(uint32_t target);

#ifdef __cplusplus
}
#endif
