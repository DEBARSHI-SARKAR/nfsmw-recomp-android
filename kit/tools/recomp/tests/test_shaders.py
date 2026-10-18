"""The committed SPIR-V header is exactly what glslc produces from the GLSL
sources; skipped where glslc is not installed."""
import shutil
import subprocess
import sys
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[3]


class ShaderDrift(unittest.TestCase):
    def test_header_matches_sources(self):
        if not shutil.which("glslc"):
            self.skipTest("no glslc on PATH")
        result = subprocess.run([sys.executable, "tools/recomp/shaders.py", "check"], cwd=ROOT,
                                capture_output=True, text=True)
        self.assertEqual(result.returncode, 0, result.stdout + result.stderr)


if __name__ == "__main__":
    unittest.main()
