/* speed.exe 0077a680 FUN_0077a680; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 */

void __thiscall FUN_0077a680(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    piVar2 = *(int **)(iVar1 + 4);
    piVar3 = (int *)*piVar2;
    if (piVar3 != piVar2) {
      while ((piVar3[2] != param_2 || (piVar3[3] != param_3))) {
        piVar3 = (int *)*piVar3;
        if (piVar3 == piVar2) {
          return;
        }
      }
      if (piVar3 != *(int **)(iVar1 + 4)) {
        *(int *)piVar3[1] = *piVar3;
        *(int *)(*piVar3 + 4) = piVar3[1];
        FUN_005d0370(piVar3,0x10,0);
        *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -1;
      }
    }
  }
  return;
}

