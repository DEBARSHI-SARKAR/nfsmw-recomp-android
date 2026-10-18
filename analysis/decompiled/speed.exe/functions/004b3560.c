/* speed.exe 004b3560 FUN_004b3560; analysis pseudocode, not buildable source.
 * calls 004d61d0 FUN_004d61d0
 * calls 00653770 FUN_00653770
 */

undefined4 * __fastcall FUN_004b3560(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086b4c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004d61d0();
  param_1[9] = 0;
  *param_1 = &PTR_FUN_00896b5c;
  param_1[0x20] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x21) = 1;
  param_1[0x27] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x28) = 1;
  local_4 = 0;
  param_1[0x2e] = 0;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 1;
  FUN_00653770(param_1 + 0x32,7);
  param_1[0x42] = 0;
  param_1[0x49] = 0;
  param_1[0x44] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x45] = 0;
  param_1[0x48] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 1;
  param_1[0x50] = 0;
  param_1[0x4b] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  *(undefined1 *)(param_1 + 0x51) = 1;
  param_1[0x58] = 0;
  param_1[0x53] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x54] = 0;
  param_1[0x57] = 0;
  *(undefined1 *)(param_1 + 0x59) = 1;
  param_1[0xd] = 0;
  ExceptionList = local_c;
  return param_1;
}

