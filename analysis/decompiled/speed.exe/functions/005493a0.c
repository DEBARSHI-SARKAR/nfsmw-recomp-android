/* speed.exe 005493a0 FUN_005493a0; analysis pseudocode, not buildable source.
 * calls 0056bc10 FUN_0056bc10
 * calls 00586290 FUN_00586290
 * calls 005252d0 FUN_005252d0
 */

undefined4 * __thiscall FUN_005493a0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008701b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  *param_1 = &PTR_FUN_0089b220;
  iVar1 = *(int *)(param_2 + 8);
  uVar2 = param_1[4];
  param_1[0xb] = iVar1;
  local_4 = 0;
  uVar3 = FUN_0056bc10(0x54eefec2,iVar1 + 1);
  FUN_005252d0(uVar2,0xb244cf71,uVar3);
  ExceptionList = local_c;
  return param_1;
}

