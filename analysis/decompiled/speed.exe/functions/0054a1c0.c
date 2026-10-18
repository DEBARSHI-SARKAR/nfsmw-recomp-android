/* speed.exe 0054a1c0 FUN_0054a1c0; analysis pseudocode, not buildable source.
 * calls 00589300 FUN_00589300
 * calls 00588570 FUN_00588570
 * calls 00525220 FUN_00525220
 * calls 00593920 FUN_00593920
 * calls 00652ad0 _malloc
 * calls 005a5ea0 FUN_005a5ea0
 */

undefined4 * __thiscall FUN_0054a1c0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870280;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00593920(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089dbe8;
  *(undefined1 *)(param_1 + 0x49) = 0;
  FUN_00525220(param_1[4],0x42adb44c,0xe33dc0e1);
  FUN_00525220(param_1[4],0x3312a84,0x8e7f3eee);
  DAT_0091ca6d = 0;
  puVar1 = _malloc(0x5c);
  local_4._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00589300(1);
    *puVar1 = &PTR_FUN_0089c520;
    puVar1[7] = 0xc3110000;
    puVar1[8] = 0xc2820000;
  }
  local_4._0_1_ = 0;
  uVar2 = FUN_00588570(puVar1,1);
  param_1[0x4a] = uVar2;
  puVar1 = _malloc(0x5c);
  local_4._0_1_ = 2;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00589300(1);
    *puVar1 = &PTR_FUN_0089c55c;
    puVar1[7] = 0xc3110000;
    puVar1[8] = 0xc2820000;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  uVar2 = FUN_00588570(puVar1,1);
  param_1[0x4b] = uVar2;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = 0;
  FUN_005a5ea0(1);
  ExceptionList = local_c;
  return param_1;
}

