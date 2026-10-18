/* speed.exe 00456830 FUN_00456830; analysis pseudocode, not buildable source.
 */

int FUN_00456830(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2 - param_1 >> 3;
  if (0 < iVar2) {
    do {
      iVar1 = iVar2 / 2;
      if (*(uint *)(param_1 + iVar1 * 8) < *param_3) {
        param_1 = param_1 + 8 + iVar1 * 8;
        iVar1 = iVar2 + (-1 - iVar1);
      }
      iVar2 = iVar1;
    } while (0 < iVar1);
  }
  return param_1;
}

