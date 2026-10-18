/* speed.exe 00561470 FUN_00561470; analysis pseudocode, not buildable source.
 * calls 00572360 FUN_00572360
 * calls 0051f4b0 FUN_0051f4b0
 */

void __fastcall FUN_00561470(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00871128;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089f0a8;
  local_4 = 0;
  FUN_0051f4b0();
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

