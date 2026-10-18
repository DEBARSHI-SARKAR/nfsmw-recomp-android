/* speed.exe 0043be50 FUN_0043be50; analysis pseudocode, not buildable source.
 * calls 0041b8e0 FUN_0041b8e0
 * calls 0043b530 FUN_0043b530
 * calls 0042b070 FUN_0042b070
 */

undefined4 * __thiscall FUN_0043be50(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008690a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00892b20;
  uVar1 = FUN_0041b8e0();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[1] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_00892b40;
  FUN_0043b530("AIActionStaticRoadBlock");
  FUN_0042b070(0);
  ExceptionList = local_c;
  return param_1;
}

