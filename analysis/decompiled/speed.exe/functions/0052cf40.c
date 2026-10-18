/* speed.exe 0052cf40 FUN_0052cf40; analysis pseudocode, not buildable source.
 * calls 0059bd30 FUN_0059bd30
 * calls 00652ad0 _malloc
 * calls 00525220 FUN_00525220
 * calls 00593880 FUN_00593880
 * calls 005881c0 FUN_005881c0
 * calls 005903b0 FUN_005903b0
 */

void __fastcall FUN_0052cf40(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086f470;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00593880();
  uVar2 = FUN_005903b0(1,*(undefined1 *)(param_1 + 0xe0));
  iVar3 = FUN_005903b0(1,*(char *)(param_1 + 0xe0) == '\0');
  puVar4 = _malloc(0x24);
  local_4 = 0;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_005881c0(0,0);
    *puVar4 = &PTR_FUN_0089c2c0;
    puVar4[6] = 0x676b575c;
    puVar4[7] = uVar2 & 0xffff;
    puVar4[8] = iVar3 + uVar2 & 0xffff;
  }
  local_4 = 0xffffffff;
  FUN_0059bd30(puVar4);
  uVar2 = FUN_005903b0(2,*(undefined1 *)(param_1 + 0xe0));
  iVar3 = FUN_005903b0(2,*(char *)(param_1 + 0xe0) == '\0');
  puVar4 = _malloc(0x24);
  local_4 = 1;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_005881c0(0,0);
    *puVar4 = &PTR_FUN_0089c2c0;
    puVar4[6] = 0x81705ac5;
    puVar4[7] = uVar2 & 0xffff;
    puVar4[8] = iVar3 + uVar2 & 0xffff;
  }
  local_4 = 0xffffffff;
  FUN_0059bd30(puVar4);
  uVar2 = FUN_005903b0(4,*(undefined1 *)(param_1 + 0xe0));
  iVar3 = FUN_005903b0(4,*(char *)(param_1 + 0xe0) == '\0');
  puVar4 = _malloc(0x24);
  local_4 = 2;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_005881c0(0,0);
    *puVar4 = &PTR_FUN_0089c2c0;
    puVar4[6] = 0xe9d1cb6;
    puVar4[7] = uVar2 & 0xffff;
    puVar4[8] = iVar3 + uVar2 & 0xffff;
  }
  local_4 = 0xffffffff;
  FUN_0059bd30(puVar4);
  uVar2 = FUN_005903b0(8,*(undefined1 *)(param_1 + 0xe0));
  iVar3 = FUN_005903b0(8,*(char *)(param_1 + 0xe0) == '\0');
  puVar4 = _malloc(0x24);
  local_4 = 3;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_005881c0(0,0);
    *puVar4 = &PTR_FUN_0089c2c0;
    puVar4[6] = 0x1536b1fa;
    puVar4[7] = uVar2 & 0xffff;
    puVar4[8] = iVar3 + uVar2 & 0xffff;
  }
  local_4 = 0xffffffff;
  FUN_0059bd30(puVar4);
  uVar2 = FUN_005903b0(0x10,*(undefined1 *)(param_1 + 0xe0));
  iVar3 = FUN_005903b0(0x10,*(char *)(param_1 + 0xe0) == '\0');
  puVar4 = _malloc(0x24);
  local_4 = 4;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_005881c0(0,0);
    *puVar4 = &PTR_FUN_0089c2c0;
    puVar4[6] = 0xaaf89ab3;
    puVar4[7] = uVar2 & 0xffff;
    puVar4[8] = iVar3 + uVar2 & 0xffff;
  }
  local_4 = 0xffffffff;
  FUN_0059bd30(puVar4);
  uVar2 = FUN_005903b0(0x20,*(undefined1 *)(param_1 + 0xe0));
  iVar3 = FUN_005903b0(0x20,*(char *)(param_1 + 0xe0) == '\0');
  puVar4 = _malloc(0x24);
  local_4 = 5;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_005881c0(0,0);
    *puVar4 = &PTR_FUN_0089c2c0;
    puVar4[6] = 0x706c0f0d;
    puVar4[7] = uVar2 & 0xffff;
    puVar4[8] = iVar3 + uVar2 & 0xffff;
  }
  local_4 = 0xffffffff;
  FUN_0059bd30(puVar4);
  uVar2 = FUN_005903b0(0x40,*(undefined1 *)(param_1 + 0xe0));
  iVar3 = FUN_005903b0(0x40,*(char *)(param_1 + 0xe0) == '\0');
  puVar4 = _malloc(0x24);
  local_4 = 6;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_005881c0(0,0);
    *puVar4 = &PTR_FUN_0089c2c0;
    puVar4[6] = 0xad524b30;
    puVar4[7] = uVar2 & 0xffff;
    puVar4[8] = iVar3 + uVar2 & 0xffff;
  }
  local_4 = 0xffffffff;
  FUN_0059bd30(puVar4);
  uVar2 = FUN_005903b0(0x80,*(undefined1 *)(param_1 + 0xe0));
  uVar1 = FUN_005903b0(0x80,*(char *)(param_1 + 0xe0) == '\0');
  puVar4 = _malloc(0x24);
  local_4 = 7;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_005881c0(0,0);
    *puVar4 = &PTR_FUN_0089c2c0;
    puVar4[6] = 0xf9748b0b;
    puVar4[7] = uVar2 & 0xffff;
    puVar4[8] = uVar1 + uVar2 & 0xffff;
  }
  local_4 = 0xffffffff;
  FUN_0059bd30(puVar4);
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x9d974df3,
               (-(uint)(*(char *)(param_1 + 0xe0) != '\0') & 0x58148383) + 0x6a1151d1);
  (**(code **)(*(int *)(param_1 + 0x2c) + 8))();
  ExceptionList = pvStack_c;
  return;
}

