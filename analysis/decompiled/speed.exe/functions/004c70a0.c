/* speed.exe 004c70a0 FUN_004c70a0; analysis pseudocode, not buildable source.
 */

int FUN_004c70a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2 - param_1 >> 3;
  if (0 < iVar2) {
    do {
      iVar1 = iVar2 / 2;
      if (*(int *)(param_1 + 4 + iVar1 * 8) <= *(int *)(param_3 + 4)) {
        param_1 = param_1 + 8 + iVar1 * 8;
        iVar1 = iVar2 + (-1 - iVar1);
      }
      iVar2 = iVar1;
    } while (0 < iVar1);
  }
  return param_1;
}

