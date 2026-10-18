#!/usr/bin/env python3
"""Stage and analyse the sample (see ../README.md).

    tools/prepare.py --cc /path/to/i686-w64-mingw32-clang \\
        --ghidra-home /path/to/ghidra_12.1.3_PUBLIC [--java-home ...] \\
        [--wine-dlls /path/to/wine/lib/wine/i386-windows]

Builds original/sample.exe from src/sample.c, exports its Ghidra listings,
and renders game.toml from game.toml.in with the hash of what it staged.

--wine-dlls adds the second experiment: that Wine's own i386 msvcrt.dll is
copied in, listed, and named as an auxiliary module. Any Wine build serves -
the hash written into game.toml is of the copy staged here, because the
translation that follows is only valid for those exact bytes. Without the
option the sample is the interpreter benchmark alone and needs no Wine.

Then, from the kit:

    tools/build.py --game-dir <this directory> --regenerate --target headless \\
        --allow-table-gaps "..." --allow-unmodelled "..."   # the DLL needs both
"""

import argparse
import hashlib
import os
from pathlib import Path
import shutil
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
KIT = ROOT.parents[1]
GHIDRA_VERSION = "12.1.3"


# Rendered into game.toml only when a Wine directory was given. guest_size
# comes with it: the arena has to reach past the module, and without one the
# kit's own default is right.
MSVCRT_MODULE = """# Wine links its DLLs at 0x10000000, just past the kit's default arena.
guest_size = 0x10100000

# %s, unmodified, staged by tools/prepare.py.
[modules.aux.msvcrt]
name = "msvcrt.dll"
path = "original/msvcrt.dll"
sha256 = "%s"
base = 0x10000000
size = 0x%x
listings = "analysis/decompiled/msvcrt.dll"
function_alignment = 4
# A printf-format jump table (in 1003c7e0) names 1003ccde, a block Ghidra's
# listing leaves out: MOV EAX,[EBX+0x40] after an unconditional JMP.
entry_points = [0x1003ccde]
"""


def render_game_toml(exe_sha256, module):
    """game.toml, from game.toml.in and what this machine staged."""
    text = (ROOT / "game.toml.in").read_text()
    text = text.replace("# game.toml.in - tools/prepare.py renders game.toml from this",
                        "# game.toml - rendered by tools/prepare.py from game.toml.in; edit that")
    text = text.replace("@SAMPLE_SHA256@", exe_sha256)
    text = text.replace("@MSVCRT_MODULE@\n", module)
    (ROOT / "game.toml").write_text(text)


def image_size(path):
    """SizeOfImage, which [modules.aux] needs and the PE states."""
    data = path.read_bytes()
    pe = int.from_bytes(data[0x3c:0x40], "little")
    return int.from_bytes(data[pe + 24 + 56:pe + 24 + 60], "little")


def load_game_config():
    sys.path.insert(0, str(KIT / "tools"))
    import game_config
    return game_config.load(ROOT)


def sha256(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def ghidra_export(ghidra, env, project, name, image, output, listings):
    subprocess.run([
        str(ghidra / "support/analyzeHeadless"), str(project), name,
        "-import", str(image), "-deleteProject",
        "-scriptPath", str(KIT / "tools"),
        "-postScript", "ExportProgram.java", str(output),
    ], cwd=ROOT, env=env, check=True)
    if not (listings / "functions.tsv").is_file():
        sys.exit("Ghidra did not export a function index for %s" % image.name)


def main():
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--cc", type=Path, required=True, help="llvm-mingw's i686-w64-mingw32-clang")
    parser.add_argument("--wine-dlls", type=Path, default=None,
                        help="a Wine lib/wine/i386-windows directory; without it the sample is "
                             "the interpreter benchmark alone")
    parser.add_argument("--ghidra-home", type=Path, default=os.environ.get("GHIDRA_HOME"))
    parser.add_argument("--java-home", type=Path, default=os.environ.get("JAVA_HOME"))
    args = parser.parse_args()
    if not args.ghidra_home:
        sys.exit("Set --ghidra-home or GHIDRA_HOME to the extracted Ghidra %s directory" % GHIDRA_VERSION)
    ghidra = args.ghidra_home.expanduser().resolve()
    properties = ghidra / "Ghidra/application.properties"
    if not properties.is_file() or "application.version=%s\n" % GHIDRA_VERSION not in properties.read_text():
        sys.exit("Use Ghidra %s; set --ghidra-home to its extracted directory" % GHIDRA_VERSION)

    exe = ROOT / "original/sample.exe"
    exe.parent.mkdir(parents=True, exist_ok=True)
    # No C runtime and no relocations: the kit maps the image at its base. No
    # build id or timestamp either, so game.toml's hash stays reproducible.
    subprocess.run([
        str(args.cc), "-O2", "-march=i386", "-fno-stack-protector", "-ffreestanding", "-nostdlib",
        "-Wl,--entry=_start", "-Wl,--image-base=0x400000", "-Wl,--disable-dynamicbase",
        "-Wl,--disable-reloc-section", "-Wl,--build-id=none", "-Wl,--no-insert-timestamp",
        "src/sample.c", "-lkernel32", "-o", str(exe.relative_to(ROOT)),
    ], cwd=ROOT, check=True)
    module = ""
    if args.wine_dlls:
        dll = ROOT / "original/msvcrt.dll"
        source = args.wine_dlls.expanduser().resolve() / "msvcrt.dll"
        if not source.is_file():
            sys.exit("%s does not exist; --wine-dlls wants a Wine lib/wine/i386-windows" % source)
        shutil.copyfile(source, dll)
        module = MSVCRT_MODULE % (source, sha256(dll), image_size(dll))
    render_game_toml(sha256(exe), module)
    cfg = load_game_config()

    env = dict(os.environ)
    if args.java_home:
        env["JAVA_HOME"] = str(args.java_home.expanduser().resolve())
        env["PATH"] = str(Path(env["JAVA_HOME"]) / "bin") + os.pathsep + env.get("PATH", "")
    env["MAXMEM"] = "4G"
    output = cfg["listings_path"].parent
    project = output.parent / "ghidra"
    project.mkdir(parents=True, exist_ok=True)
    output.mkdir(parents=True, exist_ok=True)
    ghidra_export(ghidra, env, project, "sample", exe, output, cfg["listings_path"])
    for mod in cfg["aux_modules"]:
        ghidra_export(ghidra, env, project, "sample-" + mod["key"], mod["path"], output,
                      mod["listings_path"])
    print("game.toml and listings ready%s. Next, from the kit:\n"
          "    tools/build.py --game-dir %s --regenerate --target headless"
          % (" (with Wine's msvcrt)" if module else " (no Wine: the interpreter benchmark alone)",
             ROOT))


if __name__ == "__main__":
    main()
