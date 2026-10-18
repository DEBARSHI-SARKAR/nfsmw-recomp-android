// guest_abi.h - calling shims from the DirectX test binaries exactly as
// recompiled code does. Shared by dx_tests.cpp and pad_tests.cpp; each binary
// includes it once, so the definitions are file-static.
//
// A shim is reached through imports_dispatch with its arguments pushed on the
// guest stack, which also checks the stack discipline: a wrong argc in a
// vtable shows up as ESP left in the wrong place. Failures count into
// g_failures, checks into g_checks; the including file reports them.
#pragma once
#include "../com.h"
#include "../../runtime/guest.h"
#include "../../runtime/imports.h"

#include <cstdint>
#include <cstdio>
#include <cstring>
#include <initializer_list>
#include <vector>

static int g_checks = 0, g_failures = 0;

// The guest CPU the tests drive shims with.
static X86 g_cpu;
static uint32_t g_stack_top = 0;

static void cpu_reset() {
    memset(&g_cpu, 0, sizeof g_cpu);
    g_cpu.eflags_misc = 0x202;
    g_cpu.fpu_cw = 0x037f;
    g_cpu.fpu_tag = 0xffff;
    g_cpu.r[R_ESP] = g_stack_top;
}

// Calls a shim or a COM vtable slot exactly as recompiled code does: push the
// arguments right to left, push a return address, then dispatch. Returns EAX
// and asserts the callee popped precisely its own arguments.
static uint32_t call_shim(uint32_t target, std::initializer_list<uint32_t> args) {
    uint32_t esp = g_cpu.r[R_ESP];
    std::vector<uint32_t> a(args);
    for (size_t i = a.size(); i-- > 0;) {
        esp -= 4;
        wr32(esp, a[i]);
    }
    esp -= 4;
    const uint32_t RET = 0x00401000u;
    wr32(esp, RET);
    g_cpu.r[R_ESP] = esp;
    uint32_t before = esp;

    if (!imports_dispatch(&g_cpu, target)) {
        fprintf(stderr, "FAIL: %08x is not a shim trampoline\n", target);
        ++g_failures;
        g_cpu.r[R_ESP] = before + 4 + 4 * (uint32_t)a.size();
        return 0;
    }
    ++g_checks;
    const bool cdecl = imports_argc(target) == ARGC_CDECL;
    uint32_t expected = before + 4 + (cdecl ? 0 : 4 * (uint32_t)a.size());
    if (g_cpu.r[R_ESP] != expected) {
        ++g_failures;
        fprintf(stderr,
                "FAIL: %s left ESP at %08x, expected %08x "
                "(a wrong argc in the vtable)\n",
                imports_describe(target) ? imports_describe(target) : "shim", g_cpu.r[R_ESP],
                expected);
        g_cpu.r[R_ESP] = expected;
    }
    ++g_checks;
    if (g_cpu.eip != RET) {
        ++g_failures;
        fprintf(stderr, "FAIL: shim did not return to the pushed address\n");
    }
    if (cdecl)
        g_cpu.r[R_ESP] += 4 * (uint32_t)a.size(); // caller cleanup
    return g_cpu.r[R_EAX];
}

// A COM method: `this` is the first argument and the slot comes from the
// object's own vtable, so this exercises the real guest indirection.
static uint32_t call_method(uint32_t iface_ptr, uint32_t slot,
                            std::initializer_list<uint32_t> rest = {}) {
    uint32_t vtbl = rd32(iface_ptr + COM_OFF_vtbl);
    uint32_t target = rd32(vtbl + slot * 4);
    std::vector<uint32_t> a;
    a.push_back(iface_ptr);
    for (uint32_t v : rest)
        a.push_back(v);
    uint32_t esp = g_cpu.r[R_ESP];
    for (size_t i = a.size(); i-- > 0;) {
        esp -= 4;
        wr32(esp, a[i]);
    }
    esp -= 4;
    const uint32_t RET = 0x00401000u;
    wr32(esp, RET);
    g_cpu.r[R_ESP] = esp;
    uint32_t before = esp;
    if (!imports_dispatch(&g_cpu, target)) {
        fprintf(stderr, "FAIL: vtable slot %u holds %08x, not a trampoline\n", slot, target);
        ++g_failures;
        return 0;
    }
    ++g_checks;
    uint32_t expected = before + 4 + 4 * (uint32_t)a.size();
    if (g_cpu.r[R_ESP] != expected) {
        ++g_failures;
        fprintf(stderr, "FAIL: %s left ESP at %08x, expected %08x\n",
                imports_describe(target) ? imports_describe(target) : "method", g_cpu.r[R_ESP],
                expected);
        g_cpu.r[R_ESP] = expected;
    }
    return g_cpu.r[R_EAX];
}

// The trampoline for a DLL export. imports_resolve allocates one on demand
// for any registered shim, which is what the loader would otherwise do when it
// patched the IAT; these tests never load the PE.
static uint32_t tramp(const char *dll, const char *name) {
    return imports_resolve(dll, name);
}

// Scratch guest memory for out-parameters.
static uint32_t g_scratch = 0;
static uint32_t sc(uint32_t off) {
    return g_scratch + off;
}
