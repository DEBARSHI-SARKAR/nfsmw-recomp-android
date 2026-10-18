/* speed.exe 00708e10 FUN_00708e10; analysis pseudocode, not buildable source.
 * calls 00706a90 FUN_00706a90
 * calls 00706ad0 FUN_00706ad0
 */

int * FUN_00708e10(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  uVar3 = param_4;
  iVar2 = param_3;
  piVar4 = (int *)FUN_00706a90(&param_3,param_2,param_3,param_4);
  iVar1 = *piVar4;
  if (iVar1 == iVar2) {
    *param_1 = iVar1;
    return param_1;
  }
  FUN_00706ad0(param_1,iVar1 + 4,iVar2,iVar1,uVar3);
  return param_1;
}

