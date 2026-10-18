#!/usr/bin/env python3
"""Implementation of mode_probe.sh; call the locked shell entry point."""
import argparse
import difflib
import hashlib
import json
import os
from pathlib import Path
import re
import subprocess
import sys
import time

ROOT = Path(__file__).resolve().parents[2]
SIZES = ((640,480), (800,600), (1024,768), (1280,960), (1600,1200),
         (1920,1440), (2560,1920), (3840,2880), (1280,720), (1920,1080),
         (2560,1440), (3840,2160))


def commands(path):
    return [line.split("#", 1)[0].strip() for line in path.read_text().splitlines()
            if line.split("#", 1)[0].strip()]


def game_dir():
    """The game under probe: RECOMP_GAME_DIR names the directory holding game.toml and smoke/."""
    value = os.environ.get("RECOMP_GAME_DIR")
    if not value:
        raise SystemExit("mode_probe: set RECOMP_GAME_DIR to the game directory")
    return Path(value)


def probe_script(smoke=None):
    smoke = smoke or game_dir() / "smoke"
    ref = commands(smoke / "display-ref.script")
    # Exact frozen level-entry segment: stop before resolution-dependent
    # gameplay clicks. Dump once, after a real simulation turn is observed.
    entry = ref[ref.index("dump menu")+1:ref.index("dump level_start")]
    entry = [line for line in entry if not line.startswith("dump ")]
    return "\n".join([ref[0], *commands(smoke / "mode-select.script"), *entry,
                      "await turn>=1 within 60000", "wait 2000", "dumpc classic",
                      "expect textures>0", "expect draws>0", "expect turn>0",
                      "expect scene_nonblack>0.01", "quit", ""])


# RECOMP_* names that locate the game and the toolchain rather than switch
# host behaviour; a child keeps these when its caller's switches are dropped.
TOOL_KEYS = frozenset(("RECOMP_GAME_DIR", "RECOMP_BUILD_ROOT", "RECOMP_DEVELOPER_GAME_DIR", "RECOMP_DEVELOPER_EXE",
                       "RECOMP_IOS_TEAM", "RECOMP_OVERRIDE_HEADER", "RECOMP_FUNCS_H",
                       "RECOMP_NO_HOOKS", "RECOMP_IMAGE_BASE"))


def without_switches(env):
    """`env` minus the kit's RECOMP_* switches, so a run is not steered by
    whatever the caller's shell happened to export."""
    return {key: value for key, value in env.items()
            if not key.startswith("RECOMP_") or key in TOOL_KEYS}


def probe_environment(target, path, case, inherited=None):
    env = without_switches(os.environ if inherited is None else inherited)
    mode = "x".join(map(str, target))
    env.update(RECOMP_DDRAW_MODES=",".join(dict.fromkeys(("640x480x8", "640x480x16", mode))),
               RECOMP_PIN_CLOCK="1",
               RECOMP_SCRIPT=str(path), RECOMP_HOST_DUMP_DIR=str(case),
               RECOMP_SMOKE_CLASSIC_PROBE=mode,
               RECOMP_CORE_MODS_DIR=str(case / "absent-core"), RECOMP_MODS_DIR=str(case / "absent-user"),
               RECOMP_PROFILE_DIR=str(case / "profile"), RECOMP_REGISTRY=str(case / "registry.json"),
               RECOMP_RUN_RECORD=str(case / "run.json"))
    return env


def surface_failures(log):
    """Preserve each request; pair the deduplicated COM line with its diagnostic.

    Old captures identify only the FourCC, so missing caps/masks remain null.
    Only the game's known optional PVRC texture query is a recoverable candidate;
    it still needs ALL mode, gameplay, image and exit evidence to pass classify().
    """
    rows = []
    lines = log.splitlines()
    for index, line in enumerate(lines, 1):
        diagnostic = re.search(r"ddraw: CreateSurface failure (\{.*\})$", line)
        if diagnostic:
            try:
                row = json.loads(diagnostic[1])
                if not isinstance(row, dict):
                    continue
            except ValueError:
                continue
            pf = row.get("requested_format") or {}
            caps = row.get("caps", 0)
            row["expected_format_probe"] = (
                row.get("hresult") == "0x88760091" and row.get("surface") == "offscreen"
                and bool(caps & 0x1000) and not caps & 0x200  # texture, not primary
                and bool(pf.get("flags", 0) & 4) and pf.get("fourcc") == 0x43525650)
            row.update(log_line=index, diagnostic_source="structured")
            rows.append(row)
        elif re.search(r"dx: DDRAW.dll!IDirectDraw(?:2|4)?::CreateSurface failed:", line):
            match = re.search(r"\(0x([0-9a-fA-F]{8})\)", line)
            hresult = "0x" + match[1].lower() if match else None
            if (rows and rows[-1]["diagnostic_source"] == "structured"
                    and rows[-1]["log_line"] == index-1 and rows[-1].get("hresult") == hresult):
                rows[-1]["com_log_line"] = index
                continue
            legacy = index > 1 and "CreateSurface FourCC 'PVRC' (43525650)" in lines[index-2]
            rows.append(dict(surface="offscreen" if legacy else "unknown", caps=None,
                             requested_format=dict(fourcc=0x43525650) if legacy else None,
                             hresult=hresult,
                             expected_format_probe=bool(legacy and "DDERR_INVALIDPIXELFORMAT (0x88760091)" in line),
                             diagnostic_source="legacy_fourcc" if legacy else "legacy_com",
                             log_line=index))
    return rows


def classify(log, code, target, ppm, timed_out=False):
    """Success requires the mode at level entry AND a completed gameplay image."""
    fault = re.search(r"\bEIP=(?:0x)?([0-9a-fA-F]{8})", log)
    address = "0x" + fault[1].lower() if fault else None
    # A capability query can fail normally: the guest tries PVRC, then uses
    # advertised RGB textures. Do not turn that handled refusal into a mode
    # failure. Unknown/primary/RGB failures remain fatal and fully recorded.
    ignored = {row[key] for row in surface_failures(log) if row["expected_format_probe"]
               for key in ("log_line", "com_log_line") if key in row}
    reasons = [line.strip() for index, line in enumerate(log.splitlines(), 1)
               if index not in ignored and re.search(
        r"SIGSEGV|SIGBUS|abort from the runtime|FAILED|allocation fail|out of memory|"
        r"CreateSurface failure|not one of the offered modes|ended abnormally|did not finish|no Metal device|no renderer|mod loader reported a failure",
        line, re.I)]
    if "no Metal device" in log or "smoke: no renderer" in log:
        return "blocked", address, "; ".join(reasons)
    if timed_out:
        return "fail", address, "external 240 second timeout; " + "; ".join(reasons)
    if code and not reasons and not address and (code < 0 or not log.strip()):
        return "blocked", address, f"unclassified smoke termination: exit status {code}"
    if code or reasons:
        return "fail", address, "; ".join(reasons) or f"smoke exit status {code}"
    w, h, bpp = target
    modes = re.findall(r"display mode:\s+(\d+)x(\d+) (\d+)bpp", log)
    if not modes or tuple(map(int, modes[-1])) != target:
        return "fail", address, "final guest mode mismatch: " + ("x".join(modes[-1]) if modes else "not reported")
    completed = re.findall(r"Classic dumpc completed frame=(\d+) class=(\d+) guest=(\d+)x(\d+) drawable=(\d+)x(\d+)", log)
    if not completed or tuple(map(int, completed[-1][1:])) != (2,w,h,w,h) or int(completed[-1][0]) <= 0:
        return "fail", address, "no completed gameplay composite at the requested guest mode"
    if not all(re.search(r"EXPECT\s+" + metric + r"\s+ok\s", log)
               for metric in ("textures", "draws", "turn", "scene_nonblack")):
        return "fail", address, "missing level/render expectations"
    try:
        data = ppm.read_bytes()
        header = re.match(rb"P6\s+(\d+)\s+(\d+)\s+255\s", data)
        if not header or tuple(map(int, header.groups())) != (w,h) or len(data)-header.end() != w*h*3:
            raise ValueError("invalid dimensions or payload")
        if not any(data[header.end():]):
            raise ValueError("black composite")
    except (OSError, ValueError) as error:
        return "fail", address, f"invalid dumpc: {error}"
    return "pass", None, "mode, level entry, completed gameplay dumpc and clean exit verified"


def command_output(command):
    result = subprocess.run(command, cwd=ROOT, text=True, stdout=subprocess.PIPE,
                            stderr=subprocess.DEVNULL, check=False)
    return result.stdout.strip() if result.returncode == 0 else "unavailable"


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--update", action="store_true", help="install results after showing the diff")
    parser.add_argument("--mode", action="append", help="probe a specific WxHxB mode; repeatable, cannot be combined with --update")
    args = parser.parse_args()
    targets=[(w,h,bpp) for w,h in SIZES for bpp in (8,16)]
    if args.mode:
        if args.update: parser.error("--update requires the complete mode probe")
        targets=[]
        for mode in args.mode:
            match=re.fullmatch(r"([1-9][0-9]*)x([1-9][0-9]*)x(8|16)",mode)
            if not match: parser.error("--mode must be WxHx8 or WxHx16")
            target=tuple(map(int,match.groups()))
            if target not in targets: targets.append(target)
    if os.environ.get("BUILDLOCK_HELD") != "1":
        parser.error("use tools/recomp/mode_probe.sh (requires the worktree build lock)")
    work = game_dir() / "build/recomp/mode-probe"
    work.mkdir(parents=True, exist_ok=True)
    script = probe_script()
    rows = []
    for w,h,bpp in targets:
        mode = f"{w}x{h}x{bpp}"
        case = work / mode
        case.mkdir(exist_ok=True)
        path = case / "probe.script"
        path.write_text(script)
        ppm = case / "smoke_classic_composite.ppm"
        ppm.unlink(missing_ok=True)  # a prior run cannot supply evidence
        env = probe_environment((w,h,bpp), path, case)
        # Every probe starts with empty settings; an earlier run's saved
        # index must not turn the single mode-selection click into a wrap.
        runtime=case / ("runtime-"+str(time.time_ns()))
        env.update(RECOMP_PROFILE_DIR=str(runtime / "profile"), RECOMP_REGISTRY=str(runtime / "registry.json"))
        timed_out = False
        with (case / "smoke.log").open("w") as output:
            try:
                result = subprocess.run([str(ROOT / "build/recomp/pop_smoke")], cwd=ROOT,
                                        env=env, stdout=output, stderr=subprocess.STDOUT,
                                        timeout=240, check=False)
                code = result.returncode
            except OSError as error:
                output.write(f"probe launch blocked: {error}\n")
                code = -1
            except subprocess.TimeoutExpired:
                code, timed_out = -1, True
        log = (case / "smoke.log").read_text(errors="replace")
        status, address, reason = classify(log, code, (w,h,bpp), ppm, timed_out)
        rows.append(dict(w=w,h=h,bpp=bpp,status=status,passed=status=="pass",
                         framing="aspect-fit",fault_address=address,reason=reason,
                         surface_failures=surface_failures(log),
                         exit_status=code,log=str((case / "smoke.log").relative_to(ROOT))))
        print(f"{mode}: {status}: {reason}", flush=True)
    chip = command_output(["/usr/sbin/sysctl", "-n", "machdep.cpu.brand_string"])
    report = dict(schema_version=1, target="Apple M5 Max", machine=chip,
                  target_verified="Apple M5 Max" in chip,
                  probe_complete=all(row["status"] != "blocked" for row in rows),
                  native_compatibility=True, full_probe=not bool(args.mode),
                  script_sha256=hashlib.sha256(script.encode()).hexdigest(), modes=rows)
    generated = json.dumps(report, indent=2) + "\n"
    candidate = work / "classic-modes.json"
    candidate.write_text(generated)
    baseline = ROOT / "tools/recomp/baseline/classic-modes.json"
    old = baseline.read_text() if baseline.exists() else ""
    sys.stdout.writelines(difflib.unified_diff(old.splitlines(True), generated.splitlines(True),
                                             fromfile=baseline.relative_to(ROOT).as_posix(),
                                             tofile=candidate.relative_to(ROOT).as_posix()))
    verified = report["probe_complete"] and report["target_verified"]
    if args.update and verified:
        temporary = baseline.with_suffix(".json.tmp")
        temporary.write_text(generated)
        temporary.replace(baseline)
    passing = sum(row["passed"] for row in rows)
    print(f"Classic probe: {passing}/{len(targets)} pass; complete={report['probe_complete']}; target_verified={report['target_verified']}")
    survivors = [f"{row['w']}x{row['h']}x{row['bpp']}" for row in rows if row["passed"]]
    print("Classic survivors: " + (", ".join(survivors) or "none"))
    # Rejections are measured results, and baseline differences are review
    # output. Neither makes a complete, target-verified probe unsuccessful.
    return 0 if verified else 2


if __name__ == "__main__":
    sys.exit(main())
