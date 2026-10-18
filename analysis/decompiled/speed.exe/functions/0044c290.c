/* speed.exe 0044c290 FUN_0044c290; analysis pseudocode, not buildable source.
 * calls 0045f160 FUN_0045f160
 * calls 0045f150 FUN_0045f150
 * calls 00463ca0 FUN_00463ca0
 * calls 00466330 FUN_00466330
 */

void __fastcall FUN_0044c290(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)*param_1;
  while (piVar1 != param_1) {
    iVar3 = *piVar1;
    piVar2 = (int *)piVar1[1];
    *piVar2 = iVar3;
    *(int **)(iVar3 + 4) = piVar2;
    FUN_00463ca0(DAT_0090da80,piVar1);
    iVar3 = FUN_0045f160(DAT_0090da80);
    iVar4 = FUN_0045f150(DAT_0090da80);
    if (iVar4 == iVar3) {
      FUN_00466330(DAT_0090da80);
      DAT_0090da80 = 0;
      DAT_0090da84 = 0;
    }
    piVar1 = (int *)*param_1;
  }
  return;
}

