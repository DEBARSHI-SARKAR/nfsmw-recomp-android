/* speed.exe 004b12b0 FUN_004b12b0; analysis pseudocode, not buildable source.
 * calls 00653a40 FUN_00653a40
 */

void __fastcall FUN_004b12b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0086b40a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00896ae4;
  local_4 = 4;
  FUN_00653a40();
  local_4._0_1_ = 3;
  FUN_00653a40();
  local_4._0_1_ = 2;
  FUN_00653a40();
  local_4._0_1_ = 1;
  FUN_00653a40();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00653a40();
  *param_1 = &PTR_LAB_008967fc;
  ExceptionList = local_c;
  return;
}

