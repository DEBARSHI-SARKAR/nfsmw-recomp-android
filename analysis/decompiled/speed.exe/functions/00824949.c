/* speed.exe 00824949 FUN_00824949; analysis pseudocode, not buildable source.
 * calls 00824889 FUN_00824889
 */

int FUN_00824949(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  iVar2 = param_1;
  puVar1 = *(undefined4 **)(param_1 + 8);
  if ((puVar1 == (undefined4 *)0x0) ||
     (iVar3 = (*(code *)*puVar1)(puVar1,param_2,param_4,param_3,*(undefined1 *)(param_1 + 0x1a)),
     0 < iVar3)) {
    param_1 = param_3;
    local_8 = param_4;
    for (iVar4 = param_2; iVar3 = param_2, 0 < iVar4; iVar4 = iVar4 - iVar3) {
      if (*(int *)(iVar2 + 0x28) <= *(int *)(iVar2 + 0x24)) {
        *(undefined4 *)(iVar2 + 0x24) = 0;
      }
      iVar3 = *(int *)(iVar2 + 0x28) - *(int *)(iVar2 + 0x24);
      if (iVar4 < iVar3) {
        iVar3 = iVar4;
      }
      FUN_00824889(iVar2,iVar3,param_1,local_8);
      *(int *)(iVar2 + 0x24) = *(int *)(iVar2 + 0x24) + iVar3;
      param_1 = param_1 + iVar3 * 4;
      local_8 = local_8 + iVar3 * 4;
    }
  }
  return iVar3;
}

