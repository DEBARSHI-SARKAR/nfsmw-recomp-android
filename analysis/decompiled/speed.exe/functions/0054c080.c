/* speed.exe 0054c080 FUN_0054c080; analysis pseudocode, not buildable source.
 * calls 00572360 FUN_00572360
 * calls 0053f560 FUN_0053f560
 * calls 0052c450 FUN_0052c450
 */

void __fastcall FUN_0054c080(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_008705b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089e924;
  local_4 = 1;
  *(undefined1 *)((int)param_1 + 0xf6) = 1;
  FUN_0053f560(1);
  local_4 = local_4 & 0xffffff00;
  FUN_0052c450();
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

