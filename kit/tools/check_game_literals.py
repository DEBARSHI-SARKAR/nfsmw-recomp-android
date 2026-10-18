#!/usr/bin/env python3
"""Fail when a Populous literal appears in kit code on a non-comment line.

The kit's runtime, shims, hosts and platform layer must not know which game
they are building; games/<id>/game.toml does. Tests are exempt, because the
game-backed suites assert Populous behaviour on purpose."""

from pathlib import Path
import re
import sys

ROOT = Path(__file__).resolve().parents[1]
DIRECTORIES = ("runtime", "dx", "host", "platform")
SUFFIXES = {".c", ".cpp", ".h", ".hpp", ".mm", ".in"}
TOKENS = ("D3DPopTB", "C:\\\\Populous", "PopRecomp", '"Populous', '"populous"', "original/gog",
          "0x4a45a3", "0x4a47c1", "0x4a47a4", "0x98e7cc", "0x98e7e0",
          "0x005d5718", "0x005d571c", "0x00591b6c", "0x591b6c", "0xd0595c", "0xd0599c", "0x00d0595c", "0x00d0599c",
          "0x0089d188", "0x0089d184", "0x8e0428", "0x74a350")
# The parity fixture pins Populous guest frames and addresses on purpose. It
# moves to the game's repository in M2; until then it is the one exemption.
EXEMPT = {"runtime/fixture.cpp", "host/fixture_view.h"}


def code_lines(text):
    """Yield (line number, code) with block and line comments removed."""
    text = re.sub(r"/\*.*?\*/", lambda m: "\n" * m.group(0).count("\n"), text, flags=re.S)
    for number, line in enumerate(text.splitlines(), 1):
        yield number, line.split("//", 1)[0]


def findings():
    for directory in DIRECTORIES:
        for path in sorted((ROOT / directory).rglob("*")):
            relative = path.relative_to(ROOT)
            # EXEMPT is written with forward slashes, whatever the platform.
            if path.suffix not in SUFFIXES or "tests" in relative.parts or relative.as_posix() in EXEMPT:
                continue
            for number, code in code_lines(path.read_text(errors="replace")):
                for token in TOKENS:
                    if token in code:
                        yield "%s:%d: %s" % (relative.as_posix(), number, token)


def main():
    found = list(findings())
    for line in found:
        print(line)
    return 1 if found else 0


if __name__ == "__main__":
    sys.exit(main())
