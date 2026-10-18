/* speed.exe 00723a00 FUN_00723a00; analysis pseudocode, not buildable source.
 * calls 00465a70 FUN_00465a70
 * calls 00464080 FUN_00464080
 */

void FUN_00723a00(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_00464080(7);
  if (iVar1 < param_1) {
    FUN_00465a70(param_1,(param_3 & 0x1ffc) * 0x20000 + 0x2000);
    return;
  }
  FUN_00465a70(param_1,(param_3 & 0x1ffc) * 0x20000 + 0x2047);
  return;
}

