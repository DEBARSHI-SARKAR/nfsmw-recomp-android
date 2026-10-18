/* speed.exe 006b7720 FUN_006b7720; analysis pseudocode, not buildable source.
 * calls 005d5a50 FUN_005d5a50
 * calls 006b0b80 FUN_006b0b80
 * calls 006b0b40 FUN_006b0b40
 * calls 0045a430 FUN_0045a430
 * calls 006a6d20 FUN_006a6d20
 * calls 006b0b00 FUN_006b0b00
 * calls 00785270 FUN_00785270
 * calls 006b1550 FUN_006b1550
 * calls 006b0bc0 FUN_006b0bc0
 * calls 006ee930 FUN_006ee930
 * calls 0048cd20 FUN_0048cd20
 * calls 006b1450 FUN_006b1450
 */

void __fastcall FUN_006b7720(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0087dae6;
  local_c = ExceptionList;
  puVar1 = param_1 + 0x12;
  puVar2 = param_1 + 0x14;
  puVar3 = param_1 + 0x16;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008ac448;
  param_1[2] = &PTR_LAB_008ac43c;
  *puVar1 = &PTR_LAB_008ac390;
  *puVar2 = &PTR_LAB_008ac4a0;
  *puVar3 = &PTR_LAB_008ac38c;
  param_1[0x18] = &PTR_LAB_008ac354;
  param_1[0x19] = &PTR_FUN_008ac350;
  param_1[0x1a] = &PTR_LAB_008ac340;
  local_4 = 8;
  if (param_1[0x40] != 0) {
    FUN_006a6d20();
    FUN_006a6d20();
    param_1[0x40] = 0;
  }
  DAT_009377c8 = DAT_009377c8 + -1;
  (&DAT_009376c8)[*(byte *)(*(int *)param_1[0x1e] + 0x5e)] = 0;
  if (param_1[0x3b] != 0) {
    FUN_00785270(param_1[0x3b]);
  }
  param_1[0x3b] = 0;
  FUN_006b0b40();
  FUN_006b0bc0();
  FUN_0048cd20(param_1 + 0x18);
  piVar4 = (int *)param_1[0x1d];
  iVar5 = param_1[0x1c];
  *piVar4 = iVar5;
  *(int **)(iVar5 + 4) = piVar4;
  local_4._0_1_ = 7;
  FUN_006b0b00();
  local_4._0_1_ = 6;
  FUN_006b0b80();
  local_4._0_1_ = 5;
  FUN_0045a430();
  *(undefined4 *)param_1[0x1e] = 0;
  param_1[0x1a] = &PTR_FUN_00890970;
  local_4._0_1_ = 3;
  FUN_005d5a50(param_1 + 0x1a);
  param_1[0x18] = &PTR___purecall_008ab070;
  *puVar3 = &PTR_FUN_00890970;
  local_4._0_1_ = 2;
  FUN_005d5a50(puVar3);
  local_4._0_1_ = 1;
  *puVar2 = &PTR_FUN_008ac148;
  FUN_006b1450();
  *puVar2 = &PTR_FUN_00890970;
  FUN_005d5a50(puVar2);
  local_4 = (uint)local_4._1_3_ << 8;
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

