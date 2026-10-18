"""The stub translation defines every symbol the real table.c exports."""

import importlib.util
from pathlib import Path
import subprocess
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[1]
spec = importlib.util.spec_from_file_location("gen_stub_translation", ROOT / "tools/gen_stub_translation.py")
gen = importlib.util.module_from_spec(spec)
spec.loader.exec_module(gen)

EXPORTS = ("recomp_func_addrs", "recomp_func_count", "recomp_profile_name", "recomp_base_ptrs",
           "recomp_raw_ptrs", "recomp_hooked", "recomp_override_count", "recomp_override_hash",
           "recomp_lookup", "recomp_index_of", "recomp_call", "recomp_jump", "recomp_unknown_jump",
           "recomp_hook_ptrs")


class StubTests(unittest.TestCase):
    def test_writes_every_export_and_compiles(self):
        with tempfile.TemporaryDirectory() as tmp:
            out = Path(tmp)
            gen.write(out)
            table = (out / "table.c").read_text()
            for name in EXPORTS:
                self.assertIn(name, table)
            self.assertTrue((out / "funcs.h").is_file())
            self.assertTrue((out / "x86.h").is_file())
            subprocess.run(["clang", "-std=c11", "-fsyntax-only", "-Wall", "-Wextra",
                            "-I", str(out), "-I", str(ROOT / "runtime"), str(out / "table.c")], check=True)


if __name__ == "__main__":
    unittest.main()
