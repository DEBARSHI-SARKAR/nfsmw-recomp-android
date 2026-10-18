/* speed.exe 0043bc10 FUN_0043bc10; analysis pseudocode, not buildable source.
 * calls 0041b8e0 FUN_0041b8e0
 * calls 0043b530 FUN_0043b530
 * calls 0042b070 FUN_0042b070
 */

undefined4 * __thiscall FUN_0043bc10(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00869068;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00892b20;
  uVar1 = FUN_0041b8e0();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[1] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_00892cb4;
  FUN_0043b530("AIActionRam");
  FUN_0043b530("AIActionPursuitOffRoad");
  FUN_0043b530("AIActionRace");
  FUN_0043b530("AIActionTooDamaged");
  FUN_0043b530("AIActionGetUnstuck");
  FUN_0043b530("AIActionAirborne");
  FUN_0042b070(0);
  ExceptionList = local_c;
  return param_1;
}

