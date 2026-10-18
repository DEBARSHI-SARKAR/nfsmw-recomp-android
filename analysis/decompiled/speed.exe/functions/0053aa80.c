/* speed.exe 0053aa80 FUN_0053aa80; analysis pseudocode, not buildable source.
 * calls 0079a0b0 FUN_0079a0b0
 * calls 00516be0 FUN_00516be0
 * calls 0052c450 FUN_0052c450
 * calls 00586d40 FUN_00586d40
 * calls 0079bac0 FUN_0079bac0
 * calls 00572360 FUN_00572360
 */

void __fastcall FUN_0053aa80(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0086fafd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089df94;
  local_4 = 4;
  if (DAT_009b0fa0 != 0) {
    FUN_0079bac0();
    FUN_0079a0b0();
  }
  FUN_00516be0(0xd9656bec,PTR_s_OL_GameRoom_fng_008f32b0,0xffffffff,0xff);
  FUN_00586d40();
  param_1[0x76] = &PTR_LAB_0089b070;
  param_1[0x65] = &PTR_LAB_0089b070;
  param_1[0x54] = &PTR_LAB_0089b070;
  local_4 = local_4 & 0xffffff00;
  FUN_0052c450();
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

