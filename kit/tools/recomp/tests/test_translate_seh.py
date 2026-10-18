"""Delphi checkpoints and omitted landing blocks, without a game image."""
import json
import struct
import sys

import pytest

from test_translate_driver import synthetic_image
from test_translate_driver import translate_entry_fixture
from test_translate_insns import Case, T, translate_case

BASE = 0x0D02A000


def emitted_body(text, address):
    shared = "static void body_%08x(X86 *c, uint32_t entry_) {" % address
    start = shared if shared in text else "void fn_%08x(X86 *c) {" % address
    return text.split(start, 1)[1].split("\n}", 1)[0]


@pytest.mark.parametrize("restore", [False, True])
def test_popped_return_helper_adopts_only_an_escaping_frame(tmp_path, monkeypatch, restore):
    helper, stub, routine = BASE + 0x100, BASE + 0x180, BASE + 0x200
    # POP EDX keeps the return register live across three pushes; JMP EDX
    # returns with the registration still installed at the caller's ESP.
    raw = bytes.fromhex("31c95a5568") + struct.pack("<I", stub)
    raw += bytes.fromhex("64ff31648921")
    if restore:
        raw += bytes.fromhex("648f0183c408")
    raw += bytes.fromhex("ffe2")
    caller = b"\xe8" + struct.pack("<i", helper - BASE - 5)
    if not restore:
        caller += bytes.fromhex("31c0648f0083c408")
    caller += b"\xc3"
    handler = b"\xe9" + struct.pack("<i", routine - stub - 5) + b"\xc3"
    blocks = {BASE: caller, helper: raw, stub: handler, routine: b"\xc3"}
    img = synthetic_image(blocks, base=BASE, size=0x1000)
    img.code_pointers = lambda *a, **kw: (set(), set())
    text = translate_entry_fixture(tmp_path, monkeypatch, img,
                                   {a: b for a, b in blocks.items() if a != stub})
    body = emitted_body(text, BASE)
    helper_body = emitted_body(text, helper)
    assert "recomp_seh_frame_enter(c)" in helper_body
    assert ("recomp_seh_frame_orphan(c, seh_mark_)" in helper_body) == (not restore)
    assert ("recomp_seh_frame_adopt(c)" in body) == (not restore)
    if not restore:
        assert body.index("CALL_FN(%08x)" % helper) < body.index("recomp_seh_frame_adopt")
        assert "if (b_) { if (setjmp(*b_)) { recomp_seh_land(c); return; } }" in body
        assert "&& setjmp" not in body
    assert "c->eip = c->r[2]; recomp_return(c); return;" in helper_body


@pytest.mark.parametrize("zeroed", [True, False])
def test_pop_fs_register_restore_in_a_separate_helper(tmp_path, monkeypatch, zeroed):
    # _AfterConstruction removes its own return, unlinks the caller's frame,
    # removes handler/saved EBP, then jumps back without another stack pop.
    restore = BASE + 0x100
    raw = bytes.fromhex("31d259648f0283c408ffe1")
    if not zeroed:
        raw = raw.replace(bytes.fromhex("31d2"), bytes.fromhex("09d2"))
    img = synthetic_image({restore: raw}, base=BASE, size=0x1000)
    img.code_pointers = lambda *a, **kw: (set(), set())
    text = translate_entry_fixture(tmp_path, monkeypatch, img, {restore: raw})
    body = text.split("void fn_%08x(X86 *c) {" % restore, 1)[1].split("\n}", 1)[0]
    assert ("recomp_seh_frame_leave(c)" in body) == zeroed
    assert "c->eip = c->r[1]; recomp_return(c); return;" in body
    assert "recomp_jump(c, t_)" not in body


def seh_case(typed=False, absolute=False, default=False):
    stub, routine, handler = BASE + 0x40, BASE + 0xa0, BASE + 0x80
    fs = "0x0" if absolute else "EAX"
    lines, code = [], bytearray()

    def add(text, raw):
        lines.append((len(code), text))
        code.extend(bytes.fromhex(raw))

    add("XOR EAX,EAX", "31c0")
    add("PUSH EBP", "55")
    add("PUSH 0x%x" % stub, (b"\x68" + struct.pack("<I", stub)).hex())
    add("PUSH dword ptr FS:[%s]" % fs, "64ff3500000000" if absolute else "64ff30")
    add("MOV dword ptr FS:[%s],ESP" % fs, "64892500000000" if absolute else "648920")
    add("POP EDX", "5a")
    add("POP ECX", "59")
    add("POP ECX", "59")
    add("MOV dword ptr FS:[%s],EDX" % fs, "64891500000000" if absolute else "648910")
    end = BASE + len(code)
    add("RET", "c3")
    code.extend(b"\xcc" * (0xa6 - len(code)))
    code[0x40:0x45] = b"\xe9" + struct.pack("<i", routine - stub - 5)
    landing = handler if typed else stub + 5
    if typed:
        code[0x45:0x51] = struct.pack("<III", 1, routine, handler)
        if default:
            code[0x45:0x59] = struct.pack("<IIIII", 2, routine, handler, 0, BASE + 0x90)
            code[0x90:0x9a] = b"\xb8\x2b\x00\x00\x00\xe9" + struct.pack("<i", end - BASE - 0x9a)
    off = landing - BASE
    # Rejoin an instruction in the listed body through an alternate entry.
    code[off:off + 10] = b"\xb8\x2a\x00\x00\x00\xe9" + struct.pack("<i", end - landing - 10)
    code[0xa0:0xa6] = b"\xb8\x01\x00\x00\x00\xc3"
    return Case("seh_frame", BASE, lines, code.hex()), landing, routine


@pytest.mark.parametrize("absolute", [False, True])
def test_checkpoints_live_in_the_establishing_function(absolute):
    case, _, _ = seh_case(absolute=absolute)
    text = translate_case(case)
    assert "recomp_seh_frame_enter(c)" in text
    assert "if (setjmp(*b_)) { recomp_seh_land(c); return; }" in text
    assert "recomp_seh_frame_leave(c)" in text


def test_a_handler_that_is_not_a_delphi_stub_still_translates(tmp_path, monkeypatch):
    """MSVC writes the same frame prologue and pushes an ordinary function.

    Only Delphi's handler is a five-byte JMP with a landing block behind it.
    MSVC pushes __except_handler3, an ordinary function reached through a
    scope table, and classifying that as a stub refused the whole image -
    which is why no MSVC game could regenerate, Populous and Pharaoh included.
    Discovery asks through seh_landings_opt, finds no landings behind a
    handler of that shape, and carries on; the frame is still established.
    """
    handler, routine = BASE + 0x100, BASE + 0x200
    # PUSH EBP; PUSH handler; PUSH FS:[0]; MOV FS:[0],ESP; ... ; RET
    caller = bytes.fromhex("55") + b"\x68" + struct.pack("<I", handler)
    caller += bytes.fromhex("64ff3500000000" "64892500000000")
    caller += bytes.fromhex("5a59598915000000005dc3".replace(" ", ""))
    # The handler: an ordinary function, not a JMP stub.
    blocks = {BASE: caller, handler: bytes.fromhex("558bec33c05dc3"), routine: b"\xc3"}
    img = synthetic_image(blocks, base=BASE, size=0x1000)
    img.code_pointers = lambda *a, **kw: (set(), set())
    text = translate_entry_fixture(tmp_path, monkeypatch, img, {BASE: caller})
    assert "fn_%08x" % BASE in text        # the image translated at all
    assert "recomp_seh_frame_enter(c)" in emitted_body(text, BASE)


def test_other_teb_writes_do_not_create_checkpoints():
    case, _, _ = seh_case()
    case.lines = [(off, text.replace("FS:[EAX]", "FS:[0x4]")) for off, text in case.lines]
    assert "recomp_seh_" not in translate_case(case)


@pytest.mark.parametrize("reg,zeroed,checkpoint", [("EDX", True, True), ("EDX", False, False),
                                                 ("ESP", True, False)])
def test_frame_establishment_through_edx_needs_a_zero_base(reg, zeroed, checkpoint):
    stub = BASE + 0x40
    lines, code = [], bytearray()

    def add(text, raw):
        lines.append((len(code), text))
        code.extend(raw)

    r = 2 if reg == "EDX" else 4
    sib = b"\x24" if reg == "ESP" else b""
    add(("XOR" if zeroed else "OR") + " %s,%s" % (reg, reg),
        bytes([0x31 if zeroed else 0x09, 0xc0 + 9 * r]))
    add("PUSH EBP", b"\x55")
    add("PUSH 0x%x" % stub, b"\x68" + struct.pack("<I", stub))
    add("PUSH dword ptr FS:[%s]" % reg, bytes([0x64, 0xff, 0x30 + r]) + sib)
    add("MOV dword ptr FS:[%s],ESP" % reg, bytes([0x64, 0x89, 0x20 + r]) + sib)
    add("XOR EAX,EAX", b"\x31\xc0")
    add("POP EDX", b"\x5a")
    add("POP ECX", b"\x59")
    add("POP ECX", b"\x59")
    add("MOV dword ptr FS:[EAX],EDX", b"\x64\x89\x10")
    add("RET", b"\xc3")
    # PUSH changes ESP even after it was zeroed; it cannot stay FS:[0].
    text = translate_case(Case("edx_frame", BASE, lines, code.hex()))
    assert ("recomp_seh_frame_enter(c)" in text) == checkpoint
    assert ("recomp_seh_frame_leave(c)" in text) == checkpoint


@pytest.mark.parametrize("typed,default,speculative", [
    (False, False, False), (True, False, False), (True, True, False),
    (False, False, True)])
def test_omitted_landing_is_a_structural_entry(tmp_path, monkeypatch, typed, default, speculative):
    case, landing, routine = seh_case(typed=typed, default=default)
    img = synthetic_image({BASE: case.code}, base=BASE - 0x100, size=0x1000)
    listings = tmp_path / "functions"
    listings.mkdir()
    (listings / ("%08x.asm" % BASE)).write_text(case.listing())
    (listings / ("%08x.asm" % routine)).write_text(
        "%08x  MOV EAX,0x1\n%08x  RET\n" % (routine, routine + 5))
    table = tmp_path / "functions.tsv"
    table.write_text("address\tname\tsize\n%08x\tseh_frame\t%d\n%08x\tdispatcher\t6\n" %
                     (BASE, case.lines[-1][0] + 1, routine))
    if speculative:
        # An earlier pointer guess owns some real instructions, but its own
        # beginning jumps outside the image and is pruned. The SEH block's
        # jump back into that body must retain a real, independently recovered
        # entry rather than vanish with the speculative owner.
        prefix = b"\x85\xc0\x75\x1c\xe9" + struct.pack("<i", -0x10000)
        img = synthetic_image({BASE: case.code, BASE - 0x20: prefix},
                              base=BASE - 0x100, size=0x1000)
        img.code_pointers = lambda *a, **kw: ({BASE - 0x20}, set())
        (listings / ("%08x.asm" % BASE)).unlink()
        table.write_text("address\tname\tsize\n%08x\tdispatcher\t6\n" % routine)
    binary = tmp_path / "image"
    binary.write_bytes(img.data)
    curated = tmp_path / "globals.toml"
    curated.write_text("")
    out = tmp_path / "gen"
    report = out / "translate-report.json"
    monkeypatch.setattr(T, "configure", lambda cfg: None)
    monkeypatch.setattr(T.game_config, "load", lambda path: {})
    for name, value in (("LISTINGS", listings), ("FUNCS_TSV", table),
                        ("BINARY", binary), ("CURATED", curated)):
        monkeypatch.setattr(T, name, str(value))
    monkeypatch.setattr(T, "EXTRA_ENTRY_POINTS", frozenset())
    monkeypatch.setattr(T, "Image", lambda path: img)
    monkeypatch.setattr(sys, "argv", ["translate.py", "--game", str(tmp_path),
                                     "--out", str(out), "--report", str(report), "--quiet"])
    assert T.main() == 0
    text = "\n".join(p.read_text() for p in out.glob("*.c"))
    assert "void fn_%08x(" % landing in text
    if typed:
        assert "void fn_%08x(" % (BASE + 0x45) not in text
    if default:
        assert "void fn_%08x(" % (BASE + 0x90) in text
    if speculative:
        assert "void fn_%08x(" % (BASE + case.lines[-1][0]) in text
        assert "void fn_%08x(" % (BASE - 0x20) not in text
    symbols = json.loads((out / "symbols.json").read_text())
    assert any(f["addr"] == "%08x" % landing and f["provenance"] == "seh"
               for f in symbols["functions"])
    assert next(f for f in symbols["functions"] if f["addr"] == "%08x" % routine)["provenance"] != "seh"
    assert json.loads(report.read_text())["provenance"]["seh"] >= 1
    table_text = (out / "table.c").read_text()
    jump = table_text.split("void recomp_jump(", 1)[1]
    assert "recomp_seh_intercept(c, target)" in jump
    assert jump.index("recomp_seh_intercept") < jump.index("recomp_lookup")


def test_checkpoint_trace_identifies_the_establishing_and_restoring_instructions():
    case, _, _ = seh_case()
    text = translate_case(case)
    stores = [BASE + off for off, asm in case.lines if asm.startswith("MOV dword ptr FS:")]
    for site in stores:
        assert "c->eip = 0x%xu;" % site in text


@pytest.mark.parametrize("base", [BASE, BASE + 0x1000])
@pytest.mark.parametrize("variant", ["constructor", "separated-reservation", "nonzero-fs-base"])
def test_constructor_helper_checkpoint_belongs_to_its_caller(tmp_path, monkeypatch, base, variant):
    helper, stub, routine = base + 0x100, base + 0x180, base + 0x200
    # A Delphi constructor reserves 16 bytes, then a returning helper fills
    # them through ECX. A checkpoint in the helper would outlive its C frame.
    caller = bytes.fromhex("83c4f0e8") + struct.pack("<i", helper - base - 8)
    caller += bytes.fromhex("648f050000000083c40cc3")
    helper_code = bytes.fromhex("52515384d27c03ff50f431d28d4c2410648b1a8919896908c74104")
    helper_code += struct.pack("<I", stub)
    helper_code += bytes.fromhex("89410c64890a5b595ac3")
    if variant == "separated-reservation":
        caller = bytes.fromhex("83c4f090e8") + struct.pack("<i", helper - base - 9) + caller[8:]
    if variant == "nonzero-fs-base":
        helper_code = helper_code.replace(bytes.fromhex("31d2"), bytes.fromhex("09d2"))
    handler = b"\xe9" + struct.pack("<i", routine - stub - 5) + bytes.fromhex("b82a000000c3")
    img = synthetic_image({base: caller, helper: helper_code, stub: handler,
                           routine: bytes.fromhex("b801000000c3")}, base=base - 0x100, size=0x1000)
    listings = tmp_path / "functions"
    listings.mkdir()
    for addr, code in ((base, caller), (helper, helper_code), (routine, bytes.fromhex("b801000000c3"))):
        insns = [img.instruction_at(ins.address) for ins in img.md.disasm(code, addr)]
        (listings / ("%08x.asm" % addr)).write_text("\n".join(ins.raw for ins in insns) + "\n")
    table = tmp_path / "functions.tsv"
    table.write_text("address\tname\tsize\n%08x\tconstructor\t%d\n%08x\thelper\t%d\n"
                     "%08x\tdispatcher\t6\n" % (base, len(caller), helper, len(helper_code), routine))
    binary = tmp_path / "image"
    binary.write_bytes(img.data)
    curated = tmp_path / "globals.toml"
    curated.write_text("")
    out = tmp_path / "gen"
    monkeypatch.setattr(T, "configure", lambda cfg: None)
    monkeypatch.setattr(T.game_config, "load", lambda path: {})
    for name, value in (("LISTINGS", listings), ("FUNCS_TSV", table),
                        ("BINARY", binary), ("CURATED", curated)):
        monkeypatch.setattr(T, name, str(value))
    monkeypatch.setattr(T, "EXTRA_ENTRY_POINTS", frozenset())
    monkeypatch.setattr(T, "Image", lambda path: img)
    monkeypatch.setattr(sys, "argv", ["translate.py", "--game", str(tmp_path),
                                     "--out", str(out), "--quiet"])
    assert T.main() == 0
    text = "\n".join(p.read_text() for p in out.glob("*.c"))
    body = emitted_body(text, base)
    helper_body = emitted_body(text, helper)
    if variant == "nonzero-fs-base":
        assert "recomp_seh_frame_adopt" not in body
        assert "recomp_seh_frame_enter" not in helper_body
        return
    assert "recomp_seh_frame_enter(c)" in helper_body
    assert "recomp_seh_frame_orphan(c, seh_mark_)" in helper_body
    assert body.count("recomp_seh_frame_adopt(c)") == 1
    assert body.index("CALL_FN(%08x)" % helper) < body.index("setjmp(*b_)")
    assert "recomp_seh_frame_leave(c)" in body  # POP FS:[0] retires the 16-byte record
    symbols = json.loads((out / "symbols.json").read_text())["functions"]
    assert any(f["addr"] == "%08x" % (stub + 5) and f["provenance"] == "seh" for f in symbols)


def test_a_handler_that_is_no_delphi_stub_yields_no_landings():
    """Only Delphi's handler is a five-byte JMP; classification is optional.

    Every compiler writes the same prologue - PUSH handler, PUSH FS:[0],
    MOV FS:[0],ESP - so a frame site can name an ordinary routine. These are
    the first bytes of Populous's Watcom handler at 0055ba5c (MOV ECX,[ESP+4];
    TEST dword ptr [ECX+4],6; MOV EAX,1), which raised and refused the whole
    image before seh_landings_opt existed. There is no landing block behind
    one, and none is invented: the frame itself is still modelled, because
    seh_frame_sites keeps the site.
    """
    handler, delphi, outside = BASE + 0x100, BASE + 0x200, BASE + 0x300
    blocks = {handler: bytes.fromhex("8b4c2404f7410406000000b801000000"),
              # A real stub: JMP rel32 into code, with no table behind it.
              delphi: b"\xe9" + struct.pack("<i", handler - delphi - 5) + b"\x90\xc3",
              # A stub shape whose target is not code at all stays a defect.
              outside: b"\xe9" + struct.pack("<i", 0x40000000) + b"\xc3"}
    img = synthetic_image(blocks, base=BASE, size=0x1000)
    assert img.seh_landings_opt(handler) is None
    assert img.seh_landings(delphi) == ([delphi + 5], None)
    with pytest.raises(T.TranslateError):
        img.seh_landings(handler)
    with pytest.raises(T.TranslateError):
        img.seh_landings(outside)
