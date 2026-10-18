/* speed.exe 0043bd10 FUN_0043bd10; analysis pseudocode, not buildable source.
 * calls 0041b8e0 FUN_0041b8e0
 * calls 005d59f0 FUN_005d59f0
 * calls 0043b530 FUN_0043b530
 * calls 0042b070 FUN_0042b070
 */

undefined4 * __thiscall FUN_0043bd10(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00869088;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00892b20;
  uVar1 = FUN_0041b8e0();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_00892cd8;
  local_4 = 0;
  piVar2 = (int *)FUN_005d59f0(&LAB_004038e0);
  if (piVar2 != (int *)0x0) {
    local_18 = 0;
    local_10 = 0xc0400000;
    local_14 = 0;
    (**(code **)(*piVar2 + 0x50))(&local_18);
  }
  FUN_0043b530("AIActionHeadOnRam");
  FUN_0043b530("AIActionRace");
  FUN_0043b530("AIActionTooDamaged");
  FUN_0043b530("AIActionGetUnstuck");
  FUN_0043b530("AIActionAirborne");
  FUN_0042b070(0);
  ExceptionList = pvStack_c;
  return param_1;
}

