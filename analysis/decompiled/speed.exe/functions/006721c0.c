/* speed.exe 006721c0 FUN_006721c0; analysis pseudocode, not buildable source.
 */

int * __thiscall FUN_006721c0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *param_1) {
    iVar2 = param_1[1];
    do {
      iVar1 = iVar2;
      if (iVar2 < 0) {
        iVar1 = param_1[3] + iVar2;
      }
      if (param_1[iVar1 * 0x42 + 5] == param_2) {
        return param_1 + iVar1 * 0x42 + 4;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar3 < *param_1);
  }
  return (int *)0x0;
}

