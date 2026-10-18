/* speed.exe 007f9c61 FUN_007f9c61; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007f9c61(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 4);
  *piVar1 = (int)param_1;
  *(int **)(param_2 + 4) = param_1;
  param_1[1] = (int)piVar1;
  *param_1 = param_2;
  return;
}

