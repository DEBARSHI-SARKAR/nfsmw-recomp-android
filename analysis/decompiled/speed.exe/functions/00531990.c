/* speed.exe 00531990 FUN_00531990; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 * calls 00652ad0 _malloc
 * calls 005b8550 FUN_005b8550
 * calls 005881f0 FUN_005881f0
 * calls 00588100 FUN_00588100
 * calls 00516af0 FUN_00516af0
 */

void __thiscall FUN_00531990(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086f664;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_00573140("MESSAGE_GROUP_%d",param_2);
  uVar2 = FUN_00573140("NEW_MESSAGE_ICON_%d",param_2);
  uVar3 = FUN_00573140("MESSAGE_TEXT_%d",param_2);
  if ((((*(int *)(param_1 + 0x10) == 0) ||
       (iVar4 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar4 == 0)) ||
      (param_2 = FUN_005b8550(uVar1), param_2 == 0)) || (*(int *)(param_2 + 0x18) != 5)) {
    param_2 = 0;
  }
  if (((*(int *)(param_1 + 0x10) == 0) ||
      (iVar4 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar4 == 0)) ||
     ((iVar4 = FUN_005b8550(uVar2), iVar4 == 0 || (*(int *)(iVar4 + 0x18) != 1)))) {
    iVar4 = 0;
  }
  if (((*(int *)(param_1 + 0x10) == 0) ||
      (iVar5 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar5 == 0)) ||
     ((iVar5 = FUN_005b8550(uVar3), iVar5 == 0 || (*(int *)(iVar5 + 0x18) != 2)))) {
    iVar5 = 0;
  }
  puVar6 = _malloc(0x1c);
  local_4 = 0;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    FUN_00588100(param_2);
    *puVar6 = &PTR_FUN_0089c414;
    puVar6[5] = iVar4;
    puVar6[6] = iVar5;
  }
  local_4 = 0xffffffff;
  FUN_005881f0(puVar6);
  ExceptionList = local_c;
  return;
}

