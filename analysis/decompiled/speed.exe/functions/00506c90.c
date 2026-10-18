/* speed.exe 00506c90 FUN_00506c90; analysis pseudocode, not buildable source.
 * calls 00466440 FUN_00466440
 */

void FUN_00506c90(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = (int *)(param_1 + 0x80);
  piVar2 = *(int **)(param_1 + 0x80);
  while (piVar2 != piVar1) {
    piVar2 = (int *)*piVar1;
    iVar3 = *piVar2;
    piVar4 = (int *)piVar2[1];
    *piVar4 = iVar3;
    *(int **)(iVar3 + 4) = piVar4;
    FUN_00466440(piVar2);
    piVar2 = (int *)*piVar1;
  }
  piVar1 = (int *)(param_1 + 0x88);
  piVar2 = *(int **)(param_1 + 0x88);
  while (piVar2 != piVar1) {
    piVar2 = (int *)*piVar1;
    iVar3 = *piVar2;
    piVar4 = (int *)piVar2[1];
    *piVar4 = iVar3;
    *(int **)(iVar3 + 4) = piVar4;
    FUN_00466440(piVar2);
    piVar2 = (int *)*piVar1;
  }
  *(undefined2 *)(param_1 + 0x7c) = 0;
  *(undefined2 *)(param_1 + 0x7e) = 0;
  return;
}

