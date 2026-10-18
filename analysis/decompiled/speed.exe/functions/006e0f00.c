/* speed.exe 006e0f00 FUN_006e0f00; analysis pseudocode, not buildable source.
 * calls 006ca770 FUN_006ca770
 * calls 006c9f80 FUN_006c9f80
 * calls 006d90e0 FUN_006d90e0
 */

void FUN_006e0f00(void)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0087e574;
  local_c = ExceptionList;
  local_4 = 5;
  ExceptionList = &local_c;
  FUN_006d90e0();
  local_4._0_1_ = 4;
  FUN_006ca770();
  local_4._0_1_ = 3;
  FUN_006ca770();
  local_4._0_1_ = 2;
  FUN_006ca770();
  local_4._0_1_ = 1;
  FUN_006ca770();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_006ca770();
  local_4 = 0xffffffff;
  FUN_006c9f80();
  ExceptionList = local_c;
  return;
}

