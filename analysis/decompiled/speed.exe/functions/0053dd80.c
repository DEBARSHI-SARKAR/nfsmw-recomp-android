/* speed.exe 0053dd80 FUN_0053dd80; analysis pseudocode, not buildable source.
 * calls 00794f80 FUN_00794f80
 * calls 0079e610 FUN_0079e610
 * calls 00589300 FUN_00589300
 * calls 00588570 FUN_00588570
 * calls 00593920 FUN_00593920
 * calls 007412a0 FUN_007412a0
 * calls 00652ad0 _malloc
 * calls 005a5ea0 FUN_005a5ea0
 */

undefined4 * __thiscall FUN_0053dd80(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086fbb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00593920(param_2);
  *param_1 = &PTR_FUN_0089e134;
  param_1[0x49] = 0;
  local_4 = 0;
  if (DAT_009b0fa0 != 1) {
    uVar2 = 1;
    FUN_00794f80(1);
    FUN_0079e610(uVar2);
    FUN_007412a0();
  }
  DAT_0091cbe4 = 0xb;
  DAT_0091cbec = 2;
  DAT_0091cbf0 = 2;
  DAT_0091cbe8 = 2 - (uint)((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) != 0);
  if ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0) {
    puVar1 = _malloc(0x5c);
    local_4._0_1_ = 1;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      FUN_00589300(1);
      *puVar1 = &PTR_FUN_0089cb30;
      puVar1[7] = 0xc36b0000;
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00588570(puVar1,1);
  }
  puVar1 = _malloc(0x5c);
  local_4._0_1_ = 2;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00589300(1);
    *puVar1 = &PTR_FUN_0089caf4;
    puVar1[7] = 0xc36b0000;
  }
  local_4._0_1_ = 0;
  FUN_00588570(puVar1,1);
  puVar1 = _malloc(0x5c);
  local_4._0_1_ = 3;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00589300(1);
    *puVar1 = &PTR_FUN_0089cb6c;
    puVar1[7] = 0xc36b0000;
  }
  local_4._0_1_ = 0;
  FUN_00588570(puVar1,1);
  puVar1 = _malloc(0x5c);
  local_4._0_1_ = 4;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00589300(1);
    *puVar1 = &PTR_FUN_0089cba8;
    puVar1[7] = 0xc36b0000;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00588570(puVar1,1);
  FUN_005a5ea0(0);
  ExceptionList = local_c;
  return param_1;
}

