/* speed.exe 0044d700 FUN_0044d700; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 */

void __fastcall FUN_0044d700(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = (int *)*param_1;
  while (piVar1 != param_1) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    DAT_0090da94 = DAT_0090da94 + -1;
    FUN_00463ca0(DAT_0090db60,piVar1);
    piVar1 = (int *)*param_1;
  }
  return;
}

