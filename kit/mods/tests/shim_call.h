// shim_call.h - the shared way a mods test drives a Win32 shim.
//
// The runtime tests have a call_import of their own, but it is `static` in
// runtime_tests.cpp and cannot be borrowed, so this is its own implementation
// and the only one the mods suites use.
//
// mod_test_scratch hands out addresses in a page inside the guest stack
// region, below anything the guest itself uses; mod_test_put_str copies a C
// string into that page and returns its guest address, recycling the space
// after 2 KB.
#pragma once
#include "../../runtime/guest.h"

#include <stdint.h>
#include <vector>

// Calls dll!name exactly as generated code does: arguments pushed right to
// left under a plausible guest return address, dispatched through the
// trampoline, ESP restored afterwards. Returns EAX.
uint32_t mod_test_call_import(X86 *c, const char *dll, const char *name,
                              const std::vector<uint32_t> &args);
uint32_t mod_test_put_str(const char *text);
uint32_t mod_test_scratch(uint32_t offset);
