/* speed.exe 00830e30 FUN_00830e30; analysis pseudocode, not buildable source.
 * calls 00830d40 FUN_00830d40
 */

/* WARNING: Removing unreachable block (ram,0x00830e85) */

void FUN_00830e30(uint param_1)

{
  int iVar1;
  
  DAT_0090d234 = param_1 + 0xf22d0e56;
  DAT_0090d238 = param_1 + 0x883126e9;
  DAT_0090d23c = param_1 + 0xc624dd2f;
  DAT_0090d240 = param_1 + 0x702c49c;
  DAT_0090d244 = param_1 + 0x9e353f7d;
  DAT_0090d248 = param_1 + 0x6fdf3b64;
  iVar1 = 0x20 - (param_1 / 5 & 0x8000001f);
  if (0 < iVar1) {
    do {
      FUN_00830d40();
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

