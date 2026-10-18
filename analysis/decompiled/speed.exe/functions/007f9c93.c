/* speed.exe 007f9c93 FUN_007f9c93; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007f9c93(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = (int)param_2;
  *(int **)(iVar1 + 4) = param_2;
  param_2[1] = (int)param_1;
  *param_2 = iVar1;
  return;
}

