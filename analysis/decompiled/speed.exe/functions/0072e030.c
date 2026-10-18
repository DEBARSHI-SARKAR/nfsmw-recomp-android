/* speed.exe 0072e030 FUN_0072e030; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 */

void FUN_0072e030(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = DAT_009a3b30;
  if ((int **)DAT_009a3b30 != &DAT_009a3b30) {
    while (piVar3[2] != param_1) {
      piVar3 = (int *)*piVar3;
      if ((int **)piVar3 == &DAT_009a3b30) {
        return;
      }
    }
    piVar2 = piVar3 + 4;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      iVar1 = *piVar3;
      piVar2 = (int *)piVar3[1];
      *piVar2 = iVar1;
      *(int **)(iVar1 + 4) = piVar2;
      FUN_00463ca0(DAT_009a3ac8,piVar3);
      DAT_009a2dcc = DAT_009a2dcc + -1;
    }
  }
  return;
}

