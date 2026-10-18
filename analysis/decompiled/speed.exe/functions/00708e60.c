/* speed.exe 00708e60 FUN_00708e60; analysis pseudocode, not buildable source.
 * calls 00706b20 FUN_00706b20
 * calls 00706b60 FUN_00706b60
 */

int * FUN_00708e60(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  uVar3 = param_4;
  iVar2 = param_3;
  piVar4 = (int *)FUN_00706b20(&param_3,param_2,param_3,param_4);
  iVar1 = *piVar4;
  if (iVar1 == iVar2) {
    *param_1 = iVar1;
    return param_1;
  }
  FUN_00706b60(param_1,iVar1 + 4,iVar2,iVar1,uVar3);
  return param_1;
}

