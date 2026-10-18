/* speed.exe 008314e4 FUN_008314e4; analysis pseudocode, not buildable source.
 */

int FUN_008314e4(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  if (-1 < iVar1) {
    if (*param_1 == 0) {
      return -6;
    }
    if (iVar1 != *(int *)(*param_1 + 0xc)) {
      *param_1 = 0;
      param_1[1] = -3;
      return -3;
    }
    iVar1 = 0;
  }
  return iVar1;
}

