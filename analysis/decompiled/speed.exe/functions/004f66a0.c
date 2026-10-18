/* speed.exe 004f66a0 FUN_004f66a0; analysis pseudocode, not buildable source.
 * calls 004b8f80 FUN_004b8f80
 * calls 004ca430 FUN_004ca430
 */

void __fastcall FUN_004f66a0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086d850;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00899808;
  local_4 = 0;
  FUN_004b8f80(0,0,7,0);
  *param_1 = &PTR_FUN_008983e8;
  local_4 = 1;
  FUN_004ca430(param_1);
  *param_1 = &PTR_LAB_008967fc;
  ExceptionList = local_c;
  return;
}

