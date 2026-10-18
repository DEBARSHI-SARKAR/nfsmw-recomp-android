/* speed.exe 0065e4e0 FUN_0065e4e0; analysis pseudocode, not buildable source.
 * calls 00466440 FUN_00466440
 */

void __fastcall FUN_0065e4e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = (int *)*param_1;
  while (piVar1 != param_1) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    FUN_00466440(piVar1);
    piVar1 = (int *)*param_1;
  }
  return;
}

