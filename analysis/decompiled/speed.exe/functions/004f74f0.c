/* speed.exe 004f74f0 FUN_004f74f0; analysis pseudocode, not buildable source.
 * calls 004ca430 FUN_004ca430
 */

void __fastcall FUN_004f74f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086d9d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008983e8;
  local_4 = 0;
  FUN_004ca430(param_1);
  *param_1 = &PTR_LAB_008967fc;
  ExceptionList = local_c;
  return;
}

