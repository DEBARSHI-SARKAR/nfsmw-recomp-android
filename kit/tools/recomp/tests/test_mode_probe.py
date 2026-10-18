import importlib.util
import contextlib
import os
import io
import json
from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch
from types import SimpleNamespace

spec = importlib.util.spec_from_file_location("probe", Path(__file__).resolve().parents[1] / "mode_probe.py")
probe = importlib.util.module_from_spec(spec)
spec.loader.exec_module(probe)


class ProbeTests(unittest.TestCase):
    def test_exact_probe_environment_keeps_boot_modes(self):
        for w, h in probe.SIZES:
            for bpp in (8, 16):
                with self.subTest(target=(w, h, bpp)):
                    mode = f"{w}x{h}x{bpp}"
                    case = probe.ROOT / "build/recomp/mode-probe" / mode
                    env = probe.probe_environment((w, h, bpp), case / "probe.script", case,
                        dict(PATH="/usr/bin", RECOMP_SMOKE_DRAWABLE="0x0",
                             RECOMP_DDRAW_MODES="800x600x16", RECOMP_SMOKE_CLASSIC_PROBE="bad",
                             RECOMP_HOST_TEST="1", RECOMP_TEST="1",
                             RECOMP_GAME_DIR="/games/one", RECOMP_DEVELOPER_EXE="/games/one/x.exe"))
                    # Every switch the caller's shell had is dropped; what names the
                    # game and the toolchain (RECOMP_GAME_DIR, RECOMP_DEVELOPER_EXE) stays.
                    self.assertEqual(env, dict(PATH="/usr/bin",
                        RECOMP_GAME_DIR="/games/one", RECOMP_DEVELOPER_EXE="/games/one/x.exe",
                        RECOMP_CORE_MODS_DIR=str(case / "absent-core"),RECOMP_MODS_DIR=str(case / "absent-user"),
                        RECOMP_PROFILE_DIR=str(case / "profile"),RECOMP_REGISTRY=str(case / "registry.json"),
                        RECOMP_RUN_RECORD=str(case / "run.json"),
                        RECOMP_PIN_CLOCK="1", RECOMP_SCRIPT=str(case / "probe.script"),
                        RECOMP_HOST_DUMP_DIR=str(case), RECOMP_SMOKE_CLASSIC_PROBE=mode,
                        RECOMP_DDRAW_MODES="640x480x8,640x480x16" +
                            ("," + mode if (w, h) != (640, 480) else "")))

    def test_candidates_and_frozen_entry(self):
        self.assertEqual(len(probe.SIZES)*2, 24)
        game = os.environ.get("RECOMP_GAME_DIR")
        if not game or not (Path(game) / "smoke/display-ref.script").is_file():
            self.skipTest("RECOMP_GAME_DIR does not name a game with smoke scripts")
        script = probe.probe_script(Path(game) / "smoke").splitlines()
        self.assertEqual(sum(line.startswith("dumpc ") for line in script), 1)
        self.assertEqual(script[-1], "quit")
        self.assertIn("click left 605 448", script)
        self.assertNotIn("click left 236 148", script)
        self.assertIn("await turn>=1 within 60000", script)
        selection = probe.commands(Path(game) / "smoke/mode-select.script")
        self.assertEqual(script[1:1+len(selection)], selection)

    def test_success_is_not_just_exit_zero_or_boot_mode(self):
        with tempfile.TemporaryDirectory() as tmp:
            ppm = Path(tmp) / "dump.ppm"
            ppm.write_bytes(b"P6\n640 480\n255\n" + bytes([0,0,255])*640*480)
            log = ("display mode: 640x480 16bpp\n"
                   "Classic dumpc completed frame=31 class=2 guest=640x480 drawable=640x480\n" +
                   "\n".join("EXPECT " + name + " ok wanted > 0 got 1" for name in
                             ("textures", "draws", "turn", "scene_nonblack")))
            check = lambda text, code=0: probe.classify(text, code, (640,480,16), ppm)
            self.assertEqual(check(log)[0], "pass")
            self.assertEqual(check(log.replace("class=2", "class=0"))[0], "fail")
            self.assertEqual(check(log.replace("16bpp", "8bpp"))[0], "fail")
            self.assertEqual(check(log.replace("EXPECT turn ok", "EXPECT turn FAILED"))[0], "fail")
            self.assertEqual(check(log, 1)[0], "fail")
            self.assertEqual(check(log + "\nscene allocation failed")[0], "fail")
            self.assertEqual(check(log + "\nSIGSEGV EIP=004123ab")[1], "0x004123ab")
            self.assertEqual(check(log + "\nboot: the mod loader reported a failure")[0], "fail")
            self.assertEqual(check("smoke: no Metal device", 3)[0], "blocked")
            self.assertEqual(probe.classify(log, 0, (640,480,16), ppm, True)[0], "fail")
            ppm.unlink()
            self.assertEqual(check(log)[0], "fail")

    def test_surface_refusals_are_diagnostic_not_automatic_mode_failures(self):
        # Reduced from the orchestrator's successful 800x600x16 capture. A
        # rejected optional PVRC candidate precedes real mode/gameplay evidence.
        legacy = ("[recomp] ddraw: CreateSurface FourCC 'PVRC' (43525650) is not an "
                  "advertised pixel format: DDERR_INVALIDPIXELFORMAT\n")
        com = ("[recomp] dx: DDRAW.dll!IDirectDraw::CreateSurface failed: "
               "DDERR_INVALIDPIXELFORMAT (0x88760091)\n")
        evidence = ("display mode: 800x600 16bpp\n"
                    "Classic dumpc completed frame=1213 class=2 guest=800x600 drawable=800x600\n" +
                    "\n".join("EXPECT " + name + " ok wanted > 0 got 1" for name in
                              ("textures", "draws", "turn", "scene_nonblack")))
        refusal = dict(interface="IDirectDraw", hresult="0x88760091", surface="offscreen",
                       descriptor_readable=True, descriptor_flags=0x1007, caps=0x1000,
                       requested_width=64, requested_height=64,
                       requested_format=dict(size=32, flags=4, fourcc=0x43525650, bpp=0,
                                             rmask=0, gmask=0, bmask=0, amask=0),
                       display_mode=[640, 480, 16])
        def diagnostic(row):
            return "[recomp] ddraw: CreateSurface failure " + json.dumps(row) + "\n"
        with tempfile.TemporaryDirectory() as tmp:
            ppm = Path(tmp) / "dump.ppm"
            ppm.write_bytes(b"P6\n800 600\n255\n" + bytes([0,0,255])*800*600)
            check = lambda text: probe.classify(text, 0, (800,600,16), ppm)
            self.assertEqual(check(legacy + com + evidence)[0], "pass")
            old = probe.surface_failures(legacy + com)[0]
            self.assertEqual(old["surface"], "offscreen")
            self.assertIsNone(old["caps"])  # never invent unavailable old metadata
            self.assertEqual(check(com + evidence)[0], "fail")  # no blanket HRESULT exemption
            self.assertEqual(check(legacy + com)[0], "fail")
            self.assertIn("mode mismatch", check(legacy + com + evidence.replace("16bpp", "8bpp"))[2])
            self.assertEqual(check(legacy + com + evidence + "\nscene allocation failed")[0], "fail")
            self.assertEqual(check(diagnostic(refusal) + com + evidence)[0], "pass")
            self.assertEqual(check(diagnostic(refusal) + com + com + evidence)[0], "fail")
            self.assertEqual(check(diagnostic(refusal) + com.replace("0x88760091", "0x8007000e") + evidence)[0], "fail")
            # All repeated refusals survive even when the COM logger emits only once.
            rows = probe.surface_failures(diagnostic(refusal) + com + diagnostic(refusal))
            self.assertEqual(len(rows), 2)
            self.assertEqual(rows[0]["com_log_line"], 2)
            self.assertNotIn("com_log_line", rows[1])
            for key, value in refusal.items():
                self.assertEqual(rows[0][key], value)
            for changed in (dict(surface="primary", caps=0x200),
                            dict(caps=0x40),  # ordinary offscreen surface, not texture
                            dict(requested_format=dict(flags=0x40, fourcc=0, bpp=16)),
                            dict(requested_format=dict(flags=4, fourcc=0x31545844, bpp=0)),
                            dict(hresult="0x8007000e")):
                with self.subTest(changed=changed):
                    row = dict(refusal, **changed)
                    # Detail alone must fail too: the generic COM logger deduplicates.
                    self.assertEqual(check(diagnostic(row) + evidence)[0], "fail")
                    self.assertIn(row["surface"], check(diagnostic(row) + evidence)[2])
            self.assertEqual(check("[recomp] ddraw: CreateSurface failure {bad json}\n" + evidence)[0], "fail")
            self.assertEqual(check(diagnostic(refusal) + com + evidence.replace("class=2", "class=0"))[0], "fail")
            ppm.unlink()
            self.assertEqual(check(diagnostic(refusal) + com + evidence)[0], "fail")

    def test_generated_json_contains_each_modes_surface_failure(self):
        # Exercise JSON publication with a fake child; never execute pop_smoke.
        refusal = dict(surface="primary", caps=0x200, requested_format=None,
                       hresult="0x80070057", display_mode=[640, 480, 8])
        def child(command, *, cwd, env, stdout, **kwargs):
            self.assertEqual(command, [str(cwd / "build/recomp/pop_smoke")])
            self.assertEqual(Path(env["RECOMP_SCRIPT"]).parent, Path(env["RECOMP_HOST_DUMP_DIR"]))
            stdout.write("[recomp] ddraw: CreateSurface failure " + json.dumps(refusal) + "\n")
            return SimpleNamespace(returncode=1)
        with tempfile.TemporaryDirectory() as tmp, contextlib.ExitStack() as stack:
            root = Path(tmp)
            stack.enter_context(patch.object(probe, "ROOT", root))
            stack.enter_context(patch.dict(os.environ, {"RECOMP_GAME_DIR": str(root)}))
            stack.enter_context(patch.object(probe, "probe_script", return_value="quit\n"))
            stack.enter_context(patch.object(probe, "command_output", return_value="Apple M5 Max"))
            run = stack.enter_context(patch.object(probe.subprocess, "run", side_effect=child))
            stack.enter_context(patch.dict(probe.os.environ, {"BUILDLOCK_HELD": "1"}))
            stack.enter_context(patch.object(probe.sys, "argv", ["mode_probe.py"]))
            stack.enter_context(contextlib.redirect_stdout(io.StringIO()))
            self.assertEqual(probe.main(), 0)
            report = json.loads((root / "build/recomp/mode-probe/classic-modes.json").read_text())
            self.assertEqual(run.call_count, 24)
            self.assertEqual(len(report["modes"]), 24)
            for row in report["modes"]:
                self.assertEqual(row["status"], "fail")
                self.assertEqual(len(row["surface_failures"]), 1)
                self.assertIn('"surface": "primary"', row["reason"])
                for key, value in refusal.items():
                    self.assertEqual(row["surface_failures"][0][key], value)

    def test_probe_outcome_and_publication(self):
        # Full entry point with synthetic children: no guest executable runs.
        for count, chip, failure, update in (
                (0, "Apple M5 Max", "fallback", False),
                (2, "Apple M5 Max", "fallback", False),
                (24, "Apple M5 Max", "fallback", True),
                (2, "unavailable", "fallback", True),
                (2, "Apple M5 Max", "metal", True),
                (2, "Apple M5 Max", "crash", True),
                (0, "Apple M5 Max", "launch", True)):
            with self.subTest(count=count, chip=chip, failure=failure, update=update), \
                    tempfile.TemporaryDirectory() as tmp, contextlib.ExitStack() as stack:
                root = Path(tmp)
                baseline = root / "tools/recomp/baseline/classic-modes.json"
                baseline.parent.mkdir(parents=True)
                baseline.write_text('{"previous": true}\n')
                targets = [(w,h,bpp) for w,h in probe.SIZES for bpp in (8,16)]
                survivors = {(640,480,16), (800,600,16)} if count==2 else set(targets[:count])
                def child(command, *, cwd, env, stdout, **kwargs):
                    target = tuple(map(int, env["RECOMP_SMOKE_CLASSIC_PROBE"].split("x")))
                    if target not in survivors:
                        if failure=="launch": raise FileNotFoundError("missing test executable")
                        if failure=="crash": return SimpleNamespace(returncode=-11)
                        stdout.write("smoke: no Metal device\n" if failure=="metal" else
                                     "display mode: 640x480 16bpp\n")
                        return SimpleNamespace(returncode=3 if failure=="metal" else 0)
                    w,h,bpp = target
                    stdout.write(f"display mode: {w}x{h} {bpp}bpp\n"
                                 f"Classic dumpc completed frame=31 class=2 guest={w}x{h} drawable={w}x{h}\n" +
                                 "\n".join(f"EXPECT {name} ok wanted > 0 got 1" for name in
                                           ("textures", "draws", "turn", "scene_nonblack")))
                    ppm = Path(env["RECOMP_HOST_DUMP_DIR"]) / "smoke_classic_composite.ppm"
                    ppm.write_bytes(f"P6\n{w} {h}\n255\n".encode() + b'\xff\0\0'*(w*h))
                    return SimpleNamespace(returncode=0)
                stack.enter_context(patch.object(probe, "ROOT", root))
                stack.enter_context(patch.dict(os.environ, {"RECOMP_GAME_DIR": str(root)}))
                stack.enter_context(patch.object(probe, "probe_script", return_value="quit\n"))
                stack.enter_context(patch.object(probe, "command_output", return_value=chip))
                stack.enter_context(patch.object(probe.subprocess, "run", side_effect=child))
                stack.enter_context(patch.dict(probe.os.environ, {"BUILDLOCK_HELD": "1"}))
                stack.enter_context(patch.object(probe.sys, "argv", ["mode_probe.py"] + (["--update"] if update else [])))
                output = stack.enter_context(contextlib.redirect_stdout(io.StringIO()))
                verified = chip=="Apple M5 Max" and failure=="fallback"
                self.assertEqual(probe.main(), 0 if verified else 2)
                candidate = root / "build/recomp/mode-probe/classic-modes.json"
                report = json.loads(candidate.read_text())
                self.assertEqual(sum(row["passed"] for row in report["modes"]), count)
                self.assertEqual(report["probe_complete"], failure=="fallback")
                expected = ", ".join("x".join(map(str, t)) for t in targets if t in survivors) or "none"
                self.assertEqual(output.getvalue().splitlines()[-1], "Classic survivors: " + expected)
                self.assertIn("--- tools/recomp/baseline/classic-modes.json", output.getvalue())
                self.assertEqual(baseline.read_text(), candidate.read_text() if update and verified else
                                 '{"previous": true}\n')

    def test_partial_probe_cannot_replace_full_baseline(self):
        with patch.object(probe.sys, "argv", ["mode_probe.py", "--mode", "1920x1080x16", "--update"]), \
                patch.object(probe.subprocess, "run") as child, contextlib.redirect_stderr(io.StringIO()):
            with self.assertRaises(SystemExit) as error:
                probe.main()
            self.assertEqual(error.exception.code, 2)
            child.assert_not_called()


if __name__ == "__main__":
    unittest.main()
