"""The core-mod installer: staging, atomic swap, failure behavior and byte-identical rebuilds."""

import hashlib
import importlib.util
import os
from pathlib import Path
import shutil
import subprocess
import sys
import tempfile
import unittest

spec = importlib.util.spec_from_file_location("build_core", Path(__file__).parents[1] / "build_core.py")
build_core = importlib.util.module_from_spec(spec)
spec.loader.exec_module(build_core)
ROOT = Path(__file__).resolve().parents[3]
CC = os.environ.get("RECOMP_CC") or shutil.which("clang") or shutil.which("cc")
PROBE_C = "int core_packaging_probe(void) { return 12; }\n"
PROBE_TOML = 'id = "core.packaging.probe"\n[plugin]\npath = "probe.dylib"\n'


def tree_digest(root):
    """Per-file digests under root, keyed by relative path; mtimes are not part of it.
    A dict rather than one hash, so a failure names the file that changed."""
    return {str(p.relative_to(root)): hashlib.sha256(p.read_bytes()).hexdigest()
            for p in sorted(Path(root).rglob("*")) if p.is_file()}


@unittest.skipUnless(CC, "no C compiler on PATH; set RECOMP_CC")
class BuildCoreTests(unittest.TestCase):
    def setUp(self):
        self.tmp = Path(tempfile.mkdtemp(prefix="pop-core-"))
        self.addCleanup(shutil.rmtree, self.tmp, True)
        self.source = self.tmp / "mods/core"
        probe = self.source / "probe"
        (probe / "assets").mkdir(parents=True)
        (probe / "probe.c").write_text(PROBE_C)
        (probe / "mod.toml").write_text(PROBE_TOML)
        (probe / "assets/payload").write_text("asset payload\n")
        self.dest = self.tmp / "build/recomp/mods/core"

    def install(self):
        return build_core.install(self.source, self.dest, CC, ROOT / "mods")

    def plugin(self):
        return self.dest / "probe" / ("probe" + build_core.plugin_extension())

    def test_compiles_plugin_copies_assets_and_leaves_source_clean(self):
        self.assertEqual(self.install(), 1)
        self.assertGreater(self.plugin().stat().st_size, 0)
        self.assertEqual((self.dest / "probe/assets/payload").read_text(), "asset payload\n")
        self.assertEqual(sorted(p.name for p in (self.source / "probe").iterdir()),
                         ["assets", "mod.toml", "probe.c"])
        self.assertFalse(list(self.dest.parent.glob("core.stage.*")))

    def test_compile_failure_preserves_previous_install(self):
        self.install()
        before = self.plugin().read_bytes()
        (self.source / "probe/probe.c").write_text("not valid C\n")
        with self.assertRaises(subprocess.CalledProcessError):
            self.install()
        self.assertEqual(self.plugin().read_bytes(), before)
        self.assertFalse(list(self.dest.parent.glob("core.stage.*")))

    def test_missing_plugin_preserves_previous_install(self):
        self.install()
        before = self.plugin().read_bytes()
        (self.source / "probe/probe.c").unlink()
        with self.assertRaises(FileNotFoundError):
            self.install()
        self.assertEqual(self.plugin().read_bytes(), before)

    def test_two_builds_are_byte_identical(self):
        self.install()
        first = tree_digest(self.dest)
        kept = self.tmp / "first"
        shutil.copytree(self.dest, kept)
        for path in self.source.rglob("*.c"):
            st = path.stat()
            os.utime(path, (st.st_atime, st.st_mtime + 10))
        self.install()
        second = tree_digest(self.dest)
        if second != first:
            # Say where the bytes differ, so a platform that cannot be
            # inspected by hand still explains itself in a log.
            for name in sorted(set(first) | set(second)):
                a = (kept / name).read_bytes() if (kept / name).is_file() else b""
                b = (self.dest / name).read_bytes() if (self.dest / name).is_file() else b""
                if a == b:
                    continue
                offsets = [i for i in range(min(len(a), len(b))) if a[i] != b[i]]
                print("%s: sizes %d vs %d, %d differing bytes, first at %s" % (
                    name, len(a), len(b), len(offsets), offsets[:12]))
                for off in offsets[:3]:
                    lo = max(0, off - 24)
                    print("  @%#x first : %r" % (lo, a[lo:off + 24]))
                    print("  @%#x second: %r" % (lo, b[lo:off + 24]))
        self.assertEqual(second, first)

    def test_cli_refuses_an_install_root_outside_build(self):
        result = subprocess.run([sys.executable, str(ROOT / "tools/recomp/build_core.py"),
                                 "--source", str(self.source), "--dest", str(self.tmp / "elsewhere"), "--cc", CC],
                                capture_output=True, text=True)
        self.assertEqual(result.returncode, 2)
        self.assertIn("unsupported install root", result.stderr)


if __name__ == "__main__":
    unittest.main()
