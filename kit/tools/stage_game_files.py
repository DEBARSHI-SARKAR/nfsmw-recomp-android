#!/usr/bin/env python3
"""Copy a game directory into an app bundle, minus what the game.toml excludes,
and stamp it with the executable's SHA-256 so a device can tell a rebuilt
bundle from the copy it already made.

    tools/stage_game_files.py --game-dir /abs/path/to/<game> --source <game>/original/gog --dest App.app/game
"""

import argparse
import fnmatch
import hashlib
from pathlib import Path
import shutil
import sys

sys.path.insert(0, str(Path(__file__).resolve().parent))
import game_config  # noqa: E402


def excluded(relative, patterns, keep=()):
    """True when the path's top directory or its file name matches a pattern.
    A top-level file named in `keep` (case-insensitively) is never excluded:
    an auxiliary module the runtime maps stays even when `*.dll` is out."""
    parts = relative.parts
    if len(parts) == 1 and any(relative.name.lower() == k.lower() for k in keep):
        return False
    return any(fnmatch.fnmatch(parts[0], p) or fnmatch.fnmatch(relative.name, p) for p in patterns)


def kept(cfg):
    """The file names a game's bundle must keep regardless of its exclusions."""
    return [m["name"] for m in cfg.get("aux_modules", [])]


def stage(source, dest, executable, exclude, keep=()):
    """Copy changed files only (size and mtime), remove nothing, write .stamp.
    Returns the number of files copied."""
    source, dest = Path(source), Path(dest)
    dest.mkdir(parents=True, exist_ok=True)
    copied = 0
    for path in sorted(source.rglob("*")):
        relative = path.relative_to(source)
        if excluded(relative, exclude, keep):
            continue
        target = dest / relative
        if path.is_dir():
            target.mkdir(parents=True, exist_ok=True)
            continue
        if target.is_file():
            src_stat, dst_stat = path.stat(), target.stat()
            if src_stat.st_size == dst_stat.st_size and int(src_stat.st_mtime) == int(dst_stat.st_mtime):
                continue
        target.parent.mkdir(parents=True, exist_ok=True)
        shutil.copy2(path, target)
        copied += 1
    digest = hashlib.sha256((source / executable).read_bytes()).hexdigest()
    stamp = dest / ".stamp"
    if not stamp.is_file() or stamp.read_text().strip() != digest:
        stamp.write_text(digest + "\n")
    return copied


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--game-dir", type=Path, required=True)
    parser.add_argument("--source", type=Path, required=True)
    parser.add_argument("--dest", type=Path, required=True)
    args = parser.parse_args()
    cfg = game_config.load(args.game_dir)
    n = stage(args.source, args.dest, cfg["game"]["executable"], cfg["bundle"]["exclude"], kept(cfg))
    print("staged %s -> %s (%d files copied)" % (args.source, args.dest, n))


if __name__ == "__main__":
    main()
