/* speed.exe 00514190 FUN_00514190; analysis pseudocode, not buildable source.
 * calls 00572360 FUN_00572360
 * calls 00586580 FUN_00586580
 */

void __fastcall FUN_00514190(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086e328;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089b320;
  local_4 = 0;
  FUN_00586580();
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

