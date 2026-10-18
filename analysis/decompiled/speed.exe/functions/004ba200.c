/* speed.exe 004ba200 FUN_004ba200; analysis pseudocode, not buildable source.
 * calls 004b8800 FUN_004b8800
 * calls 007869c0 FUN_007869c0
 * calls 007831e0 FUN_007831e0
 */

void __fastcall FUN_004ba200(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0086b876;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00897098;
  local_4 = 1;
  FUN_007869c0(0);
  local_4 = local_4 & 0xffffff00;
  FUN_007831e0();
  local_4 = 0xffffffff;
  FUN_004b8800();
  ExceptionList = local_c;
  return;
}

