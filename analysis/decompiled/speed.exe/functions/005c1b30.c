/* speed.exe 005c1b30 FUN_005c1b30; analysis pseudocode, not buildable source.
 * calls 005b1560 FUN_005b1560
 * calls 005c17e0 FUN_005c17e0
 */

void __thiscall FUN_005c1b30(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined **local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00874548;
  ExceptionList = &local_c;
  iVar1 = *(int *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x34) = param_3;
  for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    FUN_005c17e0(iVar1,param_3);
  }
  if (0 < *(int *)(param_1 + 0xb0)) {
    *(undefined4 *)(param_1 + 0xb4) = 0;
    local_14 = &PTR_FUN_008a2cb8;
    local_4 = 0;
    local_10 = param_1;
    FUN_005b1560(&local_14);
  }
  ExceptionList = local_c;
  return;
}

