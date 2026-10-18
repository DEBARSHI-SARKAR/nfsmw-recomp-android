/* speed.exe 0057e050 FUN_0057e050; analysis pseudocode, not buildable source.
 * calls 00572360 FUN_00572360
 * calls 00627400 FUN_00627400
 * calls 006253d0 FUN_006253d0
 * calls 00516b90 FUN_00516b90
 * calls 004b9080 FUN_004b9080
 * calls 005258b0 FUN_005258b0
 */

void __fastcall FUN_0057e050(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00871f17;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a0f98;
  local_4 = 0;
  cVar1 = FUN_00516b90("Loading_Tips.fng");
  if (cVar1 != '\0') {
    FUN_005258b0(1);
  }
  iVar2 = FUN_00627400(0x10);
  local_4._0_1_ = 1;
  if (iVar2 != 0) {
    FUN_006253d0(10,0);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004b9080(0,0,"FELoad");
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

