/* speed.exe 00506400 FUN_00506400; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 * calls 00502f80 FUN_00502f80
 */

void __fastcall FUN_00506400(int *param_1)

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
    FUN_00502f80();
    FUN_00463ca0(DAT_00916044,piVar1);
    piVar1 = (int *)*param_1;
  }
  return;
}

