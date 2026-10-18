/* speed.exe 004eedc0 FUN_004eedc0; analysis pseudocode, not buildable source.
 * calls 004b8db0 FUN_004b8db0
 * calls 00831667 FUN_00831667
 * calls 0083198b FUN_0083198b
 * calls 008311aa FUN_008311aa
 * calls 00831782 FUN_00831782
 * calls 00831682 FUN_00831682
 * calls 00831a8a FUN_00831a8a
 */

undefined4 __thiscall FUN_004eedc0(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086d2ab;
  local_c = ExceptionList;
  if ((*(char *)(param_1 + 8) != '\0') && (DAT_008f86f8 == 1)) {
    if (*(int **)(param_1 + 0x10) == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = **(int **)(param_1 + 0x10) >> 0x10 & 0x7fff;
    }
    piVar3 = *(int **)(param_1 + 0x28);
    ExceptionList = &local_c;
    if (piVar3 != (int *)0x0) {
      ExceptionList = &local_c;
      if (*piVar3 != 0) {
        ExceptionList = &local_c;
        FUN_00831782();
      }
      FUN_00831682(piVar3);
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    FUN_004b8db0(param_1);
    piVar3 = (int *)FUN_00831667(0x28);
    local_4 = 0;
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      if ((*(uint **)(param_1 + 0x10) == (uint *)0x0) ||
         (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x24) == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = **(uint **)(param_1 + 0x10) & 0xffff;
      }
      if (param_2 < 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = param_2;
        if (2 < param_2) {
          iVar5 = 2;
        }
      }
      piVar1 = piVar3 + 1;
      *piVar1 = iVar5;
      if ((int)uVar2 < 0) {
        uVar2 = 0;
      }
      else if (0x7fff < uVar2) {
        uVar2 = 0x7fff;
      }
      piVar3[2] = uVar2;
      if ((int)uVar4 < 0) {
        uVar4 = 0;
      }
      else if (0xffff < uVar4) {
        uVar4 = 0xffff;
      }
      piVar3[3] = uVar4;
      piVar3[4] = 0;
      piVar3[5] = 0;
      piVar3[6] = 25000;
      piVar3[7] = 0;
      piVar3[8] = 0x7fff;
      piVar3[9] = 0;
      iVar5 = FUN_00831a8a(&DAT_0091480c,piVar1,piVar3);
      if (iVar5 < 0) {
        FUN_0083198b(&PTR_s_FX_NITROUS_008f02d8);
        FUN_00831a8a(&DAT_0091480c,piVar1,piVar3);
      }
    }
    *(int **)(param_1 + 0x28) = piVar3;
    local_4 = 0xffffffff;
    param_2 = 0;
    if (*piVar3 != 0) {
      FUN_008311aa(&param_2);
    }
    if (DAT_009885c8 != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xc) + 4) = 0;
      ExceptionList = local_c;
      return 0;
    }
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 4) = 0x7fff;
  }
  ExceptionList = local_c;
  return 0;
}

