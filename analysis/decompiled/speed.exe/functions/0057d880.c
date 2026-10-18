/* speed.exe 0057d880 FUN_0057d880; analysis pseudocode, not buildable source.
 * calls 0056a750 FUN_0056a750
 * calls 0046e2d0 FUN_0046e2d0
 * calls 00572360 FUN_00572360
 * calls 00627400 FUN_00627400
 * calls 006253d0 FUN_006253d0
 * calls 006307f0 FUN_006307f0
 * calls 004b9080 FUN_004b9080
 * calls 0056a930 FUN_0056a930
 */

void __fastcall FUN_0057d880(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00871e61;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a0f30;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_0056a930();
  if (DAT_0091cf40 != '\0') {
    DAT_0091cf40 = '\0';
    iVar1 = FUN_00627400(8);
    local_4._0_1_ = 2;
    if (iVar1 != 0) {
      FUN_006307f0();
    }
    local_4._0_1_ = 1;
  }
  FUN_0046e2d0(&DAT_00890978,&DAT_00890978);
  iVar1 = FUN_00627400(0x10);
  local_4._0_1_ = 3;
  if (iVar1 != 0) {
    FUN_006253d0(7,0);
  }
  local_4._0_1_ = 1;
  FUN_004b9080(0,1,"PhotoFin");
  DAT_0091cf41 = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0056a750();
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

