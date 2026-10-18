/* speed.exe 00716d20 FUN_00716d20; analysis pseudocode, not buildable source.
 * calls 00708a50 FUN_00708a50
 * calls 00711d30 FUN_00711d30
 */

undefined4 * __fastcall FUN_00716d20(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0088023e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = &DAT_00890978;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *param_1 = &PTR_FUN_008b24f0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1d] = &PTR_FUN_008b2648;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined2 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  local_4 = 2;
  param_1[0x28] = 0x7fff;
  param_1[0x29] = 0x1000;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  FUN_00708a50();
  if ((param_1[0xb] == 0) && (DAT_008f8700 != 0)) {
    FUN_00711d30(7);
  }
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0x1000;
  ExceptionList = local_c;
  return param_1;
}

