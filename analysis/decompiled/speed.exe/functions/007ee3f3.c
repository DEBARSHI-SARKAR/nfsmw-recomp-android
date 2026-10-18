/* speed.exe 007ee3f3 FUN_007ee3f3; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007ee3f3(int *param_1,int param_2)

{
  int iVar1;
  
  if (*param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *param_1 + 8;
  }
  *(int *)(param_2 + 8) = iVar1;
  param_1[2] = param_1[2] + 1;
  *param_1 = param_2;
  if (*(int *)(param_2 + 8) == 0) {
    param_1[1] = param_2;
  }
  return;
}

