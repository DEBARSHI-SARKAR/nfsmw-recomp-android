/* speed.exe 00515e90 FUN_00515e90; analysis pseudocode, not buildable source.
 * calls 005b8610 FUN_005b8610
 * calls 00591d90 FUN_00591d90
 * calls 00572070 FUN_00572070
 */

void FUN_00515e90(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  FUN_00572070(param_1);
  iVar1 = FUN_00591d90(param_1);
  if (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 0x94);
    iVar2 = 0;
    if (iVar4 != 0) {
      piVar3 = *(int **)(iVar1 + 0x90);
      do {
        if (*(int *)(*piVar3 + 0x10) == param_2) {
          iVar2 = *piVar3;
        }
        piVar3 = piVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      if (iVar2 != 0) {
        FUN_005b8610(iVar2,1);
      }
    }
  }
  return;
}

