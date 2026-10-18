"""What follows a call that never returns, and what still reaches it.

    .venv/bin/python -m pytest -q tools/recomp/tests/test_translate_noreturn.py
"""
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, os.path.join(ROOT, "tools/recomp"))
sys.path.insert(0, HERE)
import translate as T  # noqa: E402
from test_translate_insns import NoImage, Opts  # noqa: E402

HALT, FN = 0x00401000, 0x00401100


def translate(listing, entries=()):
    tr = T.Translator(NoImage(), {FN, HALT}, Opts())
    tr.noreturn_callees = {HALT}
    fn = T.Function(FN, "f", 0x40, T.parse_listing_text(listing))
    fn.measure(NoImage())
    tr.prepare(fn)
    return "\n".join(tr.translate(fn, entries))


# A literal behind the halt, as Ghidra lists it: the 16-bit addressing is
# what the emitter refuses.
TAIL = ("00401110  CALL 0x00401000\n"
        "00401115  ADD byte ptr [EAX],AL\n"
        "00401117  ADD byte ptr [BX + DI + 0x0],CH\n")


def test_the_bytes_behind_a_halt_are_not_emitted():
    text = translate("00401100  XOR EAX,EAX\n" + TAIL)
    assert "CALL_FN(00401000);" in text
    assert "00401117" not in text


def test_a_branch_into_the_tail_keeps_it():
    """Unreachable from the halt is not unreachable: a branch still gets there."""
    listing = ("00401100  TEST EAX,EAX\n"
               "00401102  JZ 0x00401115\n") + TAIL
    try:
        text = translate(listing)
    except T.TranslateError as e:
        assert "BX" in str(e)       # the tail was emitted, and refused
    else:
        raise AssertionError("the branch target was dropped:\n" + text)


def test_a_computed_jump_keeps_every_instruction():
    """JMP EAX not preceded by POP EAX can land anywhere in the body."""
    listing = ("00401100  MOV EAX,dword ptr [ESP + 0x4]\n"
               "00401104  JMP EAX\n") + TAIL
    try:
        translate(listing)
    except T.TranslateError as e:
        assert "BX" in str(e)
    else:
        raise AssertionError("an instruction a computed jump may reach was dropped")


def test_a_popped_jump_goes_only_to_pushed_continuations():
    """POP EAX; JMP EAX lands where a continuation was pushed, not everywhere."""
    listing = ("00401100  PUSH 0x40110e\n"
               "00401105  POP EAX\n"
               "00401106  JMP EAX\n"
               "0040110e  JMP 0x00401110\n") + TAIL
    text = translate(listing)
    assert "L_0040110e:" in text
    assert "00401117" not in text
