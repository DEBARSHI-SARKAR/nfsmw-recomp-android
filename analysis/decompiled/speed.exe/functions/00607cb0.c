/* speed.exe 00607cb0 FUN_00607cb0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00607cb0(int param_1,int param_2)

{
  int *piVar1;
  
  if ((0 < param_2) && (param_2 <= *(int *)(param_1 + 0x1c))) {
    return (int *)(*(int *)(param_1 + 0xc) + -8 + param_2 * 8);
  }
  piVar1 = (int *)(*(int *)(param_1 + 0x10) +
                  ((uint)((float)param_2 + _DAT_0089096c) %
                  ((1 << (*(byte *)(param_1 + 7) & 0x1f)) - 1U | 1)) * 0x14);
  while ((*piVar1 != 3 || ((float)piVar1[1] != (float)param_2))) {
    piVar1 = (int *)piVar1[4];
    if (piVar1 == (int *)0x0) {
      return &DAT_008a3c5c;
    }
  }
  return piVar1 + 2;
}

