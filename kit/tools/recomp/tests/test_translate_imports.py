"""The translator reads the image's import table, and a throw is a dead end.

Every other translator test builds its image in memory and never parses a PE,
so none of them could see Image.__init__ stop reading imports - which is how
the NFS Most Wanted landing lost the block that filled Image.iat_names while
keeping the code that reads it. With the table empty, a function that ends in
RaiseException looked like one that returns, so MSVC's _CxxThrowException did
too, and Majesty's switch table - which the compiler put right after a throw -
was decoded as instructions. These tests build a real PE file.
"""
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.join(os.path.dirname(HERE)))
import translate as T  # noqa: E402

BASE = 0x00400000
TEXT, IDATA = 0x1000, 0x2000
IAT_SLOT = BASE + IDATA + 0x40  # where RaiseException's address is stored
THROW = BASE + TEXT + 0x10      # a _CxxThrowException-shaped function
CALLER = BASE + TEXT             # a function that throws, then has a table


def minimal_pe(path):
    """A PE32 with .text and .idata, importing KERNEL32.dll!RaiseException."""
    # .text: CALLER calls THROW and is followed by what a compiler puts there,
    # a switch table; THROW calls RaiseException through the IAT and RETs.
    text = bytearray(0x200)
    call = b"\xe8" + struct.pack("<i", THROW - (CALLER + 5))
    text[0:5] = call
    text[5:13] = struct.pack("<II", CALLER + 0x40, CALLER + 0x44)  # a "table"
    throw = b"\x55\x8b\xec\xff\x15" + struct.pack("<I", IAT_SLOT) + b"\x5d\xc2\x08\x00"
    text[0x10:0x10 + len(throw)] = throw

    # .idata: one descriptor, one thunk, one hint/name, one DLL name.
    idata = bytearray(0x200)
    lookup, name_rva, dll_rva = IDATA + 0x30, IDATA + 0x60, IDATA + 0x80
    idata[0:20] = struct.pack("<IIIII", lookup, 0, 0, dll_rva, IAT_SLOT - BASE)
    idata[0x30:0x38] = struct.pack("<II", name_rva, 0)          # lookup table
    idata[0x40:0x48] = struct.pack("<II", name_rva, 0)          # the IAT
    idata[0x60:0x60 + 17] = b"\x00\x00RaiseException\x00"
    idata[0x80:0x80 + 13] = b"KERNEL32.dll\x00"

    dos = bytearray(0x80)
    dos[0:2] = b"MZ"
    dos[0x3c:0x40] = struct.pack("<I", 0x80)
    coff = struct.pack("<HHIIIHH", 0x14c, 2, 0, 0, 0, 0xe0, 0x010f)
    dirs = bytearray(16 * 8)
    dirs[8:16] = struct.pack("<II", IDATA, 20)                   # import directory
    opt = struct.pack("<HBBIIIIIIIIIHHHHHHIIIIHHIIIIII", 0x10b, 0, 0, 0x200, 0x200, 0,
                      TEXT, TEXT, IDATA, BASE, 0x1000, 0x200, 4, 0, 0, 0, 4, 0, 0,
                      0x3000, 0x200, 0, 2, 0, 0x100000, 0x1000, 0x100000, 0x1000, 0, 16)
    sections = b""
    for name, rva, raw, flags in ((b".text", TEXT, 0x200, 0x60000020),
                                  (b".idata", IDATA, 0x400, 0xC0000040)):
        sections += struct.pack("<8sIIIIIIHHI", name, 0x200, rva, 0x200, raw, 0, 0, 0, 0, flags)
    header = dos + b"PE\x00\x00" + coff + opt + bytes(dirs) + sections
    header += bytes(0x200 - len(header))
    with open(path, "wb") as fh:
        fh.write(header + bytes(text) + bytes(idata))


def test_the_import_table_is_read(tmp_path):
    path = tmp_path / "thrower.exe"
    minimal_pe(path)
    image = T.Image(str(path))
    assert image.iat_names.get(IAT_SLOT) == "RaiseException"


def test_a_function_that_ends_in_raiseexception_does_not_return(tmp_path):
    """The caller's listing ends on the CALL, and the callee raises: nothing
    after the call is reachable, so what follows it is not decoded as code."""
    path = tmp_path / "thrower.exe"
    minimal_pe(path)
    image = T.Image(str(path))
    caller = T.parse_listing_text("%08x  CALL 0x%08x\n" % (CALLER, THROW))
    throw = T.parse_listing_text(
        "%08x  PUSH EBP\n%08x  MOV EBP,ESP\n%08x  CALL dword ptr [0x%08x]\n"
        "%08x  POP EBP\n%08x  RET 0x8\n"
        % (THROW, THROW + 1, THROW + 3, IAT_SLOT, THROW + 9, THROW + 10))
    parsed = [T.Function(CALLER, "caller", 5, caller), T.Function(THROW, "throw", 13, throw)]
    assert THROW in T.noreturn_callees_from(parsed, image.iat_names, image)
