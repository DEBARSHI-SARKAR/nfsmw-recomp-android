/* speed.exe 005f81d0 FUN_005f81d0; analysis pseudocode, not buildable source.
 * calls 0065b760 FUN_0065b760
 * calls 005ddbd0 FUN_005ddbd0
 * calls 005f7730 FUN_005f7730
 * calls 005e2580 FUN_005e2580
 * calls 005f50c0 FUN_005f50c0
 * calls 0045a430 FUN_0045a430
 * calls 0065b6e0 FUN_0065b6e0
 * calls 005f5f10 FUN_005f5f10
 * calls 005f6430 FUN_005f6430
 * calls 005e98d0 FUN_005e98d0
 * calls 005e4c90 FUN_005e4c90
 * calls 005ddcb0 FUN_005ddcb0
 */

undefined4 __thiscall FUN_005f81d0(int param_1,char *param_2,uint param_3)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  bool bVar13;
  uint local_c8;
  int local_bc;
  int local_a8;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  pcVar2 = param_2;
  puStack_8 = &LAB_00875de6;
  local_c = ExceptionList;
  if (param_3 < 0x80) {
    return 0;
  }
  pcVar8 = param_2 + 0x80;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0065b6e0(param_2 + 0x10,param_2 + (param_3 - (int)(param_2 + 0x10)));
  FUN_0065b760();
  iVar3 = 0;
  pcVar4 = (char *)FUN_0065b760();
  bVar13 = true;
  pcVar6 = param_2;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar13 = *pcVar6 == *pcVar4;
    pcVar6 = pcVar6 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar13);
  if (((bVar13) && (*(int *)(param_2 + 0x10) == 0x656d6147)) && (7 < *(uint *)(param_2 + 0x14))) {
    FUN_005f7730();
    piVar1 = (int *)(param_2 + 0x18);
    local_c8 = 0;
    param_2 = pcVar8;
    if (*piVar1 != 0) {
      do {
        iVar3 = *(int *)(param_2 + 4);
        pcVar6 = (char *)FUN_005f5f10(*(undefined4 *)param_2,iVar3,1);
        if (pcVar6 != (char *)0x0) {
          uVar10 = *(uint *)(param_2 + 4);
          pcVar4 = param_2 + 8;
          for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar6 = *(undefined4 *)pcVar4;
            pcVar4 = pcVar4 + 4;
            pcVar6 = pcVar6 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar6 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            pcVar6 = pcVar6 + 1;
          }
        }
        pcVar8 = param_2 + (iVar3 + 0x17U & 0xfffffff0);
        local_c8 = local_c8 + 1;
        param_2 = pcVar8;
      } while (local_c8 < *(uint *)(pcVar2 + 0x18));
    }
    FUN_005e4c90((uint)(pcVar8 + 0xf) & 0xfffffff0,*(undefined4 *)(pcVar2 + 0x1c));
    iVar3 = *(int *)(pcVar2 + 0x1c) * 0x20 + ((uint)(pcVar8 + 0xf) & 0xfffffff0);
    FUN_005f6430(iVar3,*(undefined4 *)(pcVar2 + 0x20));
    iVar3 = *(int *)(pcVar2 + 0x20) * 0x10 + iVar3;
    FUN_005ddbd0(iVar3,*(undefined4 *)(pcVar2 + 0x24));
    uVar9 = iVar3 + 0xf + *(int *)(pcVar2 + 0x24) * 0x14 & 0xfffffff0;
    FUN_005ddcb0(uVar9,*(undefined4 *)(pcVar2 + 0x28));
    uVar10 = *(int *)(pcVar2 + 0x30) + 7U >> 3;
    puVar11 = (undefined4 *)(uVar9 + 0xf + *(int *)(pcVar2 + 0x28) * 0x14 & 0xfffffff0);
    puVar7 = puVar11;
    puVar12 = (undefined4 *)(param_1 + 0x264);
    for (uVar9 = *(int *)(pcVar2 + 0x30) + 7U >> 5; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar12 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar12 = puVar12 + 1;
    }
    for (uVar9 = uVar10 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar12 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar12 = (undefined4 *)((int)puVar12 + 1);
    }
    uVar10 = (uint)(uVar10 + 0xf + (int)puVar11) & 0xfffffff0;
    iVar3 = FUN_005e98d0(uVar10);
    uVar10 = iVar3 + 0xf + uVar10 & 0xfffffff0;
    FUN_005f50c0(uVar10,*(undefined4 *)(pcVar2 + 0x38));
    puVar7 = (undefined4 *)(uVar10 + 0xf + *(int *)(pcVar2 + 0x38) * 4 & 0xfffffff0);
    uVar5 = *puVar7;
    FUN_005e2580(uVar5,0,0);
    local_4._0_1_ = 1;
    if (local_a8 != 0) {
      *(undefined4 *)(DAT_0091e00c + 0x108) = uVar5;
    }
    uVar5 = puVar7[4];
    FUN_005e2580(uVar5,0,0);
    if (local_bc != 0) {
      *(undefined4 *)(DAT_0091e00c + 0x10c) = uVar5;
    }
    FUN_0045a430();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0045a430();
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  ExceptionList = local_c;
  return uVar5;
}

