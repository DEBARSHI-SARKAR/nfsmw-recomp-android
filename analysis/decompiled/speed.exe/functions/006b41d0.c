/* speed.exe 006b41d0 FUN_006b41d0; analysis pseudocode, not buildable source.
 * calls 00677480 FUN_00677480
 * calls 006a5f00 FUN_006a5f00
 * calls 005d59f0 FUN_005d59f0
 * calls 006a52f0 FUN_006a52f0
 * calls 006a5280 FUN_006a5280
 * calls 005d7930 FUN_005d7930
 * calls 006a5e20 FUN_006a5e20
 */

undefined4 * __thiscall FUN_006b41d0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087d51f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00677480(param_2,0);
  local_4 = 0;
  if (*(int *)(param_2 + 4) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_2 + 4) + 0x10;
  }
  puVar1 = param_1 + 0x13;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x14] = iVar3;
  FUN_005d7930(&LAB_00404050,puVar1);
  *puVar1 = &PTR_FUN_008ab014;
  *puVar1 = &PTR_LAB_008ab86c;
  local_4._0_1_ = 1;
  *param_1 = &PTR_FUN_008ab890;
  param_1[2] = &PTR_LAB_008ab884;
  uVar2 = FUN_006a5e20(param_1[0xd],0);
  FUN_006a52f0(uVar2);
  local_4._0_1_ = 2;
  uVar2 = FUN_006a5f00(param_1[0xd],0);
  FUN_006a5280(uVar2);
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x11] = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  uVar2 = FUN_005d59f0(&LAB_004039f0);
  param_1[0x32] = uVar2;
  uVar2 = FUN_005d59f0(&LAB_004039c0);
  param_1[0x33] = uVar2;
  uVar2 = FUN_005d59f0(&LAB_00405000);
  param_1[0x34] = uVar2;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  ExceptionList = local_c;
  return param_1;
}

