/* speed.exe 00607d40 FUN_00607d40; analysis pseudocode, not buildable source.
 */

int * FUN_00607d40(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int *)(param_1 + 0x10) +
                  ((1 << (*(byte *)(param_1 + 7) & 0x1f)) - 1U & *(uint *)(param_2 + 8)) * 0x14);
  while ((*piVar1 != 4 || (piVar1[1] != param_2))) {
    piVar1 = (int *)piVar1[4];
    if (piVar1 == (int *)0x0) {
      return &DAT_008a3c5c;
    }
  }
  return piVar1 + 2;
}

