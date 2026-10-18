/* speed.exe 005be5d0 FUN_005be5d0; analysis pseudocode, not buildable source.
 * calls 005b3b20 FUN_005b3b20
 * calls 005bb620 FUN_005bb620
 */

void __fastcall FUN_005be5d0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00874314;
  local_c = ExceptionList;
  local_4 = 5;
  ExceptionList = &local_c;
  FUN_005bb620();
  local_4._0_1_ = 4;
  *(undefined ***)(param_1 + 0x4130) = &PTR_LAB_008a2c18;
  FUN_005b3b20();
  local_4._0_1_ = 3;
  *(undefined ***)(param_1 + 0x4120) = &PTR_LAB_008a2c18;
  FUN_005b3b20();
  local_4._0_1_ = 2;
  *(undefined ***)(param_1 + 0x4110) = &PTR_LAB_008a2c18;
  FUN_005b3b20();
  local_4._0_1_ = 1;
  *(undefined ***)(param_1 + 0xf8) = &PTR_LAB_008a2c18;
  FUN_005b3b20();
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined ***)(param_1 + 0xe8) = &PTR_LAB_008a2c18;
  FUN_005b3b20();
  local_4 = 0xffffffff;
  *(undefined ***)(param_1 + 0xd8) = &PTR_LAB_008a2c18;
  FUN_005b3b20();
  ExceptionList = local_c;
  return;
}

