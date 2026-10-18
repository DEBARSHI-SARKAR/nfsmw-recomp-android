/* speed.exe 00540c50 FUN_00540c50; analysis pseudocode, not buildable source.
 * calls 00572360 FUN_00572360
 * calls 0056c6e0 FUN_0056c6e0
 * calls 0052c450 FUN_0052c450
 */

void __fastcall FUN_00540c50(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0086fc53;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089e2b8;
  local_4 = 1;
  if (param_1[0xb] != 0) {
    FUN_0056c6e0(param_1[0xb]);
    param_1[0xb] = 0;
  }
  local_4 = local_4 & 0xffffff00;
  FUN_0052c450();
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

