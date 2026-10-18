/* speed.exe 006dadf0 FUN_006dadf0; analysis pseudocode, not buildable source.
 * calls 006d99c0 FUN_006d99c0
 */

void __fastcall FUN_006dadf0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  param_1 = (int *)*param_1;
  if (param_1[6] != 0) {
    FUN_006d99c0(param_1[6]);
    iVar1 = *param_1;
    param_1[6] = 0;
    piVar2 = (int *)param_1[1];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
  }
  return;
}

