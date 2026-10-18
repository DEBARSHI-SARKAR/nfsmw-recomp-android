/* speed.exe 007faa07 FUN_007faa07; analysis pseudocode, not buildable source.
 */

int * __thiscall FUN_007faa07(int param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  *puVar1 = param_2;
  *(int **)(param_1 + 4) = param_2;
  param_2[1] = (int)puVar1;
  *param_2 = param_1;
  return param_2 + -2;
}

