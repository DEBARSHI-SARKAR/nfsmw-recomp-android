/* speed.exe 0042cb60 FUN_0042cb60; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 */

void __thiscall FUN_0042cb60(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_3;
  if (param_3 != *(int **)(param_1 + 4)) {
    *(int *)param_3[1] = *param_3;
    *(int *)(*param_3 + 4) = param_3[1];
    FUN_005d0370(param_3,0xc,0);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  }
  *param_2 = iVar1;
  return;
}

