/* speed.exe 0061fd00 FUN_0061fd00; analysis pseudocode, not buildable source.
 * calls 0061c9c0 FUN_0061c9c0
 * calls 0061fb40 FUN_0061fb40
 */

void FUN_0061fd00(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  
  iVar2 = FUN_0061fb40(&param_1);
  piVar1 = *(int **)(iVar2 + 8);
  piVar3 = *(int **)(iVar2 + 4);
  bVar4 = piVar3 == piVar1;
  if (!bVar4) {
    do {
      if (*piVar3 == param_2) break;
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar1);
    bVar4 = piVar3 == piVar1;
  }
  if (bVar4) {
    FUN_0061c9c0(&param_2);
  }
  return;
}

