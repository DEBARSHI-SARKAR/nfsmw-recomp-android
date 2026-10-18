/* speed.exe 005bc0c0 FUN_005bc0c0; analysis pseudocode, not buildable source.
 * calls 005b3b20 FUN_005b3b20
 * calls 005b2b60 FUN_005b2b60
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_005bc0c0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_008741ae;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008a2df0;
  local_4 = 2;
  if (DAT_0091dd04 != (undefined4 *)0x0) {
    (**(code **)*DAT_0091dd04)(param_1);
  }
  FUN_005b2b60(param_1[0xb]);
  if (param_1[5] != 0) {
    thunk_FUN_007c7250(param_1[5]);
  }
  local_4._0_1_ = 1;
  param_1[0x11] = &PTR_LAB_008a2c18;
  FUN_005b3b20();
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[0xd] = &PTR_LAB_008a2c18;
  FUN_005b3b20();
  *param_1 = &PTR_LAB_008a2c14;
  ExceptionList = pvStack_c;
  return;
}

