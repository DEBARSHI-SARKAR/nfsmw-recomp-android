/* speed.exe 00528e30 FUN_00528e30; analysis pseudocode, not buildable source.
 * calls 00527a60 FUN_00527a60
 * calls 00572360 FUN_00572360
 */

void __fastcall FUN_00528e30(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086ea68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089cef4;
  local_4 = 0;
  FUN_00527a60();
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

