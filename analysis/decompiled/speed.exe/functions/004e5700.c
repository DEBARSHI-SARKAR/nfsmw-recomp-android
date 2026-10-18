/* speed.exe 004e5700 FUN_004e5700; analysis pseudocode, not buildable source.
 * calls 004d9250 FUN_004d9250
 */

void __fastcall FUN_004e5700(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086ce78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00898614;
  local_4 = 0;
  FUN_004d9250();
  *param_1 = &PTR_LAB_008967fc;
  ExceptionList = local_c;
  return;
}

