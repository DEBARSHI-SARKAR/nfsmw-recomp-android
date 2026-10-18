/* speed.exe 00735210 FUN_00735210; analysis pseudocode, not buildable source.
 * calls 0078a5a0 FUN_0078a5a0
 * calls 0078a210 FUN_0078a210
 */

void FUN_00735210(void)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00880850;
  local_c = ExceptionList;
  local_4 = 0xf;
  ExceptionList = &local_c;
  FUN_0078a5a0();
  local_4._0_1_ = 0xe;
  FUN_0078a5a0();
  local_4._0_1_ = 0xd;
  FUN_0078a5a0();
  local_4._0_1_ = 0xc;
  FUN_0078a5a0();
  local_4._0_1_ = 0xb;
  FUN_0078a5a0();
  local_4._0_1_ = 10;
  FUN_0078a5a0();
  local_4._0_1_ = 9;
  FUN_0078a5a0();
  local_4._0_1_ = 8;
  FUN_0078a5a0();
  local_4._0_1_ = 7;
  FUN_0078a5a0();
  local_4._0_1_ = 6;
  FUN_0078a5a0();
  local_4._0_1_ = 5;
  FUN_0078a5a0();
  local_4._0_1_ = 4;
  FUN_0078a210();
  local_4._0_1_ = 3;
  FUN_0078a210();
  local_4._0_1_ = 2;
  FUN_0078a210();
  local_4._0_1_ = 1;
  FUN_0078a210();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0078a210();
  local_4 = 0xffffffff;
  FUN_0078a210();
  ExceptionList = local_c;
  return;
}

