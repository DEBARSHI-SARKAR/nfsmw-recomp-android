/* speed.exe 006fef90 FUN_006fef90; analysis pseudocode, not buildable source.
 * calls 004b1d60 FUN_004b1d60
 * calls 0083196b FUN_0083196b
 * calls 00831a2a FUN_00831a2a
 * calls 008324dd FUN_008324dd
 * calls 008325c8 FUN_008325c8
 */

int FUN_006fef90(undefined4 *param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (((DAT_008f8700 != 0) && (DAT_00992234 != 3)) && (param_1 != (undefined4 *)0x0)) {
    uVar2 = FUN_004b1d60(0);
    iVar3 = FUN_00831a2a(param_1[1],uVar2);
    if (iVar3 < 0) {
      FUN_0083196b(*param_1);
      uVar2 = FUN_004b1d60(0);
      iVar3 = FUN_00831a2a(param_1[1],uVar2);
    }
    DAT_0099225c = param_1;
    uVar2 = (**(code **)(*DAT_00992230 + 0x38))();
    iVar4 = FUN_008324dd(uVar2);
    if (iVar4 == 0) {
      iVar3 = -5;
    }
    else if (param_2 == '\0') {
      uVar2 = (**(code **)(*DAT_00992230 + 0x38))();
      cVar1 = FUN_008325c8(uVar2);
      *(char *)(param_1 + 0xe) = cVar1;
      if (cVar1 == '\0') {
        return -2;
      }
    }
    return iVar3;
  }
  return -2;
}

