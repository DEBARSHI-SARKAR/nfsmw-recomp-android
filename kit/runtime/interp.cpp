// interp.cpp - see interp.h.
#include "interp.h"

#include "thunks.h"

#include <cstdio>
#include <memory>
#include <mutex>
#include <unordered_map>
#include <vector>

namespace {

enum Op : uint8_t {
    NOP,
    MOV,  // dst = src
    MOV8, // byte [mem] = imm
    LEA,
    ADD,
    OR,
    AND,
    SUB,
    XOR,
    CMP,
    TEST,
    IMUL, // dst = dst * src, or dst = src * imm with has_imm3
    INC,
    DEC,
    PUSH,
    POP,
    CALL, // direct: target; indirect: src
    RET,
    JMP,
    JCC,
    // A JMP whose target is a translated entry: a tail call out of this
    // routine, which the address table places rather than this interpreter.
    JMPOUT,
};

// A register or memory operand. kind 0: none, 1: register, 2: memory,
// 3: immediate.
struct Operand {
    uint8_t kind = 0;
    uint8_t reg = 0;
    int8_t base = -1, index = -1;
    uint8_t scale = 1;
    int32_t disp = 0;
};

struct Ins {
    uint32_t addr = 0;
    uint8_t len = 0;
    Op op = NOP;
    uint8_t cond = 0;
    Operand dst, src;
    int32_t imm3 = 0; // IMUL r, r/m, imm
    bool has_imm3 = false;
    uint32_t target = 0;       // CALL, JMP, Jcc
    uint32_t target_index = 0; // JMP, Jcc: `target`'s index in Routine::code
    bool indirect = false;
    uint16_t ret_pop = 0;
};

// How far the decoder reads before it gives up looking for the last RET.
// Bytes, not steps: it bounds build(), which always advances by at least the
// opcode byte, and says nothing about how long the decoded code runs for.
const uint32_t kMaxRoutine = 1u << 20;

// How many instructions one interp_call executes before it faults. The
// interpreter stands in for routines the translator could not emit, which are
// small by nature: the parameter fillers Need for Speed: Most Wanted keeps in
// its audio banks are tens of instructions, and the longest of them walks a
// table of a few hundred entries - low thousands of steps. A million is three
// orders of magnitude above that, so no routine that means to return can
// reach it, and a routine that does - `eb fe`, the shape a data file's
// garbage decodes into, or a loop whose counter the guest never initialised -
// stops in about a millisecond with a Fault instead of wedging the process.
//
// Not higher, because the budget also bounds what a runaway routine writes
// on its way out. A loop that PUSHes walks ESP down four bytes a step, and
// the fault path puts ESP back but cannot put the memory back: a million
// steps is 4 MB, which stays inside the guest's 8 MB stack, where sixteen
// million would run 64 MB down through STACK_LIMIT and into the heap arena,
// quietly corrupting whatever the game had allocated there.
const uint32_t kMaxSteps = 1u << 20;

bool readable(uint32_t a, uint32_t n) {
    return a < GUEST_SIZE && n <= GUEST_SIZE - a;
}

// ModRM (and SIB and displacement) at `p`; the operand goes to `rm` and the
// reg field to `reg`. Returns the bytes consumed, or 0.
unsigned modrm(uint32_t p, Operand &rm, uint8_t &reg) {
    if (!readable(p, 6))
        return 0;
    uint8_t m = rd8(p);
    uint8_t mod = m >> 6, r = m & 7;
    reg = (m >> 3) & 7;
    unsigned n = 1;
    if (mod == 3) {
        rm.kind = 1;
        rm.reg = r;
        return n;
    }
    rm.kind = 2;
    if (r == 4) {
        uint8_t sib = rd8(p + n++);
        uint8_t ss = sib >> 6, idx = (sib >> 3) & 7, base = sib & 7;
        rm.scale = (uint8_t)(1u << ss);
        rm.index = idx == 4 ? -1 : (int8_t)idx;
        if (base == 5 && mod == 0) {
            rm.base = -1;
            rm.disp = (int32_t)rd32(p + n);
            return n + 4;
        }
        rm.base = (int8_t)base;
    } else if (r == 5 && mod == 0) {
        rm.base = -1;
        rm.disp = (int32_t)rd32(p + n);
        return n + 4;
    } else {
        rm.base = (int8_t)r;
    }
    if (mod == 1) {
        rm.disp = (int8_t)rd8(p + n);
        n += 1;
    } else if (mod == 2) {
        rm.disp = (int32_t)rd32(p + n);
        n += 4;
    }
    return n;
}

Operand reg_operand(uint8_t r) {
    Operand o;
    o.kind = 1;
    o.reg = r;
    return o;
}
Operand imm_operand(int32_t v) {
    Operand o;
    o.kind = 3;
    o.disp = v;
    return o;
}

const Op kGroup1[8] = {ADD, OR, NOP, NOP, AND, SUB, XOR, CMP}; // ADC and SBB unsupported

bool decode(uint32_t a, Ins &in) {
    if (!readable(a, 16))
        return false;
    in = Ins{};
    in.addr = a;
    uint32_t p = a;
    uint8_t b = rd8(p++);
    uint8_t reg = 0;
    unsigned n;
    switch (b) {
    case 0x90:
        in.op = NOP;
        break;
    case 0x01:
    case 0x09:
    case 0x21:
    case 0x29:
    case 0x31:
    case 0x39:
    case 0x89:
    case 0x85:
    case 0x03:
    case 0x0b:
    case 0x23:
    case 0x2b:
    case 0x33:
    case 0x3b:
    case 0x8b: {
        Operand rm;
        if (!(n = modrm(p, rm, reg)))
            return false;
        p += n;
        const uint8_t kind = b & 0xf8;
        in.op = b == 0x85                ? TEST
                : b == 0x89 || b == 0x8b ? MOV
                : kind == 0x00           ? ADD
                : kind == 0x08           ? OR
                : kind == 0x20           ? AND
                : kind == 0x28           ? SUB
                : kind == 0x30           ? XOR
                                         : CMP;
        bool to_reg = (b & 2) && b != 0x85;
        in.dst = to_reg ? reg_operand(reg) : rm;
        in.src = to_reg ? rm : reg_operand(reg);
        break;
    }
    case 0x05:
    case 0x0d:
    case 0x25:
    case 0x2d:
    case 0x35:
    case 0x3d:
        in.op = kGroup1[(b >> 3) & 7];
        in.dst = reg_operand(R_EAX);
        in.src = imm_operand((int32_t)rd32(p));
        p += 4;
        break;
    case 0xa9: // TEST EAX,imm32
        in.op = TEST;
        in.dst = reg_operand(R_EAX);
        in.src = imm_operand((int32_t)rd32(p));
        p += 4;
        break;
    case 0xf7: { // group 3, of which only TEST r/m32,imm32 is modelled
        Operand rm;
        if (!(n = modrm(p, rm, reg)) || reg > 1)
            return false;
        p += n;
        in.op = TEST;
        in.dst = rm;
        in.src = imm_operand((int32_t)rd32(p));
        p += 4;
        break;
    }
    case 0x81:
    case 0x83: {
        Operand rm;
        if (!(n = modrm(p, rm, reg)))
            return false;
        p += n;
        in.op = kGroup1[reg];
        if (in.op == NOP)
            return false;
        in.dst = rm;
        if (b == 0x81) {
            in.src = imm_operand((int32_t)rd32(p));
            p += 4;
        } else {
            in.src = imm_operand((int8_t)rd8(p));
            p += 1;
        }
        break;
    }
    case 0x8d: {
        Operand rm;
        if (!(n = modrm(p, rm, reg)) || rm.kind != 2)
            return false;
        p += n;
        in.op = LEA;
        in.dst = reg_operand(reg);
        in.src = rm;
        break;
    }
    case 0xc6:
    case 0xc7: {
        Operand rm;
        if (!(n = modrm(p, rm, reg)) || reg != 0)
            return false;
        p += n;
        in.dst = rm;
        if (b == 0xc6) {
            if (rm.kind != 2)
                return false; // an 8-bit register
            in.op = MOV8;
            in.src = imm_operand(rd8(p));
            p += 1;
        } else {
            in.op = MOV;
            in.src = imm_operand((int32_t)rd32(p));
            p += 4;
        }
        break;
    }
    case 0x69:
    case 0x6b: {
        Operand rm;
        if (!(n = modrm(p, rm, reg)))
            return false;
        p += n;
        in.op = IMUL;
        in.dst = reg_operand(reg);
        in.src = rm;
        in.has_imm3 = true;
        if (b == 0x69) {
            in.imm3 = (int32_t)rd32(p);
            p += 4;
        } else {
            in.imm3 = (int8_t)rd8(p);
            p += 1;
        }
        break;
    }
    case 0x6a:
        in.op = PUSH;
        in.src = imm_operand((int8_t)rd8(p));
        p += 1;
        break;
    case 0x68:
        in.op = PUSH;
        in.src = imm_operand((int32_t)rd32(p));
        p += 4;
        break;
    case 0xc3:
        in.op = RET;
        break;
    case 0xc2:
        in.op = RET;
        in.ret_pop = rd16(p);
        p += 2;
        break;
    case 0xe8:
    case 0xe9:
        in.op = b == 0xe8 ? CALL : JMP;
        in.target = p + 4 + rd32(p);
        p += 4;
        break;
    case 0xeb:
        in.op = JMP;
        in.target = p + 1 + (int8_t)rd8(p);
        p += 1;
        break;
    case 0xff: {
        Operand rm;
        if (!(n = modrm(p, rm, reg)) || (reg != 2 && reg != 6))
            return false;
        p += n;
        if (reg == 2) {
            in.op = CALL;
            in.indirect = true;
        } else {
            in.op = PUSH;
        }
        in.src = rm;
        break;
    }
    case 0x0f: {
        uint8_t b2 = rd8(p++);
        if (b2 >= 0x80 && b2 <= 0x8f) {
            in.op = JCC;
            in.cond = b2 & 15;
            in.target = p + 4 + rd32(p);
            p += 4;
        } else if (b2 == 0xaf) {
            Operand rm;
            if (!(n = modrm(p, rm, reg)))
                return false;
            p += n;
            in.op = IMUL;
            in.dst = reg_operand(reg);
            in.src = rm;
        } else {
            return false;
        }
        break;
    }
    default:
        if (b >= 0x40 && b <= 0x4f) {
            in.op = b < 0x48 ? INC : DEC;
            in.dst = reg_operand(b & 7);
        } else if (b >= 0x50 && b <= 0x57) {
            in.op = PUSH;
            in.src = reg_operand(b & 7);
        } else if (b >= 0x58 && b <= 0x5f) {
            in.op = POP;
            in.dst = reg_operand(b & 7);
        } else if (b >= 0x70 && b <= 0x7f) {
            in.op = JCC;
            in.cond = b & 15;
            in.target = p + 1 + (int8_t)rd8(p);
            p += 1;
        } else if (b >= 0xb8 && b <= 0xbf) {
            in.op = MOV;
            in.dst = reg_operand(b & 7);
            in.src = imm_operand((int32_t)rd32(p));
            p += 4;
        } else {
            return false;
        }
    }
    in.len = (uint8_t)(p - a);
    return true;
}

struct Routine {
    uint32_t start = 0;
    std::vector<uint8_t> bytes; // the code as decoded, to notice a rewrite
    std::vector<Ins> code;
    std::unordered_map<uint32_t, uint32_t> at; // address -> index into code
};

thread_local char g_error[160];

// Decodes from `start` to the last RET or JMP that no branch passes.
std::shared_ptr<Routine> build(uint32_t start) {
    auto r = std::make_shared<Routine>();
    r->start = start;
    uint32_t a = start, furthest = start;
    for (;;) {
        Ins in;
        if (a - start >= kMaxRoutine) {
            snprintf(g_error, sizeof g_error, "no RET within %u bytes", kMaxRoutine);
            return nullptr;
        }
        if (!decode(a, in)) {
            uint32_t n = readable(a, 4) ? rd32(a) : 0;
            snprintf(g_error, sizeof g_error,
                     "unsupported instruction at %08x (bytes %02x %02x %02x %02x)", a, n & 0xff,
                     (n >> 8) & 0xff, (n >> 16) & 0xff, n >> 24);
            return nullptr;
        }
        if (in.op == JMP && !in.indirect && recomp_thunk_target_kind(in.target) == 1)
            // Compiler-made thunks (a lone JMP) and tail calls leave the
            // routine for code that is translated; hand those to the table
            // instead of decoding on into whatever follows.
            in.op = JMPOUT;
        r->at[a] = (uint32_t)r->code.size();
        r->code.push_back(in);
        if ((in.op == JMP || in.op == JCC) && !in.indirect) {
            if (in.target < start) {
                snprintf(g_error, sizeof g_error, "branch at %08x leaves the routine for %08x", a,
                         in.target);
                return nullptr;
            }
            if (in.target > furthest)
                furthest = in.target;
        }
        a += in.len;
        if ((in.op == RET || in.op == JMP || in.op == JMPOUT) && a > furthest)
            break;
    }
    // Every branch keeps its target's index, so taking one is an assignment
    // rather than a lookup in `at` (two per iteration of an ordinary loop).
    for (Ins &in : r->code) {
        if (in.op != JMP && in.op != JCC)
            continue;
        auto it = r->at.find(in.target);
        if (it == r->at.end()) {
            snprintf(g_error, sizeof g_error, "branch at %08x lands inside an instruction (%08x)",
                     in.addr, in.target);
            return nullptr;
        }
        in.target_index = it->second;
    }
    r->bytes.assign(g_mem + start, g_mem + a);
    return r;
}

std::mutex g_cache_mutex;
std::unordered_map<uint32_t, std::shared_ptr<Routine>> &cache() {
    static auto *m = new std::unordered_map<uint32_t, std::shared_ptr<Routine>>();
    return *m;
}

std::shared_ptr<Routine> routine_at(uint32_t start) {
    {
        std::lock_guard<std::mutex> lock(g_cache_mutex);
        auto it = cache().find(start);
        if (it != cache().end()) {
            const auto &b = it->second->bytes;
            if (readable(start, (uint32_t)b.size()) &&
                memcmp(g_mem + start, b.data(), b.size()) == 0)
                return it->second;
            cache().erase(it);
        }
    }
    auto r = build(start);
    if (r) {
        std::lock_guard<std::mutex> lock(g_cache_mutex);
        cache()[start] = r;
    }
    return r;
}

// ---- execution ---------------------------------------------------------

uint32_t address_of(const X86 *c, const Operand &o) {
    uint32_t a = (uint32_t)o.disp;
    if (o.base >= 0)
        a += c->r[o.base];
    if (o.index >= 0)
        a += c->r[o.index] * o.scale;
    return a;
}

struct Fault {};

uint32_t load_mem(const X86 *c, const Operand &o);

// A register or an immediate is an array read; only memory reaches the
// out-of-line path, which is the one with an address to form and check.
inline uint32_t load(const X86 *c, const Operand &o) {
    if (__builtin_expect(o.kind == 1, 1))
        return c->r[o.reg];
    if (o.kind == 3)
        return (uint32_t)o.disp;
    return load_mem(c, o);
}

uint32_t load_mem(const X86 *c, const Operand &o) {
    uint32_t a = address_of(c, o);
    if (!readable(a, 4)) {
        snprintf(g_error, sizeof g_error, "read of %08x outside guest memory", a);
        throw Fault{};
    }
    return rd32(a);
}

void store_mem(X86 *c, const Operand &o, uint32_t v);

inline void store(X86 *c, const Operand &o, uint32_t v) {
    if (__builtin_expect(o.kind == 1, 1)) {
        c->r[o.reg] = v;
        return;
    }
    store_mem(c, o, v);
}

void store_mem(X86 *c, const Operand &o, uint32_t v) {
    uint32_t a = address_of(c, o);
    if (!readable(a, 4)) {
        snprintf(g_error, sizeof g_error, "write of %08x outside guest memory", a);
        throw Fault{};
    }
    wr32(a, v);
}

void push(X86 *c, uint32_t v) {
    c->r[R_ESP] -= 4;
    if (!readable(c->r[R_ESP], 4)) {
        snprintf(g_error, sizeof g_error, "stack pointer %08x outside guest memory", c->r[R_ESP]);
        throw Fault{};
    }
    wr32(c->r[R_ESP], v);
}

uint32_t pop(X86 *c) {
    if (!readable(c->r[R_ESP], 4)) {
        snprintf(g_error, sizeof g_error, "stack pointer %08x outside guest memory", c->r[R_ESP]);
        throw Fault{};
    }
    uint32_t v = rd32(c->r[R_ESP]);
    c->r[R_ESP] += 4;
    return v;
}

uint32_t parity(uint32_t v) {
    v &= 0xff;
    v ^= v >> 4;
    v ^= v >> 2;
    v ^= v >> 1;
    return (~v) & 1;
}

// ---- flags -------------------------------------------------------------
//
// A routine's flags are kept as the operands that produced them and turned
// into the guest's flag fields only when something reads them: a Jcc, or a
// CALL or RET that hands the state back to translated code. Most arithmetic
// in a loop never has its flags read at all, and the ones that are read want
// one bit rather than all six, so computing every flag at every instruction
// is most of what an interpreted instruction costs.
struct Flags {
    Op op = NOP; // NOP: nothing pending, c->eflags_* are current
    uint32_t a = 0, b = 0, res = 0;
    uint8_t cf = 0, of = 0; // IMUL computes these itself
};

uint32_t flag_zf(const Flags &f) {
    return f.res == 0;
}
uint32_t flag_sf(const Flags &f) {
    return f.res >> 31;
}
uint32_t flag_pf(const Flags &f) {
    return parity(f.res);
}
uint32_t flag_cf(const X86 *c, const Flags &f) {
    switch (f.op) {
    case ADD:
        return f.res < f.a;
    case SUB:
    case CMP:
        return f.a < f.b;
    case IMUL:
        return f.cf;
    case INC:
    case DEC:
        return c->eflags_cf; // INC and DEC leave CF alone
    default:
        return 0; // the logic operations clear it
    }
}
uint32_t flag_of(const X86 *c, const Flags &f) {
    switch (f.op) {
    case ADD:
        return ((f.a ^ f.res) & (f.b ^ f.res)) >> 31;
    case SUB:
    case CMP:
        return ((f.a ^ f.b) & (f.a ^ f.res)) >> 31;
    case IMUL:
        return f.of;
    case INC:
        return f.res == 0x80000000u;
    case DEC:
        return f.res == 0x7fffffffu;
    default:
        (void)c;
        return 0;
    }
}
uint32_t flag_af(const Flags &f) {
    switch (f.op) {
    case ADD:
    case SUB:
    case CMP:
        return ((f.a ^ f.b ^ f.res) >> 4) & 1;
    case INC:
    case DEC:
        return ((f.a ^ f.res) >> 4) & 1;
    default:
        return 0;
    }
}

// Write the pending flags into the guest state. Everything that can observe
// them - a call into translated code, a return - goes through here first.
void flags_settle(X86 *c, Flags &f) {
    if (f.op == NOP)
        return;
    uint32_t cf = flag_cf(c, f), of = flag_of(c, f);
    c->eflags_cf = cf;
    c->eflags_of = of;
    c->eflags_af = flag_af(f);
    c->eflags_zf = flag_zf(f);
    c->eflags_sf = flag_sf(f);
    c->eflags_pf = flag_pf(f);
    f.op = NOP;
}

// Only the flags this condition names are computed; f.op == NOP means the
// guest's own fields are current (after a call, or before anything ran).
bool condition(const X86 *c, const Flags &f, uint8_t cc) {
    bool v;
    const bool pending = f.op != NOP;
    const uint32_t cf = pending ? flag_cf(c, f) : c->eflags_cf;
    const uint32_t zf = pending ? flag_zf(f) : c->eflags_zf;
    const uint32_t sf = pending ? flag_sf(f) : c->eflags_sf;
    switch (cc >> 1) {
    case 0:
        v = pending ? flag_of(c, f) : c->eflags_of;
        break;
    case 1:
        v = cf;
        break;
    case 2:
        v = zf;
        break;
    case 3:
        v = cf || zf;
        break;
    case 4:
        v = sf;
        break;
    case 5:
        v = pending ? flag_pf(f) : c->eflags_pf;
        break;
    case 6:
        v = sf != (pending ? flag_of(c, f) : c->eflags_of);
        break;
    default:
        v = zf || sf != (pending ? flag_of(c, f) : c->eflags_of);
        break;
    }
    return (cc & 1) ? !v : v;
}

// What is left of the outermost interp_call's step budget. A CALL inside a
// heap routine goes back through recomp_call and can land in the interpreter
// again, so the budget is shared across that nesting rather than renewed by
// it: two heap routines that call each other in a cycle are bounded too.
thread_local uint32_t g_steps_left = 0;
thread_local unsigned g_depth = 0;

// Runs from the routine's first instruction to its RET.
void run(X86 *c, const Routine &r) {
    // build() ends a routine at a RET or at a JMP nothing branches past, and
    // every branch target is an instruction of this routine, so the stream
    // can be walked as a pointer with no *index* bound to test per
    // instruction. How many instructions it walks is a separate question:
    // that is what the step budget below answers, since a routine whose
    // branches all land inside it can still never reach its RET.
    const Ins *const code = r.code.data();
    const Ins *ip = code;
    Flags f;
    for (;;) {
        const Ins &in = *ip;
        if (g_steps_left == 0) {
            snprintf(g_error, sizeof g_error, "no RET within %u instructions (at %08x)", kMaxSteps,
                     in.addr);
            throw Fault{};
        }
        --g_steps_left;
        const Ins *next = ip + 1;
        switch (in.op) {
        case NOP:
            break;
        case MOV:
            store(c, in.dst, load(c, in.src));
            break;
        case MOV8: {
            uint32_t a = address_of(c, in.dst);
            if (!readable(a, 1)) {
                snprintf(g_error, sizeof g_error, "write of %08x outside guest memory", a);
                throw Fault{};
            }
            wr8(a, (uint8_t)in.src.disp);
            break;
        }
        case LEA:
            store(c, in.dst, address_of(c, in.src));
            break;
        // One case per operation: the shape is decided when the routine is
        // decoded, so running an instruction is one dispatch, not two.
        case ADD: {
            uint32_t a = load(c, in.dst), b = load(c, in.src), res = a + b;
            f = Flags{ADD, a, b, res, 0, 0};
            store(c, in.dst, res);
            break;
        }
        case OR: {
            uint32_t a = load(c, in.dst), b = load(c, in.src), res = a | b;
            f = Flags{OR, a, b, res, 0, 0};
            store(c, in.dst, res);
            break;
        }
        case AND: {
            uint32_t a = load(c, in.dst), b = load(c, in.src), res = a & b;
            f = Flags{AND, a, b, res, 0, 0};
            store(c, in.dst, res);
            break;
        }
        case SUB: {
            uint32_t a = load(c, in.dst), b = load(c, in.src), res = a - b;
            f = Flags{SUB, a, b, res, 0, 0};
            store(c, in.dst, res);
            break;
        }
        case XOR: {
            uint32_t a = load(c, in.dst), b = load(c, in.src), res = a ^ b;
            f = Flags{XOR, a, b, res, 0, 0};
            store(c, in.dst, res);
            break;
        }
        case CMP: { // SUB without the store
            uint32_t a = load(c, in.dst), b = load(c, in.src);
            f = Flags{CMP, a, b, a - b, 0, 0};
            break;
        }
        case TEST: { // AND without the store
            uint32_t a = load(c, in.dst), b = load(c, in.src);
            f = Flags{AND, a, b, a & b, 0, 0};
            break;
        }
        case IMUL: {
            int64_t a = (int32_t)(in.has_imm3 ? load(c, in.src) : load(c, in.dst));
            int64_t b = in.has_imm3 ? in.imm3 : (int32_t)load(c, in.src);
            int64_t full = a * b;
            uint32_t res = (uint32_t)full;
            uint8_t ovf = full != (int64_t)(int32_t)res;
            f = Flags{IMUL, (uint32_t)a, (uint32_t)b, res, ovf, ovf};
            store(c, in.dst, res);
            break;
        }
        case INC:
        case DEC: {
            uint32_t a = load(c, in.dst);
            uint32_t res = in.op == INC ? a + 1 : a - 1;
            // INC and DEC leave CF as it was, so it has to be current before
            // this instruction's flags become the pending ones.
            c->eflags_cf = flag_cf(c, f);
            f = Flags{in.op, a, 1, res, 0, 0};
            store(c, in.dst, res);
            break;
        }
        case PUSH:
            push(c, load(c, in.src));
            break;
        case POP: {
            uint32_t v = pop(c);
            store(c, in.dst, v);
            break;
        }
        case CALL: {
            uint32_t target = in.indirect ? load(c, in.src) : in.target;
            push(c, in.addr + in.len);
            flags_settle(c, f); // translated code reads the guest's own fields
            recomp_call(c, target);
            break;
        }
        case RET:
            flags_settle(c, f);
            c->eip = pop(c);
            c->r[R_ESP] += in.ret_pop;
            return;
        case JMPOUT:
            flags_settle(c, f);
            recomp_jump(c, in.target);
            return;
        case JMP:
            next = code + in.target_index;
            break;
        case JCC:
            if (condition(c, f, in.cond))
                next = code + in.target_index;
            break;
        }
        ip = next;
    }
}

} // namespace

extern "C" int interp_call(X86 *c, uint32_t target) {
    g_error[0] = 0;
    std::shared_ptr<Routine> r = routine_at(target);
    if (!r)
        return 0;
    const uint32_t entry_esp = c->r[R_ESP];
    if (g_depth++ == 0)
        g_steps_left = kMaxSteps;
    struct Leave {
        ~Leave() {
            --g_depth;
        }
    } leave;
    try {
        run(c, *r);
    } catch (const Fault &) {
        // Part of the routine ran; carry on as if it had returned zero.
        fprintf(stderr, "[recomp] interp: routine %08x stopped: %s\n", target, g_error);
        c->r[R_EAX] = 0;
        c->r[R_ESP] = entry_esp + 4;
        c->eip = readable(entry_esp, 4) ? rd32(entry_esp) : 0;
    }
    return 1;
}

extern "C" const char *interp_last_error(void) {
    return g_error;
}
