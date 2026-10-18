/* speed.exe 007653b0 FUN_007653b0; analysis pseudocode, not buildable source.
 */

void FUN_007653b0(void)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (DAT_009b3874 != 0) {
    iVar2 = 0;
    do {
      pbVar1 = (byte *)(iVar2 + 0xb + DAT_009b38c0);
      *pbVar1 = *pbVar1 & 0xcf;
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x16;
    } while (uVar3 < DAT_009b3874);
  }
  return;
}

