#!/usr/bin/env python3
"""Copy a game's shipped control layouts into a packaged app's resources.

    tools/copy_layouts.py --game-dir /abs/path/to/<game> --dest App.app/Contents/Resources/controls

The game repository's layouts/ (its top-level <name>.json and
<name>.<form>.json files; see docs/superpowers/specs, section 5) becomes the
"controls" resource a packaged app reads through host_resource("controls").
A game with no layouts/, or an empty one, leaves the destination untouched:
nothing is copied and nothing fails.
"""

import argparse
from pathlib import Path
import shutil
import sys


def copy_layouts(game_dir, dest):
    """Copy layouts/*.json (top level only) from game_dir into dest.

    Non-JSON files are ignored. dest is created only when there is at least
    one file to copy, so a game without layouts/ leaves no trace. Returns the
    destination paths written, for a caller that also tracks copied files
    (package_desktop.py's archive listing)."""
    layouts = Path(game_dir) / "layouts"
    if not layouts.is_dir():
        return []
    sources = sorted(p for p in layouts.iterdir() if p.is_file() and p.suffix == ".json")
    if not sources:
        return []
    dest = Path(dest)
    dest.mkdir(parents=True, exist_ok=True)
    written = []
    for source in sources:
        target = dest / source.name
        shutil.copy2(source, target)
        written.append(target)
    return written


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--game-dir", type=Path, required=True)
    parser.add_argument("--dest", type=Path, required=True)
    args = parser.parse_args()
    written = copy_layouts(args.game_dir, args.dest)
    print("copied %d control layout(s) to %s" % (len(written), args.dest))


if __name__ == "__main__":
    sys.exit(main())
