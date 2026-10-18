/* speed.exe 00535d20 FUN_00535d20; analysis pseudocode, not buildable source.
 * calls 0052c450 FUN_0052c450
 * calls 00793170 FUN_00793170
 * calls 00794f80 FUN_00794f80
 * calls 0056c6e0 FUN_0056c6e0
 * calls 0079bac0 FUN_0079bac0
 * calls 00572360 FUN_00572360
 * calls 00790970 FUN_00790970
 */

void __fastcall FUN_00535d20(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0086f9e1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089dcb0;
  local_4 = 2;
  FUN_00794f80();
  FUN_00793170(&LAB_00522210,1);
  uVar2 = 0;
  uVar1 = 0;
  FUN_0079bac0(0,0);
  FUN_00790970(uVar1,uVar2);
  if (param_1[0x67] != 0) {
    FUN_0056c6e0(param_1[0x67]);
    param_1[0x67] = 0;
  }
  local_4._0_1_ = 1;
  FUN_0052c450();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0052c450();
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

