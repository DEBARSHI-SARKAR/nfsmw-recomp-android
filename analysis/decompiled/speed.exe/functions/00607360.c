/* speed.exe 00607360 FUN_00607360; analysis pseudocode, not buildable source.
 */

int FUN_00607360(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    piVar1 = (int *)(*(int *)(param_1 + 0x18) + 8);
    do {
      if (param_3 < piVar1[-1]) {
        return 0;
      }
      if ((param_3 < *piVar1) && (param_2 = param_2 + -1, param_2 == 0)) {
        return *(int *)(*(int *)(param_1 + 0x18) + iVar2 * 0xc) + 0x10;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 3;
    } while (iVar2 < *(int *)(param_1 + 0x38));
  }
  return 0;
}

