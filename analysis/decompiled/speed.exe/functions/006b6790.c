/* speed.exe 006b6790 FUN_006b6790; analysis pseudocode, not buildable source.
 * calls 00643fc0 FUN_00643fc0
 * calls 006b55a0 FUN_006b55a0
 * calls 005d59f0 FUN_005d59f0
 * calls 0069cad0 FUN_0069cad0
 */

undefined4 * __thiscall FUN_006b6790(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087d881;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0069cad0(param_2);
  local_4 = 0;
  if (*(int *)(param_2 + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 4) + 0x10;
  }
  FUN_006b55a0(iVar1);
  local_4._0_1_ = 1;
  *param_1 = &PTR_FUN_008ac6bc;
  param_1[2] = &PTR_LAB_008ac6b4;
  param_1[0x12] = &PTR_LAB_008ac670;
  param_1[0x1d] = &PTR_LAB_008ac658;
  FUN_00643fc0(0);
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  *(undefined1 *)(param_1 + 0xcb) = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  uVar2 = FUN_005d59f0(&LAB_004040e0);
  param_1[0x1f] = uVar2;
  uVar2 = FUN_005d59f0(&LAB_00403770);
  param_1[0x20] = uVar2;
  ExceptionList = local_c;
  return param_1;
}

