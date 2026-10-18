// stub_recomp_call.cpp - test-only recomp_call.
//
// In the real build build/recomp/gen/table.c defines recomp_call: it binary
// searches the generated function table and, for addresses in the trampoline
// range, calls imports_dispatch(). The runtime tests link this stand-in so they
// can exercise the shims without the generated code.
#include "../imports.h"
#include "../thunks.h"
#include <stdio.h>

extern "C" void recomp_call(X86 *c, uint32_t target) {
    if (recomp_module_call(c, target))
        return;
    if (imports_dispatch(c, target))
        return;
    if (recomp_run_thunk(c, target))
        return;
    fprintf(stderr, "[stub] recomp_call to %08x: no generated function table in this build\n",
            target);
    c->r[R_EAX] = 0;
}

extern "C" int32_t recomp_index_of(uint32_t) {
    return -1; // This test host has no main-image translation table.
}
extern "C" int recomp_is_call_return(uint32_t) {
    return 0;
}

// interp.cpp hands a tail call on to the table, so the stand-in needs the jump
// entry too. Without the generated table there is nothing beyond the shims a
// call already reaches, so the two behave alike here.
extern "C" void recomp_jump(X86 *c, uint32_t target) {
    recomp_call(c, target);
}
