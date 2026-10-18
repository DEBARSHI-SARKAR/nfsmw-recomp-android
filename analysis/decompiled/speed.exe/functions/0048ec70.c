/* speed.exe 0048ec70 FUN_0048ec70; analysis pseudocode, not buildable source.
 */

undefined4 * FUN_0048ec70(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  
  iVar4 = 1;
  iVar5 = 1;
  do {
    iVar7 = iVar4 + iVar5 >> 1;
    pbVar6 = (byte *)(&DAT_008ee540)[iVar7 * 3];
    pbVar2 = param_1;
    do {
      bVar1 = *pbVar2;
      bVar8 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_0048ecb7:
        iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_0048ecbc;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar8 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_0048ecb7;
      pbVar2 = pbVar2 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_0048ecbc:
    if (iVar3 < 1) {
      if (-1 < iVar3) {
        return &DAT_008ee540 + iVar7 * 3;
      }
      iVar5 = iVar7 + -1;
    }
    else {
      iVar4 = iVar7 + 1;
    }
    if (iVar5 < iVar4) {
      return (undefined4 *)0x0;
    }
  } while( true );
}

