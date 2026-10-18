/* speed.exe 00865540 FUN_00865540; analysis pseudocode, not buildable source.
 * calls 00865140 FUN_00865140
 * calls 008650a0 FUN_008650a0
 * calls 00866cc0 GetTickCount
 */

void FUN_00865540(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  DWORD DVar3;
  char *pcVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  byte *pbVar9;
  char *pcVar10;
  undefined4 unaff_ESI;
  byte *pbVar11;
  char *pcVar12;
  undefined4 unaff_EDI;
  bool bVar13;
  int iVar14;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar14 = 0;
  iVar5 = param_2;
  if (0 < iVar2) {
    pbVar9 = (byte *)(*(int *)(param_1 + 0x14) + 0x10);
    iVar7 = *(int *)(param_1 + 0x14);
    do {
      iVar5 = iVar7;
      pbVar6 = (byte *)(param_2 + 8);
      pbVar11 = pbVar9;
      do {
        bVar1 = *pbVar6;
        bVar13 = bVar1 < *pbVar11;
        if (bVar1 != *pbVar11) {
LAB_008655a4:
          iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
          goto LAB_008655a9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar13 = bVar1 < pbVar11[1];
        if (bVar1 != pbVar11[1]) goto LAB_008655a4;
        pbVar6 = pbVar6 + 2;
        pbVar11 = pbVar11 + 2;
      } while (bVar1 != 0);
      iVar7 = 0;
LAB_008655a9:
      if (iVar7 == 0) break;
      iVar14 = iVar14 + 1;
      pbVar9 = pbVar9 + 0x45c;
      iVar7 = iVar5 + 0x45c;
    } while (iVar14 < iVar2);
  }
  if (iVar2 <= iVar14) {
    return;
  }
  *(undefined4 *)(iVar5 + 8) = *param_3;
  *(undefined4 *)(iVar5 + 0xc) = param_3[1];
  iVar2 = (iVar5 - *(int *)(param_1 + 0x14)) / 0x45c;
  DVar3 = GetTickCount();
  *(int *)(iVar5 + 0x454) = *(int *)(iVar5 + 0x454) + param_4;
  *(int *)(iVar5 + 0x450) = *(int *)(iVar5 + 0x450) + 1;
  if (*(int *)(iVar5 + 4) != param_3[1]) {
    *(undefined4 *)(iVar5 + 4) = param_3[1];
    *(undefined4 *)(iVar5 + 0x450) = 0;
  }
  pcVar4 = (char *)(param_2 + 4);
  iVar14 = 3;
  bVar13 = true;
  pcVar10 = pcVar4;
  pcVar12 = (char *)&DAT_0090d4f8;
  do {
    if (iVar14 == 0) break;
    iVar14 = iVar14 + -1;
    bVar13 = *pcVar10 == *pcVar12;
    pcVar10 = pcVar10 + 1;
    pcVar12 = pcVar12 + 1;
  } while (bVar13);
  if (bVar13) {
    *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(param_2 + 0x18);
    *(uint *)(iVar5 + 0x458) = (uint)*(byte *)(param_2 + 7);
    if ((*(char *)(param_2 + 0x1c) != '\0') && (*(int *)(iVar5 + 0x28) == 1)) {
      FUN_008650a0();
      return;
    }
  }
  else {
    iVar14 = 3;
    bVar13 = true;
    pcVar10 = pcVar4;
    pcVar12 = &DAT_0090d500;
    do {
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      bVar13 = *pcVar10 == *pcVar12;
      pcVar10 = pcVar10 + 1;
      pcVar12 = pcVar12 + 1;
    } while (bVar13);
    if (bVar13) {
      if (*(int *)(iVar5 + 0x28) == 1) {
        FUN_008650a0();
        *(uint *)(iVar5 + 0x458) = (uint)*(byte *)(param_2 + 7);
      }
      uVar8 = *(uint *)(iVar5 + 0x24) & 0xfffffff5;
      *(uint *)(iVar5 + 0x24) = uVar8;
      if ((*(int *)(iVar5 + 0x458) != 0) && (*(int *)(param_1 + 0x44) != 0)) {
        *(uint *)(iVar5 + 0x24) = uVar8 | 4;
      }
      *(DWORD *)(iVar5 + 0x444) = DVar3;
      return;
    }
    iVar14 = 3;
    bVar13 = true;
    pcVar10 = pcVar4;
    pcVar12 = (char *)&DAT_0090d504;
    do {
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      bVar13 = *pcVar10 == *pcVar12;
      pcVar10 = pcVar10 + 1;
      pcVar12 = pcVar12 + 1;
    } while (bVar13);
    if (bVar13) {
      if (*(int *)(iVar5 + 0x28) == 1) {
        FUN_008650a0();
      }
      *(uint *)(iVar5 + 0x24) = *(uint *)(iVar5 + 0x24) | 0xe;
      *(DWORD *)(iVar5 + 0x444) = DVar3;
      if ((*(uint *)(param_1 + 0x1c) & 1 << ((byte)iVar2 & 0x1f)) != 0) {
        (**(code **)(param_1 + 4))(iVar5 + 0x10,param_2,*(undefined4 *)(param_1 + 0xc));
        return;
      }
    }
    else {
      iVar5 = 3;
      bVar13 = true;
      pcVar10 = &DAT_0090d4fc;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar13 = *pcVar4 == *pcVar10;
        pcVar4 = pcVar4 + 1;
        pcVar10 = pcVar10 + 1;
      } while (bVar13);
      if (bVar13) {
        FUN_00865140(param_1,iVar2,unaff_EDI,unaff_ESI,unaff_EBP,unaff_EBX);
      }
    }
  }
  return;
}

