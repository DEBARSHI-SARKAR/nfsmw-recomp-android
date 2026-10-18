/* speed.exe 0052a680 FUN_0052a680; analysis pseudocode, not buildable source.
 * calls 0052a600 FUN_0052a600
 * calls 00572360 FUN_00572360
 */

void __fastcall FUN_0052a680(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086eef8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089d21c;
  param_1[0xb] = &PTR_LAB_0089d210;
  local_4 = 0;
  FUN_0052a600();
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

