/* speed.exe 00459fd0 FUN_00459fd0; analysis pseudocode, not buildable source.
 * calls 00455550 FUN_00455550
 * calls 004591b0 FUN_004591b0
 */

void FUN_00459fd0(int param_1,int param_2)

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
  iVar4 = FUN_00455550(iVar2,*(undefined4 *)(iVar2 + 4),&param_1);
  FUN_004591b0(1);
  *(int *)(iVar2 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  return;
}

