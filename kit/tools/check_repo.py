#!/usr/bin/env python3
"""Check tracked source boundaries and local Markdown links before publication."""

from pathlib import Path
import re
import subprocess
from urllib.parse import unquote

ROOT = Path(__file__).resolve().parents[1]


def main():
    """Reject private build inputs, executable artifacts and broken local documentation links."""
    names = subprocess.check_output(["git", "ls-files", "-z"], cwd=ROOT).decode().split("\0")
    errors = []
    blocked_dirs = {"original", "analysis", "build", ".venv", ".tools", ".omx", ".claude", ".codex"}
    blocked_ext = {".exe", ".dll", ".dylib", ".o", ".a", ".zip", ".rar", ".pack", ".sf2", ".pem", ".key",
                   ".bin", ".dat", ".popt", ".so", ".wav", ".mp3", ".mpg", ".mp4", ".smk", ".bik"}
    # Third-party files the kit ships on purpose, each with its licence beside it.
    allowed = {"third_party/soundfonts/generaluser-gs/GeneralUser-GS.sf2"}
    for name in filter(None, names):
        path = ROOT / name
        if name in allowed:
            continue
        if path.is_symlink() or Path(name).parts[0] in blocked_dirs or path.suffix.lower() in blocked_ext:
            errors.append(f"Private input or compiled artifact is tracked: {name}")
        if path.name == ".env" or path.name.startswith(".env."):
            errors.append(f"Environment file is tracked: {name}")
        if path.suffix.lower() != ".md":
            continue
        # Code is not prose: a C++ lambda such as `[&](int)` is not a link.
        text = re.sub(r"```.*?```", "", path.read_text(), flags=re.S)
        text = re.sub(r"`[^`\n]*`", "", text)
        for link in re.findall(r"\]\(([^)]+)\)", text):
            target = unquote(link.split("#", 1)[0].split("?", 1)[0].strip("<>"))
            if not target or re.match(r"^[a-zA-Z][a-zA-Z0-9+.-]*:", target):
                continue
            if not (path.parent / target).exists():
                errors.append(f"Broken local link in {name}: {target}")
    for error in errors:
        print(error)
    if errors:
        raise SystemExit(1)
    print("Tracked source boundaries and local documentation links passed")


if __name__ == "__main__":
    main()
