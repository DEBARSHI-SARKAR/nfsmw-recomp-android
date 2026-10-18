/* speed.exe 0069ba10 FUN_0069ba10; analysis pseudocode, not buildable source.
 * calls 006f8180 FUN_006f8180
 * calls 0069b810 FUN_0069b810
 * calls 006ee930 FUN_006ee930
 * calls 0045a8a0 FUN_0045a8a0
 */

void __fastcall FUN_0069ba10(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0087c36c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008ab3b8;
  param_1[2] = &PTR_LAB_008ab3ac;
  param_1[0x12] = &PTR_FUN_008ab3a8;
  local_4 = 3;
  FUN_006f8180(param_1 + 0x12);
  local_4._0_1_ = 2;
  FUN_0069b810();
  local_4._0_1_ = 1;
  if (param_1[0x1e] != 0) {
    FUN_0045a8a0();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (param_1[0x16] != 0) {
    FUN_0045a8a0();
  }
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_00890f28;
  param_1[2] = &PTR_LAB_00890f20;
  FUN_006ee930();
  ExceptionList = local_c;
  return;
}

