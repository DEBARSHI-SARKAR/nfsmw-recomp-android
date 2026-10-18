/* speed.exe 00754590 FUN_00754590; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 */

void __fastcall FUN_00754590(int *param_1)

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
    FUN_00463ca0(DAT_009b0a08,piVar1);
    piVar1 = (int *)*param_1;
  }
  return;
}

