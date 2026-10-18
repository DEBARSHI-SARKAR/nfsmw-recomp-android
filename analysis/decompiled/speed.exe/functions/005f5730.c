/* speed.exe 005f5730 FUN_005f5730; analysis pseudocode, not buildable source.
 * calls 005e8130 FUN_005e8130
 * calls 005e5330 FUN_005e5330
 * calls 005d0370 FUN_005d0370
 * calls 005f3f10 FUN_005f3f10
 * calls 005e6490 FUN_005e6490
 */

uint __thiscall FUN_005f5730(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_28;
  undefined4 *local_24;
  int local_20;
  undefined4 *local_1c;
  undefined1 local_18 [4];
  undefined4 *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00875b79;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_20 = param_1;
  local_14 = (undefined4 *)FUN_005e6490();
  local_10 = 0;
  local_4 = 0;
  FUN_005f3f10(param_2,local_18,0,0);
  puVar2 = local_14;
  puVar1 = (undefined4 *)*local_14;
  param_2 = 0;
  puVar5 = param_3 + local_10 * 0xc;
  puVar4 = param_3;
  for (; puVar1 != puVar2; puVar1 = (undefined4 *)*puVar1) {
    local_28 = puVar1[2];
    local_4._1_3_ = (uint3)((uint)local_4 >> 8);
    local_4._0_1_ = 1;
    local_1c = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      local_24 = (undefined4 *)0x0;
    }
    else {
      local_24 = puVar4;
      FUN_005e8130(&local_28,4);
      *puVar4 = &PTR_FUN_008a39f4;
      local_24 = puVar4;
    }
    local_4 = (uint)local_4._1_3_ << 8;
    iVar3 = FUN_005e5330(local_28);
    local_24[7] = puVar5;
    *(undefined2 *)((int)local_24 + 0x1a) = 0;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 0xc;
    puVar5 = puVar5 + iVar3 * 2;
    param_1 = local_20;
  }
  *(int *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x30) = 0x30;
  *(undefined4 **)(param_1 + 0x48) = param_3;
  puVar1 = (undefined4 *)*puVar2;
  *puVar2 = puVar2;
  local_4 = 0xffffffff;
  puVar2[1] = puVar2;
  while (puVar1 != puVar2) {
    puVar4 = (undefined4 *)*puVar1;
    FUN_005d0370(puVar1,0xc,0);
    puVar1 = puVar4;
  }
  FUN_005d0370(puVar2,0xc,0);
  ExceptionList = local_c;
  return (int)puVar5 + (0xf - (int)param_3) & 0xfffffff0;
}

