/* speed.exe 00544dd0 FUN_00544dd0; analysis pseudocode, not buildable source.
 * calls 00572360 FUN_00572360
 * calls 00527a30 FUN_00527a30
 */

void __fastcall FUN_00544dd0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086fdf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089e4ac;
  local_4 = 0;
  param_1[0xb] = &PTR_FUN_0089cde0;
  FUN_00527a30();
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

