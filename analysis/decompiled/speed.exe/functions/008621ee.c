/* speed.exe 008621ee FUN_008621ee; analysis pseudocode, not buildable source.
 */

void FUN_008621ee(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = &DAT_009c3e48;
  do {
    if (*piVar1 == param_1) {
      return;
    }
    piVar1 = piVar1 + 1;
  } while ((int)piVar1 < 0x9c3f48);
  iVar2 = 0;
  do {
    if ((&DAT_009c3e48)[iVar2] == 0) {
      (&DAT_009c3e48)[iVar2] = param_1;
      return;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x40);
  return;
}

