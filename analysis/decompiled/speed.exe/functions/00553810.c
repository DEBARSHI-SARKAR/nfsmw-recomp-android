/* speed.exe 00553810 FUN_00553810; analysis pseudocode, not buildable source.
 * calls 00627400 FUN_00627400
 * calls 00586290 FUN_00586290
 * calls 005758b0 FUN_005758b0
 * calls 006253d0 FUN_006253d0
 * calls 005750d0 FUN_005750d0
 * calls 00549150 FUN_00549150
 * calls 004b9080 FUN_004b9080
 * calls 004af1e0 FUN_004af1e0
 */

undefined4 * __thiscall FUN_00553810(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870a52;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089b208;
  FUN_005758b0();
  local_4._0_1_ = 1;
  FUN_005750d0(*param_2,"scrollbar",1,1,0);
  param_1[0x37] = param_2[2];
  iVar1 = FUN_00627400(0x10);
  local_4._0_1_ = 2;
  if (iVar1 != 0) {
    FUN_006253d0(0xd,1);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004af1e0(1,0xb);
  FUN_004b9080(0,4,"SMSMesUnPause");
  FUN_004b9080(1,5,"SMSMes");
  FUN_00549150();
  ExceptionList = local_c;
  return param_1;
}

