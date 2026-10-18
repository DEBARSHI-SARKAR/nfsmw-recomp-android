/* speed.exe 005eb1f0 FUN_005eb1f0; analysis pseudocode, not buildable source.
 * calls 005e7e30 FUN_005e7e30
 */

void FUN_005eb1f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 - param_1 >> 2;
  iVar2 = iVar3 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar2) {
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + -1;
    FUN_005e7e30(param_1,iVar2,iVar3,*(undefined4 *)(param_1 + -4 + iVar1));
  }
  return;
}

