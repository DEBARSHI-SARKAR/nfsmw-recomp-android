/* speed.exe 0070ced0 FUN_0070ced0; analysis pseudocode, not buildable source.
 * calls 00708a50 FUN_00708a50
 * calls 004e0800 FUN_004e0800
 */

undefined4 * __fastcall FUN_0070ced0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087fb8e;
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
  *param_1 = &PTR_FUN_008b2228;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x21] = 0xffffffff;
  param_1[0x22] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x23) = 0;
  local_4 = 2;
  FUN_00708a50();
  if (param_1[0x13] != 0) {
    FUN_004e0800();
  }
  param_1[0xb] = 0;
  ExceptionList = local_c;
  return param_1;
}

