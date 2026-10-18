/* speed.exe 006fac70 FUN_006fac70; analysis pseudocode, not buildable source.
 * calls 006f9610 FUN_006f9610
 * calls 006ed0f0 FUN_006ed0f0
 * calls 005d7930 FUN_005d7930
 * calls 005cc240 FUN_005cc240
 * calls 00674580 FUN_00674580
 * calls 00674510 FUN_00674510
 */

undefined4 * __fastcall FUN_006fac70(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_14;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087f4be;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_10 = param_1;
  FUN_006f9610();
  local_4 = 0;
  if (param_1 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = param_1 + 4;
  }
  puVar6 = param_1 + 0x13;
  *puVar6 = &PTR_FUN_00890970;
  param_1[0x14] = puVar5;
  FUN_005d7930(&LAB_00402840,puVar6);
  *puVar6 = &PTR_FUN_008b03cc;
  local_4._0_1_ = 1;
  if (param_1 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = param_1 + 4;
  }
  puVar1 = param_1 + 0x15;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x16] = puVar5;
  FUN_005d7930(&LAB_006200d0,puVar1);
  *puVar1 = &PTR_FUN_008b0798;
  *puVar6 = &PTR_LAB_008b0cd4;
  puVar5 = (undefined4 *)0x0;
  local_4 = CONCAT31(local_4._1_3_,2);
  *param_1 = &PTR_FUN_008b0d30;
  param_1[2] = &PTR_LAB_008b0d28;
  param_1[0xb] = &PTR_LAB_008b0d00;
  param_1[0xe] = &PTR_LAB_008b0ce4;
  *puVar1 = &PTR_LAB_008b0c80;
  param_1[0x18] = 0;
  local_14 = FUN_005cc240("WorldUpdate");
  iVar3 = FUN_006ed0f0(&local_14,0x3f800000,param_1 + 2,0,0);
  if (iVar3 != 0) {
    param_1[9] = param_1[9] + 1;
  }
  param_1[0x19] = iVar3;
  if (param_1 == (undefined4 *)0xffffffcc) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = param_1 + 0xb;
  }
  if (DAT_0092d7c0 <= DAT_0092d7c4) {
    uVar4 = (**(code **)(DAT_0092d7b8 + 0xc))(DAT_0092d7c4 + 1);
    FUN_00674580(uVar4);
  }
  piVar2 = (int *)(DAT_0092d7bc + DAT_0092d7c4 * 4);
  if (piVar2 != (int *)0x0) {
    *piVar2 = (int)puVar6;
  }
  DAT_0092d7c4 = DAT_0092d7c4 + 1;
  if (param_1 != (undefined4 *)0xffffffa4) {
    puVar5 = param_1 + 0x15;
  }
  if (DAT_0092d8b0 <= DAT_0092d8b4) {
    uVar4 = (**(code **)(DAT_0092d8a8 + 0xc))(DAT_0092d8b4 + 1);
    FUN_00674510(uVar4);
  }
  piVar2 = (int *)(DAT_0092d8ac + DAT_0092d8b4 * 4);
  if (piVar2 != (int *)0x0) {
    *piVar2 = (int)puVar5;
  }
  DAT_0092d8b4 = DAT_0092d8b4 + 1;
  if (param_1 == (undefined4 *)0xffffffa4) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = param_1 + 0x15;
  }
  if (DAT_0092d850 <= DAT_0092d854) {
    uVar4 = (**(code **)(DAT_0092d848 + 0xc))(DAT_0092d854 + 1);
    FUN_00674510(uVar4);
  }
  puVar6 = (undefined4 *)(DAT_0092d84c + DAT_0092d854 * 4);
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = puVar5;
    DAT_0092d854 = DAT_0092d854 + 1;
    ExceptionList = pvStack_c;
    return param_1;
  }
  DAT_0092d854 = DAT_0092d854 + 1;
  ExceptionList = pvStack_c;
  return param_1;
}

