#!/usr/bin/env python3
"""Prepare private translation inputs from a contributor's own game installation.

    tools/setup.py --game-dir <game repository> --install /path/to/the/installed/game [--ghidra-home ...]

Only a symlink to the installation and ignored analysis outputs are created,
both inside the game directory (<game-dir>/original, <game-dir>/analysis).
The executable is hash checked against game.toml before importing the
annotation metadata game.toml names. No game files are downloaded, changed,
or included in any repository.
"""

import argparse
import hashlib
import json
import os
from pathlib import Path
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools"))
import game_config  # noqa: E402

GHIDRA_VERSION = "12.1.3"


def run(args, **kwargs):
    """Run one preparation step with argument boundaries preserved; fail on errors."""
    subprocess.run([str(arg) for arg in args], cwd=ROOT, check=True, **kwargs)


def validate_game(directory, executable, sha256, required_dirs=()):
    """Require the supported executable and game-data directories before creating a link."""
    directory = directory.expanduser().resolve()
    image = directory / executable
    if not image.is_file():
        raise ValueError(f"{executable} was not found in {directory}")
    digest = hashlib.sha256(image.read_bytes()).hexdigest()
    if digest != sha256:
        raise ValueError(f"Unsupported {executable}: SHA-256 {digest}; expected {sha256}")
    names = {entry.name.lower() for entry in directory.iterdir() if entry.is_dir()}
    for required in required_dirs:
        if required.lower() not in names:
            raise ValueError(f"Game installation is missing {required}/")
    return directory


def link_game(directory, destination):
    """Reuse the same installation link; refuse to replace another installation or directory."""
    directory = directory.expanduser().resolve()
    if destination.exists() or destination.is_symlink():
        if destination.resolve() != directory:
            raise ValueError(f"{destination} already points elsewhere; move it aside explicitly")
        return
    destination.parent.mkdir(parents=True, exist_ok=True)
    destination.symlink_to(directory, target_is_directory=True)


def prepare_annotations(analysis_dir, url, revision):
    """Fetch a fixed metadata revision into ignored storage without modifying a dirty checkout."""
    directory = analysis_dir / "annotations"
    created = not directory.exists()
    if created:
        run(["git", "clone", "--no-checkout", url, directory])
    elif not (directory / ".git").exists():
        raise ValueError(f"{directory} exists but is not a Git checkout")
    changes = subprocess.check_output(
        ["git", "-C", str(directory), "status", "--porcelain"], text=True
    )
    # A new --no-checkout clone reports deleted files until its first checkout.
    current = subprocess.run(
        ["git", "-C", str(directory), "rev-parse", "--verify", "HEAD"],
        text=True, capture_output=True, check=False,
    )
    if changes and not created:
        raise ValueError("Annotation checkout has local changes; preserve them before preparing inputs")
    if current.returncode or current.stdout.strip() != revision:
        run(["git", "-C", directory, "fetch", "origin", revision])
    run(["git", "-C", directory, "checkout", "--detach", revision])
    return directory / "backup/backup.xml"


def export_listings(ghidra, java_home, annotations, cfg):
    """Import the verified game and export listings in a disposable Ghidra project."""
    ghidra = ghidra.expanduser().resolve()
    properties = ghidra / "Ghidra/application.properties"
    if not properties.is_file() or f"application.version={GHIDRA_VERSION}\n" not in properties.read_text():
        raise ValueError(f"Use Ghidra {GHIDRA_VERSION}; set --ghidra-home to its extracted directory")
    env = dict(os.environ)
    if java_home:
        env["JAVA_HOME"] = str(java_home.expanduser().resolve())
        env["PATH"] = str(Path(env["JAVA_HOME"]) / "bin") + os.pathsep + env.get("PATH", "")
    listings = cfg["listings_path"]           # <game-dir>/analysis/decompiled/<exe>
    output = listings.parent                   # <game-dir>/analysis/decompiled
    project = listings.parent.parent / "ghidra"
    project.mkdir(parents=True, exist_ok=True)
    output.mkdir(parents=True, exist_ok=True)
    command = [
        ghidra / "support/analyzeHeadless", project, cfg["game"]["app_name"],
        "-import", cfg["developer_exe_path"], "-noanalysis", "-deleteProject",
        "-scriptPath", ROOT / "tools",
    ]
    if annotations is not None:
        command += ["-postScript", "ImportAnnotations.java", annotations]
    command += ["-postScript", "ExportProgram.java", output]
    run(command, env=env)
    index = listings / "functions.tsv"
    if not index.is_file() or len(index.read_text().splitlines()) < 2:
        raise ValueError("Ghidra did not export a function index; inspect its error output")
    (output / "inputs.json").write_text(json.dumps({
        "executable_sha256": cfg["game"]["sha256"],
        "annotations_revision": cfg.get("setup", {}).get("annotations_revision"),
        "ghidra_version": GHIDRA_VERSION,
    }, indent=2) + "\n")


def main():
    """Validate local prerequisites, preserve existing inputs, and prepare reproducible listings."""
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--game-dir", type=Path, required=True, help="The directory holding game.toml")
    parser.add_argument("--install", type=Path, required=True, help="Your installed game directory")
    parser.add_argument("--ghidra-home", type=Path, default=os.environ.get("GHIDRA_HOME"))
    parser.add_argument("--java-home", type=Path, default=os.environ.get("JAVA_HOME"))
    parser.add_argument("--link-only", action="store_true", help="Validate/link game data without exporting")
    args = parser.parse_args()
    try:
        cfg = game_config.load(args.game_dir.resolve())
        setup = cfg.get("setup", {})
        directory = validate_game(args.install, cfg["game"]["executable"], cfg["game"]["sha256"],
                                  setup.get("required_dirs", ()))
        if not args.link_only and not args.ghidra_home:
            raise ValueError("Set --ghidra-home or GHIDRA_HOME; see the game's CONTRIBUTING.md")
        link_game(directory, cfg["developer_exe_path"].parent)
        if not args.link_only:
            annotations = None
            if setup.get("annotations_url"):
                annotations = prepare_annotations(cfg["listings_path"].parent.parent, setup["annotations_url"],
                                                  setup["annotations_revision"])
            export_listings(args.ghidra_home, args.java_home, annotations, cfg)
    except (ValueError, OSError, subprocess.CalledProcessError, KeyError) as error:
        parser.exit(1, f"Setup failed: {error}\n")
    print("Game inputs ready. Next: tools/build.py --game-dir %s --regenerate" % args.game_dir)


if __name__ == "__main__":
    main()
