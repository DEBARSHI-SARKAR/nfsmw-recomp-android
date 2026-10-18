/* speed.exe 004fbac0 FUN_004fbac0; analysis pseudocode, not buildable source.
 */

int * __thiscall FUN_004fbac0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 0x80);
  piVar2 = (int *)0x0;
  do {
    if ((piVar1 == (int *)0x0) || (*(char *)(param_1 + 0x1b) == 0)) {
      return (int *)0x0;
    }
    piVar3 = piVar1;
    if (piVar2 != (int *)0x0) {
      if (piVar2 < piVar1) {
        return (int *)0x0;
      }
      if (piVar1 + (*(char *)(param_1 + 0x1b) * 5 + -5) * 4 <= piVar2) {
        return (int *)0x0;
      }
      piVar3 = piVar2 + 0x14;
    }
    if (piVar3 == (int *)0x0) {
      return (int *)0x0;
    }
    piVar2 = piVar3;
  } while (*piVar3 != param_2);
  return piVar3;
}

