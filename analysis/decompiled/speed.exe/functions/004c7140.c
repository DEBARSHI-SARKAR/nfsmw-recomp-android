/* speed.exe 004c7140 FUN_004c7140; analysis pseudocode, not buildable source.
 */

int FUN_004c7140(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_2 - param_1) / 0xc;
  if (0 < iVar2) {
    do {
      iVar1 = iVar2 / 2;
      if (*(int *)(param_1 + iVar1 * 0xc) <= *param_3) {
        param_1 = param_1 + iVar1 * 0xc + 0xc;
        iVar1 = iVar2 + (-1 - iVar1);
      }
      iVar2 = iVar1;
    } while (0 < iVar1);
  }
  return param_1;
}

