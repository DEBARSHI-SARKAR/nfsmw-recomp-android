#!/usr/bin/env python3
"""Run a game until it stops finding code its translation does not carry.

    tools/discover.py --game-dir <game> -- <host arguments>

Each pass regenerates the translation with everything earlier passes found
(tools/recomp/translate.py --discovered), builds the headless host, runs it
with RECOMP_DISCOVERY set, and adds whatever the run reached and the
translation did not carry. It stops when a pass finds nothing new, and prints
the addresses it collected in the form game.toml's [translate] entry_points
takes.

A run ends on its own caps (RECOMP_MAX_FRAMES, RECOMP_MAX_SECONDS) or on the
first gap it cannot get past; either way what it reached is recorded. The
addresses are a fact about the runs you did: a menu run finds the menu's
code. See runtime/discovery.h.
"""

import argparse
import os
from pathlib import Path
import subprocess
import sys

ROOT = Path(__file__).resolve().parent.parent


def read(path):
    """The addresses in a discovery file, or an empty set."""
    if not path.is_file():
        return set()
    out = set()
    for line in path.read_text().splitlines():
        line = line.split("#")[0].strip()
        if line:
            out.add(int(line.split()[0], 16))
    return out


def write(path, addresses, source):
    path.write_text("# tools/discover.py, from %d run%s of %s\n"
                    % (source, "" if source == 1 else "s", path.name)
                    + "".join("%08x\n" % a for a in sorted(addresses)))


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--game-dir", type=Path, required=True)
    parser.add_argument("--passes", type=int, default=12, help="most passes to run (default 12)")
    parser.add_argument("--target", default="headless", help="host to build and run (default headless)")
    parser.add_argument("--build-arg", action="append", default=[],
                        help="an extra tools/build.py argument, repeatable")
    parser.add_argument("--keep", type=Path, default=None,
                        help="where to keep the collected addresses (default <game>/build/recomp/discovered.txt)")
    args = parser.parse_args(argv)

    game = args.game_dir.resolve()
    build_root = game / "build"
    keep = (args.keep or build_root / "recomp/discovered.txt").resolve()
    keep.parent.mkdir(parents=True, exist_ok=True)
    pass_file = keep.with_name(keep.stem + "-pass.txt")
    host = build_root / "recomp" / {"headless": "pop_headless", "smoke": "pop_smoke"}.get(
        args.target, "pop_headless")

    known = read(keep)
    print("starting from %d known address%s" % (len(known), "" if len(known) == 1 else "es"))
    for attempt in range(1, args.passes + 1):
        build = [sys.executable, str(ROOT / "tools/build.py"), "--game-dir", str(game),
                 "--regenerate", "--target", args.target] + args.build_arg
        if known:
            build += ["--discovered", str(keep)]
        print("pass %d: translating and building" % attempt, flush=True)
        if subprocess.run(build, cwd=ROOT).returncode:
            return "pass %d: the build failed; nothing was added" % attempt

        env = dict(os.environ, RECOMP_DISCOVERY=str(pass_file))
        pass_file.unlink(missing_ok=True)
        print("pass %d: running %s" % (attempt, host.name), flush=True)
        run = subprocess.run([str(host)], cwd=game, env=env)
        found = read(pass_file)
        fresh = found - known
        print("pass %d: the run ended %s and found %d address%s, %d of them new"
              % (attempt, "normally" if run.returncode == 0 else "with status %d" % run.returncode,
                 len(found), "" if len(found) == 1 else "es", len(fresh)), flush=True)
        if not fresh:
            print("nothing new: %d address%s in %s"
                  % (len(known), "" if len(known) == 1 else "es", keep))
            break
        known |= fresh
        write(keep, known, attempt)
    else:
        print("stopped after %d passes; %d addresses so far" % (args.passes, len(known)))

    if known:
        print("\n[translate]\nentry_points = [%s]"
              % ", ".join("0x%08x" % a for a in sorted(known)))
    return 0


if __name__ == "__main__":
    sys.exit(main())
