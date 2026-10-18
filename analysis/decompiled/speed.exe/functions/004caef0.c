/* speed.exe 004caef0 FUN_004caef0; analysis pseudocode, not buildable source.
 * calls 006eeb40 FUN_006eeb40
 * calls 00460bf0 FUN_00460bf0
 * calls 0045a430 FUN_0045a430
 * calls 00786940 FUN_00786940
 * calls 00454810 FUN_00454810
 * calls 007398d0 FUN_007398d0
 * calls 00621210 FUN_00621210
 * calls 004c0b30 FUN_004c0b30
 * calls 00627400 FUN_00627400
 * calls 006269b0 FUN_006269b0
 * calls 00452380 FUN_00452380
 * calls 004c9cb0 FUN_004c9cb0
 * calls 007869c0 FUN_007869c0
 * calls 00652ad0 _malloc
 */

undefined4 * __thiscall FUN_004caef0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  undefined4 local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086c1a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006eeb40(param_2);
  local_4 = 0;
  FUN_004c0b30();
  param_1[5] = 0;
  local_4._0_1_ = 1;
  *param_1 = &PTR_FUN_00897740;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  FUN_00786940(0);
  iVar5 = *(int *)(param_2 + 4);
  local_4._0_1_ = 2;
  FUN_00452380(*(undefined4 *)(iVar5 + 4),0,0);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_007869c0(*(undefined4 *)(iVar5 + 8));
  iVar1 = FUN_00454810(0x9047c9e0,0);
  if (iVar1 == 0) {
    iVar1 = FUN_006269b0(0x10);
  }
  puVar2 = *(undefined1 **)(iVar1 + 0xc);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_00890978;
  }
  uVar3 = FUN_00460bf0(puVar2);
  FUN_007398d0(uVar3);
  uVar3 = *(undefined4 *)(iVar5 + 0xc);
  pvVar4 = _malloc(0x260);
  local_4._0_1_ = 4;
  if (pvVar4 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004c9cb0(local_1c,uVar3,*(undefined4 *)(iVar5 + 8),*(undefined4 *)(iVar5 + 0x14));
  }
  param_1[5] = uVar3;
  local_4._0_1_ = 3;
  if (*(char *)(iVar5 + 0x10) == '\0') {
    iVar5 = FUN_00627400(8);
    local_4._0_1_ = 5;
    if (iVar5 != 0) {
      FUN_00621210();
    }
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_0045a430();
  ExceptionList = local_c;
  return param_1;
}

