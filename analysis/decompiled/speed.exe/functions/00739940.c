/* speed.exe 00739940 FUN_00739940; analysis pseudocode, not buildable source.
 */

int FUN_00739940(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(DAT_009b09d8 + 0x50);
  do {
    if (*piVar2 == param_1) {
      return iVar1 * 0xd0 + DAT_009b09d8;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0x34;
  } while (iVar1 < 0x54);
  return 0;
}

