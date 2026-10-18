#!/usr/bin/env python3
"""Pull the iPad app's Documents (saves) with the kit in kit/: see kit/tools/ios_logs.py --help."""
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
KIT = ROOT / "kit"
if not (KIT / "tools/ios_logs.py").is_file():
    sys.exit("The kit submodule is missing: run `git submodule update --init`")
sys.exit(subprocess.call([sys.executable, str(KIT / "tools/ios_logs.py"), "--game-dir", str(ROOT)] + sys.argv[1:],
                         cwd=ROOT))
