/* speed.exe 006b3b30 FUN_006b3b30; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 006b37b0 FUN_006b37b0
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_006b3b30(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087d3f4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006b37b0(param_2);
  local_4 = 0;
  if (*(int *)(param_2 + 4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_2 + 4) + 0x10;
  }
  puVar1 = param_1 + 0x6b;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x6c] = iVar4;
  FUN_005d7930(&LAB_0068a9e0,puVar1);
  *puVar1 = &PTR_FUN_008aaf70;
  local_4._0_1_ = 1;
  if (*(int *)(param_2 + 4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_2 + 4) + 0x10;
  }
  puVar2 = param_1 + 0x6d;
  *puVar2 = &PTR_FUN_00890970;
  param_1[0x6e] = iVar4;
  FUN_005d7930(&LAB_0068a830,puVar2);
  *puVar2 = &PTR_FUN_008aaf0c;
  *param_1 = &PTR_FUN_008ac000;
  param_1[2] = &PTR_LAB_008abff8;
  param_1[0x13] = &PTR_LAB_008abfc8;
  param_1[0x15] = &PTR_LAB_008abf88;
  param_1[0x17] = &PTR_LAB_008abf84;
  param_1[0x18] = &PTR_LAB_008abf70;
  param_1[0x1a] = &PTR_LAB_008abf68;
  param_1[0x1c] = &PTR_LAB_008abf60;
  param_1[0x1e] = &PTR_LAB_008abf48;
  *puVar1 = &PTR_LAB_008abf3c;
  *puVar2 = &PTR_LAB_008abf34;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  uVar3 = FUN_005d59f0(&LAB_00404040);
  param_1[0x74] = uVar3;
  ExceptionList = local_c;
  return param_1;
}

