"""tools/stage_game_files.py copies a filtered game directory and stamps it."""

import hashlib
import importlib.util
from pathlib import Path
import sys
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[1]
spec = importlib.util.spec_from_file_location("stage_game_files", ROOT / "tools/stage_game_files.py")
stage = importlib.util.module_from_spec(spec)
spec.loader.exec_module(stage)


class StageTests(unittest.TestCase):
    def test_copies_filtered_tree_and_stamps_executable_hash(self):
        with tempfile.TemporaryDirectory() as tmp:
            src = Path(tmp) / "gog"
            dest = Path(tmp) / "out"
            (src / "data").mkdir(parents=True)
            (src / "__redist").mkdir()
            (src / "Fmv").mkdir()
            (src / "Game.exe").write_bytes(b"MZ-game")
            (src / "data" / "a.dat").write_bytes(b"a")
            (src / "__redist" / "vc.exe").write_bytes(b"x")
            (src / "Fmv" / "intro.bik").write_bytes(b"x")
            (src / "ddraw.dll").write_bytes(b"x")
            copied = stage.stage(src, dest, "Game.exe", ["__redist", "Fmv", "*.dll"])
            self.assertTrue((dest / "Game.exe").is_file())
            self.assertTrue((dest / "data" / "a.dat").is_file())
            self.assertFalse((dest / "__redist").exists())
            self.assertFalse((dest / "Fmv").exists())
            self.assertFalse((dest / "ddraw.dll").exists())
            self.assertEqual((dest / ".stamp").read_text().strip(), hashlib.sha256(b"MZ-game").hexdigest())
            self.assertEqual(copied, 2)

    def test_kept_names_survive_the_exclusions(self):
        with tempfile.TemporaryDirectory() as tmp:
            src = Path(tmp) / "gog"
            dest = Path(tmp) / "out"
            (src / "sub").mkdir(parents=True)
            (src / "Game.exe").write_bytes(b"MZ-game")
            (src / "Dfx_p6s.dll").write_bytes(b"x")
            (src / "ddraw.dll").write_bytes(b"x")
            (src / "sub" / "dfx_p6s.dll").write_bytes(b"x")
            copied = stage.stage(src, dest, "Game.exe", ["*.dll"], keep=["dfx_p6s.dll"])
            self.assertTrue((dest / "Dfx_p6s.dll").is_file())
            self.assertFalse((dest / "ddraw.dll").exists())
            self.assertFalse((dest / "sub" / "dfx_p6s.dll").exists())
            self.assertEqual(copied, 2)
        self.assertEqual(stage.kept({"aux_modules": [{"name": "Dfx_p6s.dll"}]}), ["Dfx_p6s.dll"])
        self.assertEqual(stage.kept({}), [])

    def test_second_run_copies_nothing_when_unchanged(self):
        with tempfile.TemporaryDirectory() as tmp:
            src = Path(tmp) / "gog"
            dest = Path(tmp) / "out"
            src.mkdir()
            (src / "Game.exe").write_bytes(b"MZ")
            stage.stage(src, dest, "Game.exe", [])
            self.assertEqual(stage.stage(src, dest, "Game.exe", []), 0)

    def test_config_lists_exclusions(self):
        sys.path.insert(0, str(ROOT / "tools"))
        import game_config
        with tempfile.TemporaryDirectory() as tmp:
            game = Path(tmp)
            toml = (ROOT / "games/stub/game.toml").read_text().replace('exclude = []', 'exclude = ["__redist", "*.dll"]')
            (game / "game.toml").write_text(toml)
            (game / "globals.toml").write_text((ROOT / "games/stub/globals.toml").read_text())
            cfg = game_config.load(game)
        self.assertEqual(cfg["bundle"]["exclude"], ["__redist", "*.dll"])
        self.assertEqual(game_config.load(ROOT / "games/stub")["bundle"]["exclude"], [])


if __name__ == "__main__":
    unittest.main()
