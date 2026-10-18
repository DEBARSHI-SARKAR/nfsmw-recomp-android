/* speed.exe 0081dfe1 FUN_0081dfe1; analysis pseudocode, not buildable source.
 */

int FUN_0081dfe1(int param_1)

{
  int iVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (DAT_009c2188 != '\0') {
    iVar1 = (&DAT_009c1f44)[param_1];
    uVar3 = (uint)*(byte *)(iVar1 + 0x62);
    if (uVar3 != 0) {
      psVar2 = (short *)(iVar1 + 0x34);
      do {
        if (iVar4 <= *psVar2) {
          iVar4 = (int)*psVar2;
        }
        psVar2 = psVar2 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    return (*(short *)(iVar1 + 0x40) - iVar4) + -1;
  }
  return -10;
}

