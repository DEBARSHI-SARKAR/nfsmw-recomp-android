/* speed.exe 006da1d0 FUN_006da1d0; analysis pseudocode, not buildable source.
 * calls 006ced30 FUN_006ced30
 */

void FUN_006da1d0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_2;
  while( true ) {
    iVar3 = iVar4 * 2 + 2;
    if (param_3 <= iVar3) break;
    uVar2 = *(uint *)(param_1 + 4 + iVar3 * 8);
    uVar1 = *(uint *)(param_1 + -4 + iVar3 * 8);
    if ((uVar2 <= uVar1) &&
       ((uVar2 < uVar1 || (*(uint *)(param_1 + iVar3 * 8) < *(uint *)(param_1 + -8 + iVar3 * 8)))))
    {
      iVar3 = iVar4 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar4 * 8) = *(undefined4 *)(param_1 + iVar3 * 8);
    *(undefined4 *)(param_1 + 4 + iVar4 * 8) = *(undefined4 *)(param_1 + 4 + iVar3 * 8);
    iVar4 = iVar3;
  }
  if (iVar3 == param_3) {
    *(undefined4 *)(param_1 + iVar4 * 8) = *(undefined4 *)(param_1 + -8 + param_3 * 8);
    *(undefined4 *)(param_1 + 4 + iVar4 * 8) = *(undefined4 *)(param_1 + -4 + param_3 * 8);
    iVar4 = param_3 + -1;
  }
  FUN_006ced30(param_1,iVar4,param_2,param_4,param_5);
  return;
}

