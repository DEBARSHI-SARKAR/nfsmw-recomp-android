/* speed.exe 00544b70 FUN_00544b70; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 */

void __fastcall FUN_00544b70(int *param_1)

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
    thunk_FUN_007c7250(piVar1);
    piVar1 = (int *)*param_1;
  }
  return;
}

