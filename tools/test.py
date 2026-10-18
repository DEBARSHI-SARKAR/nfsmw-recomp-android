#!/usr/bin/env python3
"""Test Need for Speed: Most Wanted with the kit in kit/. Every option is the kit's: see kit/tools/test.py --help."""
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
KIT = ROOT / "kit"
if not (KIT / "tools/test.py").is_file():
    sys.exit("The kit submodule is missing: run `git submodule update --init`")
sys.exit(subprocess.call([sys.executable, str(KIT / "tools/test.py"), "--game-dir", str(ROOT)] + sys.argv[1:],
                         cwd=ROOT))
