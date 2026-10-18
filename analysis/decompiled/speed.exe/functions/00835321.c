/* speed.exe 00835321 FUN_00835321; analysis pseudocode, not buildable source.
 */

int * FUN_00835321(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = &DAT_009c3218;
  uVar2 = 0;
  do {
    if (*piVar1 == param_1) {
      return piVar1;
    }
    uVar2 = uVar2 + 0x1c;
    piVar1 = piVar1 + 7;
  } while (uVar2 < 0x380);
  return (int *)0x0;
}

