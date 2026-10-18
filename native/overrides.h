/* overrides.h - native replacements for hot game functions.
 *
 * Included by the generated funcs.h (game.toml [translate] native): each
 * FN_<addr> below sends every direct call to that address to the C function
 * named. The translated fn_<addr> still exists; each replacement falls back to
 * it when RECOMP_NATIVE=0, and RECOMP_NATIVE_SELFTEST=1 checks the two
 * against each other on random input at start-up. */
#ifndef NFSMW_NATIVE_OVERRIDES_H
#define NFSMW_NATIVE_OVERRIDES_H

#define FN_006c9440 native_006c9440 /* clip a segment against one plane */
#define FN_006c9510 native_006c9510 /* sphere inside all six frustum planes */
#define FN_006c9570 native_006c9570 /* swept sphere against the frustum */

#endif
