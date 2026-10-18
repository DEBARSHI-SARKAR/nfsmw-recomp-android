/* speed.exe 0081962e FUN_0081962e; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0081962e(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  param_2[1] = 0;
  *param_2 = iVar1;
  if (*param_1 != 0) {
    *(int **)(*param_1 + 4) = param_2;
  }
  *param_1 = (int)param_2;
  return;
}

