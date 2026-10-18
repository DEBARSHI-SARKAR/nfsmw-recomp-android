/* speed.exe 00410d30 thunk_FUN_00501480; analysis pseudocode, not buildable source.
 */

void __fastcall thunk_FUN_00501480(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *extraout_EDX;
  
  if ((param_1[2] != 0) || (param_1[3] != 0)) {
    iVar1 = *param_1;
    piVar2 = (int *)param_1[1];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  if (param_1[4] != 0) {
    FUN_004fb650(param_1[4]);
    param_1 = extraout_EDX;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}

