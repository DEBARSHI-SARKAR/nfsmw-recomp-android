/* speed.exe 0081eae9 FUN_0081eae9; analysis pseudocode, not buildable source.
 */

void FUN_0081eae9(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (DAT_009c21fc[5] < 0) {
    piVar3 = (int *)DAT_009c21fc[1];
    do {
      if (*piVar3 == param_1 - *DAT_009c21fc) {
        DAT_009c21fc[5] = DAT_009c21fc[5] + 1;
        DAT_009c21fc[3] = DAT_009c21fc[3] + 8;
        for (; DAT_009c21fc[5] < iVar2; iVar2 = iVar2 + -1) {
          puVar1 = (undefined4 *)(DAT_009c21fc[1] + iVar2 * 8);
          *puVar1 = puVar1[-2];
          puVar1[1] = puVar1[-1];
        }
        return;
      }
      iVar2 = iVar2 + -1;
      piVar3 = piVar3 + -2;
    } while (DAT_009c21fc[5] < iVar2);
  }
  return;
}

