/* speed.exe 005e3e60 FUN_005e3e60; analysis pseudocode, not buildable source.
 * calls 00460d20 FUN_00460d20
 */

int __thiscall FUN_005e3e60(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = *(int *)(param_1 + 0x20) + -1;
  if (-1 < iVar4) {
    do {
      iVar3 = iVar4 + iVar2 >> 1;
      iVar1 = FUN_00460d20(param_2,*(undefined4 *)(iVar3 * 0x40 + 4 + *(int *)(param_1 + 0x24)));
      if (iVar1 < 1) {
        if (-1 < iVar1) {
          return iVar3 * 0x40 + *(int *)(param_1 + 0x24);
        }
        iVar4 = iVar3 + -1;
      }
      else {
        iVar2 = iVar3 + 1;
      }
    } while (iVar2 <= iVar4);
  }
  return 0;
}

