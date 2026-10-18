/* speed.exe 00605d60 FUN_00605d60; analysis pseudocode, not buildable source.
 * calls 00605950 FUN_00605950
 */

int FUN_00605d60(int param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 < 1) {
    piVar1 = (int *)FUN_00605950();
  }
  else {
    piVar1 = (int *)(*(int *)(param_1 + 0xc) + -8 + param_2 * 8);
    if (*(int **)(param_1 + 8) <= piVar1) {
      return 0;
    }
  }
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == 2) {
      return piVar1[1];
    }
    if (*piVar1 == 7) {
      return piVar1[1] + 0x10;
    }
  }
  return 0;
}

