/* speed.exe 00628f10 FUN_00628f10; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00628f10(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  iVar2 = param_1[3];
  if (iVar2 + -1 < iVar1 + 1) {
    param_1[1] = 0;
  }
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  if (iVar2 < iVar1 + 1) {
    iVar1 = param_1[2];
    param_1[2] = iVar1 + 1;
    if (iVar2 + -1 < iVar1 + 1) {
      param_1[2] = 0;
    }
    *param_1 = iVar2;
  }
  param_1 = param_1 + param_1[1] * 3 + 4;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return;
}

