/* speed.exe 007be220 FUN_007be220; analysis pseudocode, not buildable source.
 * calls 00572360 FUN_00572360
 * calls 007b3f00 FUN_007b3f00
 */

void __fastcall FUN_007be220(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_008837d3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b7f18;
  local_4 = 1;
  param_1[0x15] = &PTR_FUN_008b7248;
  param_1[0x19] = &PTR_LAB_008b7244;
  FUN_007b3f00();
  local_4 = local_4 & 0xffffff00;
  FUN_007b3f00();
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

