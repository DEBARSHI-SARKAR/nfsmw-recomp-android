/* speed.exe 007652f0 FUN_007652f0; analysis pseudocode, not buildable source.
 */

void FUN_007652f0(void)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (DAT_009b3874 != 0) {
    iVar2 = 0;
    do {
      pbVar1 = (byte *)(iVar2 + 10 + DAT_009b38c0);
      *pbVar1 = *pbVar1 & 0x7f;
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x16;
    } while (uVar3 < DAT_009b3874);
  }
  uVar3 = 0;
  if (DAT_009b3880 != 0) {
    do {
      *(undefined1 *)(DAT_009b38c8 + 4 + uVar3 * 8) = 0xff;
      uVar3 = uVar3 + 1;
    } while (uVar3 < DAT_009b3880);
  }
  return;
}

