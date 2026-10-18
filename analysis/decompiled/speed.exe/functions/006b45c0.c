/* speed.exe 006b45c0 FUN_006b45c0; analysis pseudocode, not buildable source.
 * calls 006f4400 FUN_006f4400
 * calls 00677480 FUN_00677480
 * calls 006a5520 FUN_006a5520
 * calls 005d59f0 FUN_005d59f0
 * calls 006a5d40 FUN_006a5d40
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_006b45c0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087d5c4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00677480();
  local_4 = 0;
  if (*(int *)(param_2 + 4) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(param_2 + 4) + 0x10;
  }
  puVar1 = param_1 + 0x13;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x14] = iVar6;
  FUN_005d7930();
  *puVar1 = &PTR_FUN_008ab350;
  local_4._0_1_ = 1;
  if (*(int *)(param_2 + 4) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(param_2 + 4) + 0x10;
  }
  puVar2 = param_1 + 0x15;
  *puVar2 = &PTR_FUN_00890970;
  param_1[0x16] = iVar6;
  FUN_005d7930();
  *puVar2 = &PTR_FUN_008ab358;
  *puVar2 = &PTR_LAB_008ab9bc;
  local_4._0_1_ = 2;
  *param_1 = &PTR_FUN_008ab9d4;
  param_1[2] = &PTR_LAB_008ab9cc;
  *puVar1 = &PTR_LAB_008ab9c4;
  param_1[0x17] = 0;
  param_1[0x1f] = 0;
  FUN_006a5d40();
  FUN_006a5520();
  local_4._0_1_ = 3;
  uVar5 = FUN_005d59f0();
  param_1[0x18] = uVar5;
  uVar5 = FUN_005d59f0();
  param_1[0x19] = uVar5;
  uVar5 = FUN_005d59f0();
  param_1[0x1a] = uVar5;
  uVar5 = FUN_005d59f0();
  param_1[0x1b] = uVar5;
  uVar5 = FUN_005d59f0();
  param_1[0x1e] = uVar5;
  uVar5 = FUN_005d59f0();
  param_1[0x1c] = uVar5;
  uVar5 = FUN_005d59f0();
  param_1[0x1d] = uVar5;
  uVar5 = FUN_005d59f0();
  param_1[0x20] = uVar5;
  piVar3 = (int *)param_1[0xd];
  piVar4 = (int *)param_1[0x12];
  param_1[0x1f] = *(undefined4 *)(param_1[0x23] + 0x5c);
  (**(code **)(*piVar3 + 0x44))();
  (**(code **)(*piVar4 + 0x40))();
  (**(code **)(*piVar3 + 0x70))();
  local_4 = CONCAT31(local_4._1_3_,4);
  uVar5 = FUN_006f4400();
  param_1[0x17] = uVar5;
  ExceptionList = pvStack_c;
  return param_1;
}

