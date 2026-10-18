/* speed.exe 0044ef30 FUN_0044ef30; analysis pseudocode, not buildable source.
 * calls 00466440 FUN_00466440
 * calls 00463ca0 FUN_00463ca0
 */

void __thiscall FUN_0044ef30(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if ((DAT_009260d8 == 0) && (DAT_0090d9ec == '\0')) {
    for (piVar3 = *(int **)(param_1 + 0x44); piVar3 != (int *)(param_1 + 0x44);
        piVar3 = (int *)*piVar3) {
      if (piVar3[2] == param_2) {
        iVar1 = *piVar3;
        piVar2 = (int *)piVar3[1];
        *piVar2 = iVar1;
        *(int **)(iVar1 + 4) = piVar2;
        DAT_0090da94 = DAT_0090da94 + -1;
        FUN_00463ca0(DAT_0090db60,piVar3);
        break;
      }
    }
    piVar3 = *(int **)(param_1 + 0x3c);
    if (piVar3 != (int *)(param_1 + 0x3c)) {
      while (piVar3[2] != param_2) {
        piVar3 = (int *)*piVar3;
        if (piVar3 == (int *)(param_1 + 0x3c)) {
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

