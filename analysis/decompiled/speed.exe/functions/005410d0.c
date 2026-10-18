/* speed.exe 005410d0 FUN_005410d0; analysis pseudocode, not buildable source.
 * calls 00572360 FUN_00572360
 * calls 0056c6e0 FUN_0056c6e0
 * calls 0052c450 FUN_0052c450
 */

void __fastcall FUN_005410d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0086fc73;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089e2dc;
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

