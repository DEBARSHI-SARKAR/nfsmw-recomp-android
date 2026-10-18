/* speed.exe 007f9c49 FUN_007f9c49; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007f9c49(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_2 = (int)param_1;
  *(int **)(iVar1 + 4) = param_1;
  param_1[1] = (int)param_2;
  *param_1 = iVar1;
  return;
}

