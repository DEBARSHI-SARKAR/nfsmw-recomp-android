/* speed.exe 007fa9ee FUN_007fa9ee; analysis pseudocode, not buildable source.
 */

int * __thiscall FUN_007fa9ee(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = (int)param_2;
  *(int **)(iVar1 + 4) = param_2;
  param_2[1] = (int)param_1;
  *param_2 = iVar1;
  return param_2 + -2;
}

