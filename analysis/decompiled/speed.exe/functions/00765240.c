/* speed.exe 00765240 FUN_00765240; analysis pseudocode, not buildable source.
 */

void FUN_00765240(int param_1)

{
  ushort *puVar1;
  byte *pbVar2;
  short sVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x78) == 3) {
    iVar4 = *(int *)(param_1 + 0x2e0);
    iVar7 = 0;
    if (0 < iVar4) {
      do {
        pbVar2 = (byte *)((uint)*(ushort *)(*(int *)(param_1 + 0x2e4) + iVar7 * 2) * 0x16 + 0xb +
                         DAT_009b38c0);
        *pbVar2 = *pbVar2 | 0x80;
        if (iVar7 < iVar4 + -1) {
          puVar1 = (ushort *)(*(int *)(param_1 + 0x2e4) + iVar7 * 2);
          psVar6 = (short *)((uint)*puVar1 * 0x16 + DAT_009b38c0);
          psVar5 = (short *)((uint)puVar1[1] * 0x16 + DAT_009b38c0);
          sVar3 = *psVar6;
          if ((sVar3 == *psVar5) || (sVar3 == psVar5[1])) {
            *(byte *)(psVar6 + 5) = *(byte *)(psVar6 + 5) & 0xfb;
          }
          else {
            *(byte *)(psVar6 + 5) = *(byte *)(psVar6 + 5) | 4;
          }
          if ((*psVar5 == sVar3) || (*psVar5 == psVar6[1])) {
            *(byte *)(psVar5 + 5) = *(byte *)(psVar5 + 5) | 4;
          }
          else {
            *(byte *)(psVar5 + 5) = *(byte *)(psVar5 + 5) & 0xfb;
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar4);
    }
  }
  return;
}

