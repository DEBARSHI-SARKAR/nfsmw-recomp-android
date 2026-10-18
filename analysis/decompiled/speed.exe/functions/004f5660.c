/* speed.exe 004f5660 FUN_004f5660; analysis pseudocode, not buildable source.
 * calls 004b02a0 FUN_004b02a0
 * calls 004b0000 FUN_004b0000
 * calls 00653a40 FUN_00653a40
 * calls 004e6640 FUN_004e6640
 * calls 004ca430 FUN_004ca430
 */

void __fastcall FUN_004f5660(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0086d5f4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00899388;
  local_4 = 3;
  FUN_004e6640();
  local_4._0_1_ = 2;
  FUN_00653a40();
  local_4._0_1_ = 1;
  FUN_004b0000();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004b02a0();
  *param_1 = &PTR_FUN_008983e8;
  local_4 = 4;
  FUN_004ca430(param_1);
  *param_1 = &PTR_LAB_008967fc;
  ExceptionList = local_c;
  return;
}

