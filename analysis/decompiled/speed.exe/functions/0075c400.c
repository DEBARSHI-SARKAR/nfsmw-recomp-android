/* speed.exe 0075c400 FUN_0075c400; analysis pseudocode, not buildable source.
 * calls 00759140 FUN_00759140
 * calls 00652b00 thunk_FUN_007c7250
 */

void __fastcall FUN_0075c400(int *param_1)

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
    FUN_00759140();
    thunk_FUN_007c7250(piVar1);
    piVar1 = (int *)*param_1;
  }
  return;
}

