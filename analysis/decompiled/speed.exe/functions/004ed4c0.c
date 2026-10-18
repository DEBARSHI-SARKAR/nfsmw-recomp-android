/* speed.exe 004ed4c0 FUN_004ed4c0; analysis pseudocode, not buildable source.
 * calls 004ba590 FUN_004ba590
 * calls 004b8db0 FUN_004b8db0
 * calls 00831667 FUN_00831667
 * calls 004b0b70 FUN_004b0b70
 * calls 0083198b FUN_0083198b
 * calls 007c4b80 FUN_007c4b80
 * calls 00831782 FUN_00831782
 * calls 00831682 FUN_00831682
 * calls 00831a8a FUN_00831a8a
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004ed4c0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086d26b;
  local_c = ExceptionList;
  iVar4 = *(int *)(*(int *)(param_1 + 0x14) + 0x34);
  fVar2 = SQRT(*(float *)(iVar4 + 0x58) * *(float *)(iVar4 + 0x58) +
               *(float *)(iVar4 + 0x54) * *(float *)(iVar4 + 0x54) +
               *(float *)(iVar4 + 0x50) * *(float *)(iVar4 + 0x50)) * _DAT_008967e0;
  ExceptionList = &local_c;
  iVar3 = FUN_004b0b70(param_2);
  iVar4 = *(int *)(param_1 + 0x10);
  if (param_2 == 2) {
    if (iVar4 == 0) goto LAB_004ed566;
    uVar7 = *(int *)(iVar4 + 0x18) >> 0x10 & 0x7fff;
  }
  else if (param_2 == 3) {
    if (iVar4 == 0) {
LAB_004ed566:
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)(iVar4 + 0x1c) & 0x7fff;
    }
  }
  else {
    if (iVar4 == 0) goto LAB_004ed566;
    uVar7 = *(uint *)(iVar4 + 4) & 0x7fff;
  }
  iVar3 = (int)(uVar7 * (iVar3 * 0x7fff >> 0xf)) >> 0xf;
  *(int *)(param_1 + 0x60 + param_3 * 4) = iVar3;
  FUN_004ba590(fVar2);
  iVar4 = FUN_007c4b80();
  FUN_004b8db0(param_1);
  piVar1 = *(int **)(param_1 + 0x50 + param_3 * 4);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      FUN_00831782();
    }
    FUN_00831682(piVar1);
  }
  iVar5 = FUN_00831667(0x30);
  local_4 = 0;
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x50 + param_3 * 4) = 0;
    ExceptionList = local_c;
    return;
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 == (int *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = piVar1[7] >> 0x10 & 0x7fff;
  }
  if (piVar1 != (int *)0x0) {
    if (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x24) != 0) {
      uVar6 = *piVar1 >> ((param_3 != 0) << 4) & 0xffff;
      goto LAB_004ed623;
    }
  }
  uVar6 = 0;
LAB_004ed623:
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (0xf < param_2) {
    param_2 = 0xf;
  }
  piVar1 = (int *)(iVar5 + 4);
  *piVar1 = param_2;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x7fff < iVar3) {
    iVar3 = 0x7fff;
  }
  *(int *)(iVar5 + 8) = iVar3;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0x1fff < iVar4) {
    iVar4 = 0x1fff;
  }
  *(int *)(iVar5 + 0xc) = iVar4;
  if ((int)uVar6 < 0) {
    uVar6 = 0;
  }
  else if (0xffff < uVar6) {
    uVar6 = 0xffff;
  }
  *(uint *)(iVar5 + 0x10) = uVar6;
  *(undefined4 *)(iVar5 + 0x14) = 1;
  *(undefined4 *)(iVar5 + 0x18) = 0;
  *(undefined4 *)(iVar5 + 0x1c) = 0;
  *(undefined4 *)(iVar5 + 0x20) = 25000;
  *(undefined4 *)(iVar5 + 0x24) = 0;
  *(undefined4 *)(iVar5 + 0x28) = 0x7fff;
  if ((int)uVar7 < 0) {
    uVar7 = 0;
  }
  else if (0x7fff < uVar7) {
    uVar7 = 0x7fff;
  }
  *(uint *)(iVar5 + 0x2c) = uVar7;
  iVar4 = FUN_00831a8a(&DAT_00914944,piVar1,iVar5);
  if (iVar4 < 0) {
    FUN_0083198b(&PTR_s_FX_ROADNOISE_TRANS_008f0280);
    FUN_00831a8a(&DAT_00914944,piVar1,iVar5);
  }
  *(int *)(param_1 + 0x50 + param_3 * 4) = iVar5;
  ExceptionList = local_c;
  return;
}

