/* speed.exe 004a2cd0 FUN_004a2cd0; analysis pseudocode, not buildable source.
 * calls 00491350 FUN_00491350
 * calls 00491360 FUN_00491360
 * calls 00494610 FUN_00494610
 * calls 007c6610 FUN_007c6610
 */

undefined4 __thiscall FUN_004a2cd0(int param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  
  iVar3 = param_2;
  if (param_2 == 0) {
    return 0;
  }
  iVar5 = FUN_007c6610(param_2,"event.");
  if (iVar5 == iVar3) {
    iVar5 = 6;
  }
  else {
    iVar5 = FUN_007c6610(iVar3,"csisEvent.");
    if (iVar5 != iVar3) {
      return 0;
    }
    iVar5 = 10;
  }
  pcVar11 = (char *)(iVar3 + iVar5);
  iVar5 = FUN_00494610(pcVar11,&param_2);
  iVar3 = param_2;
  *param_3 = iVar5;
  if (-1 < iVar5) {
    return 1;
  }
  uVar10 = (uint)*(ushort *)(param_1 + 6);
  iVar5 = *(int *)(param_1 + 0x10);
  if ((int)(uVar10 + 1) < iVar5) {
    for (; param_2 <= (int)uVar10; uVar10 = uVar10 - 1) {
      if (0 < (int)uVar10) {
        puVar1 = (undefined4 *)(*(int *)(param_1 + 8) + uVar10 * 8);
        *puVar1 = *(undefined4 *)(*(int *)(param_1 + 8) + -8 + uVar10 * 8);
        puVar1[1] = puVar1[-1];
      }
    }
    pcVar6 = pcVar11;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    uVar7 = (*(code *)PTR_FUN_008ee4d0)(pcVar6 + (1 - (int)(pcVar11 + 1)),"eventName");
    *(undefined4 *)(*(int *)(param_1 + 8) + iVar3 * 8) = uVar7;
    pcVar6 = *(char **)(*(int *)(param_1 + 8) + iVar3 * 8);
    do {
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar6 = cVar2;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    *(undefined4 *)(*(int *)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 6) * 4) =
         *(undefined4 *)(*(int *)(param_1 + 8) + iVar3 * 8);
    *(uint *)(*(int *)(param_1 + 8) + 4 + iVar3 * 8) = (uint)*(ushort *)(param_1 + 6);
  }
  else {
    iVar3 = *(int *)(param_1 + 8);
    puVar1 = *(undefined4 **)(param_1 + 0xc);
    iVar8 = iVar5 + *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x10) = iVar8;
    uVar7 = (*(code *)PTR_FUN_008ee4d0)(iVar8 * 8,"eventMapping");
    *(undefined4 *)(param_1 + 8) = uVar7;
    uVar7 = (*(code *)PTR_FUN_008ee4d0)(*(int *)(param_1 + 0x10) << 2,"eventNames");
    iVar8 = param_2;
    *(undefined4 *)(param_1 + 0xc) = uVar7;
    for (uVar10 = (uint)*(ushort *)(param_1 + 6); param_2 <= (int)uVar10; uVar10 = uVar10 - 1) {
      if (0 < (int)uVar10) {
        iVar9 = *(int *)(param_1 + 8);
        *(undefined4 *)(iVar9 + uVar10 * 8) = *(undefined4 *)(iVar3 + -8 + uVar10 * 8);
        *(undefined4 *)(iVar9 + 4 + uVar10 * 8) = *(undefined4 *)(iVar3 + -4 + uVar10 * 8);
      }
    }
    iVar9 = param_2 + -1;
    while (-1 < iVar9) {
      iVar9 = iVar9 + -1;
      iVar4 = *(int *)(param_1 + 8);
      *(undefined4 *)(iVar4 + 8 + iVar9 * 8) = *(undefined4 *)(iVar3 + 8 + iVar9 * 8);
      *(undefined4 *)(iVar4 + 0xc + iVar9 * 8) = *(undefined4 *)(iVar3 + 0xc + iVar9 * 8);
    }
    pcVar6 = pcVar11;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    uVar7 = (*(code *)PTR_FUN_008ee4d0)(pcVar6 + (1 - (int)(pcVar11 + 1)),"eventName");
    *(undefined4 *)(*(int *)(param_1 + 8) + iVar8 * 8) = uVar7;
    pcVar6 = *(char **)(*(int *)(param_1 + 8) + iVar8 * 8);
    do {
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar6 = cVar2;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    *(undefined4 *)(*(int *)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 6) * 4) =
         *(undefined4 *)(*(int *)(param_1 + 8) + iVar8 * 8);
    puVar12 = puVar1;
    puVar13 = *(undefined4 **)(param_1 + 0xc);
    for (uVar10 = (uint)*(ushort *)(param_1 + 6); uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar13 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar13 = puVar13 + 1;
    }
    for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
      *(undefined1 *)puVar13 = *(undefined1 *)puVar12;
      puVar12 = (undefined4 *)((int)puVar12 + 1);
      puVar13 = (undefined4 *)((int)puVar13 + 1);
    }
    *(uint *)(*(int *)(param_1 + 8) + 4 + iVar8 * 8) = (uint)*(ushort *)(param_1 + 6);
    if (iVar3 != 0) {
      (*(code *)PTR_FUN_008ee4d4)(iVar3,iVar5 * 8);
    }
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)PTR_FUN_008ee4d4)(puVar1,iVar5 * 4);
    }
  }
  *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
  *param_3 = *(ushort *)(param_1 + 6) - 1;
  return 1;
}

