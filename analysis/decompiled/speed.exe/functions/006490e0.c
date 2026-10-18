/* speed.exe 006490e0 FUN_006490e0; analysis pseudocode, not buildable source.
 * calls 0045ed30 FUN_0045ed30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006490e0(void)

{
  if (DAT_009257e0 == 0) {
    _DAT_009259d0 = 0;
    _DAT_009259d4 = 0xbf000000;
    _DAT_009259d8 = 0x3f800000;
    _DAT_009259dc = 0xbf000000;
    _DAT_009259e0 = 0x3f800000;
    _DAT_009259e4 = 0;
    _DAT_009259e8 = 0xc0200000;
    _DAT_009259ec = 0x3fc00000;
    _DAT_009259f0 = 0;
    _DAT_009259f4 = 0x3f000000;
    _DAT_009259f8 = 0x40000000;
    _DAT_009259fc = 0xbfc00000;
    _DAT_00925a00 = 0;
    _DAT_00925a04 = 0;
    _DAT_00925a08 = 0xbf000000;
    _DAT_00925a0c = 0x3f000000;
    _DAT_00925a10 = 0xbf000000;
    _DAT_00925a14 = 0x40000000;
    _DAT_00925a18 = 0xbfc00000;
    _DAT_00925a1c = 0;
    _DAT_00925a20 = 0;
    _DAT_00925a24 = 0xc0a00000;
    _DAT_00925a28 = 0x40900000;
    _DAT_00925a2c = 0;
    _DAT_00925a30 = 0x3f000000;
    _DAT_00925a34 = 0x40800000;
    _DAT_00925a38 = 0xc0900000;
    _DAT_00925a3c = 0;
    _DAT_00925a40 = 0;
    _DAT_00925a44 = 0xbf800000;
    _DAT_00925a48 = 0x3fc00000;
    _DAT_00925a4c = 0;
    _DAT_00925a50 = 0x40000000;
    _DAT_00925a54 = 0xc0400000;
    _DAT_00925a58 = 0;
    _DAT_00925a5c = 0;
    _DAT_00925a60 = 0xc0a00000;
    _DAT_00925a64 = 0x41100000;
    _DAT_00925a68 = 0;
    _DAT_00925a6c = 0;
    _DAT_00925a70 = 0x40800000;
    _DAT_00925a74 = 0xc1100000;
    _DAT_00925a78 = 0;
    _DAT_00925a7c = 0;
    _DAT_00925a80 = 0xbf800000;
    _DAT_00925a84 = 0x40400000;
    _DAT_00925a88 = 0;
    _DAT_00925a8c = 0;
    FUN_0045ed30(&DAT_009259d0,&DAT_009259d0);
    FUN_0045ed30(&DAT_00925a10,&DAT_00925a10);
    FUN_0045ed30(&DAT_00925a50,&DAT_00925a50);
    DAT_009257e0 = 1;
  }
  return;
}

