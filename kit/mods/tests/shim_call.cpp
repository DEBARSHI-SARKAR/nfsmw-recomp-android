// shim_call.cpp - call a Win32 shim exactly as generated code does.
#include "shim_call.h"
#include "../../runtime/imports.h"
#include "../../runtime/memory.h"
#include <stdio.h>
#include <string.h>

namespace {
// A scratch page inside the guest stack region, below anything the guest uses.
const uint32_t kScratch = STACK_LIMIT + 0x2000u;
uint32_t g_cursor = 0;
} // namespace

uint32_t mod_test_scratch(uint32_t offset) {
    return kScratch + offset;
}

uint32_t mod_test_put_str(const char *text) {
    uint32_t a = kScratch + 0x400u + g_cursor;
    uint32_t n = (uint32_t)strlen(text) + 1;
    memcpy(gm_ptr(a), text, n);
    g_cursor = (g_cursor + n + 15u) & ~15u;
    if (g_cursor > 0x800u)
        g_cursor = 0;
    return a;
}

uint32_t mod_test_call_import(X86 *c, const char *dll, const char *name,
                              const std::vector<uint32_t> &args) {
    uint32_t tramp = imports_resolve(dll, name);
    if (!tramp) {
        fprintf(stderr, "no trampoline for %s!%s\n", dll, name);
        return 0;
    }
    uint32_t before = c->r[R_ESP], esp = before;
    for (size_t i = args.size(); i-- > 0;) {
        esp -= 4;
        wr32(esp, args[i]);
    }
    esp -= 4;
    wr32(esp, 0x00401000u); // a plausible guest return address
    c->r[R_ESP] = esp;
    imports_dispatch(c, tramp);
    c->r[R_ESP] = before; // the shim's own cleanup is its business
    return c->r[R_EAX];
}
