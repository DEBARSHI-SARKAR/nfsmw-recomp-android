/* speed.exe 00512440 FUN_00512440; analysis pseudocode, not buildable source.
 * calls 00572360 FUN_00572360
 * calls 007916d0 FUN_007916d0
 * calls 0078de90 FUN_0078de90
 * calls 0078d1d0 FUN_0078d1d0
 */

void __fastcall FUN_00512440(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0086e2f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089b27c;
  local_4 = 1;
  FUN_0078de90();
  FUN_0078d1d0();
  local_4 = local_4 & 0xffffff00;
  FUN_007916d0();
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

