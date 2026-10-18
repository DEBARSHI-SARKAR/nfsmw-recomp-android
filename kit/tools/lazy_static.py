#!/usr/bin/env python3
"""Compile the code a run discovered into a library the host loads.

    tools/lazy_static.py --game-dir <game> [--discovered <file>]

A run reports the code its translation does not carry (runtime/discovery.h).
Regenerating the whole translation to pick it up costs minutes; this compiles
just those functions into one small library, which the host loads when
RECOMP_EXTRA_CODE names it:

    RECOMP_EXTRA_CODE=<game>/build/recomp/discovered.dylib <host>

The library registers itself with the runtime's module table, so calls and
jumps to those addresses reach translated code at native speed instead of the
interpreter, and everything else in the image is unaffected: the image's own
table is consulted first, and what the new functions call is dispatched back
into it.

This is the desktop path. iOS loads no code that was not signed into the app,
so there the same addresses go into game.toml's [translate] entry_points and
the app is rebuilt.
"""

import argparse
import os
from pathlib import Path
import shutil
import subprocess
import sys

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import game_config  # noqa: E402


def cmake_value(text, name):
    """One `set(NAME value)` from the generated game_config.cmake."""
    for line in text.splitlines():
        line = line.strip()
        if line.startswith("set(%s " % name):
            return line[len("set(%s " % name):].rstrip(")").strip()
    raise SystemExit("%s is not in the build's game_config.cmake; build the game first" % name)


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--game-dir", type=Path, required=True)
    parser.add_argument("--discovered", type=Path, default=None,
                        help="the run's file (default <game>/build/recomp/discovered.txt)")
    parser.add_argument("--name", default="discovered", help="the module's name (default discovered)")
    parser.add_argument("--preset", default="macos", help="which build tree to take the game's macros from")
    parser.add_argument("--out", type=Path, default=None,
                        help="the library to write (default beside the discovery file)")
    args = parser.parse_args(argv)

    game = args.game_dir.resolve()
    build_root = game / "build"
    discovered = (args.discovered or build_root / "recomp/discovered.txt").resolve()
    if not discovered.is_file():
        return "%s does not exist; run the game with RECOMP_DISCOVERY set first" % discovered
    generated = build_root / "cmake" / args.preset / "generated"
    if not (generated / "game_config.cmake").is_file():
        return "%s is missing; build the game once before compiling extra code for it" % generated
    macros = (generated / "game_config.cmake").read_text()
    clang = shutil.which("clang")
    if clang is None:
        return "clang is not on PATH"

    stage = build_root / "recomp" / ("%s-gen" % args.name)
    shutil.rmtree(stage, ignore_errors=True)
    stage.mkdir(parents=True)
    translate = [sys.executable, str(ROOT / "tools/recomp/translate.py"), "--game", str(game),
                 "--out", str(stage), "--as-module", args.name, "--discovered", str(discovered)]
    if subprocess.run(translate, cwd=ROOT).returncode:
        return "the translation failed"

    sources = sorted(stage.glob("chunk_*.c")) + [stage / "table.c"]
    out = (args.out or discovered.with_suffix(
        ".dylib" if sys.platform == "darwin" else ".so")).resolve()
    command = [clang, "-O2", "-std=c11", "-fPIC", "-shared",
               "-I", str(stage), "-I", str(ROOT / "runtime"), "-I", str(generated),
               "-DGUEST_IMAGE_BASE=" + cmake_value(macros, "RECOMP_IMAGE_BASE"),
               "-DGUEST_HEAP_BASE=" + cmake_value(macros, "RECOMP_HEAP_BASE"),
               "-DGUEST_SIZE=" + cmake_value(macros, "RECOMP_GUEST_SIZE"),
               # The host resolves the runtime's symbols when it loads this.
               "-Wl,-undefined,dynamic_lookup" if sys.platform == "darwin" else "-Wl,--allow-shlib-undefined",
               ] + [str(s) for s in sources] + ["-o", str(out)]
    if subprocess.run(command, cwd=ROOT).returncode:
        return "the compile failed"
    print("%s\n\nRun the game with it:\n    RECOMP_EXTRA_CODE=%s %s"
          % (out, out, build_root / "recomp/pop_headless"))
    return 0


if __name__ == "__main__":
    sys.exit(main())
