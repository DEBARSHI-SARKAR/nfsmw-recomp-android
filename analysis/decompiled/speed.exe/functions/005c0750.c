/* speed.exe 005c0750 FUN_005c0750; analysis pseudocode, not buildable source.
 * calls 005b3b20 FUN_005b3b20
 * calls 005bc0c0 FUN_005bc0c0
 */

void __fastcall FUN_005c0750(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00874468;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *(undefined ***)(param_1 + 0x5c) = &PTR_LAB_008a2c18;
  FUN_005b3b20();
  local_4 = 0xffffffff;
  FUN_005bc0c0();
  ExceptionList = local_c;
  return;
}

