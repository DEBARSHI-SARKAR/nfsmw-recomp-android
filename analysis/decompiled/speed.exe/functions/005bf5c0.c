/* speed.exe 005bf5c0 FUN_005bf5c0; analysis pseudocode, not buildable source.
 * calls 005b3b20 FUN_005b3b20
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_005bf5c0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00874388;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  param_1[5] = &PTR_LAB_008a2c18;
  FUN_005b3b20();
  *param_1 = &PTR_FUN_008a2c2c;
  if (param_1[3] != 0) {
    thunk_FUN_007c7250(param_1[3]);
  }
  *param_1 = &PTR_LAB_008a2c14;
  ExceptionList = local_c;
  return;
}

