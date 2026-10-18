#include "thunks.h"
#include "imports.h"
#include "loader.h"
#include <stdio.h>

extern "C" __attribute__((weak)) int recomp_thunk_target_kind(uint32_t) {
    return 0;
}

namespace {
// Decode only in the heap/stack arenas, never image data, TEBs or trampolines.
bool thunk_bytes(uint32_t at, uint32_t size) {
    if (at >= GUEST_SIZE || size > GUEST_SIZE - at)
        return false;
    if (loader_in_image(at) || loader_in_image(at + size - 1))
        return false;
    return (at >= HEAP_BASE && at < HEAP_LIMIT && size <= HEAP_LIMIT - at) ||
           (at >= STACK_LIMIT && at < STACK_TOP && size <= STACK_TOP - at);
}
struct StackWrite {
    uint32_t at, old;
};
} // namespace

extern "C" int recomp_run_thunk(X86 *c, uint32_t target) {
    if (!thunk_bytes(target, 1))
        return 0;
    X86 trial = *c;
    StackWrite writes[16];
    unsigned nwrites = 0;
    uint32_t pc = target;
    const char *reason = "instruction limit";
    for (unsigned step = 0; step <= 16; ++step) {
        int kind = recomp_thunk_target_kind(pc);
        if (pc >= GUEST_SHIM_BASE && pc < GUEST_SHIM_END)
            kind = 1;
        if (kind) {
            *c = trial;
            if (kind == 2)
                c->eip = pc;
            else
                recomp_call(c, pc);
            return 1;
        }
        if (step == 16)
            break;
        reason = "unsupported bytes or unresolved target";
        if (!thunk_bytes(pc, 1))
            break;
        uint8_t op = rd8(pc);
        if ((op == 0xe8 || op == 0xe9 || op == 0x68 || (op >= 0xb8 && op <= 0xbf)) &&
            thunk_bytes(pc, 5)) {
            uint32_t imm = rd32(pc + 1), next = pc + 5;
            if (op == 0xe8 || op == 0x68) {
                uint32_t sp = trial.r[R_ESP] - 4;
                if (!thunk_bytes(sp, 4))
                    break;
                writes[nwrites++] = {sp, rd32(sp)};
                wr32(sp, op == 0xe8 ? next : imm);
                trial.r[R_ESP] = sp;
            } else if (op >= 0xb8) {
                trial.r[op - 0xb8] = imm;
            }
            pc = (op == 0xe8 || op == 0xe9) ? next + imm : next;
        } else if (op == 0xeb && thunk_bytes(pc, 2)) {
            pc = pc + 2 + (int8_t)rd8(pc + 1);
        } else if ((op == 0x8b || op == 0x89) && thunk_bytes(pc, 2) &&
                   (rd8(pc + 1) & 0xc0) == 0xc0) {
            uint8_t modrm = rd8(pc + 1);
            unsigned reg = (modrm >> 3) & 7, rm = modrm & 7;
            trial.r[op == 0x8b ? reg : rm] = trial.r[op == 0x8b ? rm : reg];
            pc += 2;
        } else if (op >= 0x58 && op <= 0x5f && thunk_bytes(trial.r[R_ESP], 4)) {
            // Delphi's shared window-procedure stub uses POP ECX to locate
            // the method/instance record immediately following its CALL.
            uint32_t value = rd32(trial.r[R_ESP]);
            trial.r[R_ESP] += 4;
            trial.r[op - 0x58] = value; // POP ESP assigns after the increment.
            ++pc;
        } else if (op == 0xff && thunk_bytes(pc, 6) && rd8(pc + 1) == 0x25 &&
                   rd32(pc + 2) <= GUEST_SIZE - 4) {
            pc = rd32(rd32(pc + 2));
        } else {
            break;
        }
        reason = "instruction limit";
    }
    // Failed probes must not corrupt a caller that uses the old zero-result
    // fallback. Reverse order also restores repeated writes to the same slot.
    while (nwrites) {
        const StackWrite &w = writes[--nwrites];
        wr32(w.at, w.old);
    }
    char bytes[49] = {};
    for (unsigned i = 0; i < 16 && pc < GUEST_SIZE && i < GUEST_SIZE - pc; ++i)
        snprintf(bytes + i * 3, 4, "%02x ", rd8(pc + i));
    // Reported once per SHAPE of code, not once per address. A guest that
    // generates code writes the same routine to a new address every time, so a
    // per-address report is one line per call - which on a blit path is
    // thousands a second of formatting and I/O, and a diagnostic that scrolls
    // away what it was meant to show.
    char key[80];
    snprintf(key, sizeof key, "thunk:%s:%.23s", reason, bytes);
    log_once(key, "guest thunk %08x stopped at %08x (%s), bytes: %s", target, pc, reason, bytes);
    return 0;
}
