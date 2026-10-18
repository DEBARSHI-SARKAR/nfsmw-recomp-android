/* speed.exe 00480f90 FUN_00480f90; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 */

void FUN_00480f90(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_00911050;
  for (piVar1 = (int *)**(int **)(DAT_00911050 + 4);
      (piVar1 != *(int **)(DAT_00911050 + 4) && (piVar1[2] != param_1)); piVar1 = (int *)*piVar1) {
  }
  if ((piVar1 != *(int **)(DAT_00911050 + 4)) && (piVar1 != *(int **)(DAT_00911050 + 4))) {
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    FUN_005d0370(piVar1,0xc,0);
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -1;
  }
  return;
}

