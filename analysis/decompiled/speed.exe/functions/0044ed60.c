/* speed.exe 0044ed60 FUN_0044ed60; analysis pseudocode, not buildable source.
 * calls 00466440 FUN_00466440
 */

void __thiscall FUN_0044ed60(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if ((DAT_009260d8 == 0) && (DAT_0090d9ec == '\0')) {
    piVar3 = *(int **)(param_1 + 0x24);
    if (piVar3 != (int *)(param_1 + 0x24)) {
      while (piVar3[2] != param_2) {
        piVar3 = (int *)*piVar3;
        if (piVar3 == (int *)(param_1 + 0x24)) {
          return;
        }
      }
      iVar1 = *piVar3;
      piVar2 = (int *)piVar3[1];
      *piVar2 = iVar1;
      *(int **)(iVar1 + 4) = piVar2;
      FUN_00466440(piVar3);
    }
  }
  return;
}

