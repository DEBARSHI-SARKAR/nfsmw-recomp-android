/* speed.exe 004f6b10 FUN_004f6b10; analysis pseudocode, not buildable source.
 * calls 004ca430 FUN_004ca430
 * calls 004dec30 FUN_004dec30
 */

void __fastcall FUN_004f6b10(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086d910;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00899920;
  local_4 = 0;
  FUN_004dec30();
  *param_1 = &PTR_FUN_008983e8;
  local_4 = 1;
  FUN_004ca430(param_1);
  *param_1 = &PTR_LAB_008967fc;
  ExceptionList = local_c;
  return;
}

