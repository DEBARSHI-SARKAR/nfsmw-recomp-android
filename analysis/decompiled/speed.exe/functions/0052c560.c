/* speed.exe 0052c560 FUN_0052c560; analysis pseudocode, not buildable source.
 * calls 0052c450 FUN_0052c450
 * calls 00652b10 thunk_FUN_007c7250
 * calls 00572360 FUN_00572360
 */

void __fastcall FUN_0052c560(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086f398;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089d35c;
  local_4 = 0;
  thunk_FUN_007c7250(param_1[0x40]);
  FUN_0052c450();
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

