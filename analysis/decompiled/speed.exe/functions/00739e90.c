/* speed.exe 00739e90 FUN_00739e90; analysis pseudocode, not buildable source.
 */

int FUN_00739e90(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_4 == 0) {
    return 0;
  }
  iVar1 = 0;
  if (0 < param_2) {
    do {
      if (*(int *)(param_1 + iVar1 * 4) == param_4) {
        return 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  if (param_2 < param_3) {
    *(int *)(param_1 + param_2 * 4) = param_4;
    param_2 = 1;
  }
  return param_2;
}

