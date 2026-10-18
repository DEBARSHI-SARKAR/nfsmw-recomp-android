/* speed.exe 006b6010 FUN_006b6010; analysis pseudocode, not buildable source.
 * calls 006717f0 FUN_006717f0
 * calls 006b57b0 FUN_006b57b0
 * calls 005d06a0 FUN_005d06a0
 * calls 006b5700 FUN_006b5700
 * calls 006a64b0 FUN_006a64b0
 */

undefined4 * __thiscall FUN_006b6010(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087d7e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006717f0(param_2,0);
  local_4 = 0;
  if (*(int *)(param_2 + 4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_2 + 4) + 0x10;
  }
  FUN_006b57b0(iVar4);
  local_4._0_1_ = 1;
  if (*(int *)(param_2 + 4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_2 + 4) + 0x10;
  }
  FUN_006b5700(iVar4);
  param_1[0x14] = &PTR_LAB_008ac62c;
  puVar1 = param_1 + 0x18;
  *param_1 = &PTR_FUN_008ac5fc;
  param_1[2] = &PTR_LAB_008ac5f4;
  param_1[0x12] = &PTR_LAB_008ac548;
  FUN_006a64b0();
  puVar2 = param_1 + 0x16;
  *DAT_0093824c = puVar2;
  puVar3 = puVar2;
  param_1[0x17] = DAT_0093824c;
  DAT_0093824c = puVar3;
  *puVar2 = &DAT_00938248;
  local_4 = CONCAT31(local_4._1_3_,3);
  uVar5 = 0;
  do {
    if ((&DAT_00937548)[uVar5] == 0) goto LAB_006b60d2;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x60);
  uVar5 = 0xffffffff;
LAB_006b60d2:
  *(char *)(*(int *)*puVar1 + 0x1d) = (char)uVar5;
  iVar4 = *(int *)*puVar1;
  puVar2 = *(undefined4 **)(param_3 + 0x10);
  *(undefined4 *)(iVar4 + 0x10) = *puVar2;
  *(undefined4 *)(iVar4 + 0x14) = puVar2[1];
  *(undefined4 *)(iVar4 + 0x18) = puVar2[2];
  iVar4 = *(int *)*puVar1;
  puVar2 = *(undefined4 **)(param_3 + 0x14);
  *(undefined4 *)(iVar4 + 0x20) = *puVar2;
  *(undefined4 *)(iVar4 + 0x24) = puVar2[1];
  *(undefined4 *)(iVar4 + 0x28) = puVar2[2];
  iVar4 = *(int *)*puVar1;
  puVar2 = *(undefined4 **)(param_3 + 0x18);
  *(undefined4 *)(iVar4 + 0x30) = *puVar2;
  *(undefined4 *)(iVar4 + 0x34) = puVar2[1];
  *(undefined4 *)(iVar4 + 0x38) = puVar2[2];
  *(undefined4 *)(*(int *)*puVar1 + 0x2c) = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)(*(int *)*puVar1 + 0x3c) = *(undefined4 *)(param_3 + 0x24);
  *(undefined2 *)(*(int *)*puVar1 + 0x1e) = 0;
  uVar5 = (uint)*(byte *)(*(int *)*puVar1 + 0x1d);
  (&DAT_009378d0)[uVar5 * 6] = 0;
  (&DAT_009378d4)[uVar5 * 6] = 0;
  (&DAT_009378d8)[uVar5 * 6] = 0;
  (&DAT_009378dc)[uVar5 * 6] = 0;
  *(undefined4 *)(&DAT_009378e0 + uVar5 * 0x18) = 0;
  *(undefined4 *)(&DAT_009378e4 + uVar5 * 0x18) = 0;
  (&DAT_00937548)[*(byte *)(*(int *)*puVar1 + 0x1d)] = param_1;
  DAT_009377d0 = DAT_009377d0 + 1;
  FUN_005d06a0(*(undefined4 *)(param_3 + 0x1c),*(undefined4 *)*puVar1);
  ExceptionList = local_c;
  return param_1;
}

