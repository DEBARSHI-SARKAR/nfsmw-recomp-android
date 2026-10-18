/* Guest x86 SEH checkpoints. Included by generated C as well as the runtime. */
#ifndef RECOMP_SEH_H
#define RECOMP_SEH_H
#include "x86.h"
#include <setjmp.h>

#ifdef __cplusplus
extern "C" {
#endif

/* setjmp must be executed by the live generated function, never in enter(). */
jmp_buf *recomp_seh_frame_enter(X86 *c);
/* Helpers orphan their surviving records before returning. The caller adopts
 * the newest one and executes setjmp in its own live host frame. */
uint64_t recomp_seh_frame_mark(X86 *c);
void recomp_seh_frame_orphan(X86 *c, uint64_t mark);
jmp_buf *recomp_seh_frame_adopt(X86 *c);
/* Drop records below ESP at this callback level; retain active landings. */
void recomp_seh_frame_leave(X86 *c);
void recomp_seh_land(X86 *c);
uint32_t recomp_seh_pending_target(void);
void recomp_seh_intercept(X86 *c, uint32_t target);
/* Verbose-only, bounded validation. Logs the first failure and last good point. */
void recomp_seh_validate_chain(X86 *c, const char *phase, const char *detail);

/* Context reuse/teardown on its owning host thread; NULL drops all its state. */
void recomp_seh_reset(X86 *c);
/* A callback return abandons frames/landings created at this call depth. */
void recomp_seh_callback_leave(X86 *c, uint32_t depth);
/* Returns zero for an exhausted chain; kernel32 retains its abort diagnostics.
 * A nonzero return is possible only through the test-only unhandled hook. */
int recomp_seh_raise(X86 *c, uint32_t code, uint32_t flags, uint32_t nargs, uint32_t args);
void recomp_seh_unwind(X86 *c, uint32_t target, uint32_t target_ip, uint32_t record,
                       uint32_t retval);

#ifdef POPM_TESTING
typedef void (*RecompSehUnhandledHook)(X86 *, uint32_t record, uint32_t context);
void recomp_seh_test_unhandled_hook(RecompSehUnhandledHook hook);
uint32_t recomp_seh_test_frame_count(X86 *c);
#endif

#ifdef __cplusplus
}
#endif
#endif
