/* speed.exe 006b6570 FUN_006b6570; analysis pseudocode, not buildable source.
 * calls 005d5a50 FUN_005d5a50
 * calls 006b14d0 FUN_006b14d0
 * calls 006b1550 FUN_006b1550
 * calls 006ee930 FUN_006ee930
 */

void __fastcall FUN_006b6570(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0087d82f;
  local_c = ExceptionList;
  puVar1 = param_1 + 0x12;
  puVar2 = param_1 + 0x14;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008ac5fc;
  param_1[2] = &PTR_LAB_008ac5f4;
  *puVar1 = &PTR_LAB_008ac548;
  *puVar2 = &PTR_LAB_008ac62c;
  iVar3 = param_1[0x16];
  piVar4 = (int *)param_1[0x17];
  *piVar4 = iVar3;
  *(int **)(iVar3 + 4) = piVar4;
  uVar5 = (uint)*(byte *)(*(int *)param_1[0x18] + 0x1d);
  (&DAT_009378d0)[uVar5 * 6] = 0;
  (&DAT_009378d4)[uVar5 * 6] = 0;
  (&DAT_009378d8)[uVar5 * 6] = 0;
  (&DAT_009378dc)[uVar5 * 6] = 0;
  *(undefined4 *)(&DAT_009378e0 + uVar5 * 0x18) = 0;
  *(undefined4 *)(&DAT_009378e4 + uVar5 * 0x18) = 0;
  (&DAT_00937548)[*(byte *)(*(int *)param_1[0x18] + 0x1d)] = 0;
  DAT_009377d0 = DAT_009377d0 + -1;
  *(undefined4 *)param_1[0x18] = 0;
  local_4 = 1;
  *puVar2 = &PTR_FUN_008ac1f0;
  FUN_006b14d0();
  *puVar2 = &PTR_FUN_00890970;
  FUN_005d5a50(puVar2);
  local_4 = local_4 & 0xffffff00;
  *puVar1 = &PTR_FUN_008ac210;
  FUN_006b1550();
  *puVar1 = &PTR_FUN_00890970;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_00890f28;
  param_1[2] = &PTR_LAB_00890f20;
  FUN_006ee930();
  ExceptionList = local_c;
  return;
}

