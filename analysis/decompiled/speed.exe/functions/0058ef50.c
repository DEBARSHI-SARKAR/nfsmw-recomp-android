/* speed.exe 0058ef50 FUN_0058ef50; analysis pseudocode, not buildable source.
 * calls 0064a140 FUN_0064a140
 * calls 00516c90 FUN_00516c90
 * calls 00627400 FUN_00627400
 * calls 00524920 FUN_00524920
 * calls 00524850 FUN_00524850
 * calls 00514cc0 FUN_00514cc0
 * calls 00516e10 FUN_00516e10
 * calls 004fb000 FUN_004fb000
 * calls 00460bf0 FUN_00460bf0
 * calls 00586290 FUN_00586290
 * calls 004b9080 FUN_004b9080
 * calls 006253d0 FUN_006253d0
 */

undefined4 * __thiscall FUN_0058ef50(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00872717;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_008a0f98;
  iVar2 = FUN_00516e10();
  if (*(char *)(iVar2 + 0x24) != '\0') {
    cVar1 = FUN_0064a140();
    if (cVar1 != '\0') {
      FUN_00524920(param_1[4],0xcf281d29,0x5d7c6a21,1);
    }
  }
  DAT_00988e1d = 1;
  uVar3 = FUN_00524850(param_1[4],0x6d91704);
  FUN_00514cc0(uVar3);
  cVar1 = FUN_004fb000();
  if (cVar1 != '\0') {
    uVar3 = param_1[4];
    uVar5 = 0;
    uVar4 = FUN_00460bf0("CURRENT_GEN_WIDESCREEN",uVar3,0);
    FUN_00516c90(uVar4,uVar3,uVar5);
  }
  iVar2 = FUN_00627400(0x10);
  local_4._0_1_ = 1;
  if (iVar2 != 0) {
    FUN_006253d0(10,1);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004b9080(1,0,"FELoad");
  ExceptionList = local_c;
  return param_1;
}

