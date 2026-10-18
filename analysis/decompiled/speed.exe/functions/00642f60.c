/* speed.exe 00642f60 FUN_00642f60; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 */

undefined4 __thiscall FUN_00642f60(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = (int *)(param_1 + 8);
  do {
    for (piVar1 = (int *)**(int **)(*piVar3 + 4); piVar1 != *(int **)(*piVar3 + 4);
        piVar1 = (int *)*piVar1) {
      if (piVar1[6] == param_2) {
        iVar2 = *(int *)(param_1 + 8 + iVar2 * 4);
        if (piVar1 != *(int **)(iVar2 + 4)) {
          *(int *)piVar1[1] = *piVar1;
          *(int *)(*piVar1 + 4) = piVar1[1];
          FUN_005d0370(piVar1,0x1c,0);
          piVar3 = (int *)(iVar2 + 8);
          *piVar3 = *piVar3 + -1;
        }
        return 1;
      }
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 < 8);
  return 0;
}

