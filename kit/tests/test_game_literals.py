"""No game-specific literal in kit code; see tools/check_game_literals.py."""

import importlib.util
from pathlib import Path
import unittest

spec = importlib.util.spec_from_file_location(
    "check_game_literals", Path(__file__).resolve().parents[1] / "tools/check_game_literals.py")
check = importlib.util.module_from_spec(spec)
spec.loader.exec_module(check)


class GameLiteralTests(unittest.TestCase):
    def test_kit_code_has_no_game_literals(self):
        self.assertEqual(list(check.findings()), [])

    def test_the_stub_game_has_no_populous_literal(self):
        stub = Path(__file__).resolve().parents[1] / "games/stub"
        self.assertTrue((stub / "game.toml").is_file(), "games/stub/game.toml is missing")
        text = (stub / "game.toml").read_text() + (stub / "globals.toml").read_text()
        for token in ("Populous", "D3DPopTB", "PopRecomp", "0x0055d6c0", "0x00d0595c"):
            self.assertNotIn(token, text)

    def test_comments_are_ignored(self):
        lines = dict(check.code_lines("int a; // D3DPopTB\n/* PopRecomp\n */ int b;\n"))
        self.assertNotIn("D3DPopTB", lines[1])
        self.assertNotIn("PopRecomp", lines[2])
        self.assertIn("int b;", lines[3])


if __name__ == "__main__":
    unittest.main()
