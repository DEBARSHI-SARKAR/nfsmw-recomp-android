#!/usr/bin/env python3
"""Differential test: translated C vs Unicorn, on the same memory image.

    .venv/bin/python tools/recomp/tests/test_translate.py [-n ITERATIONS]

Builds build/recomp/librecomp_gen.a via tools/build.py --target gen, links it with
tools/recomp/tests/harness.c into a dylib, then for each covered function runs
the same random inputs through Unicorn and through the generated code and
compares every general register plus guest memory.

The x87 comparison rounds Unicorn's 80-bit ST(0) to a double by executing an
injected `FSTP qword ptr` after the call, because the plan pins the recompiled
x87 registers to 64-bit.
"""

import argparse
import collections
import ctypes as C
import hashlib
import os
import random
import math
import struct
import subprocess
import sys

import pefile
from unicorn import Uc, UC_ARCH_X86, UC_MODE_32, UcError
from unicorn.x86_const import (
    UC_X86_REG_EAX, UC_X86_REG_ECX, UC_X86_REG_EDX, UC_X86_REG_EBX,
    UC_X86_REG_ESP, UC_X86_REG_EBP, UC_X86_REG_ESI, UC_X86_REG_EDI,
    UC_X86_REG_EIP, UC_X86_REG_FPCW, UC_X86_REG_FPSW, UC_X86_REG_FPTAG,
    UC_X86_REG_EFLAGS)

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(
    os.path.dirname(os.path.abspath(__file__)))))
sys.path.insert(0, os.path.join(ROOT, "tools"))
import game_config  # noqa: E402
# The game under test and its build root come from the environment: this is
# a game-backed suite, run from a game repository (tools/test.py --translate).
GAME_DIR = os.environ.get("RECOMP_GAME_DIR")
if not GAME_DIR:
    sys.exit("test_translate.py: set RECOMP_GAME_DIR to the game directory (and RECOMP_BUILD_ROOT to its build root)")
BUILD_ROOT = os.environ.get("RECOMP_BUILD_ROOT") or os.path.join(GAME_DIR, "build")
BINARY = str(game_config.load(GAME_DIR)["developer_exe_path"])
GEN = os.path.join(BUILD_ROOT, "recomp/gen")
LIB_A = os.path.join(BUILD_ROOT, "recomp/librecomp_gen.a")
DYLIB = os.path.join(BUILD_ROOT, "recomp/librecomp_test.dylib")
LOCKFILE = os.path.join(BUILD_ROOT, "recomp/.lock")
BUILDLOCK = os.path.join(ROOT, "tools/recomp/buildlock.py")


# ------------------------------------------------------------------- lock --

def reexec_under_lock(script=None):
    """Re-run the whole test inside the shared build lock.

    Letting tools/build.py --target gen take the lock and drop it on exit is not
    enough: what this test does afterwards - link the harness against
    librecomp_gen.a, compile the dispatch probe out of gen/, and read both for
    the rest of the run - depends on those two artifacts staying the pair the
    build published.  A build running beside it would replace them halfway
    through.  The lock covers generation and every dependent read only if the
    whole process runs under it, so it does.

    buildlock.py exports BUILDLOCK_HELD, so the re-executed test does not take
    it twice, and the build it invokes runs inside the same lock."""
    if os.environ.get("BUILDLOCK_HELD") == "1":
        return
    # The caller's script, not this module's: other tests in this directory
    # import this helper, and re-executing test_translate.py on their behalf
    # would run the wrong suite.
    script = os.path.abspath(script or __file__)
    os.execv(sys.executable, [sys.executable, BUILDLOCK, "run", ROOT,
                              os.path.relpath(script, ROOT),
                              sys.executable, script] + sys.argv[1:])


def lock_is_free():
    """Whether another process could take the build lock right now.

    A separate process, because flock is held per open file description and
    this one inherited the wrapper's."""
    probe = ("import fcntl, os, sys\n"
             "fd = os.open(sys.argv[1], os.O_CREAT | os.O_RDWR, 0o644)\n"
             "try:\n"
             "    fcntl.flock(fd, fcntl.LOCK_EX | fcntl.LOCK_NB)\n"
             "except OSError:\n"
             "    sys.exit(1)\n"
             "sys.exit(0)\n")
    return subprocess.call([sys.executable, "-c", probe, LOCKFILE]) == 0


def test_lock_held(when):
    if lock_is_free():
        return ["the build lock was free %s: gen/ and librecomp_gen.a can be "
                "replaced under this test between the build and the reads that "
                "depend on it" % when]
    return []

GUEST_SIZE = 0x10000000
STACK_BASE, STACK_SIZE = 0x0EF00000, 0x00100000
ESP_INIT = 0x0EFFFF00
SCRATCH, SCRATCH_SIZE = 0x0E100000, 0x00010000
SYNTH_BASE, SYNTH_SIZE = 0x0D000000, 0x00020000
CAVE, CAVE_SIZE = 0x0DEAC000, 0x1000
MAGIC_RET = CAVE
EPILOGUE = CAVE + 0x20   # must differ from MAGIC_RET: unicorn will not
                         # start execution at an address it last stopped on
FNSAVE_SLOT = CAVE + 0x200

# EFLAGS bits both engines must agree on after a return.  AF is excluded: it is
# architecturally undefined after AND/OR/XOR/TEST, which the translator does
# not write.  Correction 6 makes every other flag live at a RET, so they must
# match exactly.
EFLAGS_COMPARED = 0x0CC5   # CF PF ZF SF DF OF

#: Which EFLAGS bits are architecturally defined at the end of a function.
#: MUL/IMUL/DIV/IDIV leave every arithmetic flag undefined.  A shift or rotate
#: defines OF only for a count of exactly one, and defines CF only for a count
#: no larger than the operand width, so a constant count above one drops OF and
#: a variable count drops OF and CF.  The translator writes what the ISA
#: defines and unicorn writes whatever its helper produces, so comparing an
#: undefined bit is meaningless.
UNDEFINED_FLAG_MNEM = frozenset(("MUL", "IMUL", "DIV", "IDIV"))
VARIABLE_SHIFT = frozenset(("SHL", "SHR", "SAR", "ROL", "ROR", "RCL", "RCR",
                            "SHLD", "SHRD"))
EFLAGS_CF, EFLAGS_ZF, EFLAGS_OF, EFLAGS_DF = 0x001, 0x040, 0x800, 0x400


def _dest_width(ins):
    sys.path.insert(0, os.path.join(ROOT, "tools/recomp"))
    import translate as T
    try:
        op = T.parse_operand(ins.ops[0])
    except Exception:                       # noqa: BLE001
        return None
    return op.size


def comparable_eflags(insns):
    mask = EFLAGS_COMPARED
    for ins in insns:
        if ins.mnem in UNDEFINED_FLAG_MNEM:
            mask &= EFLAGS_DF          # DF only ever comes from CLD/STD
        elif ins.mnem in ("BSF", "BSR"):
            mask &= EFLAGS_ZF | EFLAGS_DF   # only ZF is defined
        elif ins.mnem in VARIABLE_SHIFT:
            idx = 2 if ins.mnem in ("SHLD", "SHRD") else 1
            op = ins.ops[idx] if len(ins.ops) > idx else "0x1"
            if not op.startswith("0x"):
                mask &= ~(EFLAGS_OF | EFLAGS_CF)
            else:
                cnt = int(op, 16) & 31
                if cnt != 1:
                    mask &= ~EFLAGS_OF
                width = _dest_width(ins)
                if width is not None and cnt >= width:
                    mask &= ~EFLAGS_CF     # shifted out entirely: CF undefined
    return mask


#: The only x87 instructions that define C0-C3.  Everything else leaves them
#: unmodified or reflects exception state this model does not track, so the
#: condition codes are only compared for functions that contain one.
X87_CC_DEFINED = frozenset(("FCOM", "FCOMP", "FCOMPP", "FUCOM", "FUCOMP",
                            "FUCOMPP", "FICOM", "FICOMP", "FTST", "FXAM"))


def x87_cc_defined(insns):
    return any(ins.mnem in X87_CC_DEFINED for ins in insns)


def flags_are_defined(insns):
    for ins in insns:
        if ins.mnem in UNDEFINED_FLAG_MNEM:
            return False
        if ins.mnem in VARIABLE_SHIFT:
            idx = 2 if ins.mnem in ("SHLD", "SHRD") else 1
            if len(ins.ops) > idx and not ins.ops[idx].startswith("0x"):
                return False
    return True

# 64-bit x87 vs Unicorn's 80-bit: a couple of ULP of a double.
X87_TOLERANCE = 1e-12
FPU_CW_INIT = 0x037F
FPU_TAG_INIT = 0xFFFF     # post-FINIT: every x87 register empty
EFLAGS_MISC_INIT = 0x202  # reserved bit 1 and IF

UC_REGS = [UC_X86_REG_EAX, UC_X86_REG_ECX, UC_X86_REG_EDX, UC_X86_REG_EBX,
           UC_X86_REG_ESP, UC_X86_REG_EBP, UC_X86_REG_ESI, UC_X86_REG_EDI]
REG_NAMES = ["EAX", "ECX", "EDX", "EBX", "ESP", "EBP", "ESI", "EDI"]


class X86(C.Structure):
    _fields_ = [
        ("r", C.c_uint32 * 8), ("eip", C.c_uint32),
        ("eflags_cf", C.c_uint32), ("eflags_zf", C.c_uint32),
        ("eflags_sf", C.c_uint32), ("eflags_of", C.c_uint32),
        ("eflags_pf", C.c_uint32), ("eflags_af", C.c_uint32),
        ("eflags_df", C.c_uint32), ("eflags_misc", C.c_uint32),
        ("st", C.c_double * 8), ("st_bits", C.c_uint64 * 8),
        ("st_exact", C.c_uint8 * 8), ("fpu_top", C.c_uint32),
        ("fpu_cw", C.c_uint16), ("fpu_sw", C.c_uint16),
        ("fpu_tag", C.c_uint16),
        ("fs_base", C.c_uint32),
        ("mm", C.c_uint64 * 8),
    ]


# ------------------------------------------------------------------ build --

def build(verbose=True):
    if verbose:
        print("== building librecomp_gen.a ==")
    subprocess.check_call([sys.executable, os.path.join(ROOT, "tools/build.py"), "--game-dir", GAME_DIR,
                           "--target", "gen"])
    if verbose:
        print("== linking test dylib ==")
    synth = generate_synthetic(os.path.join(BUILD_ROOT, "recomp/synth.c"))
    subprocess.check_call([
        "xcrun", "clang", "-O1", "-g", "-std=c11", "-Wall", "-Wextra",
        "-Wno-unused", "-I", GEN, "-I", ROOT,
        "-I", os.path.join(ROOT, "runtime"), "-dynamiclib",
        os.path.join(ROOT, "tools/recomp/tests/harness.c"), synth,
        "-Wl,-force_load," + LIB_A, "-o", DYLIB])


# ------------------------------------------------------------------ native --

class Native(object):
    def __init__(self):
        # Printed before the dylib is mapped: if the process dies during the
        # load, this is the last line and it names what was being loaded.
        import unicorn as _uc
        print("  loading %s (%d bytes, mtime %d) into %s, unicorn %s"
              % (os.path.relpath(DYLIB, ROOT),
                 os.path.getsize(DYLIB) if os.path.exists(DYLIB) else -1,
                 os.path.getmtime(DYLIB) if os.path.exists(DYLIB) else -1,
                 sys.executable, getattr(_uc, "__version__", "?")),
              flush=True)
        if not os.path.exists(DYLIB):
            raise SystemExit(
                "%s is missing. Run without --no-build, or "
                "tools/build.py --target gen first." % DYLIB)
        built = os.path.getmtime(DYLIB)
        for src in ("runtime/x86.h", "tools/recomp/translate.py",
                    "tools/recomp/tests/harness.c"):
            if os.path.getmtime(os.path.join(ROOT, src)) > built:
                raise SystemExit(
                    "%s is newer than the test dylib. Re-run without "
                    "--no-build." % src)
        self.lib = C.CDLL(DYLIB)
        self.lib.harness_mem.restype = C.POINTER(C.c_uint8)
        self.lib.harness_x86_size.restype = C.c_uint64
        self.lib.harness_st0.restype = C.c_double
        self.lib.harness_st0.argtypes = [C.POINTER(X86)]
        self.lib.harness_run.argtypes = [C.c_uint32, C.POINTER(X86)]
        self.lib.harness_header_selftest.restype = C.c_uint32
        self.lib.harness_header_failure.restype = C.c_uint32
        self.lib.harness_header_failure.argtypes = [C.c_uint32]
        self.lib.harness_header_check_count.restype = C.c_uint32
        self.lib.harness_fnsave.argtypes = [C.POINTER(X86), C.POINTER(C.c_uint8 * 108)]
        self.lib.harness_eflags.restype = C.c_uint32
        self.lib.harness_eflags.argtypes = [C.POINTER(X86)]
        self.lib.harness_eflags_roundtrip.restype = C.c_uint32
        self.lib.harness_eflags_roundtrip.argtypes = [C.c_uint32]
        self.lib.harness_cpuid.argtypes = [C.c_uint32, C.POINTER(C.c_uint32 * 4)]
        self.lib.harness_last_unknown.restype = C.c_uint32
        self.lib.harness_last_div_error.restype = C.c_uint32
        assert self.lib.harness_x86_size() == C.sizeof(X86), (
            "X86 layout mismatch: C says %d, ctypes says %d"
            % (self.lib.harness_x86_size(), C.sizeof(X86)))
        self.mem = self.lib.harness_mem()
        self.base = C.cast(self.mem, C.c_void_p).value

    def write(self, addr, data):
        C.memmove(self.base + addr, data, len(data))

    def read(self, addr, n):
        return C.string_at(self.base + addr, n)

    def zero(self, addr, n):
        C.memset(self.base + addr, 0, n)


# ----------------------------------------------------------------- unicorn --

class Emu(object):
    def __init__(self, image, image_base, image_size):
        self.image = image
        self.image_base = image_base
        self.image_size = image_size
        self.u = Uc(UC_ARCH_X86, UC_MODE_32)
        self.u.mem_map(image_base, (image_size + 0xFFF) & ~0xFFF)
        self.u.mem_map(STACK_BASE, STACK_SIZE)
        self.u.mem_map(SCRATCH, SCRATCH_SIZE)
        self.u.mem_map(SYNTH_BASE, SYNTH_SIZE)
        self.u.mem_map(CAVE, CAVE_SIZE)
        self.u.mem_write(image_base, image)
        # Injected epilogue: FNSAVE [FNSAVE_SLOT].  One instruction yields the
        # control word, every status bit, the whole tag word and all eight
        # registers, so the comparison does not have to poke at them one at a
        # time (and unlike FSTP it does not pop anything first).
        self.u.mem_write(EPILOGUE, b"\xdd\x35" + struct.pack("<I", FNSAVE_SLOT))

    def reset_image(self):
        self.u.mem_write(self.image_base, self.image)

    def reset_fpu(self):
        """Match the post-FINIT, IF-set state the recompiled X86 starts in."""
        self.u.reg_write(UC_X86_REG_FPCW, FPU_CW_INIT)
        self.u.reg_write(UC_X86_REG_FPSW, 0)
        self.u.reg_write(UC_X86_REG_FPTAG, FPU_TAG_INIT)
        self.u.reg_write(UC_X86_REG_EFLAGS, EFLAGS_MISC_INIT)

    def snapshot_fpu(self):
        """The full x87 state, via the injected FNSAVE.  FNSAVE reinitialises
        the FPU, so this is the last thing done with an iteration's state."""
        self.u.mem_write(FNSAVE_SLOT, b"\0" * 108)
        self.u.emu_start(EPILOGUE, EPILOGUE + 6)
        return bytes(self.u.mem_read(FNSAVE_SLOT, 108))


# ------------------------------------------------------------------- tests --

class Case(object):
    """One function under test.

    setup(rng, native, emu) writes any random pointee data into both memories
    and returns the list of dword arguments to push.
    """

    def __init__(self, addr, name, setup, x87=False):
        self.addr = addr
        self.name = name
        self.setup = setup
        self.x87 = x87
        self.eflags = None      # filled in from the listing by main()
        self.x87cc = None


def rand32(rng):
    return rng.getrandbits(32)


def setup_two_dwords(rng, write):
    return [rand32(rng), rand32(rng)]


def setup_one_dword(rng, write):
    return [rand32(rng)]


def setup_two_points(rng, write):
    """Two pointers to a pair of int16 map coordinates."""
    a, b = SCRATCH + 0x40, SCRATCH + 0x80
    write(a, struct.pack("<HH", rng.getrandbits(16), rng.getrandbits(16)))
    write(b, struct.pack("<HH", rng.getrandbits(16), rng.getrandbits(16)))
    return [a, b]


def setup_three_vec(rng, write):
    """Three pointers to structs whose +0xc and +0x10 fields are floats."""
    ptrs = []
    for k in range(3):
        p = SCRATCH + 0x100 + 0x40 * k
        blob = bytearray(rng.randbytes(0x40))
        struct.pack_into("<ff", blob, 0xC,
                         rng.uniform(-4096.0, 4096.0), rng.uniform(-4096.0, 4096.0))
        write(p, bytes(blob))
        ptrs.append(p)
    return ptrs


def setup_558830(rng, write):
    """(nonzero, dest_ptr, 8 doubles) -> stores eight floats at dest+0x80."""
    dest = SCRATCH + 0x400
    write(dest, bytes(0x100))
    args = [1, dest]
    for _ in range(8):
        args += list(struct.unpack("<II", struct.pack("<d", rng.uniform(-1e4, 1e4))))
    return args


CASES = [
    Case(0x00401000, "calc_distance_1d_wraparound", setup_two_dwords),
    Case(0x00586000, "fast_sqrt", setup_one_dword),
    Case(0x004503F0, "calc_distance_toroidal", setup_two_points),
    Case(0x00450450, "calc_squared_distance_toroidal", setup_two_points),
    Case(0x0046DBB0, "x87 2d cross product", setup_three_vec, x87=True),
    # 00558830 returns with an empty FPU stack, so its check is the memory
    # comparison of the eight stored floats, not ST(0).
    Case(0x00558830, "x87 float stores", setup_558830),
]


# -------------------------------------------------------------------- run ---

def _is_nan_pair(a, b, fmt, size):
    if len(a) != size:
        return False
    try:
        x, y = struct.unpack(fmt, a)[0], struct.unpack(fmt, b)[0]
    except struct.error:
        return False
    return x != x and y != y


def diff_is_x87_nan(a, b, base):
    """True when every differing byte sits in a float or double that is NaN on
    both sides.  x87's default QNaN is negative (0xffc00000 as a float) while
    the host's is positive, so a 64-bit x87 model cannot reproduce the payload
    of an invalid-operation result.  Anything else is a translation bug."""
    i = 0
    n = len(a)
    seen = False
    while i < n:
        if a[i] == b[i]:
            i += 1
            continue
        for size, fmt in ((4, "<f"), (8, "<d")):
            off = (base + i) % size
            lo = i - off
            if lo >= 0 and lo + size <= n and _is_nan_pair(a[lo:lo + size],
                                                           b[lo:lo + size], fmt, size):
                seen = True
                i = lo + size
                break
        else:
            return False
    return seen


def ext80(b):
    """An 80-bit extended as a Python float."""
    m = int.from_bytes(b[:8], "little")
    se = int.from_bytes(b[8:10], "little")
    e, sign = se & 0x7FFF, -1.0 if se >> 15 else 1.0
    if e == 0x7FFF:
        return sign * float("nan") if (m << 1) & ((1 << 64) - 1) else sign * float("inf")
    if e == 0 and m == 0:
        return sign * 0.0
    try:
        return sign * math.ldexp(m, e - 16383 - 63)
    except OverflowError:
        # An 80-bit value whose exponent is out of a double's range; the
        # comparison only needs the two sides to agree on it being huge.
        return sign * float("inf")


def compare_x87(uimg, nimg, cc=True):
    """Compare two FNSAVE images: control word, status word, tag word and all
    eight registers."""
    out = []
    ucw, usw, utw = (int.from_bytes(uimg[o:o + 2], "little") for o in (0, 4, 8))
    ncw, nsw, ntw = (int.from_bytes(nimg[o:o + 2], "little") for o in (0, 4, 8))
    if ucw != ncw:
        out.append("x87 control word differs (unicorn %04x, native %04x)" % (ucw, ncw))
    if (usw >> 11 & 7) != (nsw >> 11 & 7):
        out.append("x87 TOP differs (unicorn %d, native %d)"
                   % (usw >> 11 & 7, nsw >> 11 & 7))
    if cc and (usw & 0x4700) != (nsw & 0x4700):
        out.append("x87 condition codes differ (unicorn %04x, native %04x)"
                   % (usw & 0x4700, nsw & 0x4700))
    # Every status bit is compared except IE, which is the one bit the oracle
    # provably never sets: `FLD1; FCHS; FSQRT` leaves unicorn's status word at
    # 0x3c00 with IE clear, and `FLDZ; FLDZ; FDIVRP` reports ZE for 0/0, an
    # invalid operation rather than a divide by zero.  This model raises IE
    # where the ISA does, so matching the oracle there would mean copying its
    # bug.  DE, ZE, OE, UE, PE, SF and ES are compared; ZE is modelled.  The
    # condition codes are gated on `cc` because outside the FCOM family x86
    # leaves them unmodified, and are excluded here to avoid reporting twice.
    mask = ~(0x0001 | 0x4700) & 0xFFFF
    if (usw & mask) != (nsw & mask):
        out.append("x87 status word differs outside IE (unicorn %04x, native %04x)"
                   % (usw, nsw))
    if (usw & 0x0001) != (nsw & 0x0001):
        out.append("@sw-delta unicorn %04x native %04x" % (usw, nsw))
    # The tag word is compared in full, two bits per physical register:
    # empty, zero, special and valid all have to agree.  `ftag_classify`
    # describes the register as the 80-bit value it saves to, which is what
    # unicorn tags, so a subnormal double is valid on both sides rather than
    # special on ours.
    if utw != ntw:
        names = {0: "valid", 1: "zero", 2: "special", 3: "empty"}
        detail = ", ".join("R%d %s vs %s" % (k, names[(utw >> 2 * k) & 3],
                                             names[(ntw >> 2 * k) & 3])
                           for k in range(8)
                           if (utw >> 2 * k) & 3 != (ntw >> 2 * k) & 3)
        out.append("x87 tag word differs (unicorn %04x, native %04x: %s)"
                   % (utw, ntw, detail))
    for k in range(8):
        uv = ext80(uimg[28 + 10 * k:28 + 10 * k + 10])
        nv = ext80(nimg[28 + 10 * k:28 + 10 * k + 10])
        phys = ((usw >> 11 & 7) + k) & 7
        if (utw >> (2 * phys)) & 3 == 3:
            continue                       # empty on both sides (checked above)
        if uv == nv or (uv != uv and nv != nv):
            continue
        denom = max(abs(uv), 1e-300)
        if abs(uv - nv) / denom <= X87_TOLERANCE:
            continue
        out.append("ST(%d) differs (unicorn %.17g, native %.17g)" % (k, uv, nv))
    return out


def compare_cpu(emu, native, c, fpu=None, eflags=EFLAGS_COMPARED, x87cc=True):
    """Flags and x87 bookkeeping, beyond the general registers."""
    out = []
    uimg = fpu if fpu is not None else emu.snapshot_fpu()
    nimg = (C.c_uint8 * 108)()
    native.lib.harness_fnsave(C.byref(c), C.byref(nimg))
    out += compare_x87(uimg, bytes(nimg), cc=x87cc)
    ue = emu.u.reg_read(UC_X86_REG_EFLAGS)
    ne = native.lib.harness_eflags(C.byref(c))
    if (ue & eflags) != (ne & eflags):
        diff = (ue ^ ne) & eflags
        names = [n for bit, n in ((0, "CF"), (2, "PF"), (6, "ZF"), (7, "SF"),
                                  (10, "DF"), (11, "OF")) if diff >> bit & 1]
        out.append("EFLAGS %s differ (unicorn %08x, native %08x)"
                   % (",".join(names), ue, ne))
    return out


def compare_regions(emu, native, allow_x87_nan=False):
    """(ok, description) over every region either side may have written.

    A difference that is only an x87 invalid-operation NaN payload is
    classified, never used to stop the comparison early: an unrelated
    corruption in a later region has to still be reported."""
    nan_only = False
    regions = ((STACK_BASE, STACK_SIZE, "stack"),
               (SCRATCH, SCRATCH_SIZE, "scratch"),
               (emu.image_base, emu.image_size, "image"))
    for base, size, label in regions:
        a = bytes(emu.u.mem_read(base, size))
        b = native.read(base, size)
        if a == b:
            continue
        if allow_x87_nan and diff_is_x87_nan(a, b, base):
            nan_only = True
            continue
        for i in range(size):
            if a[i] != b[i]:
                return False, ("%s memory differs at %08x: unicorn %02x, native %02x"
                               % (label, base + i, a[i], b[i]))
    return True, ("x87-nan" if nan_only else "")


def run_case(case, emu, native, rng, iterations, verbose):
    fails = []
    stats = {"x87_exact": 0, "x87_1ulp": 0, "exc": 0}
    for it in range(iterations):
        # --- fresh, identical memory on both sides ---
        emu.u.mem_write(STACK_BASE, b"\0" * STACK_SIZE)
        emu.u.mem_write(SCRATCH, b"\0" * SCRATCH_SIZE)
        emu.reset_image()
        native.zero(STACK_BASE, STACK_SIZE)
        native.zero(SCRATCH, SCRATCH_SIZE)
        native.write(emu.image_base, emu.image)

        writes = []

        def write(addr, data):
            writes.append((addr, data))
            emu.u.mem_write(addr, data)
            native.write(addr, data)

        args = case.setup(rng, write)
        frame = struct.pack("<%dI" % (len(args) + 1), MAGIC_RET, *args)
        emu.u.mem_write(ESP_INIT, frame)
        native.write(ESP_INIT, frame)

        # --- unicorn ---
        for r in UC_REGS:
            emu.u.reg_write(r, 0xA5A5A5A5)
        emu.u.reg_write(UC_X86_REG_ESP, ESP_INIT)
        emu.reset_fpu()
        try:
            emu.u.emu_start(case.addr, MAGIC_RET)
        except UcError as e:
            fails.append("iteration %d: unicorn error %s" % (it, e))
            continue
        uregs = [emu.u.reg_read(r) for r in UC_REGS]
        ueip = emu.u.reg_read(UC_X86_REG_EIP)
        ufpu = emu.snapshot_fpu()
        ust0 = ext80(ufpu[28:38])

        # --- generated code ---
        c = X86()
        for k in range(8):
            c.r[k] = 0xA5A5A5A5
        c.r[4] = ESP_INIT
        c.fpu_cw = FPU_CW_INIT
        c.fpu_tag = FPU_TAG_INIT
        c.eflags_misc = EFLAGS_MISC_INIT
        c.fpu_top = 0
        c.fs_base = 0x0FE00000
        native.lib.harness_reset_flags()
        native.lib.harness_run(case.addr, C.byref(c))
        if native.lib.harness_last_unknown():
            fails.append("iteration %d: unresolved call to %08x"
                         % (it, native.lib.harness_last_unknown()))
            continue

        # --- compare ---
        for k in range(8):
            if uregs[k] != c.r[k]:
                fails.append("iteration %d args=%s: %s unicorn=%08x native=%08x"
                             % (it, [hex(a) for a in args], REG_NAMES[k],
                                uregs[k], c.r[k]))
        if ueip != c.eip:
            fails.append("iteration %d: EIP unicorn=%08x native=%08x" % (it, ueip, c.eip))
        for why in compare_cpu(emu, native, c, ufpu, eflags=case.eflags,
                               x87cc=case.x87cc):
            if why.startswith("@sw-delta"):
                stats["exc"] += 1
                continue
            fails.append("iteration %d: %s" % (it, why))
        if case.x87:
            nst0 = native.lib.harness_st0(C.byref(c))
            if ust0 == nst0 or (ust0 != ust0 and nst0 != nst0):
                stats["x87_exact"] += 1
            else:
                rel = abs(ust0 - nst0) / max(1e-300, abs(ust0))
                # The plan pins recompiled x87 registers to 64-bit, so
                # Unicorn's 80-bit intermediates may land a ULP away.  Only a
                # difference larger than that is a translation bug.
                if rel <= X87_TOLERANCE:
                    stats["x87_1ulp"] += 1
                else:
                    fails.append("iteration %d: ST0 unicorn=%.17g native=%.17g (rel %.3g)"
                                 % (it, ust0, nst0, rel))
        ok, why = compare_regions(emu, native)
        if not ok:
            fails.append("iteration %d: %s" % (it, why))
        if fails and len(fails) > 6:
            break
    return fails, stats


# ------------------------------------------------ jump-table dispatch test --

def test_jumptable(emu, native, verbose):
    """0043e8e0 dispatches through two jump tables.

    Static half: for every selector value the PE's own tables predict a target;
    each one must be a `case` in the generated switch.
    Dynamic half: Unicorn is run for every selector and the EIP it actually
    lands on after the indirect JMP must equal that prediction.
    """
    import re
    from unicorn import UC_HOOK_CODE

    src = None
    # A function with alternate entry points is emitted as a shared body plus
    # thin wrappers, so accept either spelling.
    markers = ("static void body_0043e8e0(X86 *c, uint32_t entry_) {",
               "void fn_0043e8e0(X86 *c) {")
    for name in sorted(os.listdir(GEN)):
        if not name.endswith(".c"):
            continue
        text = open(os.path.join(GEN, name)).read()
        for marker in markers:
            if marker in text:
                src = text.split(marker, 1)[1].split("\n}\n", 1)[0]
                break
        if src is not None:
            break
    if src is None:
        return ["fn_0043e8e0 not found in the generated sources"]

    cases = {}
    for at, blk in re.findall(r"/\* (0043e922|0043e93d) JMP.*?\n(.*?)\n\s*\}", src, re.S):
        cases[at] = set(int(m, 16) for m in re.findall(r"case 0x([0-9a-f]+)u:", blk))
    if "0043e922" not in cases or "0043e93d" not in cases:
        return ["generated switch blocks not found (got %s)" % sorted(cases)]

    base = emu.image_base
    img = emu.image

    def rd32(va):
        return struct.unpack("<I", img[va - base:va - base + 4])[0]

    fails = []
    predicted = {}
    for sel in range(0, 0x7B):
        slot = img[0x4423F0 - base + sel]
        predicted[sel] = rd32(0x4422C0 + 4 * slot)
    missing = set(predicted.values()) - cases["0043e922"]
    if missing:
        fails.append("primary table: %s reachable but not a generated case"
                     % sorted("%08x" % m for m in missing))
    second = [rd32(0x44246C + 4 * j) for j in range(4)]
    missing = set(second) - cases["0043e93d"]
    if missing:
        fails.append("secondary table: %s reachable but not a generated case"
                     % sorted("%08x" % m for m in missing))

    arg1, arg2 = SCRATCH + 0x1000, SCRATCH + 0x200
    checked = 0
    for sel in range(0, 0x7B):
        emu.reset_image()
        emu.u.mem_write(STACK_BASE, b"\0" * STACK_SIZE)
        emu.u.mem_write(SCRATCH, b"\0" * SCRATCH_SIZE)
        blob = bytearray(0x800)
        blob[0xC] = (sel + 0xC) & 0xFF
        struct.pack_into("<I", blob, 4, 1)
        emu.u.mem_write(arg2, bytes(blob))
        emu.u.mem_write(arg1, bytes(0x2000))
        emu.u.mem_write(ESP_INIT, struct.pack("<III", MAGIC_RET, arg1, arg2))
        for r in UC_REGS:
            emu.u.reg_write(r, 0)
        emu.u.reg_write(UC_X86_REG_ESP, ESP_INIT)
        emu.reset_fpu()

        trace = []

        def hook(uc, address, size, _):
            trace.append(address)
            if len(trace) > 2 and trace[-2] == 0x0043E922:
                uc.emu_stop()

        h = emu.u.hook_add(UC_HOOK_CODE, hook)
        try:
            emu.u.emu_start(0x0043E8E0, MAGIC_RET, count=40)
        except UcError:
            pass
        emu.u.hook_del(h)
        if 0x0043E922 not in trace:
            fails.append("selector %d never reached the indirect jump" % sel)
            continue
        landed = trace[trace.index(0x0043E922) + 1]
        checked += 1
        if landed != predicted[sel]:
            fails.append("selector %d: unicorn landed at %08x, PE table predicts %08x"
                         % (sel, landed, predicted[sel]))
        elif landed not in cases["0043e922"]:
            fails.append("selector %d: unicorn landed at %08x, not a generated case"
                         % (sel, landed))
    if verbose and not fails:
        print("    %d generated cases; %d selectors executed in unicorn, every "
              "landing address matches a generated case"
              % (len(cases["0043e922"]) + len(cases["0043e93d"]), checked))
    return fails


# ------------------------------------------------------- header contracts --

def header_check_labels():
    """The C self-test's checks, in order, read from the source.

    Naming them here by hand drifted from the code, so they are extracted
    instead: every CHECK(...) in harness.c, in order, with its expression as
    the label.  Reading a file in the repository is fine even on a read-only
    tree.  The driver still asserts the count against what the harness reports
    having run, so a check added inside a macro or a loop would be caught."""
    src = open(os.path.join(ROOT, "tools/recomp/tests/harness.c")).read()
    src = src[src.index("harness_header_selftest(void)"):]
    labels, i = [], 0
    while True:
        i = src.find("CHECK(", i)
        if i < 0 or src.startswith("#define CHECK(", max(0, i - 8)):
            if i < 0:
                break
            i += 6
            continue
        j, depth = i + 6, 1
        while depth:
            if src[j] == "(":
                depth += 1
            elif src[j] == ")":
                depth -= 1
            j += 1
        labels.append(" ".join(src[i + 6:j - 1].split()))
        i = j
    return labels


HEADER_CHECKS = header_check_labels()



#: Checks driven from Python rather than from the C self-test.
PY_HEADER_CHECKS = 8

#: Functions whose returned EAX legitimately carries the x87 IE bit.
#:
#: Unicorn never raises the invalid-operation flag, so any function that moves
#: the status word into AX and hands it back differs from this model in that
#: one bit.  Inferring which functions those are from the listing turned out
#: to prove nothing about where the value in EAX came from, so they are named
#: here instead, each with the line that puts the status word in AX.  Every
#: other EAX mismatch is a failure, whatever the status words are doing.
IE_IN_EAX = {
    # analysis/decompiled/D3DPopTB.exe/functions/005646b0.asm:10 and :14
    #   005646cc  FSTSW AX
    #   005646da  FSTSW AX
    # The CRT's status-word helper: it raises the exceptions its argument asks
    # for and returns the resulting status word, so IE reaches the caller.
    0x005646B0: "FSTSW AX at 005646cc and 005646da",
}


def test_header_contracts(native):
    """Plan corrections 5 and 10, checked against the header the generated
    code actually calls."""
    fails = []
    # A count and the failing indices, not a bitmap: with more than 64 checks
    # a 64-bit mask silently loses everything past index 63, and it did.
    nbad = native.lib.harness_header_selftest()
    ran = native.lib.harness_header_check_count()
    if ran != len(HEADER_CHECKS):
        fails.append("the harness ran %d checks but %d are named here; the two "
                     "lists have drifted apart" % (ran, len(HEADER_CHECKS)))
    for i in range(nbad):
        k = native.lib.harness_header_failure(i)
        name = HEADER_CHECKS[k] if k < len(HEADER_CHECKS) else "check %d" % k
        fails.append("header check %d failed: %s" % (k, name))

    for v in (0x00000202, 0x00200202, 0x00000cd7, 0xffffffff, 0x00000000,
              0x00240ad7, 0x00003000):
        got = native.lib.harness_eflags_roundtrip(v)
        want = v | 0x00000002          # reserved bit 1 always reads as 1
        if got != want:
            fails.append("PUSHFD/POPFD of %08x came back as %08x, want %08x"
                         % (v, got, want))
    # the ID bit specifically: the CPUID probe toggles it and reads it back
    base = native.lib.harness_eflags_roundtrip(0x00000202)
    flipped = native.lib.harness_eflags_roundtrip(0x00000202 ^ 0x00200000)
    if base == flipped:
        fails.append("EFLAGS.ID does not survive PUSHFD/POPFD")

    out = (C.c_uint32 * 4)()
    native.lib.harness_cpuid(0, C.byref(out))
    vendor = struct.pack("<III", out[1], out[3], out[2])
    if vendor != b"GenuineIntel":
        fails.append("CPUID leaf 0 vendor is %r, want b'GenuineIntel'" % vendor)
    native.lib.harness_cpuid(1, C.byref(out))
    family = (out[0] >> 8) & 0xF
    if family != 6:
        fails.append("CPUID leaf 1 family is %d, want 6" % family)
    if out[3] != (1 | (1 << 4) | (1 << 15)):
        fails.append("CPUID leaf 1 feature bits are %08x, want FPU|TSC|CMOV" % out[3])
    return fails


# ------------------------------------------------- jump-table guard tests --

def test_guard_direction():
    """Only a guard that branches AWAY on out-of-range values bounds the
    fall-through path the indirect JMP sits on.  `CMP r,N` + `JA` leaves
    0..N; `JAE`/`JNC` leave 0..N-1; `JBE`/`JB`/`JC` branch away on in-range
    values, so falling through them means the index is out of range and the
    compare bounds nothing."""
    sys.path.insert(0, os.path.join(ROOT, "tools/recomp"))
    import translate as T

    expected = {"JA": 8, "JAE": 7, "JNC": 7, "JNB": 7, "JNBE": 8,
                "JBE": None, "JB": None, "JC": None, "JZ": None, "JNZ": None}
    image = T.Image(BINARY)

    class Opts(object):
        eager_flags = False

    tr = T.Translator(image, set(), Opts())
    fails = []
    for guard, want in sorted(expected.items()):
        text = ("0d008000  CMP EAX,0x7\n"
                "0d008003  %s 0x0d008010\n"
                "0d008009  JMP dword ptr [EAX*0x4 + 0x00500000]\n"
                "0d008010  RET\n" % guard)
        insns = T.parse_listing_text(text)
        fn = T.Function(0x0D008000, "guard", 0x11, insns)
        fn.measure(image)
        fn.index = {i.addr: k for k, i in enumerate(insns)}
        got = tr.cmp_bound_here(fn, 0, 0)
        if got != want:
            fails.append("CMP EAX,0x7 + %s bounds %r, expected %r"
                         % (guard, got, want))
    return fails


# --------------------------------------------- entry-point classification --

#: The C++ static initializers the string-tail test used to drop.  They are
#: reachable only through the tables __initterm walks, so nothing
#: cross-references them and Ghidra lists none of them; without these their
#: globals stay zero.
INITTERM_FUNCTIONS = [
    0x00455170, 0x00457550, 0x00462E60, 0x00486A30, 0x00486A40, 0x00486A50,
    0x004B4840, 0x004B4870, 0x004B6460, 0x004B6750, 0x004B6760, 0x004B6770,
    0x004B6E50, 0x004B7970, 0x004E3450, 0x004E4530, 0x004E4570, 0x004E4C30,
    0x00527C50, 0x00527C70, 0x00573760,
]


def test_structural_promotion():
    """A block a jump table names can never be withdrawn afterwards.

    The pruning pass may drop a recovered block whose own dispatch goes
    nowhere, but only when the block was a guess.  A block a table names is
    code by construction, and the promotion has to happen where the table is
    decoded: a target that is already a known instruction boundary is accepted
    by `want_target` at its first check and never reaches `unlisted_targets`,
    so the recovery path never sees it and cannot promote it."""
    sys.path.insert(0, os.path.join(ROOT, "tools/recomp"))
    import translate as T

    fails = []
    Body = collections.namedtuple("Body", "addr")

    # A block found by the data-pointer scan, later named by a table.
    body = Body(0x1000)
    owner = {0x1000: body, 0x1004: body}
    prov = {0x1000: "data"}
    T.note_structural(prov, owner, 0x1000, "table")
    if prov.get(0x1000) != "table":
        fails.append("a table naming a known data-provenance block left it "
                     "as %r" % prov.get(0x1000))
    if T.prunable_blocks({0x1000}, prov):
        fails.append("a block a jump table names is still withdrawable")

    # Named through an alternate entry: the body is what pruning is keyed on.
    prov = {0x1000: "data"}
    T.note_structural(prov, owner, 0x1004, "table")
    if prov.get(0x1000) != "table":
        fails.append("a table naming an alternate entry did not promote the "
                     "body it enters (%r)" % prov.get(0x1000))
    if T.prunable_blocks({0x1000}, prov):
        fails.append("a body entered by a table target is still withdrawable")

    # A guess stays a guess, or nothing could ever be withdrawn.
    prov = {0x1000: "data"}
    T.note_structural(prov, owner, 0x1000, "branch")
    if T.prunable_blocks({0x1000}, prov) != {0x1000}:
        fails.append("a guessed block stopped being withdrawable")
    if T.prunable_blocks({0x2000}, {}) != {0x2000}:
        fails.append("a block with no recorded provenance is not withdrawable")

    # The bypass this guards against is real: decode a live table and check
    # that its targets are accepted without ever entering unlisted_targets.
    class Opts(object):
        eager_flags = False

    fns = {a: T.Function(a, n, nb, T.parse_listing(path))
           for a, n, nb, path in T.load_functions()}
    image = T.Image(BINARY)
    for fn in fns.values():
        fn.measure(image)
    tr = T.Translator(image, set(fns), Opts())
    tr.all_insn_addrs = {ins.addr for fn in fns.values() for ins in fn.insns}
    fn = fns[0x0043e8e0]
    tr.prepare(fn, strict=True)
    targets = [t for ts in tr.jumptables.values() for t in ts]
    if not targets:
        fails.append("0043e8e0 decoded no jump table, so the promotion path "
                     "is untested")
    known = [t for t in targets if t in tr.all_insn_addrs]
    if not known:
        fails.append("no decoded target of 0043e8e0 was already known, so "
                     "nothing exercises the early return in want_target")
    if tr.unlisted_targets & set(known):
        fails.append("a known target reached unlisted_targets after all; the "
                     "promotion could have lived on the recovery path")
    return fails


def test_pointer_classification():
    """A pointer's destination decides how it is classified, and the tests run
    in the right order.

    `00454340` is a real instruction boundary whose address, read as four
    bytes, is `40 43 45 00`: three printable characters and a NUL, which is
    exactly what a string tail looks like.  Checking the string shape before
    the known-boundary check threw such pointers away."""
    sys.path.insert(0, os.path.join(ROOT, "tools/recomp"))
    import translate as T

    image = T.Image(BINARY)
    covered = set()
    for addr, _name, _nb, path in T.load_functions():
        for ins in T.parse_listing(path):
            covered.add(ins.addr)

    fails = []
    boundary = 0x00454340
    if boundary not in covered:
        fails.append("%08x is no longer an instruction boundary; pick another "
                     "address for this test" % boundary)
    if not T.Image._looks_like_string_tail(b"abc" + struct.pack("<I", boundary), 3):
        fails.append("%08x no longer looks like a string tail; the ordering "
                     "this test guards is untested" % boundary)

    # Put a pointer to it in a scratch data range and classify.
    probe = T.Image.__new__(T.Image)
    probe.__dict__.update(image.__dict__)
    probe.string_candidates = set()
    probe.thunk_candidates = set()
    probe.interior_candidates = set()
    off = 0x00598000 - image.base
    probe.data = (image.data[:off] + struct.pack("<I", boundary)
                  + image.data[off + 4:])
    probe.data_ranges = [(0x00598000, 0x00598004, ".probe")]
    starts, interior = probe.code_pointers(covered)
    if boundary not in interior:
        fails.append("a pointer to the known boundary %08x was not turned into "
                     "an entry (starts=%s, string-rejected=%s)"
                     % (boundary, sorted(starts),
                        boundary in probe.string_candidates))

    # Padding that decodes as a lone jump to a wild address is not a thunk.
    if image.looks_like_thunk(0x0040FC44):
        fails.append("0040fc44 is NOP padding whose last byte decodes as "
                     "`jmp 0xf5413d44`; it must not pass as a thunk")

    # The string-tail test needs text running INTO the dword.  Every address
    # in this image has 0x00 on top and 0x40..0x58 below it, both of which
    # read as printable, so three-printable-plus-NUL on its own matched about
    # one .text pointer in seven and dropped 21 CRT static initializers.
    ptr = struct.pack("<I", 0x00455170)          # 70 51 45 00
    if not T.Image._looks_like_string_tail(b"abc" + ptr, 3):
        fails.append("a dword with text running into it is no longer "
                     "recognised as a string tail")
    for lead, why in ((b"\x00\x00\x00", "a NUL"), (b"\x01\x02\x03", "binary"),
                      (b"\x10\x11\x12", "a count byte")):
        if T.Image._looks_like_string_tail(lead + ptr, 3):
            fails.append("a pointer preceded by %s is still taken for a "
                         "string tail" % why)

    # The CRT's static initializers are entry points by construction.
    fns = [T.Function(a, n, nb, T.parse_listing(p))
           for a, n, nb, p in T.load_functions()]
    ranges, entries = image.initterm_tables(fns)
    if len(ranges) < 2:
        fails.append("__initterm call sites not recognised (found %d)" % len(ranges))
    missing = [a for a in INITTERM_FUNCTIONS if a not in entries]
    if missing:
        fails.append("%d static initializers missing from the __initterm "
                     "tables: %s" % (len(missing),
                                     " ".join("%08x" % a for a in missing[:6])))
    return fails


# -------------------------------------------------------- synthetic tests --
#
# Mnemonics the game's own code never uses, and flag edge cases the corpus does
# not reach, are tested on hand-assembled sequences: the listing text goes
# through the real translator and the matching machine code goes through
# unicorn, so both sides come from the same source of truth.

def _synth(addr, name, lines, code, setup=None, entry_offset=0):
    """One hand-assembled case.

    `entry_offset` places the entry that far into the code, so the function's
    own address is not the lowest address in it - the shape that broke
    fn_00565e1e, where recursive descent pulled in a block below the entry and
    execution started there."""
    base = addr - entry_offset
    listing = "\n".join("%08x  %s" % (base + off, text) for off, text in lines)
    return {"addr": addr, "base": base, "name": name, "listing": listing,
            "code": bytes.fromhex(code.replace(" ", "")), "setup": setup}


def _rand_regs(rng, zero_ecx=False, zero_eax=False):
    regs = [rng.getrandbits(32) for _ in range(8)]
    regs[4] = ESP_INIT
    if zero_ecx:
        regs[1] = 0
    if zero_eax:
        regs[0] = 0
    return regs


SYNTHETIC = [
    # A shift whose count turns out to be zero must leave every flag alone,
    # which means the CMP before it has to have materialised ZF.  This is the
    # reproducer from the review.
    _synth(0x0D000000, "SHL by CL=0 preserves incoming flags",
           [(0x0, "CMP EAX,0x0"), (0x3, "SHL EDX,CL"),
            (0x5, "SETZ AL"), (0x8, "RET")],
           "83 F8 00  D3 E2  0F 94 C0  C3",
           lambda rng: _rand_regs(rng, zero_ecx=rng.random() < 0.5,
                                  zero_eax=rng.random() < 0.5)),
    # A REP-prefixed compare with ECX = 0 executes nothing and must likewise
    # leave the incoming flags intact.
    _synth(0x0D001000, "REPE CMPSB with ECX=0 preserves incoming flags",
           [(0x0, "CMP EAX,0x0"), (0x3, "MOV ECX,0x0"),
            (0x8, "CMPSB.REPE ES:EDI,ESI"), (0xa, "SETZ AL"), (0xd, "RET")],
           "83 F8 00  B9 00 00 00 00  F3 A6  0F 94 C0  C3",
           lambda rng: _rand_regs(rng, zero_eax=rng.random() < 0.5)),
    # BSF/BSR: ZF from the source, destination untouched when the source is 0.
    _synth(0x0D002000, "BSF/BSR zero flag and untouched destination",
           [(0x0, "BSF EBX,EAX"), (0x3, "SETZ CL"),
            (0x6, "BSR ESI,EAX"), (0x9, "SETZ DL"), (0xc, "RET")],
           "0F BC D8  0F 94 C1  0F BD F0  0F 94 C2  C3",
           lambda rng: _rand_regs(rng, zero_eax=rng.random() < 0.5)),
    # CMOVcc, which the corpus never uses.
    _synth(0x0D003000, "CMOVZ / CMOVNZ",
           [(0x0, "CMP EAX,ECX"), (0x2, "CMOVZ EBX,EDX"),
            (0x5, "CMOVNZ ESI,EDI"), (0x8, "RET")],
           "3B C1  0F 44 DA  0F 45 F7  C3",
           lambda rng: _rand_regs(rng, zero_eax=rng.random() < 0.3,
                                  zero_ecx=rng.random() < 0.3)),
    # FUCOM, also absent from the corpus, read back through FNSTSW.
    _synth(0x0D004000, "FUCOM condition codes through FNSTSW",
           [(0x0, "FLD double ptr [ESP + 0x4]"),
            (0x4, "FLD double ptr [ESP + 0xc]"),
            (0x8, "FUCOM ST1"), (0xa, "FNSTSW AX"),
            (0xc, "FSTP ST0"), (0xe, "FSTP ST0"), (0x10, "RET")],
           "DD 44 24 04  DD 44 24 0C  DD E1  DF E0  DD D8  DD D8  C3"),
    # PUSHFD/POPFD must round-trip the ID bit through eflags_misc: this is the
    # CPUID probe idiom the game uses at 00522420.
    _synth(0x0D005000, "PUSHFD/POPFD round-trips EFLAGS.ID",
           [(0x0, "PUSHFD"), (0x1, "POP EAX"), (0x2, "MOV ECX,EAX"),
            (0x4, "XOR EAX,0x200000"), (0x9, "PUSH EAX"), (0xa, "POPFD"),
            (0xb, "PUSHFD"), (0xc, "POP EAX"), (0xd, "XOR EAX,ECX"),
            (0xf, "RET")],
           "9C  58  8B C8  35 00 00 20 00  50  9D  9C  58  33 C1  C3"),
    # FXCH through the recovery path: capstone renders D9 C9 with the implicit
    # ST(0) present, so taking the wrong operand swaps a register with itself
    # and the two stored doubles come back unswapped.
    _synth(0x0D007000, "FXCH swaps, including from the recovered form",
           [(0x0, "FLD double ptr [ESP + 0x4]"),
            (0x4, "FLD double ptr [ESP + 0xc]"),
            (0x8, "FXCH ST1"),
            (0xa, "FSTP double ptr [ESP + 0x14]"),
            (0xe, "FSTP double ptr [ESP + 0x1c]"),
            (0x12, "RET")],
           "DD 44 24 04  DD 44 24 0C  D9 C9  DD 5C 24 14  DD 5C 24 1C  C3"),
    # Two-byte x87 memory operands, which the recovery normaliser rejected.
    _synth(0x0D008000, "FNSTSW and FNSTCW to memory",
           [(0x0, "FLD1"), (0x2, "FLDZ"), (0x4, "FCOM ST1"),
            (0x6, "FNSTSW word ptr [ESP + 0x30]"),
            (0xa, "FNSTCW word ptr [ESP + 0x34]"),
            (0xe, "FSTP ST0"), (0x10, "FSTP ST0"), (0x12, "RET")],
           "D9 E8  D9 EE  D8 D1  DD 7C 24 30  D9 7C 24 34  DD D8  DD D8  C3"),
    # A function whose entry is NOT its lowest address: the block below it is
    # reachable only by the backward branch.  Entering at the lowest address
    # instead would run `MOV EAX,0x22; RET` every time, and in the real case
    # it ran a POP that ate the caller's return address.
    _synth(0x0D009007, "entry that is not the block's lowest address",
           [(0x0, "NOP"), (0x1, "MOV EAX,0x22"), (0x6, "RET"),
            (0x7, "CMP ECX,0x0"), (0xa, "JZ 0x0d009001"),
            (0xc, "MOV EAX,0x11"), (0x11, "RET")],
           "90  B8 22 00 00 00  C3  83 F9 00  74 F5  B8 11 00 00 00  C3",
           setup=lambda rng: _rand_regs(rng, zero_ecx=rng.random() < 0.5),
           entry_offset=7),
    # Narrow shifts, where the operand would promote to signed int.
    _synth(0x0D006000, "16- and 8-bit shifts with a count at or past the width",
           [(0x0, "SAR AX,0x1f"), (0x4, "SHL DX,0x10"),
            (0x8, "SHR BL,0x14"), (0xb, "RET")],
           "66 C1 F8 1F  66 C1 E2 10  C0 EB 14  C3"),
]


#: Where the capstone-normalised copy of each synthetic case is placed.
RECOVERED_OFFSET = 0x00010000


def recovered_listing(image, addr, code):
    """Decode `code` at `addr` and normalise it the way block recovery does."""
    image.md.detail = True
    try:
        return [image.to_insn(ci) for ci in image.md.disasm(code, addr)]
    finally:
        image.md.detail = False


def parse_synthetic():
    """Attach the parsed listing to each synthetic case, without touching the
    filesystem, so the comparison masks can be computed on a read-only tree."""
    sys.path.insert(0, os.path.join(ROOT, "tools/recomp"))
    import translate as T
    image = T.Image(BINARY)
    for case in SYNTHETIC:
        case["insns"] = T.parse_listing_text(case["listing"] + "\n")
        case["insns_recovered"] = recovered_listing(
            image, case["addr"] + RECOVERED_OFFSET, case["code"])


def generate_synthetic(out_path):
    """Translate the synthetic listings and write one C file."""
    sys.path.insert(0, os.path.join(ROOT, "tools/recomp"))
    import translate as T

    image = T.Image(BINARY)

    class Opts(object):
        eager_flags = False

    addrs = set(x["addr"] for x in SYNTHETIC)
    addrs |= set(x["addr"] + RECOVERED_OFFSET for x in SYNTHETIC)
    tr = T.Translator(image, addrs, Opts())
    parts = ["/* generated by tools/recomp/tests/test_translate.py */",
             '#include "x86.h"', ""]
    for case in SYNTHETIC:
        for addr, insns, tag in (
                (case["addr"], T.parse_listing_text(case["listing"] + "\n"),
                 "listing"),
                # The same machine code, normalised out of capstone exactly as
                # a block recovered from the PE would be.  This is what
                # exercises the recovery path's operand handling.
                (case["addr"] + RECOVERED_OFFSET,
                 recovered_listing(image, case["base"] + RECOVERED_OFFSET,
                                   case["code"]), "recovered")):
            fn = T.Function(addr, case["name"], len(case["code"]), insns)
            fn.measure(image)
            tr.prepare(fn)
            text = "\n".join(tr.translate(fn))
            assert "FN(" not in text, "synthetic cases must not call anything"
            case["insns" if tag == "listing" else "insns_recovered"] = insns
            parts.append("/* %s (%s) */" % (case["name"], tag))
            parts.append(text)
            parts.append("")
    with open(out_path, "w") as fh:
        fh.write("\n".join(parts))
    return out_path


def run_synthetic(emu, native, seed, iterations, verbose):
    fails = []
    variants = [(c, c["addr"], "listing") for c in SYNTHETIC]
    variants += [(c, c["addr"] + RECOVERED_OFFSET, "recovered") for c in SYNTHETIC]
    for case, addr, tag in variants:
        insns = case["insns" if tag == "listing" else "insns_recovered"]
        fn = getattr(native.lib, "fn_%08x" % addr)
        fn.argtypes = [C.POINTER(X86)]
        base = case["base"] + (addr - case["addr"])
        emu.u.mem_write(base, case["code"])
        native.write(base, case["code"])
        mask = comparable_eflags(insns)
        x87cc = x87_cc_defined(insns)
        rng = random.Random(seed ^ addr)
        for it in range(iterations):
            emu.u.mem_write(STACK_BASE, b"\0" * STACK_SIZE)
            emu.u.mem_write(SCRATCH, b"\0" * SCRATCH_SIZE)
            emu.reset_image()
            native.zero(STACK_BASE, STACK_SIZE)
            native.zero(SCRATCH, SCRATCH_SIZE)
            native.write(emu.image_base, emu.image)
            blob = rng.randbytes(0x40)
            if rng.random() < 0.3:                 # equal doubles, and NaNs
                d = struct.pack("<d", rng.choice([0.0, 1.5, float("nan")]))
                blob = bytearray(blob)
                blob[4:12] = d
                blob[12:20] = d
                blob = bytes(blob)
            frame = struct.pack("<I", MAGIC_RET) + blob
            emu.u.mem_write(ESP_INIT, frame)
            native.write(ESP_INIT, frame)
            regs = (case["setup"] or _rand_regs)(rng)

            for k, r in enumerate(UC_REGS):
                emu.u.reg_write(r, regs[k])
            emu.reset_fpu()
            try:
                emu.u.emu_start(addr, MAGIC_RET, count=1000)
            except UcError as e:
                fails.append("%s [%s] iteration %d: unicorn error %s"
                             % (case["name"], tag, it, e))
                break
            uregs = [emu.u.reg_read(r) for r in UC_REGS]
            ufpu = emu.snapshot_fpu()

            c = X86()
            for k in range(8):
                c.r[k] = regs[k]
            c.fpu_cw = FPU_CW_INIT
            c.fpu_tag = FPU_TAG_INIT
            c.eflags_misc = EFLAGS_MISC_INIT
            c.fs_base = 0x0FE00000
            native.lib.harness_reset_flags()
            fn(C.byref(c))

            bad = [REG_NAMES[k] for k in range(8) if uregs[k] != c.r[k]]
            if bad:
                fails.append("%s [%s] iteration %d: %s differ (unicorn %s, native %s)"
                             % (case["name"], tag, it, ",".join(bad),
                                [hex(x) for x in uregs], [hex(c.r[k]) for k in range(8)]))
                break
            why = [w for w in compare_cpu(emu, native, c, ufpu, eflags=mask,
                                          x87cc=x87cc)
                   if not w.startswith("@sw-delta")]
            if why:
                fails.append("%s [%s] iteration %d: %s" % (case["name"], tag, it, "; ".join(why)))
                break
            ok, msg = compare_regions(emu, native)
            if not ok:
                fails.append("%s [%s] iteration %d: %s" % (case["name"], tag, it, msg))
                break
    if verbose and not fails:
        print("    %d hand-assembled sequences x 2 forms (hand-written listing "
              "and capstone-recovered) x %d iterations, registers, EFLAGS, "
              "x87 state and memory all match"
              % (len(SYNTHETIC), iterations))
    return fails


# --------------------------------------------- generated dispatcher probe --
#
# The dispatcher test above compares unicorn's landing address against the
# `case` labels in the generated source, which does not run the generated
# switch.  This does: the chunk holding fn_0043e8e0 is rebuilt on its own with
# every FN(ADDR) redirected to a probe that records the address and longjmps
# out, so calling fn_0043e8e0 executes the real prologue and the real switch
# and stops at the first transfer out of the function.  unicorn is run over the
# same selector and stopped at its own first transfer out; the two addresses
# must agree.

DISPATCH_ADDR = 0x0043E8E0
DISPATCH_END = 0x004422C0          # entry + the size Ghidra records
PROBE_DYLIB = os.path.join(ROOT, "build/recomp/libdispatch_probe.dylib")


def build_dispatch_probe(verbose=True):
    import re
    chunk = None
    for name in sorted(os.listdir(GEN)):
        if name.startswith("chunk_") and name.endswith(".c"):
            path = os.path.join(GEN, name)
            if "void fn_%08x(" % DISPATCH_ADDR in open(path).read():
                chunk = path
                break
    if chunk is None:
        return None
    text = open(chunk).read()
    referenced = sorted(set(re.findall(r"FN\(([0-9a-f]{8})\)", text)))

    src = os.path.join(ROOT, "build/recomp/dispatch_probe.c")
    hdr = os.path.join(ROOT, "build/recomp/dispatch_probe.h")
    with open(hdr, "w") as fh:
        fh.write("/* generated: redirect every direct call to a probe */\n")
        for a in referenced:
            fh.write("void probe_%s(X86 *c);\n#define FN_%s probe_%s\n" % (a, a, a))
    with open(src, "w") as fh:
        fh.write('#include <setjmp.h>\n#include <stdio.h>\n#include <stdlib.h>\n')
        fh.write('#include "funcs.h"\n\n')
        fh.write("static jmp_buf probe_out;\nstatic uint32_t probe_target;\n")
        fh.write("static void probe(uint32_t a) { probe_target = a; "
                 "longjmp(probe_out, 1); }\n")
        for a in referenced:
            fh.write("void probe_%s(X86 *c) { (void)c; probe(0x%su); }\n" % (a, a))
        # The chunk is compiled on its own, without table.c, so the hook
        # tables every call site now reads have to come from somewhere.  The
        # size is taken from the generated table rather than guessed, and the
        # probe keeps the shipping call path - acquire load and all - rather
        # than compiling the check out.
        nfn = int(re.search(r"^uint8_t recomp_hooked\[(\d+)\];",
                            open(os.path.join(GEN, "table.c")).read(),
                            re.M).group(1))
        fh.write("uint8_t recomp_hooked[%d];\n" % nfn)
        fh.write("RecompHookFn recomp_hook_ptrs[%d];\n" % nfn)
        fh.write("const uint32_t recomp_func_addrs[%d];\n" % nfn)
        fh.write("const uint32_t recomp_func_count = %d;\n" % nfn)
        fh.write("void (*const recomp_base_ptrs[%d])(X86 *);\n" % nfn)
        fh.write("""
void recomp_call(X86 *c, uint32_t target) { (void)c; probe(target); }
int recomp_is_call_return(uint32_t target) { (void)target; return 1; }
int32_t recomp_index_of(uint32_t target) { (void)target; return -1; }
void recomp_jump(X86 *c, uint32_t target) { (void)c; probe(target); }
void recomp_unknown_jump(X86 *c, uint32_t target) { (void)c; probe(target); }

/* Run the dispatcher and report the first address it transfers to, or 0 if it
 * returned without leaving the function. */
uint32_t probe_dispatch(X86 *c)
{
    probe_target = 0;
    if (!setjmp(probe_out))
        fn_%08x(c);
    return probe_target;
}
""" % DISPATCH_ADDR)
    subprocess.check_call([
        "xcrun", "clang", "-O1", "-g", "-std=c11", "-Wall", "-Wextra",
        "-Wno-unused", "-I", GEN, "-I", ROOT,
        "-I", os.path.join(ROOT, "runtime"), "-dynamiclib",
        "-DRECOMP_OVERRIDE_HEADER=\"%s\"" % hdr,
        os.path.join(ROOT, "tools/recomp/tests/harness.c"), chunk, src,
        "-o", PROBE_DYLIB])
    if verbose:
        print("    dispatcher probe: %s with %d call sites redirected"
              % (os.path.basename(chunk), len(referenced)))
    return PROBE_DYLIB


def test_dispatch_execution(emu, verbose=True):
    from unicorn import UC_HOOK_CODE
    if not os.path.exists(PROBE_DYLIB):
        return ["dispatcher probe dylib missing; run without --no-build"]
    lib = C.CDLL(PROBE_DYLIB)
    lib.harness_mem.restype = C.POINTER(C.c_uint8)
    lib.probe_dispatch.restype = C.c_uint32
    lib.probe_dispatch.argtypes = [C.POINTER(X86)]
    base = C.cast(lib.harness_mem(), C.c_void_p).value

    arg1, arg2 = SCRATCH + 0x1000, SCRATCH + 0x200
    fails = []
    checked = 0
    for sel in range(0, 0x7B):
        blob = bytearray(0x800)
        blob[0xC] = (sel + 0xC) & 0xFF
        struct.pack_into("<I", blob, 4, 1)
        frame = struct.pack("<III", MAGIC_RET, arg1, arg2)

        emu.reset_image()
        emu.u.mem_write(STACK_BASE, b"\0" * STACK_SIZE)
        emu.u.mem_write(SCRATCH, b"\0" * SCRATCH_SIZE)
        emu.u.mem_write(arg2, bytes(blob))
        emu.u.mem_write(arg1, bytes(0x2000))
        emu.u.mem_write(ESP_INIT, frame)
        for r in UC_REGS:
            emu.u.reg_write(r, 0)
        emu.u.reg_write(UC_X86_REG_ESP, ESP_INIT)
        emu.reset_fpu()

        left = []

        def hook(uc, address, size, _):
            if not (DISPATCH_ADDR <= address < DISPATCH_END):
                left.append(address)
                uc.emu_stop()

        h = emu.u.hook_add(UC_HOOK_CODE, hook)
        try:
            emu.u.emu_start(DISPATCH_ADDR, MAGIC_RET, count=4000)
        except UcError:
            pass
        emu.u.hook_del(h)
        u_target = left[0] if left else 0
        if u_target == MAGIC_RET:
            u_target = 0

        C.memset(base + STACK_BASE, 0, STACK_SIZE)
        C.memset(base + SCRATCH, 0, SCRATCH_SIZE)
        C.memmove(base + emu.image_base, emu.image, len(emu.image))
        C.memmove(base + arg2, bytes(blob), len(blob))
        C.memmove(base + ESP_INIT, frame, len(frame))
        c = X86()
        c.r[4] = ESP_INIT
        c.fpu_cw = FPU_CW_INIT
        c.fpu_tag = FPU_TAG_INIT
        c.eflags_misc = EFLAGS_MISC_INIT
        c.fs_base = 0x0FE00000
        n_target = lib.probe_dispatch(C.byref(c))

        checked += 1
        if n_target != u_target:
            fails.append("selector %d: generated code transfers to %08x, "
                         "unicorn to %08x" % (sel, n_target, u_target))
            if len(fails) > 6:
                break
    if verbose and not fails:
        print("    %d selectors executed through the generated switch; every "
              "first transfer matches unicorn" % checked)
    return fails


# ------------------------------------------------------------------ sweep --

def pick_sweep_functions(limit):
    """Functions that are guaranteed to terminate: every branch goes forward,
    the last instruction is RET, there is no indirect control flow, and every
    direct CALL target is itself in the set (computed to a fixpoint).  Running
    these on random inputs exercises the arithmetic, flag and x87 translations
    across most of the mnemonic set without any risk of the native side
    looping forever."""
    sys.path.insert(0, os.path.join(ROOT, "tools/recomp"))
    import translate as T

    pe = pefile.PE(BINARY, fast_load=True)
    IMAGE_BASE = pe.OPTIONAL_HEADER.ImageBase
    IMAGE_SIZE = pe.OPTIONAL_HEADER.SizeOfImage
    BANNED = frozenset(("RDTSC", "CPUID", "OUT", "IN", "CLI", "STI", "HLT", "INT"))
    X87_PUSH = frozenset(("FLD", "FILD", "FLD1", "FLDZ", "FLDPI", "FLDL2E",
                          "FLDL2T", "FLDLG2", "FLDLN2"))

    def needs_primed_fpu(insns):
        """True if the function reads the x87 stack before pushing anything.

        Such a function has a precondition the harness cannot meet: called with
        an empty stack it underflows, and unicorn's registers stay empty while
        the recompiled ones take on the value the operation computed.  That is
        a property of the call, not a translation defect, so these are left
        out of the sweep."""
        for ins in insns:
            if not ins.mnem.startswith("F") or ins.mnem in ("FNCLEX", "FLDCW",
                                                            "FSTCW", "FNSTCW"):
                continue
            return ins.mnem not in X87_PUSH
        return False
    cand = {}
    for addr, name, nbytes, path in T.load_functions():
        if not (IMAGE_BASE <= addr < IMAGE_BASE + IMAGE_SIZE):
            continue
        insns = T.parse_listing(path)
        if not (3 <= len(insns) <= 200) or insns[-1].mnem != "RET":
            continue
        addrs = {i.addr for i in insns}
        callees = set()
        ok = True
        for ins in insns:
            m = ins.mnem
            if m in BANNED:
                ok = False
                break
            if m == "CALL":
                t = T.Translator.branch_target(ins)
                if t is None:                     # indirect call
                    ok = False
                    break
                callees.add(t)
            elif m == "JMP" or m in T.JCC:
                t = T.Translator.branch_target(ins)
                if t is None or t not in addrs or t <= ins.addr:
                    ok = False
                    break
        if ok and not needs_primed_fpu(insns):
            cand[addr] = (name, insns, callees)

    safe = set(a for a, (_, _, cl) in cand.items() if not cl)
    changed = True
    while changed:
        changed = False
        for a, (_, _, cl) in cand.items():
            if a not in safe and cl <= safe:
                safe.add(a)
                changed = True

    out = [(a, cand[a][0], cand[a][1]) for a in sorted(safe)]
    return out[:limit]


def run_sweep(emu, native, funcs, iterations, seed, verbose):
    import translate as T
    fails = []
    compared = 0
    skipped = 0
    nan_diffs = set()
    exc_diffs = set()
    eax_exempt = [0]
    eax_exempt_fns = set()
    eflags_compared = 0
    x87cc_compared = 0
    mnemonics = set()
    for addr, name, insns in funcs:
        for ins in insns:
            mnemonics.add(ins.mnem + ("." + ins.rep if ins.rep else ""))
        eflags_ok = comparable_eflags(insns)
        x87cc_ok = x87_cc_defined(insns)
        eflags_compared += bool(eflags_ok & ~EFLAGS_DF)
        x87cc_compared += bool(x87cc_ok)
        rng = random.Random(seed ^ addr)
        for it in range(iterations):
            emu.u.mem_write(STACK_BASE, b"\0" * STACK_SIZE)
            native.zero(STACK_BASE, STACK_SIZE)
            blob = rng.randbytes(SCRATCH_SIZE)
            emu.u.mem_write(SCRATCH, blob)
            native.write(SCRATCH, blob)
            emu.reset_image()
            native.write(emu.image_base, emu.image)

            regs = []
            for k in range(8):
                if k == 4:
                    regs.append(ESP_INIT)
                elif rng.random() < 0.65:
                    regs.append(SCRATCH + (rng.randrange(0, SCRATCH_SIZE // 2) & ~3))
                else:
                    regs.append(rng.getrandbits(16))
            frame = struct.pack("<9I", MAGIC_RET,
                                *[SCRATCH + (rng.randrange(0, SCRATCH_SIZE // 2) & ~3)
                                  if rng.random() < 0.5 else rng.getrandbits(16)
                                  for _ in range(8)])
            emu.u.mem_write(ESP_INIT, frame)
            native.write(ESP_INIT, frame)

            for k, r in enumerate(UC_REGS):
                emu.u.reg_write(r, regs[k])
            emu.reset_fpu()
            try:
                emu.u.emu_start(addr, MAGIC_RET, count=100000)
            except UcError:
                skipped += 1
                continue
            if emu.u.reg_read(UC_X86_REG_EIP) != MAGIC_RET:
                skipped += 1
                continue
            uregs = [emu.u.reg_read(r) for r in UC_REGS]

            c = X86()
            for k in range(8):
                c.r[k] = regs[k]
            c.fpu_cw = FPU_CW_INIT
            c.fpu_tag = FPU_TAG_INIT
            c.eflags_misc = EFLAGS_MISC_INIT
            c.fs_base = 0x0FE00000
            native.lib.harness_reset_flags()
            native.lib.harness_run(addr, C.byref(c))
            if native.lib.harness_last_unknown() or native.lib.harness_last_div_error():
                skipped += 1
                continue
            compared += 1

            swdiff = 0
            for why in compare_cpu(emu, native, c, eflags=eflags_ok,
                                   x87cc=x87cc_ok):
                if why.startswith("@sw-delta"):
                    swdiff = int(why.split()[2], 16) ^ int(why.split()[4], 16)
                    if swdiff & 0x003f:
                        exc_diffs.add(addr)
                    else:
                        fails.append("%08x %s iteration %d: %s"
                                     % (addr, name, it, why))
                    continue
                fails.append("%08x %s iteration %d: %s" % (addr, name, it, why))
            bad = [REG_NAMES[k] for k in range(8) if uregs[k] != c.r[k]]
            # An EAX mismatch is accepted only for a function named in
            # IE_IN_EAX, and then only when the difference is exactly the IE
            # bit that the two status words disagree on, with no other
            # register differing.  Anything else fails.
            eaxdiff = uregs[0] ^ c.r[0]
            if (addr in IE_IN_EAX and bad == ["EAX"] and swdiff
                    and eaxdiff == 0x0001 and (swdiff & 0x0001)):
                exc_diffs.add(addr)
                eax_exempt[0] += 1
                eax_exempt_fns.add(addr)
                bad = []
            if bad:
                fails.append("%08x %s iteration %d: %s differ (unicorn %s, native %s)"
                             % (addr, name, it, ",".join(bad),
                                [hex(uregs[k]) for k in range(8)],
                                [hex(c.r[k]) for k in range(8)]))
                break
            ok, why = compare_regions(emu, native, allow_x87_nan=True)
            if why == "x87-nan":
                nan_diffs.add(addr)
            if not ok:
                fails.append("%08x %s iteration %d: %s" % (addr, name, it, why))
                break
        if len(fails) >= 8:
            break
    if verbose:
        print("    %d functions, %d comparisons, %d skipped (unicorn fault or "
              "unresolved call), %d distinct mnemonics covered"
              % (len(funcs), compared, skipped, len(mnemonics)))
        print("    arithmetic EFLAGS compared for %d/%d functions (the rest "
              "contain MUL/DIV, which leaves them undefined); x87 condition "
              "codes for %d" % (eflags_compared, len(funcs), x87cc_compared))
        if nan_diffs:
            print("    %d functions differ only in x87 invalid-operation NaN "
                  "payloads (64-bit x87 ruling): %s"
                  % (len(nan_diffs), ", ".join("%08x" % a for a in sorted(nan_diffs))))
        if exc_diffs:
            print("    %d functions differ in the x87 IE bit, the one status "
                  "bit not compared because unicorn never sets it"
                  % len(exc_diffs))
        print("    IE-in-EAX allowlist: %d comparisons accepted across %s"
              % (eax_exempt[0],
                 ", ".join("%08x (%s)" % (a, IE_IN_EAX[a])
                           for a in sorted(eax_exempt_fns)) or "no functions"))
    return fails


# -------------------------------------------------------------------- main --

def main():
    reexec_under_lock()
    ap = argparse.ArgumentParser()
    ap.add_argument("-n", "--iterations", type=int, default=200)
    ap.add_argument("--seed", type=int, default=20260907)
    ap.add_argument("--no-build", action="store_true")
    ap.add_argument("--sweep", type=int, default=300,
                    help="loop-free leaf functions to fuzz differentially")
    ap.add_argument("--sweep-iterations", type=int, default=12)
    ap.add_argument("--sweep-only", action="store_true",
                    help="build, link, then run only the header contracts and the sweep: "
                         "for a game that has none of the corpus cases below")
    args = ap.parse_args()

    lfails = test_lock_held("before the build")

    print("test_translate: dylib %s (%s bytes), python %s"
          % (DYLIB, os.path.getsize(DYLIB) if os.path.exists(DYLIB) else "missing",
             sys.version.split()[0]), flush=True)

    # The image under test is the one game.toml pins, whichever game that is.
    cfg = game_config.load(GAME_DIR)
    sha = hashlib.sha256(open(BINARY, "rb").read()).hexdigest()
    assert sha == cfg["game"]["sha256"], sha

    if not args.no_build:
        build()

    pe = pefile.PE(BINARY, fast_load=True)
    image = pe.get_memory_mapped_image()
    emu = Emu(image, pe.OPTIONAL_HEADER.ImageBase, pe.OPTIONAL_HEADER.SizeOfImage)
    native = Native()

    sys.path.insert(0, os.path.join(ROOT, "tools/recomp"))
    import translate as T
    T.configure(cfg)
    if args.sweep_only:
        print("\n== header contracts ==")
        hfails = test_header_contracts(native)
        print("  %s  %d checks in the header self-test plus %d driven from here"
              % ("PASS" if not hfails else "FAIL",
                 native.lib.harness_header_check_count(), PY_HEADER_CHECKS))
        for f in hfails[:6]:
            print("        " + f)
        funcs = pick_sweep_functions(args.sweep)
        sfails = run_sweep(emu, native, funcs, args.sweep_iterations, args.seed, True)
        print("  %s  sweep of %d loop-free leaf functions"
              % ("PASS" if not sfails else "FAIL", len(funcs)))
        for f in sfails[:40]:
            print("        " + f)
        return 1 if (hfails or sfails) else 0
    for case in CASES:
        listing = os.path.join(ROOT, "analysis/decompiled/D3DPopTB.exe/functions",
                               "%08x.asm" % case.addr)
        insns = T.parse_listing(listing)
        case.eflags = comparable_eflags(insns)
        case.x87cc = x87_cc_defined(insns)

    print("\n== header contracts ==")
    hfails = test_header_contracts(native)
    print("  %s  %d checks in the header self-test plus %d driven from here "
          "(EFLAGS round-trip and deterministic CPUID)"
          % ("PASS" if not hfails else "FAIL",
             native.lib.harness_header_check_count(), PY_HEADER_CHECKS))
    for f in hfails[:6]:
        print("        " + f)

    gfails = test_guard_direction()
    print("  %s  jump-table guard direction (JA/JAE/JNC bound, JBE/JB/JC do not)"
          % ("PASS" if not gfails else "FAIL"))
    for f in gfails[:6]:
        print("        " + f)

    lfails += test_lock_held("after the build and the link")
    print("  %s  the shared build lock is held for the whole run, so nothing "
          "can republish gen/ or librecomp_gen.a underneath it"
          % ("PASS" if not lfails else "FAIL"))
    for f in lfails[:6]:
        print("        " + f)

    sfails = test_structural_promotion()
    print("  %s  a jump table's targets are structural, so a guessed block a "
          "table names cannot be withdrawn" % ("PASS" if not sfails else "FAIL"))
    for f in sfails[:6]:
        print("        " + f)

    pfails = test_pointer_classification()
    print("  %s  entry-point classification (known boundary beats the string "
          "shape; string tails need text before them; %d CRT static "
          "initializers reachable; NOP padding is not a thunk)"
          % ("PASS" if not pfails else "FAIL", len(INITTERM_FUNCTIONS)))
    for f in pfails[:6]:
        print("        " + f)
    gfails = gfails + pfails + sfails + lfails

    print("\n== differential tests (%d iterations each) ==" % args.iterations)
    failed = bool(hfails) + bool(gfails)
    for case in CASES:
        rng = random.Random(args.seed ^ case.addr)
        fails, stats = run_case(case, emu, native, rng, args.iterations, True)
        status = "PASS" if not fails else "FAIL"
        extra = ""
        if case.x87:
            extra = ("   [ST0 bit-exact %d/%d, within %g %d]"
                     % (stats["x87_exact"], args.iterations, X87_TOLERANCE,
                        stats["x87_1ulp"]))
        print("  %s  %08x  %s%s" % (status, case.addr, case.name, extra))
        for f in fails[:6]:
            print("        " + f)
        failed += bool(fails)

    fails = test_jumptable(emu, native, True)
    if not args.no_build:
        build_dispatch_probe()
    fails += test_dispatch_execution(emu, True)
    print("  %s  0043e8e0  jump-table dispatcher (static, unicorn and generated)"
          % ("PASS" if not fails else "FAIL"))
    for f in fails[:6]:
        print("        " + f)
    failed += bool(fails)

    if args.no_build:
        parse_synthetic()      # no writes: the tree may be read-only
    sfails = run_synthetic(emu, native, args.seed, max(20, args.iterations // 4), True)
    print("  %s  synthetic sequences (shift-count-zero flags, REP with ECX=0, "
          "BSF/BSR, CMOVcc, FUCOM, PUSHFD/POPFD, narrow shifts)"
          % ("PASS" if not sfails else "FAIL"))
    for f in sfails[:8]:
        print("        " + f)
    failed += bool(sfails)

    if args.sweep:
        funcs = pick_sweep_functions(args.sweep)
        sfails = run_sweep(emu, native, funcs, args.sweep_iterations, args.seed, True)
        print("  %s  sweep of %d loop-free leaf functions"
              % ("PASS" if not sfails else "FAIL", len(funcs)))
        for f in sfails[:8]:
            print("        " + f)
        failed += bool(sfails)

    total = len(CASES) + 4 + (1 if args.sweep else 0)
    print("\n%d/%d passed" % (total - failed, total))
    return 1 if failed else 0


if __name__ == "__main__":
    sys.exit(main())
