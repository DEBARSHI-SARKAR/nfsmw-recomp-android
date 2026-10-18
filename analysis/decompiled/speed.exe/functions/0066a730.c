/* speed.exe 0066a730 FUN_0066a730; analysis pseudocode, not buildable source.
 */

int * __thiscall FUN_0066a730(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  param_1 = *(int *)(param_1 + 4) * 0x30 + param_1;
  iVar1 = *(int *)(param_1 + 0x10);
  if ((0 < iVar1) && (-1 < *(char *)(param_2 + 0x17))) {
    piVar2 = (int *)(param_1 + 0x20);
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        if (iVar3 == *(char *)(param_2 + 0x17)) {
          return piVar2;
        }
        piVar2 = (int *)(*piVar2 * 0x10 + piVar2[3]);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
  }
  return (int *)0x0;
}

