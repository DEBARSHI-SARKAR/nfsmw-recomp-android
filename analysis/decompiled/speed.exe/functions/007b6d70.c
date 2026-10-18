/* speed.exe 007b6d70 FUN_007b6d70; analysis pseudocode, not buildable source.
 * calls 00593920 FUN_00593920
 * calls 007b0c30 FUN_007b0c30
 */

undefined4 * __thiscall FUN_007b6d70(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00883376;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00593920(param_2);
  *param_1 = &PTR_FUN_008b7d3c;
  param_1[0x49] = &PTR_LAB_008b7244;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0x3f800000;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 5;
  param_1[0x50] = 0;
  param_1[0x5c] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  local_4 = 1;
  if (((*(byte *)(DAT_0091cf90 + 300) & 1) == 0) && (DAT_009b9e8d == '\0')) {
    param_1[0x43] = 6;
  }
  else {
    param_1[0x43] = 4;
  }
  FUN_007b0c30();
  ExceptionList = local_c;
  return param_1;
}

