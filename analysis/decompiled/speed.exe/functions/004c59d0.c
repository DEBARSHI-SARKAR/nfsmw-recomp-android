/* speed.exe 004c59d0 FUN_004c59d0; analysis pseudocode, not buildable source.
 * calls 00653bb0 FUN_00653bb0
 * calls 004c0e00 FUN_004c0e00
 * calls 004d61d0 FUN_004d61d0
 * calls 005cc240 FUN_005cc240
 * calls 0065c540 FUN_0065c540
 */

undefined4 * __fastcall FUN_004c59d0(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086bcf3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004d61d0();
  param_1[9] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_00896cf0;
  FUN_0065c540();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_005cc240(&DAT_008970d0);
  uVar1 = FUN_004c0e00(param_1,FUN_004b4390);
  param_1[0x26] = uVar1;
  FUN_005cc240("RevOFF");
  uVar1 = FUN_004c0e00(param_1,&LAB_004b43d0);
  param_1[0x27] = uVar1;
  FUN_00653bb0();
  param_1[0x23] = 1;
  param_1[0x24] = 1;
  param_1[0x2e] = 1;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0xb] = 0x447a0000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x2c] = 0;
  param_1[0x32] = 0x447a0000;
  param_1[0x33] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  param_1[0x2f] = 0;
  param_1[0xe] = 0x461c4000;
  param_1[0x2a] = 0xffffffff;
  ExceptionList = local_c;
  return param_1;
}

