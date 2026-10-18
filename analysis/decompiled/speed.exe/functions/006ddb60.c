/* speed.exe 006ddb60 FUN_006ddb60; analysis pseudocode, not buildable source.
 * calls 006da1d0 FUN_006da1d0
 */

void FUN_006ddb60(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_2 - param_1 >> 3;
  iVar4 = iVar3 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar4) {
    iVar1 = iVar4 * 8;
    iVar2 = iVar4 * 8;
    iVar4 = iVar4 + -1;
    FUN_006da1d0(param_1,iVar4,iVar3,*(undefined4 *)(param_1 + -8 + iVar2),
                 *(undefined4 *)(param_1 + -4 + iVar1));
  }
  return;
}

