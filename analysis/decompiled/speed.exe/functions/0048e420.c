/* speed.exe 0048e420 FUN_0048e420; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_0048e420(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  
  iVar4 = 0;
  iVar5 = *(int *)(param_1 + 4) + -1;
  if (-1 < iVar5) {
    do {
      iVar7 = iVar4 + iVar5 >> 1;
      pbVar6 = *(byte **)(*(int *)(param_1 + 0x14) + iVar7 * 4);
      pbVar3 = param_2;
      do {
        bVar1 = *pbVar3;
        bVar8 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_0048e468:
          iVar2 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_0048e46d;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_0048e468;
        pbVar3 = pbVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar2 = 0;
LAB_0048e46d:
      if (iVar2 < 1) {
        if (-1 < iVar2) {
          return iVar7;
        }
        iVar5 = iVar7 + -1;
      }
      else {
        iVar4 = iVar7 + 1;
      }
    } while (iVar4 <= iVar5);
  }
  return -1;
}

