/* speed.exe 00653c30 FUN_00653c30; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00653a40 FUN_00653a40
 */

void __fastcall FUN_00653c30(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087a038;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a8adc;
  local_4 = 0;
  if (param_1[0xc] != 0) {
    FUN_005d0370(param_1[0xc],param_1[0xd],"AverageWindow::TimeData");
  }
  local_4 = 0xffffffff;
  FUN_00653a40();
  ExceptionList = local_c;
  return;
}

