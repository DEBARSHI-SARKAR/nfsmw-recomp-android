/* speed.exe 0059e7f0 FUN_0059e7f0; analysis pseudocode, not buildable source.
 * calls 0058bbd0 FUN_0058bbd0
 * calls 005af1c0 FUN_005af1c0
 * calls 00524850 FUN_00524850
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_0059e7f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008731b3;
  local_c = ExceptionList;
  puVar1 = param_1 + 2;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a1e80;
  *puVar1 = puVar1;
  param_1[3] = puVar1;
  param_1[4] = param_3;
  param_1[6] = 0x8000000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  puVar1 = param_1 + 0xc;
  local_4 = 0;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0xd] = param_2;
  FUN_005d7930(&LAB_00565120,puVar1);
  *puVar1 = &PTR_FUN_008a02c4;
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_008a21d4;
  *puVar1 = &PTR_LAB_008a21cc;
  param_1[0x12] = 0;
  uVar2 = FUN_005af1c0("SpeedometerGroup");
  FUN_0058bbd0(uVar2);
  uVar2 = FUN_005af1c0("SPEED_DIGIT_1");
  uVar2 = FUN_00524850(param_3,uVar2);
  param_1[0xe] = uVar2;
  uVar2 = FUN_005af1c0("SPEED_DIGIT_2");
  uVar2 = FUN_00524850(param_3,uVar2);
  param_1[0xf] = uVar2;
  uVar2 = FUN_005af1c0("SPEED_DIGIT_3");
  uVar2 = FUN_00524850(param_3,uVar2);
  param_1[0x10] = uVar2;
  uVar2 = FUN_005af1c0("3rdPersonSpeedUnits");
  uVar2 = FUN_00524850(param_3,uVar2);
  param_1[0x11] = uVar2;
  ExceptionList = local_c;
  return param_1;
}

