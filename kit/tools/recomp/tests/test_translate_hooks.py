"""Hook-table emission: three tables, the per-function flag, eligibility, symbols.json.

Run:  .venv/bin/python -m pytest tools/recomp/tests/test_translate_hooks.py -v
"""
import glob
import json
import os
import re
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
# tools/recomp/tests -> tools/recomp -> tools -> the repository root: three
# levels. Two lands in tools/ and every path below it is wrong.
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
GEN = os.path.join(ROOT, "build/recomp/gen")
SYMBOLS = os.path.join(ROOT, "build/recomp/symbols.json")

EXE_SHA = "815ba8a550f571c38b602cf3386f65aab942667a4a2d9c7096b3660deac2eacd"


def read(path):
    with open(path) as fh:
        return fh.read()


def test_root_and_tables():
    # The paths this file reads only exist if ROOT is the repository root.
    assert os.path.isfile(os.path.join(ROOT, "Makefile"))
    table = read(os.path.join(GEN, "table.c"))
    assert "const uint32_t recomp_func_addrs[] = {" in table
    assert "void (*const recomp_base_ptrs[])(X86 *) = {" in table
    assert "void (*const recomp_raw_ptrs[])(X86 *) = {" in table
    assert re.search(r"^RecompHookFn recomp_hook_ptrs\[\] = \{", table, re.M)
    assert re.search(r"^uint8_t recomp_hooked\[\d+\];", table, re.M)


def test_the_build_can_state_its_own_override_set():
    table = read(os.path.join(GEN, "table.c"))
    assert "uint32_t recomp_override_count(void)" in table
    assert "uint64_t recomp_override_hash(void)" in table
    # With no override header this build defines none: the two tables are
    # written from the same list, so they agree entry for entry.
    assert table.count("    fn_") == table.count("    FN(")


def test_call_sites_use_an_acquire_load():
    funcs = read(os.path.join(GEN, "funcs.h"))
    assert "__atomic_load_n(&recomp_hooked[i_], __ATOMIC_ACQUIRE)" in funcs
    assert "#define CALL_FN(a)" in funcs
    body = read(os.path.join(GEN, "chunk_000.c"))
    assert re.search(r"CALL_FN\(00[0-9a-f]{6}\);", body)
    # No direct call bypasses the flag.
    assert not re.search(r"(?<!#define )\bFN\(00[0-9a-f]{6}\)\(c\);", body)


def test_indirect_dispatch_also_tests_the_flag():
    table = read(os.path.join(GEN, "table.c"))
    call = table[table.index("void recomp_call("):table.index("void recomp_jump(")]
    assert "__atomic_load_n(&recomp_hooked[i]" in call
    assert "recomp_hook_ptrs[i](c, (uint32_t)i)" in call
    assert "recomp_base_ptrs[i](c)" in call


def test_symbols_json_pins_the_exe_and_indexes_the_tables():
    doc = json.load(open(SYMBOLS))
    assert doc["exe_sha256"] == EXE_SHA
    fns = doc["functions"]
    assert len(fns) > 10000
    assert [f["index"] for f in fns] == list(range(len(fns)))
    addrs = [int(f["addr"], 16) for f in fns]
    assert addrs == sorted(addrs)
    by_name = {f["name"]: f for f in fns}
    assert by_name["main_loop_inner"]["addr"] == "004ec6f0"
    assert by_name["main_loop_outer"]["addr"] == "004a5590"
    assert by_name["load_objs"]["addr"] == "0040c690"
    assert by_name["load_objs_1"]["addr"] == "0040c670"


def test_hook_eligibility_is_narrower_than_dispatch():
    doc = json.load(open(SYMBOLS))
    fns = doc["functions"]
    hookable = [f for f in fns if f["hookable"]]
    # The plan estimated more than 5000 hookable symbols, on the reading that
    # any dword naming an instruction boundary made an alternate entry a named
    # one. The review-round-1 ruling replaced that with Global Constraints -
    # internal block entries are not hookable, eligibility needs verified
    # pointer provenance - and the measured count is what it is. Asserted
    # exactly so that a change in eligibility has to be explained rather than
    # drift: 4503 listed function starts, 26 named alternate entries and one
    # curated DirectDraw enumeration callback (004b0e80, verified RET 8).
    assert len(hookable) == 4530, len(hookable)
    callback=next(f for f in fns if f["addr"]=="004b0e80")
    assert callback["hookable"] and callback["kind"]=="entry"
    assert "curated_entry" in callback["evidence"]
    assert len(hookable) < len(fns)
    kinds = {f["kind"] for f in fns}
    assert {"entry", "alternate", "block"} <= kinds
    for f in fns:
        if f["kind"] in ("block", "intrinsic", "continuation"):
            assert not f["hookable"], f
        if f["kind"] == "entry":
            assert f["hookable"], f
    # The two intrinsic substitutions are present for dispatch and excluded
    # from hooking: no stable cross-build meaning exists for them.
    intrinsics = {f["addr"] for f in fns if f["kind"] == "intrinsic"}
    assert {"0055dafc", "0055db78"} <= intrinsics
    # Every event address must be hookable, or the events are built on sand.
    events = doc["events"]
    by_addr = {f["addr"]: f for f in fns}
    for name, addr in events.items():
        assert by_addr[addr]["hookable"], (name, addr)


# ---------------------------------------------------------------------------
# The forbidden kinds, identified without reference to the `kind` the
# translator emitted. Each fixture is found from a different source - the
# translator's substitution map, the generated jump-table cases, the Ghidra
# listings, the PE's own relocation table - and only then looked up in
# symbols.json. A misclassification that relabels an entry consistently in
# both `kind` and `hookable` is exactly what these catch.


def _symbols():
    doc = json.load(open(SYMBOLS))
    return doc, {f["addr"]: f for f in doc["functions"]}


def _hookable_addrs(doc):
    """What a host has to resolve a hook against. An address outside this set
    cannot be hooked: the API has nothing to return but POP_E_NOSYMBOL."""
    return {f["addr"] for f in doc["functions"] if f["hookable"]}


def _listed_starts():
    """The function starts Ghidra listed, from the export itself. A listed
    function start is a symbol however else it is reached - a jump table can
    dispatch to a real function - so it is not an internal block."""
    rows = read(os.path.join(
        ROOT, "analysis/decompiled/D3DPopTB.exe/functions.tsv")).splitlines()[1:]
    return {r.split("\t")[0] for r in rows if r.strip()}


def _jump_table_targets():
    """Internal block entries, read from the generated dispatch itself: a
    `case` in an emitted switch is a jump-table target by construction."""
    out = set()
    for path in sorted(glob.glob(os.path.join(GEN, "chunk_*.c"))):
        out |= set(re.findall(r"case 0x[0-9a-f]+u?: CALL_FN\(([0-9a-f]{8})\);",
                              read(path)))
    return out


def _listing_branch_targets():
    """Every address a listing branches to literally, from the Ghidra export.
    An address reached this way and named by nothing else is a listing gap
    continued, not a symbol."""
    pat = re.compile(r"\b(?:JMP|CALL|J[A-Z]{1,3}) 0x([0-9a-f]{8})\b")
    out = set()
    for path in glob.glob(os.path.join(
            ROOT, "analysis/decompiled/D3DPopTB.exe/functions/*.asm")):
        out |= set(pat.findall(read(path)))
    return out


def test_intrinsic_substitutions_are_rejected():
    sys.path.insert(0, os.path.join(ROOT, "tools/recomp"))
    import translate as T          # the substitution map, not the artifact

    doc, by_addr = _symbols()
    hookable = _hookable_addrs(doc)
    assert T.INTRINSIC_BODY, "the translator substitutes nothing; fixture is empty"
    for a in T.INTRINSIC_BODY:
        f = by_addr["%08x" % a]
        assert f["kind"] == "intrinsic", f
        assert not f["hookable"], f
        assert f["addr"] not in hookable, f


def test_internal_blocks_are_rejected_even_when_a_pointer_names_them():
    doc, by_addr = _symbols()
    hookable = _hookable_addrs(doc)
    # A jump table can dispatch to a listed function; those are symbols in
    # their own right. What is left is the internal blocks.
    targets = _jump_table_targets() - _listed_starts()
    assert len(targets) > 100, len(targets)
    for t in sorted(targets):
        f = by_addr.get(t)
        assert f is not None, t          # dispatch must still reach it
        assert not f["hookable"], f
        assert f["kind"] == "block", f
        assert t not in hookable, t
    # The conflicting case the ruling names: an internal block that a real
    # relocated pointer also names. The table wins; it stays unhookable.
    conflicted = [t for t in targets if "reloc" in by_addr[t]["evidence"]]
    assert conflicted, "no jump-table target carries pointer evidence"
    assert not any(by_addr[t]["hookable"] for t in conflicted)


def test_listing_gap_continuations_are_rejected():
    sys.path.insert(0, os.path.join(ROOT, "tools/recomp"))
    import translate as T

    doc, by_addr = _symbols()
    hookable = _hookable_addrs(doc)
    branched = _listing_branch_targets()
    skip = _listed_starts() | {"%08x" % a for a in T.INTRINSIC_BODY}
    fixtures = [f for f in doc["functions"]
                if f["addr"] in branched and f["addr"] not in skip
                and not f["evidence"]]
    assert len(fixtures) > 20, len(fixtures)
    for f in fixtures:
        # Reached by a branch and named by nothing: a gap in the listing that
        # the translator had to continue, not a symbol a mod can mean.
        assert not f["hookable"], f
        assert f["kind"] in ("continuation", "block"), f
        assert f["addr"] not in hookable, f


def test_a_coincidental_dword_does_not_make_an_entry_hookable():
    """The scan reads every byte offset, so a dword that happens to equal an
    instruction address passes it. The relocation table is what separates a
    pointer from a coincidence, and only that grants eligibility."""
    sys.path.insert(0, os.path.join(ROOT, "tools/recomp"))
    import translate as T

    doc, by_addr = _symbols()
    image = T.Image(os.path.join(ROOT, "original/gog/D3DPopTB.exe"))
    relocated = image.relocated_pointers()

    def dword_hits(va):
        needle, n, off = struct.pack("<I", va), 0, 0
        while True:
            i = image.data.find(needle, off)
            if i < 0:
                return n
            n, off = n + 1, i + 1

    checked = 0
    for f in doc["functions"]:
        if f["kind"] != "continuation" or checked >= 12:
            continue
        va = int(f["addr"], 16)
        if va in relocated or not dword_hits(va):
            continue
        # Somewhere in the image a dword reads as this address, and no
        # relocation says it is a pointer.
        assert not f["hookable"], f
        assert not f["evidence"], f
        checked += 1
    assert checked >= 5, checked


def test_eligibility_does_not_depend_on_discovery_order():
    """Evidence is recorded where an address is named, not by whichever pass
    happened to add it first, so the decision is the same either way."""
    sys.path.insert(0, os.path.join(ROOT, "tools/recomp"))
    import translate as T

    alt_owner = {0x1000: 0x900}
    # Branch discovery got there first and recorded provenance "branch"; the
    # pointer scan recorded the evidence afterwards. And the other way round.
    for prov in ("branch", "data", "immediate", "initterm"):
        for ev in ({0x1000: {"reloc"}}, {0x1000: {"reloc", "immediate"}}):
            assert T.hook_kind(0x1000, {}, alt_owner, {0x1000: prov}, ev,
                               {}) == ("alternate", True)
    # A jump table naming it excludes it whatever else named it, and whichever
    # order those arrived in.
    assert T.hook_kind(0x1000, {}, alt_owner, {0x1000: "table"},
                       {0x1000: {"reloc", "curated"}}, {}) == ("block", False)
    # No evidence at all: a continuation, whatever provenance discovery left.
    for prov in ("branch", "data", "immediate"):
        assert T.hook_kind(0x1000, {}, alt_owner, {0x1000: prov}, {},
                           {}) == ("continuation", False)
    # A curated declaration is evidence in its own right.
    assert T.hook_kind(0x1000, {}, alt_owner, {}, {0x1000: {"curated"}},
                       {}) == ("alternate", True)
    # The exclusions come first: an intrinsic is never hookable, however it is
    # named, and a listed function start always is.
    assert T.hook_kind(0x1000, {}, alt_owner, {}, {0x1000: {"reloc"}},
                       {0x1000: "x"}) == ("intrinsic", False)
    assert T.hook_kind(0x900, {0x900: "f"}, {}, {}, {}, {}) == ("entry", True)
    # A separately curated whole-function entry is stronger evidence than a
    # recovered table label; this does not change ordinary alternate rules.
    assert T.hook_kind(0x1000, {}, {}, {0x1000: "table"},
                       {0x1000: {"curated_entry"}}, {}) == ("entry", True)
    assert T.hook_kind(0x1000, {}, {}, {}, {0x1000: {"curated_entry"}},
                       {0x1000: "x"}) == ("intrinsic", False)

    # On the real index: an address that carries evidence is never left as a
    # continuation. One that was would be this bug - named, but the naming
    # arrived after the pass that added it and was dropped.
    doc, _ = _symbols()
    stranded = [f for f in doc["functions"]
                if f["kind"] == "continuation" and f["evidence"]]
    assert not stranded, stranded[:5]


def test_symbols_json_carries_the_curated_globals():
    doc = json.load(open(SYMBOLS))
    g = {e["name"]: e for e in doc["globals"]}
    assert g["simulation_turn"]["addr"] == "0089d188"
    assert g["command_frame"]["addr"] == "0089d184"
    assert g["pause_flags"]["addr"] == "0089c661"
    assert g["objs0_loaded"]["addr"] == "0089ce39"
    assert g["entity_base"]["addr"] == "008e0428"
    assert g["entity_base"]["stride"] == 179
    assert g["entity_base"]["count"] == 2000
    assert g["tribe_base"]["addr"] == "0089d1c8"
    assert g["tribe_base"]["stride"] == 0xc65
    assert g["tribe_base"]["count"] == 4
    assert doc["events"] == {
        "on_turn": "004ec6f0",
        "on_frame": "004a5590",
        "on_level_load": "0040c690",
        "on_level_end": "0042c6d0",
    }


def test_every_profiler_name_matches_canonical_symbol_at_same_index():
    table = read(os.path.join(GEN, "table.c"))
    body = table.split("static const char *const profile_names[] = {", 1)[1].split("};", 1)[0]
    names = [json.loads(line.strip().rstrip(",")) for line in body.splitlines() if line.strip()]
    functions = json.loads(read(SYMBOLS))["functions"]
    assert names
    assert {"entry", "alternate", "block"} <= {f["kind"] for f in functions}
    assert names == [f["name"] for f in functions]
    assert set(names) <= {f["name"] for f in functions}
