#!/usr/bin/env python3
"""Shared Unicorn loader/runner for the original D3DPopTB.exe.

Two things live here:

`load_image()` and `Oracle` give any tool a mapped, pinned Unicorn instance of
the original binary for local differential tests and capture tools.

`ProbeOracle` provides a deterministic reference run: Level 2001 scripted
startup, then N accepted outer frames of the offline driver 004a5590, with
every non-deterministic input pinned to the same value the recompiled fixture
`runtime/fixture.cpp` uses:

  clock          timeGetTime and the indirect timer slot 00d0c784 answer
                 100 ms before frame 1 and +50 ms per frame after it
  RDTSC          hooked at every RDTSC instruction in the listings and answered
                 with the recompiled runtime's counter (max(tsc, ms*1e6) + 1000
                 per read); `rdtsc_seen` records how often it fired
  semaphores     single-threaded counted adapters, handles pinned to the
                 recompiled runtime's allocator (0x00010014, stride 4)
  heap           no guest allocator runs on this path; the scratch pages the
                 harness writes are at fixed addresses in both engines
  import slots   patched to adapter addresses outside every compared region

Run standalone to produce the oracle snapshots:

    .venv/bin/python tools/recomp/oracle.py --frames 32 --out DIR
"""

import argparse
import hashlib
import json
import os
import struct
import sys

import pefile
from unicorn import Uc, UC_ARCH_X86, UC_MODE_32, UC_HOOK_CODE, UC_HOOK_BLOCK
from unicorn.x86_const import (
    UC_X86_REG_EAX, UC_X86_REG_ECX, UC_X86_REG_EDX, UC_X86_REG_EBX,
    UC_X86_REG_ESP, UC_X86_REG_EBP, UC_X86_REG_ESI, UC_X86_REG_EDI,
    UC_X86_REG_EIP, UC_X86_REG_EFLAGS)

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
sys.path.insert(0, os.path.join(ROOT, "tools"))
import game_config  # noqa: E402
# The game comes from --game (or RECOMP_GAME_DIR for callers that import the
# module); the defaults below are None until then.
DEFAULT_GAME_DIR = os.environ.get("RECOMP_GAME_DIR")
DEFAULT_EXE = str(game_config.load(DEFAULT_GAME_DIR)["developer_exe_path"]) if DEFAULT_GAME_DIR else None
DEFAULT_DATA = os.path.dirname(DEFAULT_EXE) if DEFAULT_EXE else None

REG_NAMES = ["EAX", "ECX", "EDX", "EBX", "ESP", "EBP", "ESI", "EDI"]
UC_REGS = [UC_X86_REG_EAX, UC_X86_REG_ECX, UC_X86_REG_EDX, UC_X86_REG_EBX,
           UC_X86_REG_ESP, UC_X86_REG_EBP, UC_X86_REG_ESI, UC_X86_REG_EDI]

IMAGE_SCN_MEM_WRITE = 0x80000000


# --------------------------------------------------------------------- image --

def load_image(exe_path=DEFAULT_EXE):
    """(bytes, base, size) of the memory-mapped image, as the loader maps it."""
    pe = pefile.PE(exe_path)
    return (pe.get_memory_mapped_image(),
            pe.OPTIONAL_HEADER.ImageBase,
            pe.OPTIONAL_HEADER.SizeOfImage)


def writable_regions(exe_path=DEFAULT_EXE):
    """The writable image sections, named exactly as snapshot.cpp names them.

    Mirrors snapshot_writable_image_regions(): every IMAGE_SCN_MEM_WRITE
    section clipped to ImageBase + SizeOfImage, `<name>_<lo:08x>` with '.',
    '/' and ' ' replaced by '_'."""
    pe = pefile.PE(exe_path)
    base = pe.OPTIONAL_HEADER.ImageBase
    limit = base + pe.OPTIONAL_HEADER.SizeOfImage
    out = []
    for s in pe.sections:
        if not s.Characteristics & IMAGE_SCN_MEM_WRITE:
            continue
        lo = base + s.VirtualAddress
        hi = min(lo + s.Misc_VirtualSize, limit)
        if hi <= lo:
            continue
        name = s.Name.rstrip(b"\0").decode("latin-1")
        name = "".join("_" if ch in "./ " else ch for ch in name)
        out.append((("%s_%08x" % (name, lo)), lo, hi))
    return out


def iat_slots(exe_path=DEFAULT_EXE):
    """Every byte of every IAT dword the loader patches.

    Correction 14 excludes these from the comparison: Unicorn keeps the file's
    thunk values, the recompiled loader writes trampoline addresses."""
    pe = pefile.PE(exe_path)
    pe.parse_data_directories()
    slots = set()
    d = pe.OPTIONAL_HEADER.DATA_DIRECTORY[12]      # IMAGE_DIRECTORY_ENTRY_IAT
    if d.Size:
        lo = pe.OPTIONAL_HEADER.ImageBase + d.VirtualAddress
        slots.update(range(lo, lo + d.Size))
    for group in getattr(pe, "DIRECTORY_ENTRY_IMPORT", []):
        for imp in group.imports:
            slots.update(range(imp.address, imp.address + 4))
    return slots


# -------------------------------------------------------------------- oracle --

class Oracle(object):
    """A mapped, pinned Unicorn instance of the original image.

    Memory map matches probe.py: the image at its preferred base, a 64 KB page
    for the harness stack at 0x2000000, a 1 MB scratch region at 0x3000000 that
    the recompiled arena also owns at the same addresses, the zero page for
    FS:[0], and an adapter page outside every compared region.
    """

    STACK = 0x0200F000
    # The return address the harness pushes.  It is the recompiled runtime's
    # GUEST_RETURN_SENTINEL so both engines push the same value at the same
    # address and no stack word reads as a divergence.
    END = 0x0FDFFF00
    SCRATCH_LO = 0x03000000
    SCRATCH_HI = 0x03100000
    ADAPTERS = 0x0FF00000       # outside the image and the compared scratch

    def __init__(self, exe_path=DEFAULT_EXE, trace_blocks=False):
        self.exe_path = exe_path
        self.pe = pefile.PE(exe_path)
        self.image = self.pe.get_memory_mapped_image()
        self.base = self.pe.OPTIONAL_HEADER.ImageBase
        self.size = self.pe.OPTIONAL_HEADER.SizeOfImage
        self.limit = self.base + self.size
        u = Uc(UC_ARCH_X86, UC_MODE_32)
        u.mem_map(self.base, (self.size + 0xFFF) & ~0xFFF)
        u.mem_write(self.base, self.image)
        u.mem_map(0x02000000, 0x10000)
        u.mem_map(0x03000000, 0x100000)
        u.mem_map(0x00000000, 0x1000)
        u.mem_map(self.ADAPTERS, 0x1000)
        u.mem_map(self.END & ~0xFFF, 0x1000)      # harness return address
        # FS:[0] SEH chain head. Unicorn leaves the FS base at 0, so the guest's
        # FS:[0] lands on the zero page; the loader puts 0xffffffff in the TEB.
        u.mem_write(0, struct.pack("<I", 0xFFFFFFFF))
        self.u = u
        self.calls = {}
        if trace_blocks:
            self._entries = {int(p[:-2], 16)
                             for p in os.listdir(os.path.join(
                                 ROOT, "analysis/decompiled/D3DPopTB.exe/functions"))
                             if p.endswith(".c")}
            u.hook_add(UC_HOOK_BLOCK, self._on_block)

    # -- memory ------------------------------------------------------------
    def r8(self, a):
        return self.u.mem_read(a, 1)[0]

    def r16(self, a):
        return struct.unpack("<H", self.u.mem_read(a, 2))[0]

    def r32(self, a):
        return struct.unpack("<I", self.u.mem_read(a, 4))[0]

    def w8(self, a, v):
        self.u.mem_write(a, bytes([v & 0xFF]))

    def w16(self, a, v):
        self.u.mem_write(a, struct.pack("<H", v & 0xFFFF))

    def w32(self, a, v):
        self.u.mem_write(a, struct.pack("<I", v & 0xFFFFFFFF))

    def write(self, a, data):
        self.u.mem_write(a, bytes(data))

    def read(self, lo, hi):
        return bytes(self.u.mem_read(lo, hi - lo))

    def _on_block(self, u, a, n, _):
        if a in self._entries:
            self.calls[a] = self.calls.get(a, 0) + 1

    # -- calling -----------------------------------------------------------
    def call(self, addr, *args):
        """probe.py's call(): args and a fixed return address at STACK."""
        u = self.u
        u.mem_write(self.STACK, struct.pack("<" + "I" * (1 + len(args)),
                                            self.END,
                                            *[a & 0xFFFFFFFF for a in args]))
        u.reg_write(UC_X86_REG_ESP, self.STACK)
        u.emu_start(addr, self.END, count=100000000)
        if u.reg_read(UC_X86_REG_EIP) != self.END:
            raise RuntimeError("instruction limit at %08x" % addr)
        return u.reg_read(UC_X86_REG_EAX)

    def regs(self):
        return [self.u.reg_read(r) for r in UC_REGS]


# --------------------------------------------------------------- probe run --

class ProbeOracle(Oracle):
    """probe.py's Level 2001 startup and outer-frame loop, reproduced.

    Nothing here invents a code path the probe does not take. Where the probe
    injects asset bytes or writes a global directly instead of running the
    original loader, this does exactly the same, and the recompiled fixture
    mirrors it (see the pins table in the task 4 report)."""

    POS = 0x03001000
    REC = 0x03002000
    FRAMES = 0x03004000
    PARAMS = 0x03010000
    OBJS = 0x03020000
    SHAPES = 0x03060000

    UNITS = 0x008E0428
    CELLS = 0x008A03E4
    TRIBES = 0x0089D1C8
    TRIBE_STRIDE = 0x0C65
    UNIT_STRIDE = 179
    UNIT_COUNT = 2000

    COMMAND_FRAME = 0x0089D184
    SIM_FRAME = 0x0089D188
    SEED = 0x0089D178
    LAND_FLAGS = 0x0089C661
    RENDER_FLAGS = 0x0089C669
    SETTINGS = 0x00895DA8
    TIMER_FNPTR = 0x00D0C784
    TIMEGETTIME_THUNK = 0x00527B70

    # The recompiled runtime's handle allocator hands out 0x00010004 + 4*n and
    # has issued four handles (process heap, three std handles) by the time the
    # guest asks for its semaphore.
    FIRST_SEM_HANDLE = 0x00010014
    SEM_HANDLE_STRIDE = 4

    CLOCK_START = 100
    CLOCK_STEP = 50

    # Argument count each adapted import takes, so the external-call log has the
    # same shape as the fixture's (which reads arg(c, i) for i < argc_stdcall).
    ARGC = {"CreateSemaphoreA": 4, "WaitForSingleObject": 2,
            "ReleaseSemaphore": 3, "timeGetTime": 0}

    ADAPTED_IMPORTS = ("CreateSemaphoreA", "WaitForSingleObject", "ReleaseSemaphore")

    def __init__(self, exe_path=DEFAULT_EXE, data_dir=DEFAULT_DATA,
                 trace_blocks=False, stub_targets=(), stub_mode="clean"):
        Oracle.__init__(self, exe_path, trace_blocks=trace_blocks)
        self.data_dir = data_dir
        self.clock_ms = self.CLOCK_START
        self.semaphores = {}
        self.next_sem_handle = self.FIRST_SEM_HANDLE
        self.external_calls = {}
        self.external_log = []
        self.placed = []
        self.rdtsc_seen = 0
        self.rdtsc_value = 0
        self.stub_targets = set(stub_targets)
        self.stub_mode = stub_mode
        self.stubbed = {}
        self._install_adapters()

    def _log_external(self, name, sp, result):
        argc = self.ARGC.get(name, 0)
        args = [self.r32(sp + 4 + 4 * i) if i < argc else 0 for i in range(4)]
        self.external_log.append({"name": name, "args": args, "result": result})

    # -- adapters ----------------------------------------------------------
    @staticmethod
    def rdtsc_addresses():
        """Every RDTSC instruction address in the disassembly listings."""
        out = set()
        d = os.path.join(ROOT, "analysis/decompiled/D3DPopTB.exe/functions")
        for name in os.listdir(d):
            if not name.endswith(".asm"):
                continue
            with open(os.path.join(d, name)) as f:
                for line in f:
                    if " RDTSC" in line or line.rstrip().endswith("RDTSC"):
                        try:
                            out.add(int(line.split()[0], 16))
                        except ValueError:
                            pass
        return out

    def _rdtsc_adapter(self, u, a, n, _):
        # Mirrors recomp_rdtsc in runtime/cpu.cpp exactly.
        self.rdtsc_seen += 1
        from_ms = self.clock_ms * 1000000
        if from_ms > self.rdtsc_value:
            self.rdtsc_value = from_ms
        self.rdtsc_value += 1000
        u.reg_write(UC_X86_REG_EAX, self.rdtsc_value & 0xFFFFFFFF)
        u.reg_write(UC_X86_REG_EDX, (self.rdtsc_value >> 32) & 0xFFFFFFFF)
        u.reg_write(UC_X86_REG_EIP, a + 2)          # 0f 31

    def _stub_adapter(self, u, a, n, _):
        """Answers one address the way an unresolved indirect target is
        answered: EAX = 0 and return.

        `stub_mode='clean'` pops the return address, which is what a cdecl
        function that does nothing would do. `stub_mode='leak'` leaves it on the
        stack, which is what runtime/cpu.cpp's recomp_unknown_call
        does today; that leaves the caller 4 bytes out of step and is a runtime
        bug in its own right, so it is not the default."""
        self.stubbed[a] = self.stubbed.get(a, 0) + 1
        sp = u.reg_read(UC_X86_REG_ESP)
        u.reg_write(UC_X86_REG_EAX, 0)
        u.reg_write(UC_X86_REG_EIP, self.r32(sp))
        if self.stub_mode == "clean":
            u.reg_write(UC_X86_REG_ESP, sp + 4)

    def _install_adapters(self):
        u = self.u
        for a in self.rdtsc_addresses():
            u.hook_add(UC_HOOK_CODE, self._rdtsc_adapter, begin=a, end=a)
        for a in self.stub_targets:
            u.hook_add(UC_HOOK_CODE, self._stub_adapter, begin=a, end=a)
        # timeGetTime: 00527b70 is a pure import thunk. Answer with the pinned
        # clock and return, exactly as probe.py's time_adapter does.
        u.hook_add(UC_HOOK_CODE, self._time_adapter,
                   begin=self.TIMEGETTIME_THUNK, end=self.TIMEGETTIME_THUNK)
        # The indirect timer slot points at the same thunk in both engines.
        self.w32(self.TIMER_FNPTR, self.TIMEGETTIME_THUNK)
        # Semaphore imports.
        self.pe.parse_data_directories()
        n = 0
        for group in getattr(self.pe, "DIRECTORY_ENTRY_IMPORT", []):
            for imp in group.imports:
                name = imp.name.decode() if imp.name else ""
                if name not in self.ADAPTED_IMPORTS:
                    continue
                addr = self.ADAPTERS + 16 * n
                n += 1
                self.w32(imp.address, addr)
                u.hook_add(UC_HOOK_CODE, self._os_adapter, name,
                           begin=addr, end=addr)

    def _time_adapter(self, u, a, n, _):
        sp = u.reg_read(UC_X86_REG_ESP)
        self.external_calls["timeGetTime"] = self.external_calls.get("timeGetTime", 0) + 1
        self._log_external("timeGetTime", sp, self.clock_ms)
        u.reg_write(UC_X86_REG_EAX, self.clock_ms)
        u.reg_write(UC_X86_REG_EIP, self.r32(sp))
        u.reg_write(UC_X86_REG_ESP, sp + 4)

    def _os_adapter(self, u, a, n, name):
        sp = u.reg_read(UC_X86_REG_ESP)
        self.external_calls[name] = self.external_calls.get(name, 0) + 1
        if name == "CreateSemaphoreA":
            initial = self.r32(sp + 8)
            handle = self.next_sem_handle
            self.next_sem_handle += self.SEM_HANDLE_STRIDE
            self.semaphores[handle] = initial
            value, argc = handle, 4
        elif name == "WaitForSingleObject":
            handle = self.r32(sp + 4)
            assert handle in self.semaphores, "unknown semaphore handle %08x" % handle
            assert self.semaphores[handle] > 0, "blocked semaphore"
            self.semaphores[handle] -= 1
            value, argc = 0, 2
        elif name == "ReleaseSemaphore":
            handle = self.r32(sp + 4)
            amount = self.r32(sp + 8)
            previous = self.r32(sp + 12)
            assert handle in self.semaphores, "unknown semaphore handle %08x" % handle
            if previous:
                self.w32(previous, self.semaphores[handle])
            self.semaphores[handle] += amount
            value, argc = 1, 3
        else:
            raise RuntimeError(name)
        self._log_external(name, sp, value)
        u.reg_write(UC_X86_REG_EAX, value)
        u.reg_write(UC_X86_REG_EIP, self.r32(sp))
        u.reg_write(UC_X86_REG_ESP, sp + 4 + argc * 4)

    # -- assets ------------------------------------------------------------
    def _asset(self, rel):
        with open(os.path.join(self.data_dir, rel), "rb") as f:
            return f.read()

    # -- startup -----------------------------------------------------------
    def tribe(self, i):
        return self.TRIBES + i * self.TRIBE_STRIDE

    def unit(self, i):
        return self.UNITS + i * self.UNIT_STRIDE

    def startup(self):
        u = self.u
        hdr = self._asset("levels/levl2001.hdr")
        dat = self._asset("levels/levl2001.dat")
        objs = self._asset("objects/OBJS0-0.DAT")
        shapes = self._asset("objects/SHAPES.DAT")
        starts = self._asset("data/VSTART-0.ANI")
        frames = self._asset("data/VFRA-0.ANI")
        cpatr = self._asset("levels/cpatr010.dat")
        cpscr = self._asset("levels/cpscr010.dat")
        tribe_count = hdr[0x58]

        u.reg_write(UC_X86_REG_ECX, 0x00D05940)
        self.call(0x0052C440)

        self.write(self.UNITS, bytes(self.UNIT_COUNT * self.UNIT_STRIDE))
        self.call(0x004ED820)
        self.call(0x004ED880)
        self.call(0x004EE300)

        counts = []
        for off in range(0, len(starts), 4):
            first = cursor = struct.unpack_from("<H", starts, off)[0]
            n = 0
            while cursor:
                n += 1
                cursor = struct.unpack_from("<H", frames, cursor * 8 + 6)[0]
                if cursor == first:
                    break
                assert n <= len(frames) // 8, "VFRA chain does not terminate"
            counts.append(n & 255)
        self.write(self.FRAMES,
                   b"".join(bytes([0, n]) + bytes(4) for n in counts))
        self.w32(0x0059DF44, self.FRAMES)
        self.w32(0x00892443, self.PARAMS)

        self.write(self.OBJS, objs)
        self.w32(0x00895EC1, self.OBJS)
        self.write(self.SHAPES, shapes)
        self.w32(0x0059DF3C, self.SHAPES)
        count = self.r32(0x005CA2EC)
        for si in range(count):
            sp = self.SHAPES + si * 48 + 44
            self.w32(sp, self.r32(sp) + self.SHAPES + count * 48)

        self.write(0x0089B741, hdr)
        self.w32(0x0089C665, 0)
        self.write(0x0089D180, bytes(4))
        self.w16(0x0089C6DD, 1)
        self.write(0x0096EAC1, bytes(12))
        self.w8(0x0088F000, 0)
        self.w8(0x005D45A8, 1)

        self.call(0x0042C150)
        self.call(0x0042C210)
        self.write(0x0089B741 + 0x14, bytes(32))

        self.write(0x0089B9A9, cpatr)
        self.write(0x0089B9A9, bytes(48))
        self.write(0x009608BA, cpscr)
        self.w32(0x009639BA, 0x009628BA)
        self.w8(0x0096EAC0, tribe_count)
        self.w8(0x0096EABF, tribe_count)

        self.call(0x00485E60, 0)
        self.call(0x0042BFA0)
        self.call(0x00401040)
        self.call(0x0044FA30)
        self.call(0x0042B910)
        self.call(0x0043E320)
        self.call(0x0042B7F0)
        self.call(0x004EEF50)
        self.call(0x00443910)
        self.call(0x0042C8F0)
        self.call(0x00493A40)

        cells = bytearray(16384 * 16)
        for i in range(16384):
            struct.pack_into("<H", cells, 16 * i + 4,
                             struct.unpack_from("<H", dat, 2 * i)[0])
        self.write(self.CELLS, bytes(cells))
        self.call(0x0044DDC0)
        self.call(0x0044DDF0, 0, 64, 0)
        self.call(0x00422A60, 0, 64)
        for i in range(16384):
            if dat[0x10000 + i]:
                self.w32(self.CELLS + 16 * i, self.r32(self.CELLS + 16 * i) | 4)
        for ti in range(4):
            self.write(self.tribe(ti) + 0x8A1, dat[0x14000 + 16 * ti:0x14000 + 16 * ti + 4])
        self.write(0x00937AB0, dat[0x14042:0x14043])
        self.call(0x00401090)

        for slot in range(self.UNIT_COUNT):
            raw = dat[0x14043 + slot * 55:0x14043 + (slot + 1) * 55]
            model, kind, owner = raw[0], raw[1], raw[2]
            if not kind:
                continue
            if (owner if owner < 128 else owner - 256) >= tribe_count:
                continue
            if kind == 6 and model == 6:
                owner = 0
            if kind == 9 or (kind == 6 and model == 9) or (kind == 7 and model == 83):
                continue
            if kind == 2:
                p = self.r32(0x00892443)
                angle = struct.unpack_from("<i", raw, 7)[0]
                self.write(p, struct.pack("<5I", int(angle / 512) & 0xFFFFFFFF,
                                          0, 2, 0xFFFFFFFF, 0))
                self.w32(0x00892443, p + 20)
                self.w8(0x0089243A, 1)
            self.write(self.POS, raw[3:7] + b"\0\0")
            ptr = self.call(0x004ED8A0, kind, model, owner, self.POS)
            if not ptr:
                raise RuntimeError("allocation returned null at slot %d" % slot)
            self.write(self.REC, raw)
            self.call(0x00485B00, ptr, self.REC)
            self.w32(ptr + 8, slot + 1)
            self.placed.append(dict(slot=slot, id=(ptr - self.UNITS) // self.UNIT_STRIDE,
                                    kind=kind, model=model, owner=owner))

        self.call(0x004851E0)
        for i in range(1, self.UNIT_COUNT):
            p = self.unit(i)
            if self.r8(p + 42):
                self.w32(p + 8, 0)
        self.call(0x004866A0)
        self.call(0x004EDF50)
        for i in range(1, self.UNIT_COUNT):
            p = self.unit(i)
            if self.r8(p + 42):
                self.w32(p + 16, self.r32(p + 16) & ~0x40000000)
        for i in range(1, self.UNIT_COUNT):
            p = self.unit(i)
            if bytes(self.u.mem_read(p + 42, 2)) == b"\x06\x06":
                for ref in struct.unpack("<10H", self.u.mem_read(p + 0x72, 20)):
                    if ref:
                        q = self.unit(ref)
                        self.w32(q + 16, self.r32(q + 16) | 0x40000000)
        self.call(0x004BDD40, 0, 64)
        for ti in range(4):
            if not any(x["owner"] == ti for x in self.placed):
                self.w32(self.tribe(ti) + 0x949, 0x61)
        self.call(0x004ECAC0)
        self.call(0x00503230)
        for ti in range(4):
            self.w32(self.tribe(ti) + 0x921, 6)
        for ti in range(tribe_count):
            tp = self.tribe(ti)
            self.call(0x00419790, tp)
            self.call(0x00419810, tp)
            self.call(0x00419880, tp)
            self.w32(tp + 0x93D, self.r32(tp + 0x93D) & ~0x10000)
        self.call(0x00516EB0)
        self.call(0x0042CA00)
        self.w32(self.SETTINGS,
                 (self.r32(self.SETTINGS) & ~0x8000) | (0x8000 if hdr[0x62] & 2 else 0))
        self.call(0x004438A0)
        self.call(0x0042CBC0, 0)
        self.call(0x004C3200)
        self.call(0x00417270, self.r8(0x0089C6C3), 1)
        self.write(0x0089CE7A, b"\xff\xff")
        self.call(0x0044A280)
        self.call(0x0044CF80)
        if self.r32(self.SETTINGS) & 0x800:
            self.call(0x0044CF70)
        self.call(0x0048C620)
        self.call(0x004BDD40, 0, 64)
        self.call(0x004206D0)
        self.call(0x0042C6D0, 0, 0)
        self.w8(0x0089CF12, 0)
        self.call(0x0042CD30)
        self.call(0x00479F00, 8, 0, 0xFFFFFFFF)
        self.call(0x00479F00, 10, 0, 0)

    def configure_command_rate(self, rate=20):
        self.w8(0x0089D161, rate)

    def outer_frame(self, turn):
        self.call(0x0043E3C0)
        self.call(0x004A5590)
        cmd, sim = self.r32(self.COMMAND_FRAME), self.r32(self.SIM_FRAME)
        if cmd != turn or sim != turn:
            raise RuntimeError("frame %d not accepted (command_frame=%d simulation_frame=%d)"
                               % (turn, cmd, sim))
        self.call(0x0041BAE0)


# ------------------------------------------------------------------ regions --

def compared_regions(exe_path=DEFAULT_EXE):
    """The regions both engines dump, matching fixture.cpp's build_regions()."""
    regions = writable_regions(exe_path)
    regions.append(("heap_scratch_03000000", Oracle.SCRATCH_LO, Oracle.SCRATCH_HI))
    regions.append(("req1_00580000", 0x00580000, 0x00970000))
    return regions


def write_run_status(out_dir, manifest, frames):
    """Records whether this run succeeded, beside the snapshots it produced.

    A later comparison started with --no-run reads this instead of assuming the
    snapshots came from a run that finished: stale or partial output must fail,
    not silently pass."""
    status = {"engine": manifest.get("engine", "oracle"),
              "frames_requested": frames,
              "frames_completed": manifest.get("frames_completed", 0),
              "error": manifest.get("error"),
              "ok": (manifest.get("error") is None
                     and manifest.get("frames_completed") == frames)}
    with open(os.path.join(out_dir, "run-status.json"), "w") as f:
        json.dump(status, f, indent=2)
    return status


def run(out_dir, frames=32, exe_path=DEFAULT_EXE, data_dir=DEFAULT_DATA,
        verbose=True, stub_targets=(), stub_mode="clean"):
    """Runs the probe fixture and writes the same snapshot files the
    recompiled fixture writes. Returns the manifest dict."""
    os.makedirs(out_dir, exist_ok=True)
    o = ProbeOracle(exe_path, data_dir, stub_targets=stub_targets,
                    stub_mode=stub_mode)
    regions = compared_regions(exe_path)

    snapshots = []

    def snapshot(tag):
        entry = {"tag": tag,
                 "frame": int(tag[5:]) if tag.startswith("frame") else None,
                 "regions": [], "clock_ms": o.clock_ms,
                 "command_frame": o.r32(o.COMMAND_FRAME),
                 "sim_frame": o.r32(o.SIM_FRAME),
                 "seed": o.r32(o.SEED)}
        for name, lo, hi in regions:
            data = o.read(lo, hi)
            with open(os.path.join(out_dir, "%s.%s.bin" % (tag, name)), "wb") as f:
                f.write(data)
            entry["regions"].append({"name": name, "lo": lo, "hi": hi,
                                     "sha256": hashlib.sha256(data).hexdigest()})
        snapshots.append(entry)

    try:
        o.startup()
    except Exception as exc:                          # noqa: BLE001
        manifest = {"engine": "oracle", "frames_requested": frames,
                    "snapshots": [], "frames_completed": 0, "objects": 0,
                    "error": "startup: %s: %s" % (type(exc).__name__, exc)}
        with open(os.path.join(out_dir, "manifest.json"), "w") as f:
            json.dump(manifest, f, indent=2)
        write_run_status(out_dir, manifest, frames)
        if verbose:
            print("oracle: startup blocked: %s" % exc)
        return manifest
    if verbose:
        print("oracle: startup done, %d objects placed, seed %d"
              % (len(o.placed), o.r32(o.SEED)))
    snapshot("startup")
    o.configure_command_rate(20)

    completed = 0
    error = None
    for turn in range(1, frames + 1):
        if turn > 1:
            o.clock_ms += o.CLOCK_STEP
        try:
            o.outer_frame(turn)
        except Exception as exc:                     # noqa: BLE001
            error = "%s: %s" % (type(exc).__name__, exc)
            break
        completed = turn
        snapshot("frame%02d" % turn)

    zero_page = o.read(0, 0x1000)
    manifest = {"engine": "oracle", "frames_requested": frames,
                "snapshots": snapshots, "frames_completed": completed,
                "objects": len(o.placed), "seed": o.r32(o.SEED),
                "command_frame": o.r32(o.COMMAND_FRAME),
                "simulation_frame": o.r32(o.SIM_FRAME),
                "land_flags": o.r32(o.LAND_FLAGS),
                "render_flags": o.r32(o.RENDER_FLAGS),
                "clock_ms": o.clock_ms,
                "external_calls": o.external_log,
                "external_call_counts": o.external_calls,
                "semaphore_handles": {"%08x" % k: v for k, v in o.semaphores.items()},
                "rdtsc_reads": o.rdtsc_seen,
                "stubbed_targets": {"%08x" % k: v for k, v in o.stubbed.items()},
                "pins": {"return_sentinel": Oracle.END,
                         "harness_stack": Oracle.STACK,
                         "timer_fn_ptr_target": ProbeOracle.TIMEGETTIME_THUNK,
                         "reserved_lo": None, "reserved_hi": None,
                         "fs_base": 0, "seh_head": o.r32(0),
                         "clock_start": ProbeOracle.CLOCK_START,
                         "clock_step": ProbeOracle.CLOCK_STEP},
                # Unicorn leaves the FS base at 0, so every FS-relative access
                # lands on the zero page. If nothing but the SEH head is ever
                # written there, the recompiled TEB at 0x0fe00000 holding the
                # same SEH head is equivalent for this path.
                "fs_zero_page_clean": zero_page == struct.pack("<I", 0xFFFFFFFF) + bytes(0xFFC),
                "error": error}
    with open(os.path.join(out_dir, "manifest.json"), "w") as f:
        json.dump(manifest, f, indent=2)
    write_run_status(out_dir, manifest, frames)
    if verbose:
        print("oracle: %d/%d frames completed, seed %d, command_frame %d, simulation_frame %d"
              % (completed, frames, manifest["seed"], manifest["command_frame"],
                 manifest["simulation_frame"]))
        if error:
            print("oracle: stopped: %s" % error)
    return manifest


def main():
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("--frames", type=int, default=32)
    ap.add_argument("--out", default=None, help="defaults to <game>/build/recomp/parity/oracle")
    ap.add_argument("--game", default=DEFAULT_GAME_DIR, required=DEFAULT_GAME_DIR is None,
                    help="the directory holding game.toml (default: $RECOMP_GAME_DIR)")
    ap.add_argument("--exe", default=None, help="defaults to the game's developer_exe")
    ap.add_argument("--data", default=None, help="defaults to the directory of --exe")
    ap.add_argument("--stub", action="append", default=[], metavar="ADDR",
                    help="hex guest address to answer like recomp_unknown_call "
                         "(EAX = 0, return address left on the stack)")
    args = ap.parse_args()
    if args.exe is None:
        args.exe = str(game_config.load(args.game)["developer_exe_path"])
    if args.out is None:
        args.out = os.path.join(args.game, "build/recomp/parity/oracle")
    if args.data is None:
        args.data = os.path.dirname(args.exe)
    m = run(args.out, args.frames, args.exe, args.data,
            stub_targets=[int(a, 16) for a in args.stub])
    return 0 if m["frames_completed"] == args.frames else 1


if __name__ == "__main__":
    sys.exit(main())
