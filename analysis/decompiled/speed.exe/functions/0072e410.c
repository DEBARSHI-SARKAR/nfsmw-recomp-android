/* speed.exe 0072e410 FUN_0072e410; analysis pseudocode, not buildable source.
 * calls 0072d470 FUN_0072d470
 * calls 00463ca0 FUN_00463ca0
 */

void __fastcall FUN_0072e410(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  while (piVar1 != param_1) {
    piVar2 = (int *)piVar1[1];
    iVar3 = *piVar1;
    *piVar2 = iVar3;
    *(int **)(iVar3 + 4) = piVar2;
    FUN_0072d470();
    FUN_00463ca0(DAT_009a39f4,piVar1);
    piVar1 = (int *)*param_1;
  }
  return;
}

