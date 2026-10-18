/* speed.exe 004eb720 FUN_004eb720; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 004d9250 FUN_004d9250
 */

void __fastcall FUN_004eb720(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0086d113;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00899090;
  local_4 = 5;
  FUN_004d9250();
  local_4._0_1_ = 4;
  FUN_0045a430();
  local_4._0_1_ = 3;
  FUN_0045a430();
  local_4._0_1_ = 2;
  FUN_0045a430();
  local_4._0_1_ = 1;
  FUN_0045a430();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0045a430();
  *param_1 = &PTR_FUN_00898614;
  local_4 = 6;
  FUN_004d9250();
  *param_1 = &PTR_LAB_008967fc;
  ExceptionList = local_c;
  return;
}

