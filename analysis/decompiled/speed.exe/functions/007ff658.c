/* speed.exe 007ff658 FUN_007ff658; analysis pseudocode, not buildable source.
 * calls 007fee29 FUN_007fee29
 */

void FUN_007ff658(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x44);
  iVar4 = *(int *)(param_1 + 0x40);
  iVar2 = param_3[1];
  iVar3 = *param_3;
  FUN_007fee29(param_1,*(int *)(param_1 + 0x78) + param_2,iVar4 + 0x20,iVar4,iVar1,param_3[6],iVar3,
               iVar3,iVar2);
  iVar2 = iVar2 >> 1;
  iVar3 = iVar3 >> 1;
  iVar1 = iVar1 >> 1;
  iVar4 = iVar4 >> 1;
  FUN_007fee29(param_1,*(int *)(param_1 + 0x7c) + param_2,iVar4 + 0x10,iVar4,iVar1,param_3[7],iVar3,
               iVar3,iVar2);
  FUN_007fee29(param_1,*(int *)(param_1 + 0x80) + param_2,iVar4 + 0x10,iVar4,iVar1,param_3[8],iVar3,
               iVar3,iVar2);
  return;
}

