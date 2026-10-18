/* speed.exe 0059e9d0 FUN_0059e9d0; analysis pseudocode, not buildable source.
 * calls 0058bbd0 FUN_0058bbd0
 * calls 005af1c0 FUN_005af1c0
 * calls 00524850 FUN_00524850
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_0059e9d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008731f3;
  local_c = ExceptionList;
  puVar1 = param_1 + 2;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a1e80;
  *puVar1 = puVar1;
  param_1[3] = puVar1;
  param_1[4] = param_3;
  param_1[6] = 2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  puVar1 = param_1 + 0xc;
  local_4 = 0;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0xd] = param_2;
  FUN_005d7930(&LAB_00565190,puVar1);
  *puVar1 = &PTR_FUN_008a02cc;
  *param_1 = &PTR_FUN_008a2260;
  *puVar1 = &PTR_LAB_008a2248;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 1;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  uVar2 = FUN_005af1c0("GaugeCluster");
  FUN_0058bbd0(uVar2);
  uVar2 = FUN_005af1c0("3rdPersonNeedle");
  uVar2 = FUN_00524850(param_3,uVar2);
  param_1[0x10] = uVar2;
  uVar2 = FUN_005af1c0("RPM_REDLINE");
  uVar2 = FUN_00524850(param_3,uVar2);
  param_1[0x14] = uVar2;
  uVar2 = FUN_005af1c0("Shift_light");
  uVar2 = FUN_00524850(param_3,uVar2);
  param_1[0x13] = uVar2;
  uVar2 = FUN_005af1c0("TAC_Lines_7500");
  uVar2 = FUN_00524850(param_3,uVar2);
  param_1[0x11] = uVar2;
  uVar2 = FUN_005af1c0("3rdPersonGear");
  uVar2 = FUN_00524850(param_3,uVar2);
  param_1[0x12] = uVar2;
  FUN_0058bbd0(0x45e9562);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x1c] = *(undefined4 *)(*(int *)(param_1[0x10] + 0x2c) + 0x38);
  ExceptionList = local_c;
  return param_1;
}

