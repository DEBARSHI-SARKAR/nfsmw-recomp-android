/* speed.exe 0076e220 FUN_0076e220; analysis pseudocode, not buildable source.
 * calls 005d51e0 FUN_005d51e0
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0076d320 FUN_0076d320
 */

void __fastcall FUN_0076e220(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_008819da;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b5c20;
  local_4 = 2;
  if (DAT_009b38fc != 0) {
    FUN_0076d320(param_1);
  }
  if (param_1[2] != 0) {
    thunk_FUN_007c7250(param_1[2]);
  }
  if (param_1[0xb9] != 0) {
    thunk_FUN_007c7250(param_1[0xb9]);
  }
  local_4._0_1_ = 1;
  FUN_005d51e0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005d51e0();
  local_4 = 0xffffffff;
  FUN_005d51e0();
  ExceptionList = local_c;
  return;
}

