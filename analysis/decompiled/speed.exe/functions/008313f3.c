/* speed.exe 008313f3 FUN_008313f3; analysis pseudocode, not buildable source.
 */

int FUN_008313f3(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  if (-1 < iVar1) {
    if (*param_1 == 0) {
      return -6;
    }
    if (iVar1 != *(int *)(*param_1 + 8)) {
      *param_1 = 0;
      param_1[1] = -3;
      return -3;
    }
    iVar1 = 0;
  }
  return iVar1;
}

