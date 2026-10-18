/* speed.exe 004e0760 FUN_004e0760; analysis pseudocode, not buildable source.
 */

int FUN_004e0760(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_00913f30;
  do {
    if (*piVar2 == param_1) {
      return iVar1;
    }
    piVar2 = piVar2 + 3;
    iVar1 = iVar1 + 1;
  } while ((int)piVar2 < 0x914260);
  return -1;
}

