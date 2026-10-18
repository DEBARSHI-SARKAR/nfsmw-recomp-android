/* speed.exe 00606b60 FUN_00606b60; analysis pseudocode, not buildable source.
 * calls 00606a20 FUN_00606a20
 * calls 00613970 FUN_00613970
 */

void FUN_00606b60(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (param_2 <= iVar2) {
    iVar1 = FUN_00613970(param_1,*(undefined4 *)(param_1 + 0x1c),iVar2 * 8,iVar2 << 4,6);
    *(int *)(param_1 + 0x1c) = iVar1;
    *(int *)(param_1 + 0x20) = iVar2 * 2;
    *(int *)(param_1 + 0x18) = iVar1 + -0x30 + iVar2 * 0x10;
    FUN_00606a20();
    return;
  }
  param_2 = iVar2 + 5 + param_2;
  iVar2 = FUN_00613970(param_1,*(undefined4 *)(param_1 + 0x1c),iVar2 * 8,param_2 * 8,6);
  *(int *)(param_1 + 0x1c) = iVar2;
  *(int *)(param_1 + 0x20) = param_2;
  *(int *)(param_1 + 0x18) = iVar2 + -0x30 + param_2 * 8;
  FUN_00606a20();
  return;
}

