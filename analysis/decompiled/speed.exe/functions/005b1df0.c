/* speed.exe 005b1df0 FUN_005b1df0; analysis pseudocode, not buildable source.
 */

int * __thiscall FUN_005b1df0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xb0)) {
    piVar2 = *(int **)(param_1 + 0xac);
    do {
      if (*piVar2 == param_2) {
        return *(int **)(param_1 + 0xac) + iVar1 * 4;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 4;
    } while (iVar1 < *(int *)(param_1 + 0xb0));
  }
  return (int *)0x0;
}

