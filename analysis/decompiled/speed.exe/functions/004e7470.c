/* speed.exe 004e7470 FUN_004e7470; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_004e7470(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x150);
  if (iVar1 == 1) {
    if (_DAT_00890968 < *(float *)(*(int *)(DAT_0091cf90 + 0x10) + 0x58)) {
      if ((((*(uint *)(param_1 + 0x114) & 0x800) == 0) && (DAT_00993cc8 != 0)) &&
         ((*(int *)(DAT_00993cc8 + 0x1d4) == 0 || (*(int *)(DAT_00993cc8 + 0x1d4) == 1)))) {
        return 1;
      }
      return 0;
    }
  }
  else if (iVar1 == 0) {
    if (_DAT_00890968 < *(float *)(*(int *)(DAT_0091cf90 + 0x10) + 0x54)) {
      return 0;
    }
  }
  else if (iVar1 != -1) {
    return 2;
  }
  return ~(*(uint *)(param_1 + 0x114) >> 10) & 2;
}

