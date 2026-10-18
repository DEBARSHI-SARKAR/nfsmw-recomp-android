/* speed.exe 007651a0 FUN_007651a0; analysis pseudocode, not buildable source.
 */

void FUN_007651a0(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  DAT_009b3829 = 0;
  if (0 < DAT_009b3874) {
    iVar2 = 0;
    do {
      pbVar1 = (byte *)(iVar2 + 0xb + DAT_009b38c0);
      *pbVar1 = *pbVar1 & 0x7f;
      pbVar1 = (byte *)(iVar2 + 10 + DAT_009b38c0);
      *pbVar1 = *pbVar1 & 0xfb;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x16;
    } while (iVar3 < DAT_009b3874);
  }
  return;
}

