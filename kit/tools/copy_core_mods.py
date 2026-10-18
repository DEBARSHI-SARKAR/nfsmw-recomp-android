"""Stage app-owned core manifests and assets for statically linked plugins."""

from pathlib import Path
import shutil


def copy_core_mods(game_dir, destination):
    """Replace only the core resource tree, excluding source and native binaries."""
    destination = Path(destination)
    if destination.exists():
        shutil.rmtree(destination)
    source = Path(game_dir) / "mods/core"
    allowed = {".toml", ".json", ".lua", ".png", ".bmp", ".txt"}
    files = []
    for path in source.rglob("*") if source.exists() else []:
        if path.is_file() and not path.is_symlink() and path.suffix.lower() in allowed:
            target = destination / path.relative_to(source)
            target.parent.mkdir(parents=True, exist_ok=True)
            shutil.copy2(path, target)
            files.append(target)
    return files
