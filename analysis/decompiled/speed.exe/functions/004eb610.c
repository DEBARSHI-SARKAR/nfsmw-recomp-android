/* speed.exe 004eb610 FUN_004eb610; analysis pseudocode, not buildable source.
 * calls 004ab370 FUN_004ab370
 * calls 004d5910 FUN_004d5910
 * calls 004d57f0 FUN_004d57f0
 * calls 004d5730 FUN_004d5730
 */

undefined4 * __fastcall FUN_004eb610(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086d0ad;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_00899090;
  param_1[0x11] = 0;
  FUN_004ab370(0,0,0);
  local_4._0_1_ = 1;
  param_1[0x17] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x32] = 0;
  FUN_004ab370(0,0,0);
  local_4._0_1_ = 2;
  FUN_004d5730(0,0,0);
  local_4._0_1_ = 3;
  FUN_004d57f0(0,0,0);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_004d5910(0,0,0);
  param_1[0x2c] = 2;
  param_1[0x2b] = 2;
  param_1[0x11] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x32] = 0;
  param_1[0x17] = 0;
  param_1[0x1d] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  ExceptionList = local_c;
  return param_1;
}

