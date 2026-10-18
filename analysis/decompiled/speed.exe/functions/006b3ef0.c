/* speed.exe 006b3ef0 FUN_006b3ef0; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 0066bfa0 FUN_0066bfa0
 * calls 006a5520 FUN_006a5520
 * calls 006a5d40 FUN_006a5d40
 * calls 006a5aa0 FUN_006a5aa0
 * calls 006a5b80 FUN_006a5b80
 * calls 006a53d0 FUN_006a53d0
 * calls 0066c2d0 FUN_0066c2d0
 * calls 006a58e0 FUN_006a58e0
 * calls 006a5670 FUN_006a5670
 * calls 00673400 FUN_00673400
 * calls 0068a6d0 FUN_0068a6d0
 * calls 00677480 FUN_00677480
 * calls 006a5c60 FUN_006a5c60
 * calls 005d59f0 FUN_005d59f0
 * calls 006a5590 FUN_006a5590
 * calls 005d7930 FUN_005d7930
 * calls 006a5600 FUN_006a5600
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_006b3ef0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  undefined1 auStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087d4d7;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00677480(param_2,0);
  local_4 = 0;
  if (*(int *)(param_2 + 4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_2 + 4) + 0x10;
  }
  puVar1 = param_1 + 0x13;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x14] = iVar4;
  FUN_005d7930(&LAB_00404010,puVar1);
  *puVar1 = &PTR_FUN_008aaedc;
  local_4._0_1_ = 1;
  if (*(int *)(param_2 + 4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_2 + 4) + 0x10;
  }
  puVar1 = param_1 + 0x15;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x16] = iVar4;
  FUN_005d7930(&LAB_00404020,puVar1);
  *puVar1 = &PTR_FUN_008aaf30;
  param_1[0x17] = &PTR___purecall_008a94b0;
  local_4._0_1_ = 2;
  if (*(int *)(param_2 + 4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_2 + 4) + 0x10;
  }
  puVar2 = param_1 + 0x18;
  *puVar2 = &PTR_FUN_00890970;
  param_1[0x19] = iVar4;
  FUN_005d7930(&LAB_00620460,puVar2);
  *puVar2 = &PTR_FUN_008ab218;
  *puVar2 = &PTR_LAB_008ab7ac;
  param_1[0x1a] = 1;
  param_1[0x1b] = 1;
  local_4._0_1_ = 3;
  *param_1 = &PTR_FUN_008ab838;
  param_1[2] = &PTR_LAB_008ab830;
  param_1[0x13] = &PTR_LAB_008ab800;
  *puVar1 = &PTR_LAB_008ab7c0;
  param_1[0x17] = &PTR_LAB_008ab7bc;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  uVar3 = FUN_006a5d40(param_1[0xd],0);
  FUN_006a5520(uVar3);
  local_4._0_1_ = 4;
  uVar3 = FUN_006a5aa0(param_1[0xd],0);
  FUN_006a5590(uVar3);
  local_4._0_1_ = 5;
  uVar3 = FUN_006a58e0(param_1[0xd],0);
  FUN_006a53d0(uVar3);
  local_4._0_1_ = 6;
  uVar3 = FUN_006a5c60(param_1[0xd],0);
  FUN_006a5600(uVar3);
  local_4._0_1_ = 7;
  uVar3 = FUN_006a5b80(param_1[0xd],0);
  FUN_006a5670(uVar3);
  local_4._0_1_ = 8;
  param_1[0x4f] = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  param_1[0x54] = 0;
  param_1[0x11] = 0;
  uVar3 = FUN_005d59f0(&LAB_00403f90);
  param_1[0x34] = uVar3;
  uVar3 = FUN_005d59f0(&LAB_00404040);
  param_1[0x35] = uVar3;
  param_1[0x1b] = 2;
  param_1[0x1a] = 2;
  param_1[0x32] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  FUN_00673400(param_1 + 0x3b,param_1 + 0x36,param_1 + 0x45,param_1 + 0x1e,param_1 + 0x28,10);
  uVar3 = (**(code **)(*(int *)param_1[0xd] + 0x44))();
  FUN_0068a6d0(uVar3);
  local_4._0_1_ = 9;
  fVar5 = (float10)FUN_0066c2d0(auStack_20,param_1 + 0x56,0);
  param_1[0x55] = (float)(fVar5 * (float10)_DAT_008a938c);
  fVar5 = (float10)FUN_0066bfa0(auStack_20,0);
  param_1[0x57] = (float)fVar5;
  FUN_00673400(param_1 + 0x3b,param_1 + 0x36,param_1 + 0x45,param_1 + 0x1e,param_1 + 0x28,10);
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_0045a430();
  ExceptionList = pvStack_c;
  return param_1;
}

