#!/usr/bin/env python3
"""Package a finished build of a game into the release archive for one platform.

    tools/recomp/package.py --game-dir /abs/<game> --preset macos --version v1.2.3

macOS: <App>-<v>-macos-arm64.zip holding <App>.app (as finish_bundle.py
built it), the game's LICENSE, NOTICE and tools/release/README.txt. Windows and
Linux: an <App> folder with the executable, resources/{mods/core,texture-pack,
classic-modes.json} and the same documents, zipped (Windows) or tar.gz'd (Linux).
The build is read from the game's build root (<game>/build)."""
import argparse
import os
import shutil
import subprocess
import sys
import tarfile
import zipfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "tools"))
import game_config  # noqa: E402
import copy_layouts  # noqa: E402

SUFFIX = {"macos": "macos-arm64", "linux": "linux-x64", "windows": "windows-x64"}


def stage_resources(dest, cc, game_dir, build_root):
    resources = dest / "resources"
    resources.mkdir(parents=True)
    shutil.copy(ROOT / "tools/recomp/baseline/classic-modes.json", resources / "classic-modes.json")
    bank = ROOT / "third_party/soundfonts/generaluser-gs"
    shutil.copy(bank / "GeneralUser-GS.sf2", resources / "general-midi.sf2")
    shutil.copy(bank / "LICENSE", resources / "general-midi-LICENSE.txt")
    symbols = build_root / "recomp/symbols.json"
    if symbols.is_file():
        shutil.copy(symbols, resources / "symbols.json")
    # The game's shipped on-screen control layouts, when it has any (spec section 5).
    copy_layouts.copy_layouts(game_dir, resources / "controls")
    core = game_dir / "mods/core"
    if core.is_dir():
        subprocess.run([sys.executable, str(ROOT / "tools/recomp/build_core.py"), "--source", str(core),
                        "--dest", str(resources / "mods/core"), "--cc", cc], check=True, cwd=ROOT)
    pack = build_root / "texture-pack"
    if (pack / "manifest.json").is_file():
        subprocess.run([sys.executable, str(ROOT / "tools/recomp/package_texture_pack.py"),
                        str(pack), str(resources / "texture-pack")], check=True, cwd=ROOT)


def add_docs(dest, game_dir):
    """The game's own notices and player README travel with every archive."""
    for name in ("LICENSE", "NOTICE"):
        if (game_dir / name).is_file():
            shutil.copy(game_dir / name, dest / name)
    readme = game_dir / "tools/release/README.txt"
    if readme.is_file():
        shutil.copy(readme, dest / "README.txt")


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--game-dir", type=Path, required=True, help="the directory holding game.toml")
    ap.add_argument("--preset", choices=sorted(SUFFIX), required=True)
    ap.add_argument("--version", required=True)
    ap.add_argument("--out", type=Path, default=None, help="default <game>/dist")
    ap.add_argument("--cc", default=os.environ.get("CC", "clang"))
    args = ap.parse_args()
    game_dir = args.game_dir.resolve()
    app_name = game_config.load(game_dir)["game"]["app_name"]
    build_root = game_dir / "build"
    out = args.out or game_dir / "dist"
    out.mkdir(parents=True, exist_ok=True)
    stage = out / f"stage-{args.preset}"
    shutil.rmtree(stage, ignore_errors=True)
    stage.mkdir()
    name = f"{app_name}-{args.version}-{SUFFIX[args.preset]}"
    if args.preset == "macos":
        app = build_root / f"{app_name}.app"
        subprocess.run(["codesign", "--verify", "--deep", "--strict", str(app)], check=True)
        shutil.copytree(app, stage / app.name, symlinks=True)
        add_docs(stage, game_dir)
        archive = out / f"{name}.zip"
        archive.unlink(missing_ok=True)
        # ditto keeps the bundle's metadata and signature; zipfile does not.
        subprocess.run(["ditto", "-c", "-k", "--sequesterRsrc", str(stage), str(archive)], check=True)
    else:
        folder = stage / app_name
        folder.mkdir()
        exe = build_root / ("recomp/%s.exe" % app_name if args.preset == "windows" else "recomp/%s" % app_name)
        shutil.copy(exe, folder / exe.name)
        stage_resources(folder, args.cc, game_dir, build_root)
        add_docs(folder, game_dir)
        if args.preset == "windows":
            archive = out / f"{name}.zip"
            with zipfile.ZipFile(archive, "w", zipfile.ZIP_DEFLATED) as z:
                for path in sorted(folder.rglob("*")):
                    z.write(path, path.relative_to(stage))
        else:
            archive = out / f"{name}.tar.gz"
            with tarfile.open(archive, "w:gz") as t:
                t.add(folder, arcname=app_name)
    shutil.rmtree(stage)
    print(archive)


if __name__ == "__main__":
    main()
