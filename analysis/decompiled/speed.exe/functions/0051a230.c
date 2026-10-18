/* speed.exe 0051a230 FUN_0051a230; analysis pseudocode, not buildable source.
 * calls 00591d90 FUN_00591d90
 * calls 00572070 FUN_00572070
 */

void FUN_0051a230(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  FUN_00572070(param_1);
  iVar1 = FUN_00591d90(param_1);
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 0x94);
    iVar4 = 0;
    if (iVar3 != 0) {
      piVar2 = *(int **)(iVar1 + 0x90);
      do {
        if (*(int *)(*piVar2 + 0x10) == param_2) {
          iVar4 = *piVar2;
        }
        piVar2 = piVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      if (iVar4 != 0) {
        *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfbffffff;
      }
    }
  }
  return;
}

