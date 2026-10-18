/* speed.exe 0081dab6 FUN_0081dab6; analysis pseudocode, not buildable source.
 */

int FUN_0081dab6(int param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  short sVar4;
  
  iVar1 = -1;
  iVar3 = 0;
  sVar4 = -1;
  if (0 < param_2) {
    psVar2 = (short *)(param_1 * 0x90 + 4 + DAT_009c21f4);
    do {
      if (sVar4 < *psVar2) {
        iVar1 = iVar3;
        sVar4 = *psVar2;
      }
      iVar3 = iVar3 + 1;
      psVar2 = psVar2 + 1;
    } while (iVar3 < param_2);
  }
  return iVar1;
}

