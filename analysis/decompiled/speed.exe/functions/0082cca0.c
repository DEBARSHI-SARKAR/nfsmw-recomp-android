/* speed.exe 0082cca0 FUN_0082cca0; analysis pseudocode, not buildable source.
 */

int FUN_0082cca0(uint param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if (((param_1 & 0x1000000 << ((byte)iVar2 & 0x1f)) != 0) && ((&DAT_009c2954)[iVar2] != 0)) {
      piVar3 = (int *)((&DAT_009c2954)[iVar2] + 0x44);
      iVar4 = 4;
      do {
        if (piVar3[-1] != 0) {
          iVar1 = iVar1 + 1;
        }
        if (*piVar3 != 0) {
          iVar1 = iVar1 + 1;
        }
        if (piVar3[1] != 0) {
          iVar1 = iVar1 + 1;
        }
        if (piVar3[2] != 0) {
          iVar1 = iVar1 + 1;
        }
        if (piVar3[3] != 0) {
          iVar1 = iVar1 + 1;
        }
        if (piVar3[4] != 0) {
          iVar1 = iVar1 + 1;
        }
        piVar3 = piVar3 + 6;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return iVar1;
}

