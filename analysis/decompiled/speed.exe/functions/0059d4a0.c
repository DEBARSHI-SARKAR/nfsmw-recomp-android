/* speed.exe 0059d4a0 FUN_0059d4a0; analysis pseudocode, not buildable source.
 * calls 00466440 FUN_00466440
 */

void __fastcall FUN_0059d4a0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = param_1 + 2;
  *param_1 = &PTR_FUN_008a1e80;
  piVar2 = (int *)*piVar1;
  while (piVar2 != piVar1) {
    iVar3 = *piVar2;
    piVar4 = (int *)piVar2[1];
    *piVar4 = iVar3;
    *(int **)(iVar3 + 4) = piVar4;
    FUN_00466440(piVar2);
    piVar2 = (int *)*piVar1;
  }
  return;
}

