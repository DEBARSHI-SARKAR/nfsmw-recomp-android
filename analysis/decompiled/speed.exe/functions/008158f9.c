/* speed.exe 008158f9 FUN_008158f9; analysis pseudocode, not buildable source.
 */

void FUN_008158f9(short *param_1,short *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    iVar1 = ((int)*param_2 * (int)*param_1 + 0xf >> 5 & 0xffffU) * 0x10001;
    piVar2 = param_3 + 2;
    iVar3 = 8;
    do {
      piVar2[-2] = iVar1;
      piVar2[-1] = iVar1;
      *piVar2 = iVar1;
      piVar2[1] = iVar1;
      piVar2 = piVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    return;
  }
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_3 = 0;
    param_3 = param_3 + 1;
  }
  return;
}

