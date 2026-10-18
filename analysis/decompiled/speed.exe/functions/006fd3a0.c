/* speed.exe 006fd3a0 FUN_006fd3a0; analysis pseudocode, not buildable source.
 * calls 006ed0f0 FUN_006ed0f0
 * calls 005d7930 FUN_005d7930
 * calls 005cc240 FUN_005cc240
 * calls 0042e340 FUN_0042e340
 * calls 006efef0 FUN_006efef0
 * calls 00643fc0 FUN_00643fc0
 * calls 006f94d0 FUN_006f94d0
 * calls 006f0150 FUN_006f0150
 */

undefined4 * __fastcall FUN_006fd3a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *local_2c;
  char *pcStack_28;
  undefined1 *local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087f812;
  local_c = ExceptionList;
  pcStack_28 = (char *)0x3;
  local_2c = (undefined1 *)0x6fd3c9;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_006f94d0();
  local_4 = 0;
  if (param_1 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = param_1 + 4;
  }
  puVar1 = param_1 + 0x12;
  local_2c = &LAB_00445660;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x13] = puVar4;
  pcStack_28 = (char *)puVar1;
  FUN_005d7930();
  if (param_1 == (undefined4 *)0xffffffb0) {
    DAT_009885c8 = (undefined4 *)0x0;
  }
  else {
    DAT_009885c8 = param_1 + 0x12;
  }
  *puVar1 = &PTR_FUN_008b0518;
  local_4._0_1_ = 1;
  if (param_1 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = param_1 + 4;
  }
  puVar1 = param_1 + 0x14;
  local_2c = &LAB_00668440;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x15] = puVar4;
  pcStack_28 = (char *)puVar1;
  FUN_005d7930();
  *puVar1 = &PTR_FUN_008a9410;
  local_4._0_1_ = 2;
  if (param_1 == (undefined4 *)0x0) {
    pcStack_28 = (char *)0x0;
  }
  else {
    pcStack_28 = (char *)(param_1 + 4);
  }
  local_2c = (undefined1 *)0x6fd456;
  FUN_0042e340();
  pcStack_28 = (char *)0x1;
  local_4._0_1_ = 3;
  *param_1 = &PTR_FUN_008b0e18;
  param_1[2] = &PTR_LAB_008b0e10;
  param_1[0xb] = &PTR_LAB_008b0dfc;
  param_1[0xe] = &PTR_LAB_008b0de0;
  param_1[0x12] = &PTR_LAB_008b0d78;
  param_1[0x14] = &PTR_LAB_008b0d70;
  param_1[0x16] = &PTR_LAB_008b0d60;
  param_1[0x19] = 0;
  local_2c = (undefined1 *)0x6fd49a;
  FUN_00643fc0();
  pcStack_28 = (char *)0x0;
  local_14 = (undefined1 *)&local_2c;
  param_1[0xbd] = 0;
  local_4._0_1_ = 4;
  local_2c = (undefined1 *)0x20d60dbf;
  uVar2 = FUN_006f0150(param_1,&LAB_006ef530,0);
  param_1[0xbe] = uVar2;
  param_1[0xbf] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0x40800000;
  pcStack_28 = (char *)0x6fd504;
  iVar3 = FUN_006efef0();
  param_1[0xec] = iVar3;
  *(undefined1 *)(iVar3 + 0x15) = 1;
  *(undefined4 *)(param_1[0xec] + 4) = param_1[0xec];
  *(undefined4 *)param_1[0xec] = param_1[0xec];
  *(undefined4 *)(param_1[0xec] + 8) = param_1[0xec];
  param_1[0xed] = 0;
  pcStack_28 = "WorldUpdate";
  local_4 = CONCAT31(local_4._1_3_,5);
  param_1[0xee] = 0;
  *(undefined1 *)(param_1 + 0xf5) = 1;
  *(undefined1 *)((int)param_1 + 0x3d5) = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  *(undefined1 *)(param_1 + 0xf9) = 0;
  *(undefined1 *)((int)param_1 + 0x3e5) = 0;
  *(undefined1 *)((int)param_1 + 0x3e6) = 0;
  *(undefined1 *)((int)param_1 + 999) = 0;
  *(undefined1 *)(param_1 + 0xfa) = 0;
  *(undefined1 *)((int)param_1 + 0x3f9) = 0;
  param_1[0xff] = 0;
  *(undefined1 *)(param_1 + 0x101) = 0;
  param_1[0x102] = 0;
  *(undefined1 *)(param_1 + 0xc5) = 0;
  *(undefined1 *)(param_1 + 0xd5) = 0;
  *(undefined1 *)((int)param_1 + 0x3e9) = 0;
  local_2c = (undefined1 *)0x6fd59b;
  local_14 = (undefined1 *)FUN_005cc240();
  pcStack_28 = (char *)0x0;
  local_2c = (undefined1 *)0x0;
  iVar3 = FUN_006ed0f0(&local_14,0x3f800000,param_1 + 2);
  if (iVar3 != 0) {
    param_1[9] = param_1[9] + 1;
  }
  param_1[0x18] = iVar3;
  param_1[0x100] = DAT_008f86e4;
  ExceptionList = local_c;
  return param_1;
}

