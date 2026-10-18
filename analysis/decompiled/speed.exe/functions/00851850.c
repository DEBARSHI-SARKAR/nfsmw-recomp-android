/* speed.exe 00851850 FUN_00851850; analysis pseudocode, not buildable source.
 * calls 0078af60 thunk_FUN_004655f0
 * calls 0078af30 FUN_0078af30
 */

int FUN_00851850(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int unaff_EBX;
  undefined4 *puVar9;
  undefined4 *puVar10;
  bool bVar11;
  bool bVar12;
  
  puVar5 = *(undefined4 **)(unaff_EBX + 0x70);
  iVar3 = 0;
  if (puVar5 == (undefined4 *)0x0) {
    *(undefined4 *)(unaff_EBX + 100) = 0;
    *(undefined4 *)(unaff_EBX + 0x68) = 0;
    *(int *)(unaff_EBX + 0x6c) = param_1;
    uVar4 = FUN_0078af30(param_1);
    *(undefined4 *)(unaff_EBX + 0x70) = uVar4;
    return *(int *)(unaff_EBX + 0x6c) - *(int *)(unaff_EBX + 100);
  }
  iVar1 = *(int *)(unaff_EBX + 0x68);
  iVar6 = 0;
  bVar12 = SBORROW4(0,iVar1);
  iVar2 = -iVar1;
  bVar11 = iVar1 == 0;
  if (0 < iVar1) {
    do {
      iVar6 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((int)puVar5 + iVar3 + 8),
                                         *(undefined1 *)((int)puVar5 + iVar3 + 9)),
                                *(undefined1 *)((int)puVar5 + iVar3 + 10)),
                       *(undefined1 *)((int)puVar5 + iVar3 + 0xb));
      iVar3 = iVar3 + iVar6;
    } while (iVar3 < iVar1);
    bVar12 = SBORROW4(iVar3,iVar1);
    iVar2 = iVar3 - iVar1;
    bVar11 = iVar3 == iVar1;
  }
  if (!bVar11 && bVar12 == iVar2 < 0) {
    iVar3 = iVar3 - iVar6;
  }
  if (0 < iVar3) {
    uVar7 = *(int *)(unaff_EBX + 100) - iVar3;
    puVar9 = (undefined4 *)((int)puVar5 + iVar3);
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar5 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    *(int *)(unaff_EBX + 100) = *(int *)(unaff_EBX + 100) - iVar3;
    *(int *)(unaff_EBX + 0x68) = *(int *)(unaff_EBX + 0x68) - iVar3;
  }
  iVar3 = *(int *)(unaff_EBX + 100);
  if (*(int *)(unaff_EBX + 0x6c) - iVar3 < param_1) {
    puVar5 = (undefined4 *)FUN_0078af30(iVar3 + param_1 + param_2);
    if (puVar5 == (undefined4 *)0x0) {
      return 0;
    }
    uVar8 = *(uint *)(unaff_EBX + 100);
    puVar9 = *(undefined4 **)(unaff_EBX + 0x70);
    puVar10 = puVar5;
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    thunk_FUN_004655f0(*(undefined4 *)(unaff_EBX + 0x70));
    iVar3 = *(int *)(unaff_EBX + 100);
    *(undefined4 **)(unaff_EBX + 0x70) = puVar5;
    *(int *)(unaff_EBX + 0x6c) = iVar3 + param_1 + param_2;
  }
  return *(int *)(unaff_EBX + 0x6c) - iVar3;
}

