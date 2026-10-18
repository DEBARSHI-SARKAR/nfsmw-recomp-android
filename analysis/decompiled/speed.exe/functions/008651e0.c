/* speed.exe 008651e0 FUN_008651e0; analysis pseudocode, not buildable source.
 * calls 00865140 FUN_00865140
 */

int FUN_008651e0(int param_1,int param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  int local_4;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  local_4 = 0;
  if (0 < iVar2) {
    pbVar7 = (byte *)(*(int *)(param_1 + 0x14) + 0x10);
    do {
      pbVar4 = pbVar7;
      pbVar8 = param_3;
      if (*(int *)(pbVar7 + 0x18) != 0) {
        do {
          bVar1 = *pbVar4;
          bVar9 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_00865234:
            iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_00865239;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar9 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_00865234;
          pbVar4 = pbVar4 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_00865239:
        if (iVar5 == 0) {
          return 0;
        }
      }
      iVar3 = iVar3 + 1;
      pbVar7 = pbVar7 + 0x45c;
    } while (iVar3 < iVar2);
  }
  if (param_2 == -1) {
    iVar3 = 0;
    if (0 < iVar2) {
      piVar6 = (int *)(*(int *)(param_1 + 0x14) + 0x28);
      do {
        if (*piVar6 == 0) {
          return iVar3 * 0x45c + *(int *)(param_1 + 0x14);
        }
        iVar3 = iVar3 + 1;
        piVar6 = piVar6 + 0x117;
      } while (iVar3 < iVar2);
      return 0;
    }
  }
  else if ((-1 < param_2) && (param_2 < iVar2)) {
    if (*(int *)(*(int *)(param_1 + 0x14) + 0x28 + param_2 * 0x45c) != 0) {
      FUN_00865140(param_1,param_2);
    }
    local_4 = *(int *)(param_1 + 0x14) + param_2 * 0x45c;
  }
  return local_4;
}

