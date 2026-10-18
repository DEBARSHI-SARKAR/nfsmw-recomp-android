/* speed.exe 004cb090 FUN_004cb090; analysis pseudocode, not buildable source.
 * calls 004c0c70 FUN_004c0c70
 * calls 006eeb40 FUN_006eeb40
 * calls 006269b0 FUN_006269b0
 * calls 00452380 FUN_00452380
 * calls 00460bf0 FUN_00460bf0
 * calls 007869c0 FUN_007869c0
 * calls 00652ad0 _malloc
 * calls 004ca090 FUN_004ca090
 * calls 0045a430 FUN_0045a430
 * calls 00786940 FUN_00786940
 * calls 00454810 FUN_00454810
 */

undefined4 * __thiscall FUN_004cb090(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  void *pvVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 local_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086c1fa;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006eeb40(param_2);
  local_4 = 0;
  FUN_004c0c70();
  local_4._0_1_ = 1;
  *param_1 = &PTR_FUN_00897764;
  param_1[5] = 0;
  FUN_00786940(0);
  iVar1 = *(int *)(param_2 + 4);
  local_4._0_1_ = 2;
  FUN_00452380(*(undefined4 *)(iVar1 + 4),0,0);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_007869c0(*(undefined4 *)(iVar1 + 8));
  iVar2 = FUN_00454810(0x9047c9e0,0);
  if (iVar2 == 0) {
    iVar2 = FUN_006269b0(0x10);
  }
  puVar3 = *(undefined1 **)(iVar2 + 0xc);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_00890978;
  }
  FUN_00460bf0(puVar3);
  pvVar4 = _malloc(0xa0);
  local_4._0_1_ = 4;
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_004ca090(local_1c,*(undefined4 *)(iVar1 + 8));
  }
  param_1[5] = uVar5;
  local_4._0_1_ = 3;
  if (DAT_008f86f8 != 0) {
    piVar6 = (int *)(**(code **)(*DAT_00911f8c + 0xc))(uVar5);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0xc))(uVar5);
    }
  }
  *(undefined1 *)(param_1[5] + 0x94) = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_0045a430();
  ExceptionList = pvStack_c;
  return param_1;
}

