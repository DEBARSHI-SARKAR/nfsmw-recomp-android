/* speed.exe 0067ddc0 FUN_0067ddc0; analysis pseudocode, not buildable source.
 */

void FUN_0067ddc0(int *param_1,int param_2,int param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_3 - param_2 >> 3;
  if (0 < iVar2) {
    do {
      iVar1 = iVar2 / 2;
      if (*(uint *)(param_2 + iVar1 * 8) <= *param_4) {
        param_2 = param_2 + 8 + iVar1 * 8;
        iVar1 = iVar2 + (-1 - iVar1);
      }
      iVar2 = iVar1;
    } while (0 < iVar1);
  }
  *param_1 = param_2;
  return;
}

