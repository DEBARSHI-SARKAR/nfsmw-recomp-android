/* speed.exe 004ae3f0 FUN_004ae3f0; analysis pseudocode, not buildable source.
 * calls 007c90a0 `eh_vector_constructor_iterator'
 */

undefined4 * __thiscall FUN_004ae3f0(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086b1d8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00896828;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 1;
  param_1[0xb] = 0xffffffff;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0x3f800000;
  _eh_vector_constructor_iterator_(param_1 + 0x11,0x14,4,FUN_004aaa60,thunk_FUN_0045a430);
  param_1[0x37] = 0;
  param_1[0x25] = param_2;
  *(undefined1 *)(param_1 + 0x38) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined1 *)((int)param_1 + 0xef) = 0;
  *(undefined1 *)((int)param_1 + 0xee) = 0;
  *(undefined1 *)((int)param_1 + 0xed) = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  param_1[10] = 0x3f800000;
  param_1[9] = 0x3f800000;
  param_1[8] = 0x3f800000;
  param_1[7] = 0x3f800000;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined1 *)((int)param_1 + 0xda) = 0;
  *(undefined1 *)((int)param_1 + 0xd9) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  ExceptionList = local_c;
  return param_1;
}

