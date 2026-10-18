/* speed.exe 00794530 FUN_00794530; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00790750 FUN_00790750
 */

void __fastcall FUN_00794530(int *param_1)

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
    FUN_00790750();
    thunk_FUN_007c7250(piVar1);
    piVar1 = (int *)*param_1;
  }
  return;
}

