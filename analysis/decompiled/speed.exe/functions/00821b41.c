/* speed.exe 00821b41 FUN_00821b41; analysis pseudocode, not buildable source.
 */

void FUN_00821b41(int param_1)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  
  bVar2 = *(byte *)(param_1 + 0x23);
  iVar1 = DAT_009c1fdc * 6;
  iVar6 = 0;
  if (bVar2 != 0) {
    psVar5 = (short *)(param_1 + 4);
    do {
      sVar3 = *psVar5;
      iVar4 = iVar6 + ((uint)bVar2 + iVar1) * 6;
      iVar6 = iVar6 + 1;
      psVar5 = psVar5 + 1;
      *(ushort *)(sVar3 * 0x90 + 0x1c + DAT_009c21f4) = (ushort)(byte)(&DAT_008c5caa)[iVar4] << 8;
    } while (iVar6 < (int)(uint)*(byte *)(param_1 + 0x23));
  }
  return;
}

