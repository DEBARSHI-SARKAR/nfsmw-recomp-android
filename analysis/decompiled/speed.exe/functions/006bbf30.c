/* speed.exe 006bbf30 FUN_006bbf30; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 006bbc70 FUN_006bbc70
 */

undefined4 * __thiscall FUN_006bbf30(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087e1a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006bbc70(param_2,param_3);
  *param_1 = &PTR_FUN_008ada1c;
  param_1[2] = &PTR_LAB_008ada14;
  param_1[0x13] = &PTR_LAB_008ad9f8;
  param_1[0x15] = &PTR_LAB_008ad978;
  param_1[0x18] = &PTR_LAB_008ad95c;
  local_4 = 0;
  uVar1 = FUN_005d59f0(&LAB_00404010);
  param_1[0x2f] = uVar1;
  uVar1 = FUN_005d59f0(&LAB_00404020);
  param_1[0x30] = uVar1;
  ExceptionList = local_c;
  return param_1;
}

