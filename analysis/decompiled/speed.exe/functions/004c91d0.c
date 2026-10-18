/* speed.exe 004c91d0 FUN_004c91d0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 */

void __thiscall FUN_004c91d0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 4);
  piVar2 = (int *)*piVar1;
  while (piVar3 = piVar2, piVar3 != piVar1) {
    if (((piVar3[10] == *(int *)(param_2 + 0x20)) && (piVar3[4] == *(int *)(param_2 + 8))) &&
       (piVar3[5] == *(int *)(param_2 + 0xc))) {
      piVar2 = (int *)*piVar3;
      if (piVar3 != *(int **)(param_1 + 4)) {
        *(int **)piVar3[1] = piVar2;
        *(int *)(*piVar3 + 4) = piVar3[1];
        FUN_005d0370(piVar3,0x30,0);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      }
    }
    else {
      piVar2 = (int *)*piVar3;
    }
  }
  return;
}

