/* speed.exe 00403680 FUN_00403680; analysis pseudocode, not buildable source.
 * calls 00452bd0 FUN_00452bd0
 * calls 004546c0 FUN_004546c0
 * calls 00452d40 FUN_00452d40
 */

undefined4 FUN_00403680(void)

{
  undefined4 uVar1;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00867528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004546c0(local_1c,0xebd53935);
  local_4 = 0;
  uVar1 = FUN_00452d40();
  local_4 = 0xffffffff;
  FUN_00452bd0();
  ExceptionList = local_c;
  return uVar1;
}

