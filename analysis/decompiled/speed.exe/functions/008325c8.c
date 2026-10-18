/* speed.exe 008325c8 FUN_008325c8; analysis pseudocode, not buildable source.
 * calls 008324dd FUN_008324dd
 * calls 00834157 FUN_00834157
 * calls 00834169 FUN_00834169
 */

undefined4 FUN_008325c8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (DAT_009c29ec == 0) {
    DAT_009c29ec = 1;
    iVar1 = FUN_00834157(param_1);
    if ((iVar1 != 0) || (iVar1 = FUN_008324dd(param_1), iVar1 != 0)) {
      uVar2 = FUN_00834169(param_1);
    }
  }
  DAT_009c29ec = 0;
  return uVar2;
}

