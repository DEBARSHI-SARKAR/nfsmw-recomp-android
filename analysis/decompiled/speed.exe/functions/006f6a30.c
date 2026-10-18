/* speed.exe 006f6a30 FUN_006f6a30; analysis pseudocode, not buildable source.
 */

void FUN_006f6a30(int *param_1,int param_2,int param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_3 - param_2 >> 4;
  if (0 < iVar2) {
    do {
      iVar1 = iVar2 / 2;
      if (*(uint *)(iVar1 * 0x10 + param_2) < *param_4) {
        param_2 = iVar1 * 0x10 + param_2 + 0x10;
        iVar1 = iVar2 + (-1 - iVar1);
      }
      iVar2 = iVar1;
    } while (0 < iVar1);
  }
  *param_1 = param_2;
  return;
}

