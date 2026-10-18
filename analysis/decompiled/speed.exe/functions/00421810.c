/* speed.exe 00421810 FUN_00421810; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 00418d90 FUN_00418d90
 */

undefined4 * __thiscall FUN_00421810(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00867f18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00418d90(param_2,param_3);
  *param_1 = &PTR_FUN_0089141c;
  param_1[2] = &PTR_LAB_00891414;
  local_4 = 0;
  uVar1 = FUN_005d59f0(&LAB_00403f90);
  param_1[0x12] = uVar1;
  uVar1 = FUN_005d59f0(&LAB_004038e0);
  param_1[0x13] = uVar1;
  ExceptionList = local_c;
  return param_1;
}

