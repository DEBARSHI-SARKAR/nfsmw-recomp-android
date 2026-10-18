/* speed.exe 005449d0 FUN_005449d0; analysis pseudocode, not buildable source.
 * calls 00572360 FUN_00572360
 * calls 0052c450 FUN_0052c450
 */

void __fastcall FUN_005449d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086fdb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_0089e484;
  local_4 = 0;
  FUN_0052c450();
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

