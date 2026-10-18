/* speed.exe 005ca5d0 FUN_005ca5d0; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_005ca5d0(int *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  
  iVar2 = 0;
  iVar5 = *param_1 + -1;
  iVar7 = -1;
  if (-1 < iVar5) {
    do {
      iVar7 = iVar2 + iVar5 >> 1;
      pbVar6 = *(byte **)(param_1[2] + 4 + iVar7 * 8);
      pbVar3 = param_2;
      do {
        bVar1 = *pbVar3;
        bVar8 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_005ca625:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_005ca62a;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_005ca625;
        pbVar3 = pbVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_005ca62a:
      if (iVar4 < 1) {
        if (-1 < iVar4) {
          return iVar7;
        }
        iVar5 = iVar7 + -1;
      }
      else {
        iVar2 = iVar7 + 1;
      }
    } while (iVar2 <= iVar5);
  }
  pbVar6 = *(byte **)(param_1[2] + 4 + iVar7 * 8);
  do {
    bVar1 = *param_2;
    bVar8 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_005ca684:
      iVar2 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_005ca689;
    }
    if (bVar1 == 0) break;
    bVar1 = param_2[1];
    bVar8 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_005ca684;
    param_2 = param_2 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_005ca689:
  if (iVar2 == 0) {
    return iVar7;
  }
  return -1;
}

