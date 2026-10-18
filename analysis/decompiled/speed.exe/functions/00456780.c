/* speed.exe 00456780 FUN_00456780; analysis pseudocode, not buildable source.
 */

int FUN_00456780(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2 - param_1 >> 4;
  if (0 < iVar2) {
    do {
      iVar1 = iVar2 / 2;
      if (*(uint *)(iVar1 * 0x10 + param_1) < *param_3) {
        param_1 = iVar1 * 0x10 + param_1 + 0x10;
        iVar1 = iVar2 + (-1 - iVar1);
      }
      iVar2 = iVar1;
    } while (0 < iVar1);
  }
  return param_1;
}

