/* speed.exe 0046e710 FUN_0046e710; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_0046e710(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 0;
  if (0 < (int)param_1[5]) {
    piVar2 = (int *)*param_1;
    while (param_2 != *piVar2) {
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 5;
      if ((int)param_1[5] <= iVar3) {
        return iVar1;
      }
    }
    piVar2 = (int *)*param_1 + iVar3 * 5;
    if (piVar2 != (int *)0x0) {
      iVar1 = piVar2[2];
    }
  }
  return iVar1;
}

