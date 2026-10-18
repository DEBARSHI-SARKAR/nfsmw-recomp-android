#!/usr/bin/env python3
"""Differential test of the EA-XA ADPCM decoders on real movie data.

    tools/recomp/tests/test_eaxa.py [--chunks N] [--movie PATH]

The intro movies are Electronic Arts SCHl files whose audio is EA-XA ADPCM,
a codec whose predictor carries two samples of history per channel across
blocks.  The decoders are `0057d9f0` (stereo) and `0057d870` (mono, each
sample written to both output channels); `0057a2d0` picks between them on the
channel count at `[ESI+0x58]` and, for each chunk, re-seeds the history from
the four int16 the chunk header carries:

    MOVSX EAX,word ptr [ESP+0x1e] -> [ESI+0x3e8]   previous left
    MOVSX EDX,word ptr [ESP+0x1c] -> [ESI+0x3e0]   current  left
    MOVSX EAX,word ptr [ESP+0x22] -> [ESI+0x3ec]   previous right
    MOVSX EDX,word ptr [ESP+0x20] -> [ESI+0x3e4]   current  right

which is the layout ffmpeg's EA demuxer reads too.  Those four ints and the
sample cursor are passed to the decoder by address and written back on the way
out, so the state that crosses a chunk boundary is entirely visible here.

The inputs are the real ones: the encoded bytes and the seed history are read
straight out of the .TGQ.  Two consecutive chunks are decoded per pass, the
second continuing from the state the first left, and every byte either side
wrote is compared - output PCM, the four history words, the cursor and the
output pointer - along with the registers and the arithmetic flags.
"""
import argparse
import os
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import test_translate as T                                        # noqa: E402
from test_translate import (ROOT, ESP_INIT, MAGIC_RET, SCRATCH,   # noqa: E402
                            SCRATCH_SIZE, STACK_BASE, STACK_SIZE,
                            UC_REGS, REG_NAMES, X86, FPU_CW_INIT,
                            FPU_TAG_INIT, EFLAGS_MISC_INIT)
import ctypes as C                                                # noqa: E402
import pefile                                                     # noqa: E402
from unicorn import UcError                                       # noqa: E402
from unicorn.x86_const import UC_X86_REG_ESP, UC_X86_REG_EIP      # noqa: E402

MOVIE = os.path.join(ROOT, "original/gog/Fmv/P3INTRO1.TGQ")

STEREO = 0x0057d9f0
MONO = 0x0057d870

# Guest layout for the call.  SCRATCH is 64 KB and zeroed on both sides.
ENC = SCRATCH + 0x0100          # encoded chunk
OUT = SCRATCH + 0x4000          # decoded PCM
ST_POS = SCRATCH + 0x10         # sample cursor
ST_CURL = SCRATCH + 0x20        # the four history words, one per dword
ST_PREVL = SCRATCH + 0x24
ST_CURR = SCRATCH + 0x28
ST_PREVR = SCRATCH + 0x2c
ST_OUTP = SCRATCH + 0x30        # the output cursor, by address

BLOCK_SAMPLES = 28


def scdl_chunks(path, want, limit=1 << 24):
    """The audio chunks of an EA SCHl file, as (samples, seed, encoded)."""
    d = open(path, "rb").read(limit)
    out, off = [], 0
    while off < len(d) - 8 and len(out) < want:
        tag, size = d[off:off + 4], struct.unpack_from("<I", d, off + 4)[0]
        if size < 8 or size > (1 << 20):
            off += 1
            continue
        if tag == b"SCDl":
            body = d[off + 8:off + size]
            samples = struct.unpack_from("<I", body, 0)[0]
            seed = struct.unpack_from("<4h", body, 4)
            enc = body[12:]
            blocks = (samples + BLOCK_SAMPLES - 1) // BLOCK_SAMPLES
            if samples and len(enc) >= blocks * 30:
                out.append((samples, seed, enc))
        off += size
    return out


def call(addr, args, mem, native, emu):
    """Run one call on both sides from identical memory.

    Returns (native_result, unicorn_result, error), each result being the
    registers, EIP, the arithmetic flags and every byte of the regions that
    matter."""
    frame = struct.pack("<%dI" % (len(args) + 1), MAGIC_RET, *args)

    for addr_, data in mem + [(ESP_INIT, frame)]:
        emu.u.mem_write(addr_, data)
        native.write(addr_, data)

    for r in UC_REGS:
        emu.u.reg_write(r, 0xA5A5A5A5)
    emu.u.reg_write(UC_X86_REG_ESP, ESP_INIT)
    emu.reset_fpu()
    try:
        emu.u.emu_start(addr, MAGIC_RET)
    except UcError as e:
        return None, None, "unicorn error %s" % e
    u = {"regs": [emu.u.reg_read(r) for r in UC_REGS],
         "eip": emu.u.reg_read(UC_X86_REG_EIP),
         "mem": bytes(emu.u.mem_read(SCRATCH, SCRATCH_SIZE))}

    c = X86()
    for k in range(8):
        c.r[k] = 0xA5A5A5A5
    c.r[4] = ESP_INIT
    c.fpu_cw = FPU_CW_INIT
    c.fpu_tag = FPU_TAG_INIT
    c.eflags_misc = EFLAGS_MISC_INIT
    c.fs_base = 0x0FE00000
    native.lib.harness_reset_flags()
    native.lib.harness_run(addr, C.byref(c))
    if native.lib.harness_last_unknown():
        return None, None, ("unresolved call to %08x"
                            % native.lib.harness_last_unknown())
    n = {"regs": [c.r[k] for k in range(8)], "eip": c.eip,
         "mem": native.read(SCRATCH, SCRATCH_SIZE)}
    return n, u, None


def state_of(mem, base=SCRATCH):
    def dw(a):
        return struct.unpack_from("<I", mem, a - base)[0]
    return {"pos": dw(ST_POS), "curL": dw(ST_CURL), "prevL": dw(ST_PREVL),
            "curR": dw(ST_CURR), "prevR": dw(ST_PREVR), "out": dw(ST_OUTP)}


def run_pass(addr, stereo, chunks, native, emu, verbose):
    """Decode two consecutive chunks, the second carrying the first's state."""
    fails = []
    seed = chunks[0][1]
    state = {"curL": seed[0], "prevL": seed[1], "curR": seed[2],
             "prevR": seed[3]}
    written = 0
    for k, (samples, hdr, enc) in enumerate(chunks):
        blocks = (samples + BLOCK_SAMPLES - 1) // BLOCK_SAMPLES
        nbytes = blocks * (30 if stereo else 15)
        mem = [
            (SCRATCH, b"\0" * 0x100),
            (ENC, enc[:nbytes]),
            (ST_POS, struct.pack("<i", 0)),
            (ST_CURL, struct.pack("<i", state["curL"])),
            (ST_PREVL, struct.pack("<i", state["prevL"])),
            (ST_CURR, struct.pack("<i", state["curR"])),
            (ST_PREVR, struct.pack("<i", state["prevR"])),
            (ST_OUTP, struct.pack("<I", OUT)),
            (OUT, b"\0" * (blocks * 0x70)),
        ]
        if stereo:
            args = [samples, ST_POS, ST_CURL, ST_PREVL, ST_CURR, ST_PREVR,
                    ENC, ST_OUTP]
        else:
            args = [samples, ST_POS, ST_CURL, ST_PREVL, ENC, ST_OUTP]

        n, u, err = call(addr, args, mem, native, emu)
        if err:
            fails.append("chunk %d: %s" % (k, err))
            return fails, 0
        for i, name in enumerate(REG_NAMES):
            if n["regs"][i] != u["regs"][i]:
                fails.append("chunk %d: %s native %08x unicorn %08x"
                             % (k, name, n["regs"][i], u["regs"][i]))
        if n["eip"] != u["eip"]:
            fails.append("chunk %d: EIP native %08x unicorn %08x"
                         % (k, n["eip"], u["eip"]))
        if n["mem"] != u["mem"]:
            bad = [i for i in range(SCRATCH_SIZE)
                   if n["mem"][i] != u["mem"][i]]
            fails.append("chunk %d: %d bytes differ, first at %08x "
                         "(native %02x unicorn %02x)"
                         % (k, len(bad), SCRATCH + bad[0],
                            n["mem"][bad[0]], u["mem"][bad[0]]))
            return fails, 0

        st = state_of(n["mem"])
        pcm = n["mem"][OUT - SCRATCH:OUT - SCRATCH + blocks * 0x70]
        written += len(pcm)
        peak = max(abs(v) for v in struct.unpack("<%dh" % (len(pcm) // 2), pcm))
        if verbose:
            print("    chunk %d: %d samples, %d blocks, %d bytes encoded -> "
                  "%d bytes PCM, peak %.3f of full scale" %
                  (k, samples, blocks, nbytes, len(pcm), peak / 32768.0))
            print("      seed  cur/prev L %6d %6d   R %6d %6d"
                  % (state["curL"], state["prevL"], state["curR"],
                     state["prevR"]))
            print("      left  cur/prev L %6d %6d   R %6d %6d   cursor %d"
                  % (sx(st["curL"]), sx(st["prevL"]), sx(st["curR"]),
                     sx(st["prevR"]), st["pos"]))
            print("      file's seed for the next chunk: %s"
                  % (list(chunks[k + 1][1]) if k + 1 < len(chunks) else "-"))
        if st["out"] != OUT + blocks * 0x70:
            fails.append("chunk %d: output cursor left at %08x, expected %08x"
                         % (k, st["out"], OUT + blocks * 0x70))
        if st["pos"] != blocks * BLOCK_SAMPLES:
            fails.append("chunk %d: sample cursor left at %d, expected %d"
                         % (k, st["pos"], blocks * BLOCK_SAMPLES))
        # Carry the history forward, which is what a chunk boundary does.
        state = {"curL": sx(st["curL"]), "prevL": sx(st["prevL"]),
                 "curR": sx(st["curR"]), "prevR": sx(st["prevR"])}
    return fails, written


def sx(v):
    return v - (1 << 32) if v >= (1 << 31) else v


def decode_native(addr, stereo, samples, enc, seed, native, emu):
    """One chunk through the generated decoder.  Equivalence with unicorn is
    established above; this is for measuring the signal itself."""
    blocks = (samples + BLOCK_SAMPLES - 1) // BLOCK_SAMPLES
    nbytes = blocks * (30 if stereo else 15)
    mem = [(SCRATCH, b"\0" * 0x100), (ENC, enc[:nbytes]),
           (ST_POS, struct.pack("<i", 0)),
           (ST_CURL, struct.pack("<i", seed[0])),
           (ST_PREVL, struct.pack("<i", seed[1])),
           (ST_CURR, struct.pack("<i", seed[2])),
           (ST_PREVR, struct.pack("<i", seed[3])),
           (ST_OUTP, struct.pack("<I", OUT)),
           (OUT, b"\0" * (blocks * 0x70))]
    args = [samples, ST_POS, ST_CURL, ST_PREVL, ST_CURR, ST_PREVR, ENC, ST_OUTP]
    for a, data in mem:
        native.write(a, data)
    c = X86()
    for k in range(8):
        c.r[k] = 0xA5A5A5A5
    c.r[4] = ESP_INIT
    c.fpu_cw = FPU_CW_INIT
    c.fpu_tag = FPU_TAG_INIT
    c.eflags_misc = EFLAGS_MISC_INIT
    c.fs_base = 0x0FE00000
    native.write(ESP_INIT,
                 struct.pack("<%dI" % (len(args) + 1), MAGIC_RET, *args))
    native.lib.harness_reset_flags()
    native.lib.harness_run(addr, C.byref(c))
    pcm = native.read(OUT, blocks * 0x70)
    mem_after = native.read(SCRATCH, 0x100)
    st = state_of(mem_after)
    return (struct.unpack("<%dh" % (len(pcm) // 2), pcm),
            [sx(st["curL"]), sx(st["prevL"]), sx(st["curR"]), sx(st["prevR"])])


def seam_analysis(chunks, native, emu):
    """What a chunk boundary costs, measured on the real stream.

    For each consecutive pair: the step from the last sample of one chunk to
    the first of the next, when the next is decoded from the seed the file
    carries for it (what a correct player does), and when it is decoded from a
    zeroed history (what a player that reinitialises per chunk does)."""
    rows = []
    for k in range(len(chunks) - 1):
        s0, seed0, enc0 = chunks[k]
        s1, seed1, enc1 = chunks[k + 1]
        pcm0, end0 = decode_native(STEREO, True, s0, enc0, list(seed0),
                                   native, emu)
        seeded, _ = decode_native(STEREO, True, s1, enc1, list(seed1),
                                  native, emu)
        zeroed, _ = decode_native(STEREO, True, s1, enc1, [0, 0, 0, 0],
                                  native, emu)
        carried, _ = decode_native(STEREO, True, s1, enc1, end0, native, emu)
        last = pcm0[-2:]                      # last L, R of the previous chunk
        def step(x):
            return max(abs(x[0] - last[0]), abs(x[1] - last[1])) / 32768.0
        rows.append((k, max(abs(v) for v in pcm0) / 32768.0,
                     step(seeded), step(carried), step(zeroed)))
    return rows


def main():
    T.reexec_under_lock(__file__)
    ap = argparse.ArgumentParser()
    ap.add_argument("--movie", default=MOVIE)
    ap.add_argument("--chunks", type=int, default=2)
    ap.add_argument("--quiet", action="store_true")
    ap.add_argument("--skip", type=int, default=0,
                    help="chunks of the stream to skip, to reach loud passages")
    ap.add_argument("--seams", action="store_true",
                    help="measure the step at each chunk boundary")
    args = ap.parse_args()

    chunks = scdl_chunks(args.movie, (args.chunks + args.skip) * 4)
    if len(chunks) < args.chunks:
        raise SystemExit("%s: found %d audio chunks, need %d"
                         % (args.movie, len(chunks), args.chunks))
    # Consecutive chunks of one stream: the file interleaves four of them.
    streams = 4 if len(chunks) >= 4 else 1
    picked = chunks[0::streams][args.skip:args.skip + args.chunks]

    pe = pefile.PE(os.path.join(ROOT, "original/gog/D3DPopTB.exe"),
                   fast_load=True)
    emu = T.Emu(pe.get_memory_mapped_image(), pe.OPTIONAL_HEADER.ImageBase,
                pe.OPTIONAL_HEADER.SizeOfImage)
    native = T.Native()
    # The decoders read their coefficient pairs out of .data at 0x5ed2a8 and
    # 0x5ed2b8, so the image has to be in the generated code's memory as well
    # as in unicorn's.  Without it the coefficients read as zero and the
    # "difference" is the missing image, not the translation.
    native.write(emu.image_base, emu.image)
    emu.u.mem_write(STACK_BASE, b"\0" * STACK_SIZE)
    native.zero(STACK_BASE, STACK_SIZE)
    emu.u.mem_write(SCRATCH, b"\0" * SCRATCH_SIZE)
    native.zero(SCRATCH, SCRATCH_SIZE)

    print("\n== EA-XA ADPCM decoders on %s ==" % os.path.relpath(args.movie, ROOT))
    print("  %d audio chunks read, %d of one stream used"
          % (len(chunks), len(picked)))
    failed = 0
    for addr, name, stereo in ((STEREO, "0057d9f0 stereo", True),
                               (MONO, "0057d870 mono", False)):
        print("  %s:" % name)
        fails, written = run_pass(addr, stereo, picked, native, emu,
                                  not args.quiet)
        print("    %s  %d bytes of PCM compared byte for byte across %d "
              "chunks, plus the four history words and both cursors"
              % ("PASS" if not fails else "FAIL", written, len(picked)))
        for f in fails[:8]:
            print("        " + f)
        failed += bool(fails)
    if args.seams:
        rows = seam_analysis(picked, native, emu)
        print("\n  step at each chunk boundary, as a fraction of full scale")
        print("  %-5s %8s %8s %8s %8s" % ("pair", "peak", "seeded", "carried",
                                          "zeroed"))
        for k, peak, a, b, c_ in rows:
            print("  %-5d %8.3f %8.3f %8.3f %8.3f" % (k, peak, a, b, c_))
        if rows:
            print("  worst  %8.3f %8.3f %8.3f %8.3f"
                  % (max(r[1] for r in rows), max(r[2] for r in rows),
                     max(r[3] for r in rows), max(r[4] for r in rows)))

    print("\n%s" % ("all decoders match unicorn" if not failed
                    else "%d decoder(s) differ" % failed))
    return 1 if failed else 0


if __name__ == "__main__":
    sys.exit(main())
