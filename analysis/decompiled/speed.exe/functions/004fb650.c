/* speed.exe 004fb650 FUN_004fb650; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fb650(int param_1)

{
  short *psVar1;
  int *piVar2;
  
  piVar2 = &DAT_00914b60;
  do {
    if (*piVar2 == param_1) {
      psVar1 = (short *)((int)piVar2 + 6);
      *psVar1 = *psVar1 + -1;
      if (*psVar1 == 0) {
        *piVar2 = 0;
        _DAT_00915fb8 = _DAT_00915fb8 + -1;
      }
      return;
    }
    piVar2 = piVar2 + 2;
  } while ((int)piVar2 < 0x915110);
  return;
}

