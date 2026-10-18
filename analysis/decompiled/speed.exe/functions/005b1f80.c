/* speed.exe 005b1f80 FUN_005b1f80; analysis pseudocode, not buildable source.
 */

int * __thiscall FUN_005b1f80(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  if (*(uint *)(param_1 + 0x84) != 0) {
    piVar2 = *(int **)(param_1 + 0x88);
    do {
      if (*piVar2 == param_2) {
        return *(int **)(param_1 + 0x88) + uVar1 * 3;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (uVar1 < *(uint *)(param_1 + 0x84));
  }
  return (int *)0x0;
}

