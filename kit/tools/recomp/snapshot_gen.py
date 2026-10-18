#!/usr/bin/env python3
"""Copy build/recomp/gen to a directory under the build lock and verify it is one whole generation."""

import argparse
from pathlib import Path
import re
import shutil
import sys
import time

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "tools/recomp"))
import buildlock  # noqa: E402

PROTOTYPE = re.compile(r"^void fn_[0-9a-f]{8}", re.M)


def snapshot(destination, gen, attempts=5, pause=5.0):
    """Copy gen/ and check that every prototype in funcs.h has a definition in the chunks.
    Returns the function count; raises RuntimeError when no consistent copy could be taken."""
    for attempt in range(1, attempts + 1):
        shutil.rmtree(destination, ignore_errors=True)
        destination.mkdir(parents=True)
        try:
            for path in list(gen.glob("*.c")) + list(gen.glob("*.h")) + [gen / "symbols.json"]:
                if path.is_file():
                    shutil.copy(path, destination / path.name)
        except OSError:
            print("snapshot_gen: build/recomp/gen is being rewritten, retrying (%d)" % attempt, file=sys.stderr)
            time.sleep(pause)
            continue
        required = [destination / "table.c", destination / "funcs.h", destination / "x86.h"]
        if not all(p.is_file() for p in required):
            print("snapshot_gen: incomplete snapshot, retrying (%d)" % attempt, file=sys.stderr)
            time.sleep(pause)
            continue
        prototypes = set(PROTOTYPE.findall((destination / "funcs.h").read_text()))
        definitions = set()
        for chunk in destination.glob("chunk_*.c"):
            definitions.update(PROTOTYPE.findall(chunk.read_text()))
        if prototypes and prototypes == definitions:
            return len(prototypes)
        print("snapshot_gen: torn snapshot (%d prototypes, %d definitions), retrying (%d)"
              % (len(prototypes), len(definitions), attempt), file=sys.stderr)
        time.sleep(pause)
    raise RuntimeError("could not take a consistent snapshot of build/recomp/gen")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("destination", type=Path)
    parser.add_argument("--build-root", type=Path, required=True, help="the game's build root (holds recomp/gen)")
    args = parser.parse_args()
    try:
        with buildlock.BuildLock(args.build_root.parent, "snapshot_gen.py"):
            count = snapshot(args.destination.resolve(), args.build_root / "recomp/gen")
    except (RuntimeError, TimeoutError) as error:
        parser.exit(1, "snapshot_gen: %s\n" % error)
    print("snapshot: %d functions in %s" % (count, args.destination))


if __name__ == "__main__":
    main()
