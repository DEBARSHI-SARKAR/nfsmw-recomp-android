/* speed.exe 0052f820 FUN_0052f820; analysis pseudocode, not buildable source.
 * calls 00510a40 FUN_00510a40
 * calls 0052a680 FUN_0052a680
 */

void __fastcall FUN_0052f820(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086f538;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089d7ac;
  param_1[0xb] = &PTR_LAB_0089d7a0;
  local_4 = 0;
  FUN_00510a40();
  local_4 = 0xffffffff;
  FUN_0052a680();
  ExceptionList = local_c;
  return;
}

