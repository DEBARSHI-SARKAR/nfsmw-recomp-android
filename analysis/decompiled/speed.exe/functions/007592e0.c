/* speed.exe 007592e0 FUN_007592e0; analysis pseudocode, not buildable source.
 * calls 00756890 FUN_00756890
 */

undefined4 * __thiscall FUN_007592e0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_18 = &LAB_0088112b;
  local_1c = ExceptionList;
  puVar1 = param_1 + 6;
  ExceptionList = &local_1c;
  *param_1 = &PTR_FUN_008b50ac;
  *puVar1 = puVar1;
  param_1[7] = puVar1;
  param_1[0x3a] = 0;
  param_1[0x3d] = 1;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x18] = 0x3f800000;
  param_1[0x1d] = 0x3f800000;
  param_1[0x22] = 0x3f800000;
  param_1[0x27] = 0x3f800000;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  local_14 = 0;
  param_1[0x3c] = 0;
  FUN_00756890(param_2);
  param_1[0x3e] = 0;
  ExceptionList = local_1c;
  return param_1;
}

