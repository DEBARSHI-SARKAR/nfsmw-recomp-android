/* speed.exe 006b90d0 FUN_006b90d0; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 0069b810 FUN_0069b810
 * calls 006b8de0 FUN_006b8de0
 * calls 006e9c90 FUN_006e9c90
 * calls 006eea10 FUN_006eea10
 */

void __fastcall FUN_006b90d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0087de44;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008ad61c;
  param_1[2] = &PTR_LAB_008ad614;
  param_1[0x13] = &PTR_LAB_008ad5f8;
  param_1[0x15] = &PTR_LAB_008ad578;
  param_1[0x18] = &PTR_LAB_008ad558;
  local_4 = 2;
  FUN_006e9c90(param_1[0x3d]);
  FUN_006eea10(param_1[0x21]);
  local_4._0_1_ = 1;
  FUN_0045a430();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0069b810();
  local_4 = 0xffffffff;
  FUN_006b8de0();
  ExceptionList = local_c;
  return;
}

