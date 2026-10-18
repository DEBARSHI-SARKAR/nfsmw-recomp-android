/* speed.exe 0048d540 FUN_0048d540; analysis pseudocode, not buildable source.
 * calls 00491350 FUN_00491350
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048d540(void)

{
  DAT_009117f4 = (undefined4 *)(*(code *)PTR_FUN_008ee4d0)(4,0);
  if (DAT_009117f4 != (undefined4 *)0x0) {
    *DAT_009117f4 = &PTR_LAB_00895568;
    _DAT_009117f0 = DAT_009117f4;
    return;
  }
  DAT_009117f4 = (undefined4 *)0x0;
  _DAT_009117f0 = (undefined4 *)0x0;
  return;
}

