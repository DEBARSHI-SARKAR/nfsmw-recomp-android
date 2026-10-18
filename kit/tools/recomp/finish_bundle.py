#!/usr/bin/env python3
"""Finish an assembled app bundle: identity, resources, core mods, texture pack, signature."""

import argparse
import os
from pathlib import Path
import plistlib
import shutil
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "tools"))
import copy_layouts  # noqa: E402

GENERAL_MIDI = ROOT / "third_party/soundfonts/generaluser-gs/GeneralUser-GS.sf2"


def rename_identity(plist_path, name, version):
    """Stamp the version; the bundle's identity comes from generated/Info.plist."""
    data = plistlib.loads(plist_path.read_bytes())
    if version:
        data.update(CFBundleShortVersionString=version.lstrip("v"), CFBundleVersion=version.lstrip("v"))
    plist_path.write_bytes(plistlib.dumps(data))


def bundle_ffmpeg(contents, libraries):
    """Copy replaceable shared libraries, set their IDs, then sign before the app."""
    if not libraries:
        return
    frameworks = contents / "Frameworks"
    frameworks.mkdir(parents=True, exist_ok=True)
    shutil.copy2(ROOT / "third_party/ffmpeg/NOTICE.md", contents / "Resources/ffmpeg-NOTICE.md")
    for source in libraries:
        # Follow the installed major-version symlink into a standalone file.
        dest = frameworks / source.name
        shutil.copy2(source, dest)
        subprocess.run(["install_name_tool", "-id", "@rpath/" + dest.name, str(dest)], check=True)
        subprocess.run(["codesign", "--force", "--sign", "-", str(dest)], check=True)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--bundle", type=Path, required=True)
    parser.add_argument("--name", required=True)
    parser.add_argument("--cc", required=True)
    parser.add_argument("--version", default="")
    parser.add_argument("--build-root", type=Path, default=ROOT / "build",
                        help="Where this build's outputs live (texture pack, symbols.json)")
    parser.add_argument("--game-dir", type=Path, required=True, help="The game directory (its mods/core is installed)")
    parser.add_argument("--pack", type=Path, default=None)
    parser.add_argument("--ffmpeg-library", type=Path, action="append", default=[],
                        help="FFmpeg shared library to copy into Contents/Frameworks (repeatable)")
    args = parser.parse_args()
    if args.pack is None:
        args.pack = Path(os.environ.get("RECOMP_TEXTURE_PACK_DIR") or args.build_root / "texture-pack")
    contents = args.bundle / "Contents"
    resources = contents / "Resources"
    resources.mkdir(parents=True, exist_ok=True)
    rename_identity(contents / "Info.plist", args.name, args.version)
    # The committed probe list. A missing list is labelled a baseline fallback
    # by the settings layer; packaging never manufactures measurements.
    probes = ROOT / "tools/recomp/baseline/classic-modes.json"
    if probes.is_file():
        shutil.copy(probes, resources / "classic-modes.json")
    # The General MIDI bank for a game that ships none, with its licence.
    shutil.copy2(GENERAL_MIDI, resources / "general-midi.sf2")
    shutil.copy2(GENERAL_MIDI.parent / "LICENSE", resources / "general-midi-LICENSE.txt")
    # The game's shipped on-screen control layouts, when it has any (spec section 5).
    copy_layouts.copy_layouts(args.game_dir, resources / "controls")
    # The translation index the mod loader reads, when this build has one.
    fresh = args.build_root / "recomp/symbols.json"
    if fresh.is_file():
        shutil.copy(fresh, resources / "symbols.json")
    else:
        # A stub build has no translation and therefore no symbol table; the
        # kit never tracks one (spec section 11).
        print("finish_bundle: no symbols.json in this build; mods get no symbol table")
    core = args.game_dir / "mods/core"
    if core.is_dir():
        subprocess.run([sys.executable, str(ROOT / "tools/recomp/build_core.py"), "--source", str(core),
                        "--dest", str(resources / "mods/core"), "--cc", args.cc], check=True, cwd=ROOT)
    if (args.pack / "manifest.json").is_file():
        subprocess.run([sys.executable, str(ROOT / "tools/recomp/package_texture_pack.py"),
                        str(args.pack), str(resources / "texture-pack")], check=True, cwd=ROOT)
    bundle_ffmpeg(contents, args.ffmpeg_library)
    # Seal after every resource is in place: the linker signature alone does
    # not cover the resource envelope.
    subprocess.run(["codesign", "--force", "--deep", "--sign", "-", str(args.bundle)], check=True)
    subprocess.run(["codesign", "--verify", "--deep", "--strict", str(args.bundle)], check=True)
    shown = args.bundle.relative_to(ROOT) if args.bundle.is_relative_to(ROOT) else args.bundle
    print("built %s" % shown)


if __name__ == "__main__":
    main()
