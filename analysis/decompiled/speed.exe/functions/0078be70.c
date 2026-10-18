/* speed.exe 0078be70 FUN_0078be70; analysis pseudocode, not buildable source.
 * calls 00460d20 FUN_00460d20
 * calls 0083e3b0 FUN_0083e3b0
 */

int __thiscall FUN_0078be70(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != 0) {
    iVar3 = FUN_0083e3b0(*(undefined4 *)(param_1 + 0x10),param_2);
    if ((iVar3 != 0) && (iVar1 = FUN_00460d20(iVar3 + 4,param_1 + 0x2c), iVar1 == 0)) {
      iVar3 = FUN_0083e3b0(*(undefined4 *)(param_1 + 0x10),0);
      return iVar3;
    }
    return iVar3;
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    do {
      iVar1 = FUN_0083e3b0(*(undefined4 *)(param_1 + 0x10),iVar3);
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = FUN_00460d20(iVar1 + 4,param_1 + 0x2c);
      if (iVar2 == 0) {
        return iVar1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x40));
  }
  return 0;
}

