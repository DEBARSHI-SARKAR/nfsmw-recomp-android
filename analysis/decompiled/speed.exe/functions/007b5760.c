/* speed.exe 007b5760 FUN_007b5760; analysis pseudocode, not buildable source.
 * calls 0052a680 FUN_0052a680
 * calls 00510a40 FUN_00510a40
 */

void __fastcall FUN_007b5760(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00883288;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b7b48;
  param_1[0xb] = &PTR_LAB_008b7b3c;
  local_4 = 0;
  FUN_00510a40();
  local_4 = 0xffffffff;
  FUN_0052a680();
  ExceptionList = local_c;
  return;
}

