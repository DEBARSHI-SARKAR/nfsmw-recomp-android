/* speed.exe 00831304 FUN_00831304; analysis pseudocode, not buildable source.
 */

int FUN_00831304(int *param_1)

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

