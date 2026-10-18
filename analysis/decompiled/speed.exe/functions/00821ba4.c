/* speed.exe 00821ba4 FUN_00821ba4; analysis pseudocode, not buildable source.
 */

void FUN_00821ba4(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  param_2[1] = 0;
  *param_2 = iVar1;
  if (*param_1 == 0) {
    param_1[1] = (int)param_2;
  }
  else {
    *(int **)(*param_1 + 4) = param_2;
  }
  param_1[2] = param_1[2] + 1;
  *param_1 = (int)param_2;
  return;
}

