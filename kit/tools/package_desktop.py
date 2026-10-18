"""Stage desktop builds and notices without copying the player's game installation."""

from pathlib import Path
import platform
import shutil
import sys
import tarfile

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools"))
import copy_layouts  # noqa: E402
from copy_core_mods import copy_core_mods  # noqa: E402


def stage(app_binary: Path, cfg: dict, out_dir: Path, system=None, build_dir=None, game_dir=None) -> Path:
    """Copy the app and host resources into a folder, plus a Linux tarball.

    Only named build resources are copied. Shaders are embedded in the host;
    SoundFonts and optional replacement textures belong to the player's game.
    game_dir, when given, is the game repository whose layouts/ (its shipped
    on-screen control layouts) is bundled at resources/controls.
    """
    system = system or platform.system()
    if system not in {"Linux", "Windows"}:
        raise ValueError("Desktop staging supports Linux and Windows")
    game = cfg["game"]
    app_name = game["app_name"]
    binary_name = app_name + (".exe" if system == "Windows" else "")
    staged = out_dir / app_name
    resources = staged / "resources"
    resources.mkdir(parents=True, exist_ok=True)
    files = []

    def copy(source, destination):
        shutil.copy2(source, destination)
        files.append(destination)

    copy(app_binary, staged / binary_name)
    for name in ("LICENSE", "NOTICE"):
        copy(ROOT / name, staged / name)
    copy(ROOT / "tools/recomp/baseline/classic-modes.json", resources / "classic-modes.json")
    # The General MIDI bank for a game that ships none, with its licence.
    bank = ROOT / "third_party/soundfonts/generaluser-gs"
    copy(bank / "GeneralUser-GS.sf2", resources / "general-midi.sf2")
    copy(bank / "LICENSE", resources / "general-midi-LICENSE.txt")
    # The translation index lives beside the binary with the desktop Ninja
    # presets, just as finish_bundle.py reads it from build/recomp on macOS.
    symbols = app_binary.parent / "symbols.json"
    if symbols.is_file():
        copy(symbols, resources / "symbols.json")
    else:
        (resources / "symbols.json").unlink(missing_ok=True)

    if game_dir is not None:
        files.extend(copy_layouts.copy_layouts(game_dir, resources / "controls"))
        files.extend(copy_core_mods(game_dir, resources / "mods/core"))

    # Read the actual preset's cache, including an explicit video-OFF override.
    # Exact SONAMEs avoid bundling build tools or unrelated files from ffmpeg/.
    video = False
    if build_dir is not None:
        build_dir = Path(build_dir)
        cache = (build_dir / "CMakeCache.txt").read_text().splitlines()
        video = any(line.startswith("RECOMP_VIDEO:BOOL=") and
                    line.partition("=")[2].upper() in {"1", "ON", "YES", "TRUE", "Y"}
                    for line in cache)
    for component, major in (("avformat", 61), ("avcodec", 61), ("avutil", 59)):
        name = f"{component}-{major}.dll" if system == "Windows" else f"lib{component}.so.{major}"
        if video:
            libdir = "bin" if system == "Windows" else "lib"
            # Dereference Linux's major-version symlinks into self-contained files.
            copy(build_dir / "ffmpeg" / libdir / name, staged / name)
        else:
            (staged / name).unlink(missing_ok=True)
    notice = resources / "ffmpeg-NOTICE.md"
    if video:
        copy(ROOT / "third_party/ffmpeg/NOTICE.md", notice)
    else:
        notice.unlink(missing_ok=True)

    executable = game["executable"]
    if system == "Windows":
        launch = (f'In PowerShell, from this folder:\n'
                  f'  $env:RECOMP_EXE = "C:\\path\\to\\your game\\{executable}"\n'
                  f'  .\\{binary_name}\n')
    else:
        launch = (f'In a terminal, from this folder:\n'
                  f'  RECOMP_EXE="/path/to/your game/{executable}" ./{binary_name}\n')
    readme = staged / "README.txt"
    readme.write_text(
        f"{app_name} - {game['name']}\n\n"
        f"Use your own supported installation containing {executable} and all\n"
        "its data directories. Keep the executable in that installation: the\n"
        "host uses its parent directory as the game data root. No game files\n"
        "are included in this package.\n\n"
        + launch + "\n"
        "RECOMP_EXE names the executable, not a directory. Without an explicit\n"
        "path, the host tries the configured developer executable, then a\n"
        "previously saved executable path, then opens a file picker. It does\n"
        "not search a game/ directory beside this binary.\n\n"
        "Keep resources/ and any FFmpeg shared libraries beside the app.\n"
        "See resources/ffmpeg-NOTICE.md when video is enabled.\n"
        "Shaders are embedded in the binary;\n"
        "any game SoundFont stays in your installation. See LICENSE and NOTICE.\n",
        encoding="utf-8")
    files.append(readme)

    if system == "Linux":
        machine = platform.machine().lower()
        arch = {"amd64": "x86_64", "arm64": "aarch64"}.get(machine, machine)
        archive = out_dir / f"{app_name}-linux-{arch}.tar.gz"
        with tarfile.open(archive, "w:gz") as tar:
            tar.add(staged, arcname=app_name, recursive=False)
            tar.add(resources, arcname=f"{app_name}/resources", recursive=False)
            # Never sweep a reused output folder: it may contain player files.
            for file in files:
                tar.add(file, arcname=f"{app_name}/{file.relative_to(staged).as_posix()}")
    return staged
