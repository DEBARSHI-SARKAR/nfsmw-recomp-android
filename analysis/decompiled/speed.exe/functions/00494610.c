/* speed.exe 00494610 FUN_00494610; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_00494610(int param_1,byte *param_2,int *param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  
  *param_3 = 0;
  iVar4 = *(ushort *)(param_1 + 6) - 1;
  if (iVar4 < 0) {
    return 0xffffffff;
  }
  do {
    iVar6 = *param_3 + iVar4 >> 1;
    pbVar5 = *(byte **)(*(int *)(param_1 + 8) + iVar6 * 8);
    pbVar2 = param_2;
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00494674:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00494679;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00494674;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00494679:
    if (iVar3 < 1) {
      if (-1 < iVar3) {
        return *(undefined4 *)(*(int *)(param_1 + 8) + 4 + iVar6 * 8);
      }
      iVar4 = iVar6 + -1;
    }
    else {
      *param_3 = iVar6 + 1;
    }
    if (iVar4 < *param_3) {
      return 0xffffffff;
    }
  } while( true );
}

