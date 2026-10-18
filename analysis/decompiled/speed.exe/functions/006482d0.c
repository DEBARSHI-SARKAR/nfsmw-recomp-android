/* speed.exe 006482d0 FUN_006482d0; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 * calls 006469c0 FUN_006469c0
 * calls 006464d0 FUN_006464d0
 * calls 006351a0 FUN_006351a0
 * calls 00635440 FUN_00635440
 */

undefined4 * __thiscall FUN_006482d0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00879f4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 0x25) = 0;
  param_1[10] = 0;
  iVar1 = FUN_005d29d0(0xc,0);
  local_4 = 0;
  param_2 = (undefined4 *)iVar1;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uVar2 = FUN_006351a0();
    *(undefined4 *)(iVar1 + 4) = uVar2;
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  local_4 = 0xffffffff;
  param_1[4] = iVar1;
  puVar3 = (undefined4 *)FUN_005d29d0(0x2c,0);
  local_4 = 1;
  param_2 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_006469c0(1);
    *puVar3 = &PTR_FUN_008a7f50;
  }
  local_4 = 0xffffffff;
  *param_1 = puVar3;
  puVar3 = (undefined4 *)FUN_005d29d0(0x2c,0);
  local_4 = 2;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    param_2 = puVar3;
    FUN_006469c0(1);
    *puVar3 = &PTR_FUN_008a7f38;
  }
  param_1[1] = puVar3;
  iVar1 = *(int *)(param_1[4] + 4);
  local_4 = 0xffffffff;
  param_2 = puVar3;
  iVar4 = FUN_00635440(iVar1,*(undefined4 *)(iVar1 + 4),&param_2);
  FUN_006464d0(1);
  *(int *)(iVar1 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  puVar3 = (undefined4 *)FUN_005d29d0(0x2c,0);
  local_4 = 3;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    param_2 = puVar3;
    FUN_006469c0(2);
    *puVar3 = &PTR_FUN_008a7f40;
  }
  param_1[2] = puVar3;
  iVar1 = *(int *)(param_1[4] + 4);
  local_4 = 0xffffffff;
  param_2 = puVar3;
  iVar4 = FUN_00635440(iVar1,*(undefined4 *)(iVar1 + 4),&param_2);
  FUN_006464d0(1);
  *(int *)(iVar1 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  puVar3 = (undefined4 *)FUN_005d29d0(0x2c,0);
  local_4 = 4;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    param_2 = puVar3;
    FUN_006469c0(4);
    *puVar3 = &PTR_FUN_008a7f48;
  }
  param_1[3] = puVar3;
  iVar1 = *(int *)(param_1[4] + 4);
  local_4 = 0xffffffff;
  param_2 = puVar3;
  iVar4 = FUN_00635440(iVar1,*(undefined4 *)(iVar1 + 4),&param_2);
  FUN_006464d0(1);
  *(int *)(iVar1 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  ExceptionList = local_c;
  return param_1;
}

