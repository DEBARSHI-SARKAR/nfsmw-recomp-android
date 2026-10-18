/* speed.exe 004ca090 FUN_004ca090; analysis pseudocode, not buildable source.
 * calls 00452380 FUN_00452380
 * calls 004c0ae0 FUN_004c0ae0
 */

undefined4 * __thiscall FUN_004ca090(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086c0b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004c0ae0();
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  local_4 = 0;
  param_1[0x1d] = 1;
  param_1[0x1e] = 0;
  FUN_00452380(param_2,0,0);
  param_1[0x26] = param_3;
  *(undefined1 *)(param_1 + 0x25) = 1;
  param_1[0x14] = param_1[0x10];
  param_1[0x15] = param_1[0x11];
  param_1[0x16] = param_1[0x12];
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *param_1 = 0x3f800000;
  param_1[5] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[0xf] = 0x3f800000;
  ExceptionList = local_c;
  return param_1;
}

