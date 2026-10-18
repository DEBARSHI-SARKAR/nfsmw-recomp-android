/* speed.exe 0064ebf0 FUN_0064ebf0; analysis pseudocode, not buildable source.
 * calls 0064ebf0 FUN_0064ebf0
 */

int FUN_0064ebf0(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == 0) {
    iVar2 = 0;
    if ((param_2 != 0) && (iVar2 = 0x14, param_2 < 0xfc)) {
      return *(int *)(param_1 + 0x2564 + *(int *)(param_1 + 0x2dcc) * 4) + 3 +
             *(int *)(param_1 + 0xd44 + param_2 * 4) * 2;
    }
  }
  else {
    iVar1 = FUN_0064ebf0(param_1,param_2,param_3 - 1);
    iVar2 = iVar1;
    if (*(int *)(param_1 + 0x100 + (*(int *)(param_1 + 0x2dcc) + param_3) * 4) != 0) {
      iVar2 = FUN_0064ebf0(param_1,param_2 - (param_2 / param_3) * param_3,param_3 - 1);
      iVar2 = iVar2 + *(int *)(param_1 + 0x2564 + (*(int *)(param_1 + 0x2dcc) + param_3) * 4) *
                      (param_2 / param_3);
      if (iVar1 <= iVar2) {
        iVar2 = iVar1;
      }
    }
  }
  return iVar2;
}

