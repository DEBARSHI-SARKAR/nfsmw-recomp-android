/* speed.exe 00770b90 FUN_00770b90; analysis pseudocode, not buildable source.
 * calls 00452c50 FUN_00452c50
 * calls 00452bd0 FUN_00452bd0
 * calls 004546c0 FUN_004546c0
 * calls 00452be0 FUN_00452be0
 * calls 00452b40 FUN_00452b40
 */

void FUN_00770b90(void)

{
  undefined4 uVar1;
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00881a20;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_004546c0(local_1c,0x15e6552f);
  local_4 = 0;
  FUN_00452b40(uVar1);
  local_4._0_1_ = 1;
  FUN_00452be0(local_2c);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00452bd0();
  local_4 = 0xffffffff;
  FUN_00452bd0();
  FUN_00452c50();
  ExceptionList = local_c;
  return;
}

