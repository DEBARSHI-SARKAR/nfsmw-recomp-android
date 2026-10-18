/* speed.exe 00670b90 FUN_00670b90; analysis pseudocode, not buildable source.
 * calls 006f94d0 FUN_006f94d0
 * calls 005cc240 FUN_005cc240
 * calls 006ee9b0 FUN_006ee9b0
 */

undefined4 * __thiscall FUN_00670b90(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087a7f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_006f94d0(0);
  DAT_0092c664 = param_1;
  if (param_1 + 0x12 == (undefined4 *)0x0) {
    DAT_0092c664 = (undefined4 *)0x0;
  }
  local_4 = 1;
  *param_1 = &PTR_FUN_008a9714;
  param_1[2] = &PTR_LAB_008a970c;
  param_1[0xb] = &PTR_LAB_008a96f8;
  param_1[0xe] = &PTR_LAB_008a96dc;
  local_14 = FUN_005cc240("WorldUpdate");
  uVar1 = FUN_006ee9b0(&local_14,param_2,0,0);
  param_1[0x12] = uVar1;
  ExceptionList = local_c;
  return param_1;
}

