/* speed.exe 0044d210 FUN_0044d210; analysis pseudocode, not buildable source.
 * calls 0044b3a0 FUN_0044b3a0
 * calls 0044c230 FUN_0044c230
 */

void __fastcall FUN_0044d210(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00869a4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008938dc;
  local_4 = 0;
  FUN_0044b3a0();
  local_4 = 0xffffffff;
  FUN_0044c230();
  ExceptionList = local_c;
  return;
}

