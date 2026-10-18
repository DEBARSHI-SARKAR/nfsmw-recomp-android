// interp.h - runs small routines the guest builds or loads at run time.
//
// Some games copy x86 code out of their data files into the heap and call it:
// Need for Speed: Most Wanted's audio banks carry compiled routines that fill
// in a sound's parameters. No translation exists for such code, so an
// indirect call to it reaches recomp_unknown_call. interp_call runs it
// instead, one instruction at a time, when every instruction in the routine
// is one this interpreter knows: the routine is decoded up to its RET first,
// and nothing runs unless all of it decodes.
//
// The instruction set is the integer subset such routines use: MOV, LEA,
// ADD/SUB/CMP/AND/OR/XOR, TEST, IMUL, INC/DEC, PUSH/POP, CALL, RET, JMP and
// Jcc, on 32-bit registers and memory, plus 8-bit immediates stored to
// memory. A CALL goes back through recomp_call, so the routine can call the
// executable's translated functions and other heap routines.
//
// Execution is bounded: a routine that never reaches its RET - code that
// jumps to itself, a loop over a counter the guest left as garbage - stops
// after a fixed number of instructions on the same path an illegal memory
// access takes, so a bad routine costs milliseconds rather than the process.
#pragma once
#include "x86.h"

// Generated table.c is C and calls interp_call from recomp_unknown_jump.
#ifdef __cplusplus
extern "C" {
#endif

// Non-zero when the routine at `target` was run; [ESP] held the return
// address, which the routine's RET popped. Zero when it could not be decoded;
// then nothing ran and the guest state is unchanged.
int interp_call(X86 *c, uint32_t target);

// Why the last interp_call returned zero, for the log.
const char *interp_last_error(void);

#ifdef __cplusplus
}
#endif
