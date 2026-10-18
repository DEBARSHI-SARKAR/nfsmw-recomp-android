/* speed.exe 00822494 FUN_00822494; analysis pseudocode, not buildable source.
 */

int FUN_00822494(int param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  
  sVar1 = *(short *)(param_1 * 0x90 + DAT_009c21f4 + 0x28);
  if (sVar1 != -1) {
    iVar2 = 1;
    psVar3 = (short *)(sVar1 * 0x90 + DAT_009c21f4 + 6);
    do {
      if (*psVar3 == param_1) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      psVar3 = psVar3 + 1;
    } while (iVar2 < 6);
  }
  return 0;
}

