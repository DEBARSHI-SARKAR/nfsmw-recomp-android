/* speed.exe 004b4a20 FUN_004b4a20; analysis pseudocode, not buildable source.
 * calls 00653bb0 FUN_00653bb0
 * calls 004d61d0 FUN_004d61d0
 * calls 0065c540 FUN_0065c540
 * calls 00653770 FUN_00653770
 */

undefined4 * __fastcall FUN_004b4a20(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086b576;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004d61d0();
  param_1[9] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_00896cbc;
  FUN_00653770(param_1 + 0x13,5);
  FUN_0065c540(4);
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  FUN_00653bb0(0);
  param_1[0x2d] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x34] = 0;
  param_1[0xd] = 0;
  param_1[0x1f] = 0x46bb8000;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined2 *)((int)param_1 + 0x82) = 0;
  param_1[0x1e] = 0;
  ExceptionList = local_c;
  return param_1;
}

