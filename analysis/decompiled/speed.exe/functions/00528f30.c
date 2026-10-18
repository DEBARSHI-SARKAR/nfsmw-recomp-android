/* speed.exe 00528f30 FUN_00528f30; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00571e80 FUN_00571e80
 * calls 00525220 FUN_00525220
 * calls 00573960 FUN_00573960
 * calls 00586fa0 FUN_00586fa0
 */

void __fastcall FUN_00528f30(int *param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086eb20;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar2 = _malloc(0x4c);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00586fa0(0xf37af144,0xe76cd783,0);
    *puVar2 = &PTR_FUN_0089b8d0;
  }
  local_4 = 0xffffffff;
  FUN_00573960(puVar2);
  puVar2 = _malloc(0x4c);
  local_4 = 1;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00586fa0(0x8a006328,0xe8e24508,0);
    *puVar2 = &PTR_FUN_0089b8d8;
  }
  local_4 = 0xffffffff;
  FUN_00573960(puVar2);
  puVar2 = _malloc(0x4c);
  local_4 = 2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00586fa0(0x4df98fb2,0xd0cf6ee1,0);
    *puVar2 = &PTR_FUN_0089b8e0;
  }
  local_4 = 0xffffffff;
  FUN_00573960(puVar2);
  puVar2 = _malloc(0x4c);
  local_4 = 3;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00586fa0(0xd708efef,0xf760eabe,0);
    *puVar2 = &PTR_FUN_0089b8e8;
  }
  local_4 = 0xffffffff;
  FUN_00573960(puVar2);
  local_10 = _malloc(0x4c);
  local_4 = 4;
  if (local_10 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00586fa0(0xa04a7b26,0x4dc6db5,0);
    *local_10 = &PTR_FUN_0089b8f0;
    puVar2 = local_10;
  }
  local_4 = 0xffffffff;
  FUN_00573960(puVar2);
  if ((*(uint *)(DAT_0091cf90 + 300) >> 3 & 1) != 0) {
    local_10 = _malloc(0x4c);
    local_4 = 5;
    if (local_10 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_00586fa0(0x5a5e5137,0x7d347e05,0);
      *local_10 = &PTR_FUN_0089b900;
      puVar2 = local_10;
    }
    local_4 = 0xffffffff;
    FUN_00573960(puVar2);
  }
  if (((char)param_1[0x52] == '\0') && ((*(uint *)(DAT_0091cf90 + 300) >> 3 & 1) == 0)) {
    puVar2 = _malloc(0x4c);
    local_4 = 6;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_00586fa0(0xc52ccbf6,0xdcfb6b36,0);
      *puVar2 = &PTR_FUN_0089b8f8;
    }
    local_4 = 0xffffffff;
    FUN_00573960(puVar2);
    local_10 = _malloc(0x4c);
    local_4 = 7;
    if (local_10 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_00586fa0(0x51009e20,0x905101f,0);
      *local_10 = &PTR_FUN_0089b908;
      puVar2 = local_10;
    }
    local_4 = 0xffffffff;
    FUN_00573960(puVar2);
  }
  uVar1 = FUN_00571e80(param_1[4]);
  if (*(char *)((int)param_1 + 0x129) != '\0') {
    *(undefined1 *)(param_1 + 0x47) = 0;
    *(undefined1 *)((int)param_1 + 0x119) = 1;
    *(undefined1 *)((int)param_1 + 0x11a) = 0;
    param_1[0x44] = 0;
  }
  (**(code **)(param_1[0xb] + 0x40))(uVar1);
  if ((char)param_1[0x52] == '\0') {
    iVar3 = param_1[4];
    uVar5 = 0x4eca678c;
    uVar4 = 0xb71b576d;
  }
  else {
    iVar3 = param_1[4];
    uVar5 = 0x1d7bb6c9;
    uVar4 = 0x863404b5;
  }
  FUN_00525220(iVar3,uVar4,uVar5);
  (**(code **)(*param_1 + 0xc))();
  ExceptionList = local_10;
  return;
}

