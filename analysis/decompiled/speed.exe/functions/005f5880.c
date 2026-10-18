/* speed.exe 005f5880 FUN_005f5880; analysis pseudocode, not buildable source.
 * calls 005e5330 FUN_005e5330
 * calls 005d0370 FUN_005d0370
 * calls 005ef450 FUN_005ef450
 * calls 005e6490 FUN_005e6490
 * calls 005f4210 FUN_005f4210
 */

uint __thiscall FUN_005f5880(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [4];
  undefined4 *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00875ba9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_20 = param_1;
  local_14 = (undefined4 *)FUN_005e6490();
  local_10 = 0;
  local_4 = 0;
  FUN_005f4210(param_2,local_18,0,0);
  puVar3 = local_14;
  puVar1 = (undefined4 *)*local_14;
  param_2 = 0;
  iVar6 = local_10 * 0x80 + param_3;
  iVar5 = param_3;
  for (; puVar1 != puVar3; puVar1 = (undefined4 *)*puVar1) {
    local_28 = puVar1[2];
    local_4._1_3_ = (uint3)((uint)local_4 >> 8);
    local_4._0_1_ = 1;
    local_1c = iVar5;
    if (iVar5 == 0) {
      local_24 = 0;
    }
    else {
      local_24 = iVar5;
      local_24 = FUN_005ef450(&local_28);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    iVar4 = FUN_005e5330(local_28);
    *(int *)(local_24 + 0x1c) = iVar6;
    *(undefined2 *)(local_24 + 0x1a) = 0;
    param_2 = param_2 + 1;
    iVar5 = iVar5 + 0x80;
    iVar6 = iVar6 + iVar4 * 8;
    param_1 = local_20;
  }
  *(int *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0x80;
  *(int *)(param_1 + 0x3c) = param_3;
  puVar1 = (undefined4 *)*puVar3;
  *puVar3 = puVar3;
  local_4 = 0xffffffff;
  puVar3[1] = puVar3;
  while (puVar1 != puVar3) {
    puVar2 = (undefined4 *)*puVar1;
    FUN_005d0370(puVar1,0xc,0);
    puVar1 = puVar2;
  }
  FUN_005d0370(puVar3,0xc,0);
  ExceptionList = local_c;
  return (iVar6 - param_3) + 0xfU & 0xfffffff0;
}

