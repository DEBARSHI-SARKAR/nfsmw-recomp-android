/* speed.exe 006b4340 FUN_006b4340; analysis pseudocode, not buildable source.
 * calls 00677480 FUN_00677480
 * calls 00693430 FUN_00693430
 * calls 006a5520 FUN_006a5520
 * calls 005d59f0 FUN_005d59f0
 * calls 006a5d40 FUN_006a5d40
 * calls 006a5590 FUN_006a5590
 * calls 006a5aa0 FUN_006a5aa0
 * calls 006a53d0 FUN_006a53d0
 * calls 006a58e0 FUN_006a58e0
 * calls 005d7930 FUN_005d7930
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_006b4340(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087d578;
  local_c = ExceptionList;
  ExceptionList = &local_c;
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
  puVar2 = param_1 + 0x15;
  *puVar2 = &PTR_FUN_00890970;
  param_1[0x16] = iVar4;
  FUN_005d7930(&LAB_00404020,puVar2);
  *puVar2 = &PTR_FUN_008aaf30;
  param_1[0x17] = &PTR___purecall_008a94b0;
  *puVar2 = &PTR_LAB_008ab8f8;
  local_4._0_1_ = 2;
  *param_1 = &PTR_FUN_008ab970;
  param_1[2] = &PTR_LAB_008ab968;
  *puVar1 = &PTR_LAB_008ab938;
  param_1[0x17] = &PTR_LAB_008ab8f0;
  param_1[0x18] = 0;
  param_1[0x19] = 1;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  uVar3 = FUN_006a5d40(param_1[0xd],0);
  FUN_006a5520(uVar3);
  local_4._0_1_ = 3;
  uVar3 = FUN_006a5aa0(param_1[0xd],0);
  FUN_006a5590(uVar3);
  local_4._0_1_ = 4;
  uVar3 = FUN_006a58e0(param_1[0xd],0);
  FUN_006a53d0(uVar3);
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x11] = 0;
  local_4 = CONCAT31(local_4._1_3_,5);
  uVar3 = FUN_005d59f0(&LAB_00403f90);
  param_1[0x33] = uVar3;
  uVar3 = FUN_005d59f0(&LAB_00404040);
  param_1[0x34] = uVar3;
  param_1[0x18] = 0;
  param_1[0x30] = *(float *)(param_1[0x37] + 0x5c) * _DAT_008a9398;
  param_1[0x44] = *(undefined4 *)(param_1[0x37] + 0x5c);
  param_1[0x31] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 2;
  param_1[0x1b] = 0;
  FUN_00693430();
  FUN_00693430();
  ExceptionList = local_c;
  return param_1;
}

