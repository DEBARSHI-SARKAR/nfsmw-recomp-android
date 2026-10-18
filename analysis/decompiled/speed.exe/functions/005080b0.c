/* speed.exe 005080b0 FUN_005080b0; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 * calls 00410d30 thunk_FUN_00501480
 */

void __fastcall FUN_005080b0(int *param_1)

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
    thunk_FUN_00501480();
    FUN_00463ca0(DAT_00915fb4,piVar1);
    piVar1 = (int *)*param_1;
  }
  return;
}

