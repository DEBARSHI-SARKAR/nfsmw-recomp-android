/* speed.exe 004b5440 FUN_004b5440; analysis pseudocode, not buildable source.
 * calls 004d61d0 FUN_004d61d0
 * calls 0045ce40 FUN_0045ce40
 * calls 0045d9e0 FUN_0045d9e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_004b5440(undefined4 *param_1)

{
  float10 fVar1;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_0086b5e8;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_004d61d0();
  param_1[9] = 0;
  *param_1 = &PTR_FUN_00896d74;
  param_1[0x23] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x24) = 1;
  param_1[0x31] = 0;
  param_1[0x32] = 0x7f;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0xffffffff;
  param_1[0x14] = 0;
  param_1[0x26] = 5;
  param_1[0x28] = 5;
  param_1[0x2a] = 0x3f800000;
  param_1[0x2c] = 0x3f800000;
  param_1[0x2f] = 0x3f800000;
  param_1[0x30] = 0x3f800000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x15] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)((int)param_1 + 0x95) = 0;
  *(undefined1 *)((int)param_1 + 0x96) = 0;
  param_1[0x1f] = 0x3a83126f;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x23] = 0;
  param_1[0x1e] = 0;
  local_14 = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined1 *)((int)param_1 + 0x97) = 0;
  fVar1 = (float10)FUN_0045d9e0(0x3f800000,&DAT_00911fe0);
  param_1[0xb] = (float)fVar1;
  _DAT_00912128 = FUN_0045ce40();
  _DAT_0091212c = 0;
  ExceptionList = local_1c;
  return param_1;
}

