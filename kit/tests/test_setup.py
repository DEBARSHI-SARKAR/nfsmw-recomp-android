"""Exercise first-time setup failures without game files, downloads or a Java process."""

import importlib.util
import hashlib
import subprocess
from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch

spec = importlib.util.spec_from_file_location("project_setup", Path(__file__).parents[1] / "tools/setup.py")
setup = importlib.util.module_from_spec(spec)
spec.loader.exec_module(setup)

EXE = "GAME.EXE"


class SetupTests(unittest.TestCase):
    def test_missing_executable_has_actionable_error(self):
        with tempfile.TemporaryDirectory() as directory:
            with self.assertRaisesRegex(ValueError, "GAME.EXE was not found"):
                setup.validate_game(Path(directory), EXE, "0" * 64)

    def test_wrong_executable_is_rejected_before_linking(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            (root / EXE).write_bytes(b"synthetic invalid input")
            with self.assertRaisesRegex(ValueError, "Unsupported GAME.EXE"):
                setup.validate_game(root, EXE, "0" * 64)
            self.assertEqual(sorted(p.name for p in root.iterdir()), [EXE])

    def test_existing_installation_is_never_replaced(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            first, second = root / "first", root / "second"
            first.mkdir(); second.mkdir()
            destination = root / "project/original/gog"
            setup.link_game(first, destination)
            setup.link_game(first, destination)  # Re-running setup for the same game is safe.
            with self.assertRaisesRegex(ValueError, "already points elsewhere"):
                setup.link_game(second, destination)
            self.assertEqual(destination.resolve(), first.resolve())

    def test_dangling_installation_link_is_preserved(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            (root / "original").mkdir()
            link = root / "original/gog"
            link.symlink_to(root / "missing", target_is_directory=True)
            with self.assertRaisesRegex(ValueError, "already points elsewhere"):
                setup.link_game(root / "replacement", link)
            self.assertTrue(link.is_symlink())
            # Windows reports the target with its extended-length prefix.
            target = str(link.readlink())
            if target.startswith("\\\\?\\"):
                target = target[4:]
            self.assertEqual(Path(target), root / "missing")

    def test_game_data_names_must_be_directories(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            data = b"synthetic supported executable"
            (root / EXE).write_bytes(data)
            for name in ("data", "levels"):
                (root / name).write_text("a file is not an installation directory")
            with self.assertRaisesRegex(ValueError, "missing data/"):
                setup.validate_game(root, EXE, hashlib.sha256(data).hexdigest(), ("data", "levels"))

    def test_dirty_annotation_checkout_is_preserved(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            metadata = root / "analysis/annotations"
            metadata.mkdir(parents=True)
            subprocess.run(["git", "init", str(metadata)], check=True, capture_output=True)
            work = metadata / "local-work.txt"
            work.write_text("keep these annotation edits")
            with patch.object(setup, "run") as run:
                with self.assertRaisesRegex(ValueError, "local changes"):
                    setup.prepare_annotations(root / "analysis", "https://example.invalid/x.git", "0" * 40)
                run.assert_not_called()
                self.assertEqual(work.read_text(), "keep these annotation edits")

    def test_wrong_ghidra_version_does_not_launch_java(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            (root / "Ghidra").mkdir()
            (root / "Ghidra/application.properties").write_text("application.version=0.0\n")
            cfg = {"game": {"app_name": "X", "sha256": "0" * 64},
                   "developer_exe_path": root / "original/GAME.EXE",
                   "listings_path": root / "analysis/decompiled/GAME.EXE"}
            with patch.object(setup, "run") as run:
                with self.assertRaisesRegex(ValueError, "Use Ghidra"):
                    setup.export_listings(root, None, root / "metadata.xml", cfg)
                run.assert_not_called()


if __name__ == "__main__":
    unittest.main()
