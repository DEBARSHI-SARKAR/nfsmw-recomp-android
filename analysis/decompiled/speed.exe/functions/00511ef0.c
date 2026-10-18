/* speed.exe 00511ef0 FUN_00511ef0; analysis pseudocode, not buildable source.
 * calls 00572360 FUN_00572360
 * calls 004af1e0 FUN_004af1e0
 * calls 004b9080 FUN_004b9080
 * calls 005758e0 FUN_005758e0
 * calls 00627400 FUN_00627400
 * calls 006253d0 FUN_006253d0
 */

void __fastcall FUN_00511ef0(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0086e2b2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089b208;
  local_4 = 1;
  iVar1 = FUN_00627400(0x10);
  local_4._0_1_ = 2;
  if (iVar1 != 0) {
    FUN_006253d0(0xd,0);
  }
  local_4._0_1_ = 1;
  FUN_004af1e0(0,0xb);
  FUN_004b9080(1,4,"SMSMesPause");
  FUN_004b9080(0,5,"SMSMes");
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005758e0();
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

