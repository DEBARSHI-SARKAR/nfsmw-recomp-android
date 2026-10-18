"""The build lock: one holder at a time, released when a holder dies, skipped when inherited."""

import importlib.util
import os
from pathlib import Path
import signal
import subprocess
import sys
import tempfile
import time
import unittest

MODULE = Path(__file__).parents[1] / "buildlock.py"
spec = importlib.util.spec_from_file_location("buildlock", MODULE)
buildlock = importlib.util.module_from_spec(spec)
spec.loader.exec_module(buildlock)

CONTENDER = r"""
import os, sys, time
sys.path.insert(0, sys.argv[1]); import buildlock
root = sys.argv[2]
with buildlock.BuildLock(root, "contender %d" % os.getpid(), wait=30):
    marker = os.path.join(root, "inside")
    try:
        os.mkdir(marker)
    except FileExistsError:
        with open(os.path.join(root, "violations"), "a") as f:
            f.write("%d\n" % os.getpid())
        sys.exit(1)
    time.sleep(0.01)
    os.rmdir(marker)
"""

HOLDER = r"""
import os, sys, time
sys.path.insert(0, sys.argv[1]); import buildlock
with buildlock.BuildLock(sys.argv[2], "holder", wait=30):
    open(os.path.join(sys.argv[2], "held"), "w").close()
    time.sleep(60)
"""


class BuildLockTests(unittest.TestCase):
    def setUp(self):
        self.root = tempfile.mkdtemp(prefix="buildlock-")
        self.env = {k: v for k, v in os.environ.items() if k != "BUILDLOCK_HELD"}

    def test_contenders_never_overlap(self):
        for _ in range(20):
            procs = [subprocess.Popen([sys.executable, "-c", CONTENDER, str(MODULE.parent), self.root],
                                      env=self.env) for _ in range(4)]
            for p in procs:
                self.assertEqual(p.wait(), 0)
        self.assertFalse(os.path.exists(os.path.join(self.root, "violations")))
        self.assertFalse(os.path.exists(os.path.join(self.root, "inside")))

    def test_killed_holder_releases_the_lock(self):
        holder = subprocess.Popen([sys.executable, "-c", HOLDER, str(MODULE.parent), self.root], env=self.env)
        deadline = time.time() + 10
        while not os.path.exists(os.path.join(self.root, "held")) and time.time() < deadline:
            time.sleep(0.02)
        self.assertTrue(os.path.exists(os.path.join(self.root, "held")))
        with self.assertRaises(TimeoutError):
            with buildlock.BuildLock(self.root, "probe", wait=0.5):
                pass
        holder.send_signal(signal.SIGKILL if hasattr(signal, "SIGKILL") else signal.SIGTERM)
        holder.wait()
        with buildlock.BuildLock(self.root, "after", wait=5) as lock:
            self.assertIsNotNone(lock.fd)

    def test_inherited_lock_is_not_taken_again(self):
        os.environ["BUILDLOCK_HELD"] = "1"
        try:
            with buildlock.BuildLock(self.root, "child") as lock:
                self.assertIsNone(lock.fd)
            self.assertFalse(os.path.exists(os.path.join(self.root, "build/recomp/.lock")))
        finally:
            del os.environ["BUILDLOCK_HELD"]

    def test_cli_runs_the_command_under_the_lock_and_returns_its_status(self):
        probe = "import os, sys; sys.exit(7 if os.environ.get('BUILDLOCK_HELD') == '1' else 3)"
        result = subprocess.run([sys.executable, str(MODULE), "run", self.root, "cli test",
                                 sys.executable, "-c", probe], env=self.env)
        self.assertEqual(result.returncode, 7)


if __name__ == "__main__":
    unittest.main()
