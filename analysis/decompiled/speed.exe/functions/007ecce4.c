/* speed.exe 007ecce4 FUN_007ecce4; analysis pseudocode, not buildable source.
 */

void FUN_007ecce4(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = &DAT_009bb10c;
  do {
    if (*piVar1 == param_1) {
      return;
    }
    piVar1 = piVar1 + 1;
  } while ((int)piVar1 < 0x9bb12c);
  iVar2 = 0;
  do {
    if ((&DAT_009bb10c)[iVar2] == 0) {
      (&DAT_009bb10c)[iVar2] = param_1;
      return;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  return;
}

