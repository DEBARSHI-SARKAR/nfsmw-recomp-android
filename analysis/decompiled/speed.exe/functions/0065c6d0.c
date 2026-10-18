/* speed.exe 0065c6d0 FUN_0065c6d0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0065c6d0(undefined4 param_1)

{
  int iVar1;
  float10 extraout_ST0;
  
  _DAT_008f82fc = FUN_007c4b80(param_1);
  _DAT_00925960 = (float)(extraout_ST0 - (float10)_DAT_008f82fc * (float10)_DAT_008970f0);
  if (_DAT_008f82fc == 0) {
    _DAT_008f82fc = 1;
  }
  DAT_008f82f4 = DAT_008f82f4 + _DAT_008f82fc;
  DAT_008f82f8 = DAT_008f82f4;
  iVar1 = FUN_007c4b80();
  DAT_00925b14 = DAT_00925b14 + iVar1;
  DAT_00925968 = DAT_00925968 + 1;
  return;
}

