/* speed.exe 006b7ad0 FUN_006b7ad0; analysis pseudocode, not buildable source.
 * calls 006b59f0 FUN_006b59f0
 * calls 005d59f0 FUN_005d59f0
 * calls 005d7930 FUN_005d7930
 * calls 00674c40 FUN_00674c40
 * calls 00674d20 FUN_00674d20
 * calls 00407d50 FUN_00407d50
 */

undefined4 * __thiscall FUN_006b7ad0(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087db42;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006b59f0(param_2,param_3);
  local_4 = 0;
  if (*(int *)(param_2 + 4) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_2 + 4) + 0x10;
  }
  puVar1 = param_1 + 0x4c;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x4d] = iVar3;
  FUN_005d7930(&LAB_004039e0,puVar1);
  *puVar1 = &PTR_FUN_008ab040;
  *puVar1 = &PTR_LAB_008ac990;
  local_4._0_1_ = 1;
  *param_1 = &PTR_FUN_008ac938;
  param_1[2] = &PTR_LAB_008ac92c;
  param_1[0x12] = &PTR_LAB_008ac880;
  param_1[0x14] = &PTR_LAB_008ac7d8;
  param_1[0x16] = &PTR_LAB_008ac7d4;
  param_1[0x18] = &PTR_LAB_008ac79c;
  param_1[0x19] = &PTR_FUN_008ac798;
  param_1[0x1a] = &PTR_LAB_008ac788;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  uVar2 = FUN_00674c40(param_1[0xd],0);
  FUN_00674d20(uVar2);
  param_1[0x55] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = DAT_008a2fb4;
  param_1[0x59] = DAT_008a2fb8;
  param_1[0x5a] = DAT_008a2fbc;
  local_4._0_1_ = 2;
  param_1[0x5b] = 0;
  *(undefined1 *)(param_1 + 0x5c) = 1;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  FUN_00407d50(0,0,0);
  local_4 = CONCAT31(local_4._1_3_,3);
  uVar2 = FUN_005d59f0(&LAB_004040e0);
  param_1[0x4e] = uVar2;
  uVar2 = FUN_005d59f0(&LAB_00404040);
  param_1[0x4f] = uVar2;
  if (*(int *)(param_3 + 0x30) == 0) {
    param_1[0x56] = 0;
  }
  else {
    param_1[0x56] = *(undefined4 *)(*(int *)(param_3 + 0x30) + 0x2c);
  }
  ExceptionList = local_c;
  return param_1;
}

