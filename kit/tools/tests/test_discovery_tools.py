"""tools/discover.py and tools/lazy_static.py, the run-and-regenerate loop."""

import importlib.util
from pathlib import Path
import sys

import pytest

ROOT = Path(__file__).resolve().parents[2]


def load(name):
    spec = importlib.util.spec_from_file_location(name, ROOT / "tools" / (name + ".py"))
    module = importlib.util.module_from_spec(spec)
    sys.modules[name] = module
    spec.loader.exec_module(module)
    return module


discover = load("discover")
lazy_static = load("lazy_static")


def test_reads_what_a_run_wrote(tmp_path):
    """runtime/discovery.cpp's format, comments and all."""
    path = tmp_path / "discovery.txt"
    path.write_text("# a comment\n\n0052cd40 call 0052c1f0 12\n00565cc0 jump 00567f11 1\n")
    assert discover.read(path) == {0x52CD40, 0x565CC0}


def test_missing_file_is_no_addresses(tmp_path):
    assert discover.read(tmp_path / "nothing.txt") == set()


def test_what_it_keeps_is_what_it_reads_back(tmp_path):
    """A pass writes the addresses so far; the next pass starts from them."""
    path = tmp_path / "kept.txt"
    discover.write(path, {0x565CC0, 0x52CD40}, 2)
    assert discover.read(path) == {0x52CD40, 0x565CC0}
    assert "2 runs" in path.read_text()


def test_game_macros_come_from_the_build(tmp_path):
    """The extra code is compiled with the same guest layout as the game."""
    text = 'set(RECOMP_IMAGE_BASE 0x00400000u)\nset(RECOMP_GUEST_SIZE 0x10100000u)\n'
    assert lazy_static.cmake_value(text, "RECOMP_IMAGE_BASE") == "0x00400000u"
    assert lazy_static.cmake_value(text, "RECOMP_GUEST_SIZE") == "0x10100000u"
    with pytest.raises(SystemExit):
        lazy_static.cmake_value(text, "RECOMP_HEAP_BASE")


def test_lazy_static_refuses_without_a_run(tmp_path):
    """Nothing to compile until a run has said what is missing."""
    (tmp_path / "build/recomp").mkdir(parents=True)
    message = lazy_static.main(["--game-dir", str(tmp_path)])
    assert "run the game with RECOMP_DISCOVERY" in message
