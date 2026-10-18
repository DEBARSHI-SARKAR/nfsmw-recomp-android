"""The heap-code interpreter (runtime/interp.cpp) against Unicorn.

Random routines built from the instruction forms the interpreter accepts run
in both, from the same state; registers, the flags a final CMP sets and a
data page must agree. Needs a built interp_tests (build/recomp/interp_tests)
and the unicorn module; skipped without either.
"""
import os
import random
import struct
import subprocess
from pathlib import Path

import pytest

unicorn = pytest.importorskip("unicorn")
from unicorn import x86_const as X  # noqa: E402

ROOT = Path(__file__).resolve().parents[3]
BINARY = Path(os.environ.get("RECOMP_INTERP_TESTS", ROOT / "build/recomp/interp_tests"))

CODE, DATA, STACK, RETURN = 0x01000000, 0x02000000, 0x0E000000, 0x00400FF0
REGS = [0x12345678, 0x80000000, 0x7FFFFFFF, DATA + 0x800, 0, 0xFFFFFFFE, DATA + 0x400, 3]
UC_REGS = [X.UC_X86_REG_EAX, X.UC_X86_REG_ECX, X.UC_X86_REG_EDX, X.UC_X86_REG_EBX,
           X.UC_X86_REG_ESP, X.UC_X86_REG_EBP, X.UC_X86_REG_ESI, X.UC_X86_REG_EDI]
# Registers a routine may overwrite; EBX and ESI stay pointers into DATA.
SCRATCH = [0, 1, 2, 5, 7]


def mem(rng):
    """ModRM tail for [base+disp8], [base+disp32] or [base+disp8] through a SIB byte."""
    base = rng.choice([6, 3])
    kind = rng.randrange(3)
    if kind == 0:
        return lambda reg: bytes([0x40 | reg << 3 | base, rng.randrange(-0x40, 0x40) & 0xFF])
    if kind == 1:
        return lambda reg: bytes([0x80 | reg << 3 | base]) + struct.pack("<i", rng.randrange(-0x100, 0x100))
    return lambda reg: bytes([0x44 | reg << 3, 0x20 | base, rng.randrange(-0x80, 0x40) & 0xFF])


def instruction(rng):
    r = rng.choice(SCRATCH)
    s = rng.randrange(8)
    m = mem(rng)
    choice = rng.randrange(16)
    if choice == 0:
        return bytes([0x89]) + m(s)                                  # mov [m], r
    if choice == 1:
        return bytes([0x8B]) + m(r)                                  # mov r, [m]
    if choice == 2:
        return bytes([rng.choice([0x03, 0x0B, 0x23, 0x2B, 0x33, 0x3B])]) + m(r)
    if choice == 3:
        return bytes([rng.choice([0x01, 0x09, 0x21, 0x29, 0x31, 0x39, 0x85])]) + m(s)
    if choice == 4:
        op = rng.choice([0x01, 0x29, 0x03, 0x2B, 0x33, 0x3B, 0x85, 0x8B])
        # The ModRM r/m field is the destination of 0x01 and 0x29.
        return bytes([op, 0xC0 | (s << 3 | r if op in (0x01, 0x29) else r << 3 | s)])
    if choice == 5:
        return bytes([0x83, 0xC0 | rng.choice([0, 1, 4, 5, 6, 7]) << 3 | r, rng.randrange(256)])
    if choice == 6:
        return bytes([0x81, 0xC0 | rng.choice([0, 1, 4, 5, 6, 7]) << 3 | r]) + struct.pack("<I", rng.getrandbits(32))
    if choice == 7:
        return bytes([0x0F, 0xAF]) + m(r)                            # imul r, [m]
    if choice == 8:
        return bytes([0x6B, 0xC0 | r << 3 | s, rng.randrange(256)])  # imul r, s, imm8
    if choice == 9:
        return bytes([0xC6]) + m(0) + bytes([rng.randrange(256)])    # mov byte [m], imm8
    if choice == 10:
        return bytes([0x8D]) + m(r)                                  # lea r, [m]
    if choice == 11:
        return bytes([rng.choice([0x40, 0x48]) + r])                 # inc/dec r
    if choice == 12:
        return bytes([0x50 + s, 0x58 + r])                           # push s; pop r
    if choice == 13:
        return bytes([0xA9]) + struct.pack("<I", rng.getrandbits(32))  # test eax, imm32
    if choice == 14:
        return bytes([0xF7]) + m(0) + struct.pack("<I", rng.getrandbits(32))  # test [m], imm32
    return bytes([0xB8 + r]) + struct.pack("<I", rng.getrandbits(32))


def routine(rng):
    out = b""
    for _ in range(rng.randrange(4, 24)):
        ins = instruction(rng)
        if rng.randrange(4) == 0:
            # A conditional skip over the next instruction, after a compare.
            nxt = instruction(rng)
            ins += bytes([0x3B, 0xC0 | rng.choice(SCRATCH) << 3 | rng.choice(SCRATCH),
                          0x70 | rng.randrange(16), len(nxt)]) + nxt
        out += ins
    return out + bytes([0x3B, 0xC1, 0xC3])  # cmp eax, ecx; ret


def run_unicorn(code):
    uc = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_32)
    uc.mem_map(CODE, 0x1000)
    uc.mem_map(DATA, 0x1000)
    uc.mem_map(STACK - 0x1000, 0x1000)
    uc.mem_map(RETURN & ~0xFFF, 0x1000)
    uc.mem_write(CODE, code)
    uc.mem_write(DATA, bytes((i * 37 + 11) & 0xFF for i in range(0x1000)))
    for reg, value in zip(UC_REGS, REGS):
        uc.reg_write(reg, value)
    esp = STACK - 0x100
    uc.reg_write(X.UC_X86_REG_ESP, esp)
    uc.mem_write(esp, struct.pack("<I", RETURN))
    uc.emu_start(CODE, RETURN, count=10000)
    fl = uc.reg_read(X.UC_X86_REG_EFLAGS)
    regs = [uc.reg_read(r) for r in UC_REGS]
    return (
        "eax=%08x ecx=%08x edx=%08x ebx=%08x esp=%08x ebp=%08x esi=%08x edi=%08x eip=%08x\n"
        % (*regs, uc.reg_read(X.UC_X86_REG_EIP))
        + "cf=%u zf=%u sf=%u of=%u\n" % (fl & 1, fl >> 6 & 1, fl >> 7 & 1, fl >> 11 & 1)
        + "data=" + uc.mem_read(DATA, 0x1000).hex() + "\n"
    )


@pytest.mark.skipif(not BINARY.exists(), reason="interp_tests is not built")
def test_random_routines_match_unicorn():
    rng = random.Random(20260917)
    for i in range(300):
        code = routine(rng)
        want = run_unicorn(code)
        got = subprocess.run([str(BINARY), "--run", code.hex()], capture_output=True, text=True).stdout
        assert got == want, "routine %d: %s" % (i, code.hex())
