// discovery.h - the code a run found that the translation does not carry.
//
// Static discovery misses code: a function only ever reached through a
// pointer the listing does not resolve, a jump-table slot whose target
// nothing owns, a block Ghidra ended early. Each one shows up at run time as
// a call or a jump the address table cannot deliver, and until now the way
// back was to read the run's report and copy addresses into game.toml's
// [translate] entry_points by hand.
//
// With RECOMP_DISCOVERY naming a file, every such address is written there
// instead, and tools/recomp/translate.py --discovered reads it back as entry
// points. Run, regenerate, run again: each pass carries the code the last one
// reached, and the addresses stop appearing when there is nothing left to
// find.
#pragma once
#include <stdint.h>
#include <stdio.h>

// Generated table.c is C and calls the first two.
#ifdef __cplusplus
extern "C" {
#endif

// Records `target` as code, named by an instruction in the guest at `from`.
// `kind` is "call" or "jump". Ignored when RECOMP_DISCOVERY is unset.
void discovery_note(const char *kind, uint32_t target, uint32_t from);

// Writes the file RECOMP_DISCOVERY names. Registered with atexit() on the
// first note, and called directly on the paths that end the process without
// running atexit handlers.
void discovery_write(void);

// What has been recorded so far, for the run report.
uint32_t discovery_count(void);
void discovery_print(FILE *out);

#ifdef __cplusplus
}
#endif
