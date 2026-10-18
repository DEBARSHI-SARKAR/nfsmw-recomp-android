/* speed.exe 00825636 FUN_00825636; analysis pseudocode, not buildable source.
 * calls 00825413 FUN_00825413
 */

int FUN_00825636(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_1;
  if (*(int *)(param_1 + 0x38) < param_2) {
    iVar4 = param_2 - *(int *)(param_1 + 0x38);
    param_1 = *(int *)(param_1 + 0x30);
    iVar3 = 0;
    iVar2 = 0;
    param_2 = 0;
    if (0 < iVar4) {
      do {
        iVar3 = *(int *)(iVar1 + 0x2c);
        if (param_1 < iVar3) break;
        if (param_1 < iVar3 * 2) {
          iVar2 = 0;
LAB_0082569f:
          iVar3 = *(int *)(iVar1 + 0x2c);
        }
        else {
          iVar2 = FUN_00825413(iVar3,*(undefined4 *)(iVar1 + 0x24));
          if (-1 < iVar2) goto LAB_0082569f;
          iVar3 = *(int *)(iVar1 + 0x2c) << 1;
        }
        param_2 = param_2 + iVar3;
        param_1 = param_1 - iVar3;
        if (iVar4 <= iVar3 + iVar2) {
          iVar4 = 0;
          break;
        }
        iVar4 = iVar4 - (iVar3 + iVar2);
      } while (0 < iVar4);
      iVar3 = param_2;
      if (0 < iVar2) {
        iVar3 = param_2 + *(int *)(iVar1 + 0x2c);
      }
      if (0 < iVar4) {
        if (param_1 < iVar4) {
          iVar3 = iVar3 + param_1;
        }
        else {
          iVar3 = iVar3 + iVar4;
        }
      }
    }
    if (*(int *)(iVar1 + 0x34) < iVar3) {
      return iVar3 - *(int *)(iVar1 + 0x34);
    }
  }
  return 0;
}

