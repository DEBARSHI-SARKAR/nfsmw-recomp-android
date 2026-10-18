/* speed.exe 005465c0 FUN_005465c0; analysis pseudocode, not buildable source.
 * calls 0052ca00 FUN_0052ca00
 * calls 00593920 FUN_00593920
 */

undefined4 * __thiscall FUN_005465c0(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086fff8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00593920(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089e5c0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  FUN_0052ca00();
  ExceptionList = local_c;
  return param_1;
}

