/* speed.exe 0070b170 FUN_0070b170; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_0070b170(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 4))[1];
  if (piVar1 != *(int **)(param_1 + 4)) {
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    FUN_005d0370(piVar1,0xc,0);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  }
  return;
}

