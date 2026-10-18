/* speed.exe 004b1110 FUN_004b1110; analysis pseudocode, not buildable source.
 * calls 006539a0 FUN_006539a0
 */

undefined4 * __fastcall FUN_004b1110(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086b3ba;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00896ae4;
  FUN_006539a0();
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[0x11] = 0xbf800000;
  param_1[0x12] = 0xbf800000;
  param_1[0x13] = 0xbf800000;
  param_1[5] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x10) = 0;
  local_4._0_1_ = 1;
  FUN_006539a0();
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x24] = 0xbf800000;
  param_1[0x25] = 0xbf800000;
  param_1[0x26] = 0xbf800000;
  param_1[0x18] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x23) = 0;
  local_4._0_1_ = 2;
  FUN_006539a0();
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  param_1[0x37] = 0xbf800000;
  param_1[0x38] = 0xbf800000;
  param_1[0x39] = 0xbf800000;
  param_1[0x2b] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x36) = 0;
  local_4._0_1_ = 3;
  FUN_006539a0();
  param_1[0x3a] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x3d] = 0;
  param_1[0x4a] = 0xbf800000;
  param_1[0x4b] = 0xbf800000;
  param_1[0x4c] = 0xbf800000;
  param_1[0x3e] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x49) = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_006539a0();
  param_1[0x4d] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x50] = 0;
  param_1[0x5d] = 0xbf800000;
  param_1[0x5e] = 0xbf800000;
  param_1[0x5f] = 0xbf800000;
  param_1[0x51] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[100] = 0;
  param_1[0x60] = 0;
  ExceptionList = local_c;
  return param_1;
}

