/* speed.exe 0051e6e0 FUN_0051e6e0; analysis pseudocode, not buildable source.
 * calls 0059bd30 FUN_0059bd30
 * calls 00652ad0 _malloc
 * calls 00593880 FUN_00593880
 * calls 005a3f10 FUN_005a3f10
 * calls 005881c0 FUN_005881c0
 */

void __fastcall FUN_0051e6e0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086e524;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00593880();
  local_1c = (undefined4 *)0x0;
  local_20 = (undefined4 *)0x0;
  FUN_005a3f10(9,&local_1c,&local_20);
  puVar1 = _malloc(0x24);
  puVar2 = local_20;
  local_4 = 0;
  local_14 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    local_18 = local_1c;
    FUN_005881c0(0,0);
    *puVar1 = &PTR_FUN_0089c2e4;
    puVar1[6] = local_18;
    puVar1[7] = 0x3682a8cf;
    puVar1[8] = puVar2;
  }
  local_4 = 0xffffffff;
  FUN_0059bd30(puVar1);
  FUN_005a3f10(8,&local_1c,&local_20);
  puVar2 = _malloc(0x24);
  local_4 = 1;
  local_10 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    local_14 = local_20;
    local_18 = local_1c;
    FUN_005881c0(0,0);
    *puVar2 = &PTR_FUN_0089c2e4;
    puVar2[6] = local_18;
    puVar2[7] = 0x6de4810a;
    puVar2[8] = local_14;
  }
  local_4 = 0xffffffff;
  FUN_0059bd30(puVar2);
  FUN_005a3f10(2,&local_1c,&local_20);
  puVar2 = _malloc(0x24);
  local_4 = 2;
  local_10 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    local_18 = local_20;
    local_14 = local_1c;
    FUN_005881c0(0,0);
    *puVar2 = &PTR_FUN_0089c2e4;
    puVar2[6] = local_14;
    puVar2[7] = 0x89a9c941;
    puVar2[8] = local_18;
  }
  local_4 = 0xffffffff;
  FUN_0059bd30(puVar2);
  FUN_005a3f10(1,&local_1c,&local_20);
  puVar2 = _malloc(0x24);
  local_4 = 3;
  local_10 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    local_18 = local_20;
    local_14 = local_1c;
    FUN_005881c0(0,0);
    *puVar2 = &PTR_FUN_0089c2e4;
    puVar2[6] = local_14;
    puVar2[7] = 0x443b615f;
    puVar2[8] = local_18;
  }
  local_4 = 0xffffffff;
  FUN_0059bd30(puVar2);
  FUN_005a3f10(4,&local_1c,&local_20);
  puVar2 = _malloc(0x24);
  local_4 = 4;
  local_10 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    local_18 = local_20;
    local_14 = local_1c;
    FUN_005881c0(0,0);
    *puVar2 = &PTR_FUN_0089c2e4;
    puVar2[6] = local_14;
    puVar2[7] = 0xd3aa88da;
    puVar2[8] = local_18;
  }
  local_4 = 0xffffffff;
  FUN_0059bd30(puVar2);
  FUN_005a3f10(3,&local_1c,&local_20);
  puVar2 = _malloc(0x24);
  local_4 = 5;
  local_10 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    local_18 = local_20;
    local_14 = local_1c;
    FUN_005881c0(0,0);
    *puVar2 = &PTR_FUN_0089c2e4;
    puVar2[6] = local_14;
    puVar2[7] = 0xbdb16fea;
    puVar2[8] = local_18;
  }
  local_4 = 0xffffffff;
  FUN_0059bd30(puVar2);
  FUN_005a3f10(5,&local_1c,&local_20);
  puVar1 = _malloc(0x24);
  puVar2 = local_20;
  local_4 = 6;
  local_10 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    local_14 = local_1c;
    FUN_005881c0(0,0);
    puVar1[8] = puVar2;
    *puVar1 = &PTR_FUN_0089c2e4;
    puVar1[6] = local_14;
    puVar1[7] = 0xd320c6c3;
  }
  local_4 = 0xffffffff;
  FUN_0059bd30(puVar1);
  FUN_005a3f10(6,&local_1c,&local_20);
  puVar1 = _malloc(0x24);
  puVar2 = local_20;
  local_4 = 7;
  local_10 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    local_14 = local_1c;
    FUN_005881c0(0,0);
    puVar1[8] = puVar2;
    *puVar1 = &PTR_FUN_0089c2e4;
    puVar1[6] = local_14;
    puVar1[7] = 0xa83862af;
  }
  local_4 = 0xffffffff;
  FUN_0059bd30(puVar1);
  FUN_005a3f10(0,&local_1c,&local_20);
  puVar3 = _malloc(0x24);
  puVar1 = local_1c;
  puVar2 = local_20;
  local_4 = 8;
  local_10 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_005881c0(0,0);
    puVar3[6] = puVar1;
    *puVar3 = &PTR_FUN_0089c2e4;
    puVar3[7] = 0x80e9ccb2;
    puVar3[8] = puVar2;
  }
  local_4 = 0xffffffff;
  FUN_0059bd30(puVar3);
  (**(code **)(*(int *)(param_1 + 0x2c) + 8))();
  ExceptionList = pvStack_c;
  return;
}

