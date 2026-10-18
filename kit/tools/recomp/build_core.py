#!/usr/bin/env python3
"""Install the bundled core mods: compile each plugin reproducibly, then swap the install root."""

import argparse
import os
from pathlib import Path
import platform
import shutil
import subprocess
import tempfile

ROOT = Path(__file__).resolve().parents[2]


def target_system(cc):
    """The system `cc` builds for, from its target triple: a cross compiler's
    plugins follow the target, not the machine building them. None when the
    compiler does not say."""
    try:
        result = subprocess.run([str(cc), "-dumpmachine"], capture_output=True, text=True)
    except OSError:
        return None
    triple = result.stdout.strip().lower()
    if not triple:
        return None
    if "mingw" in triple or "windows" in triple:
        return "Windows"
    if "darwin" in triple or "apple" in triple:
        return "Darwin"
    if "linux" in triple or "android" in triple:
        return "Linux"
    return None


def is_mingw(cc):
    try:
        result = subprocess.run([str(cc), "-dumpmachine"], capture_output=True, text=True)
    except OSError:
        return False
    return "mingw" in result.stdout.lower()


def plugin_extension(system=None):
    """The shared-library suffix the mod loader expects on this platform."""
    system = system or platform.system()
    return {"Darwin": ".dylib", "Windows": ".dll"}.get(system, ".so")


def compiler_environment(system=None):
    """The environment plugin compiles run in: reproducible archives, and on macOS the SDK.

    A compiler named by its toolchain path (what CMake and `xcrun -f clang` give)
    finds no libSystem without SDKROOT; `xcrun clang` set it implicitly."""
    env = dict(os.environ, ZERO_AR_DATE="1")
    if (system or platform.system()) == "Darwin" and not env.get("SDKROOT"):
        result = subprocess.run(["xcrun", "--show-sdk-path"], capture_output=True, text=True)
        if result.returncode == 0 and result.stdout.strip():
            env["SDKROOT"] = result.stdout.strip()
    return env


def linker_accepts(cc, flag, scratch, env):
    """Whether the linker takes `flag`, learned by linking an empty module with it."""
    probe = scratch / ".link-probe"
    result = subprocess.run([str(cc), "-x", "c", "-", "-shared", flag, "-o", str(probe)],
                            input="", capture_output=True, text=True, env=env)
    return result.returncode == 0


def compile_flags(cc, name, scratch, env, system=None):
    """Flags for one plugin: reproducible, stripped, position independent, undefined symbols
    left for load time because the API arrives as a pointer rather than by linking."""
    system = system or platform.system()
    # The staging directory has a random name; nothing about it may reach the
    # output, so any path the compiler records is rewritten to a fixed one.
    flags = ["-std=c11", "-O1", "-g0", "-Wall", "-Wextra", "-Wno-unused-parameter",
             "-ffile-prefix-map=%s=core" % scratch]
    if system != "Windows":
        flags.append("-fPIC") # COFF has no PIC flag; clang rejects it for the MSVC target
    if system == "Darwin":
        # Keep LC_UUID (dyld requires it) but derive it from content, omit
        # debug maps, and never use the random staging path as the id.
        flags += ["-dynamiclib", "-Wl,-undefined,dynamic_lookup", "-Wl,-S",
                  "-Wl,-install_name,@rpath/" + name]
        if linker_accepts(cc, "-Wl,-reproducible", scratch, env):
            flags.append("-Wl,-reproducible")
    elif system == "Windows" and is_mingw(cc):
        # lld in MinGW mode takes GNU spellings: no timestamp, no debug info.
        flags += ["-shared", "-fuse-ld=lld", "-Wl,--no-insert-timestamp", "-s"]
    elif system == "Windows":
        # /debug:none: without it lld-link still writes a CodeView debug
        # directory naming a PDB under the random staging path, with a GUID
        # that changes on every link.
        flags += ["-shared", "-fuse-ld=lld", "-Wl,/Brepro", "-Wl,/timestamp:0", "-Wl,/debug:none"]
    else:
        flags += ["-shared", "-Wl,--build-id=none"]
    return flags


def manifest_plugin(toml_path):
    """The [plugin] path a manifest names, or None."""
    section = None
    for line in toml_path.read_text().splitlines():
        stripped = line.strip()
        if stripped.startswith("["):
            section = stripped
        elif section == "[plugin]" and stripped.startswith("path"):
            _, _, value = stripped.partition("=")
            return value.strip().strip('"')
    return None


def install(source, dest, cc, api_include, system=None):
    """Stage a copy of `source` beside `dest`, compile every <mod>/*.c into it, verify each
    manifest's plugin exists, then replace `dest` by rename. Raises CalledProcessError on a
    compile failure and FileNotFoundError on a missing plugin; `dest` is untouched either way.
    Returns the number of plugins built."""
    system = system or target_system(cc) or platform.system()
    source, dest = Path(source), Path(dest)
    dest.parent.mkdir(parents=True, exist_ok=True)
    stage = Path(tempfile.mkdtemp(prefix=dest.name + ".stage.", dir=dest.parent))
    try:
        shutil.copytree(source, stage, dirs_exist_ok=True)
        env = compiler_environment(system)
        built = 0
        for src in sorted(stage.glob("*/*.c")):
            out = src.with_suffix(plugin_extension(system))
            command = [str(cc)] + compile_flags(cc, out.name, stage, env, system)
            command += ["-I", str(api_include), str(src), "-o", str(out)]
            subprocess.run(command, check=True, env=env, cwd=stage)
            built += 1
            # A Windows link also writes an import library and an exports
            # file beside the DLL. Nothing loads them and their archive
            # timestamps vary, so they are not part of the installed identity.
            for sidecar in (out.with_suffix(".lib"), out.with_suffix(".exp"), out.with_suffix(".pdb")):
                if sidecar.exists():
                    sidecar.unlink()
        for toml in sorted(stage.glob("*/mod.toml")):
            plugin = manifest_plugin(toml)
            if plugin is None:
                continue
            literal = toml.parent / plugin
            # A manifest written on one platform names that platform's suffix;
            # the loader applies the same substitution at run time.
            local = literal.with_suffix(plugin_extension(system))
            if not literal.is_file() and not local.is_file():
                raise FileNotFoundError("missing plugin %s: %s" % (toml, plugin))
        for probe in stage.glob(".link-probe*"):
            probe.unlink()
        if dest.exists():
            shutil.rmtree(dest)
        stage.rename(dest)
        return built
    finally:
        if stage.exists():
            shutil.rmtree(stage, ignore_errors=True)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--dest", type=Path, default=ROOT / "build/recomp/mods/core")
    parser.add_argument("--source", type=Path, required=True, help="the game's mods/core directory")
    parser.add_argument("--cc", required=True, help="C compiler driver (clang)")
    parser.add_argument("--api-include", type=Path, default=ROOT / "mods")
    args = parser.parse_args()
    dest = args.dest.resolve()
    # Only build and packaging trees are install roots: the source tree stays clean.
    if "build" not in dest.parts and "dist" not in dest.parts:
        parser.error("unsupported install root: %s" % dest)
    try:
        built = install(args.source.resolve(), dest, args.cc, args.api_include.resolve())
    except (subprocess.CalledProcessError, FileNotFoundError) as error:
        parser.exit(1, "build_core: %s\n" % error)
    print("core mods: installed %s (%d plugins)" % (dest, built))


if __name__ == "__main__":
    main()
