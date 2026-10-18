#!/usr/bin/env python3
"""Pull the iOS app's Documents (saves, the seeded game directory's stamp) from the device.

    tools/ios_logs.py --game-dir <dir> --device <identifier> [--out <dir>/build/ios-pull]
"""

import argparse
from pathlib import Path
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools"))
import game_config  # noqa: E402
import importlib.util  # noqa: E402

_spec = importlib.util.spec_from_file_location("build_py", ROOT / "tools/build.py")
build_py = importlib.util.module_from_spec(_spec)
_spec.loader.exec_module(build_py)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--device", required=True)
    parser.add_argument("--game-dir", type=Path, required=True, help="The directory holding game.toml")
    parser.add_argument("--out", type=Path, default=None, help="Default: <build root>/ios-pull")
    args = parser.parse_args()
    bundle_id = game_config.load(args.game_dir)["game"]["bundle_id"]
    if args.out is None:
        args.out = build_py.build_root_for(args.game_dir) / "ios-pull"
    args.out.mkdir(parents=True, exist_ok=True)
    subprocess.run(["xcrun", "devicectl", "device", "copy", "from", "--device", args.device,
                    "--domain-type", "appDataContainer", "--domain-identifier", bundle_id,
                    "--source", "Documents", "--destination", str(args.out)], check=True)
    print("pulled Documents to", args.out)


if __name__ == "__main__":
    main()
