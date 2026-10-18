/* speed.exe 0072e7c0 FUN_0072e7c0; analysis pseudocode, not buildable source.
 * calls 0045fba0 FUN_0045fba0
 */

int __thiscall FUN_0072e7c0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0088063b;
  local_c = ExceptionList;
  iVar1 = param_1 + 8;
  ExceptionList = &local_c;
  *(int *)iVar1 = iVar1;
  *(int *)(param_1 + 0xc) = iVar1;
  uVar3 = *param_2;
  uVar2 = param_2[2];
  *(undefined4 *)(param_1 + 0x24) = param_2[1];
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  local_4 = 0;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  FUN_0045fba0(param_1 + 0x30,param_1 + 0x40,param_2);
  ExceptionList = local_c;
  return param_1;
}

