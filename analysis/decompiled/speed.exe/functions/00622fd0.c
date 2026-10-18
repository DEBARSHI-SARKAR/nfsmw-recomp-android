/* speed.exe 00622fd0 FUN_00622fd0; analysis pseudocode, not buildable source.
 * calls 006f3560 FUN_006f3560
 */

void __fastcall FUN_00622fd0(undefined4 *param_1)

{
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00877048;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a6fc4;
  local_14 = param_1[4];
  local_18 = -(float)param_1[3];
  local_10 = param_1[2];
  local_4 = 0;
  FUN_006f3560(&local_18,param_1[5]);
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

