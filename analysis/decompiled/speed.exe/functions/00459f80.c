/* speed.exe 00459f80 FUN_00459f80; analysis pseudocode, not buildable source.
 * calls 00459110 FUN_00459110
 * calls 00455520 FUN_00455520
 */

void FUN_00459f80(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_2 + 4);
  piVar3 = (int *)*piVar1;
  if (piVar3 != piVar1) {
    do {
      if (piVar3[2] == param_1) break;
      piVar3 = (int *)*piVar3;
    } while (piVar3 != piVar1);
    if (piVar3 != piVar1) {
      return;
    }
  }
  iVar2 = *(int *)(param_2 + 4);
  iVar4 = FUN_00455520(iVar2,*(undefined4 *)(iVar2 + 4),&param_1);
  FUN_00459110(1);
  *(int *)(iVar2 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  return;
}

