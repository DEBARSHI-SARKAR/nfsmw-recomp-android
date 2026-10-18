/* speed.exe 0050d7f0 FUN_0050d7f0; analysis pseudocode, not buildable source.
 * calls 00652b10 thunk_FUN_007c7250
 * calls 005bc0c0 FUN_005bc0c0
 * calls 005b3230 FUN_005b3230
 */

void __fastcall FUN_0050d7f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086e1d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089b05c;
  local_4 = 0;
  thunk_FUN_007c7250(param_1[0x17]);
  FUN_005b3230();
  local_4 = 0xffffffff;
  FUN_005bc0c0();
  ExceptionList = local_c;
  return;
}

