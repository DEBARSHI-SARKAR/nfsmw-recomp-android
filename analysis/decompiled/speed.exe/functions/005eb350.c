/* speed.exe 005eb350 FUN_005eb350; analysis pseudocode, not buildable source.
 * calls 005e7ed0 FUN_005e7ed0
 */

void FUN_005eb350(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 - param_1 >> 2;
  iVar2 = iVar3 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar2) {
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + -1;
    FUN_005e7ed0(param_1,iVar2,iVar3,*(undefined4 *)(param_1 + -4 + iVar1));
  }
  return;
}

