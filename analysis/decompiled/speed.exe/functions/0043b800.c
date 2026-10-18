/* speed.exe 0043b800 FUN_0043b800; analysis pseudocode, not buildable source.
 * calls 0041b8e0 FUN_0041b8e0
 * calls 0043b530 FUN_0043b530
 * calls 0042b070 FUN_0042b070
 */

undefined4 * __thiscall FUN_0043b800(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00868fc8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00892b20;
  uVar2 = FUN_0041b8e0();
  param_1[3] = uVar2;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[1] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_00892b30;
  param_1[6] = 0;
  FUN_0043b530("AIActionPursuitOffRoad");
  FUN_0043b530("AIActionRace");
  cVar1 = (**(code **)(*(int *)param_1[5] + 0x24))();
  if (cVar1 == '\0') {
    FUN_0043b530("AIActionTraffic");
  }
  FUN_0043b530("AIActionTooDamaged");
  FUN_0043b530("AIActionGetUnstuck");
  FUN_0043b530("AIActionAirborne");
  FUN_0042b070(0);
  ExceptionList = pvStack_c;
  return param_1;
}

