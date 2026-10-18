/* speed.exe 00529c10 FUN_00529c10; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00525220 FUN_00525220
 * calls 005b8550 FUN_005b8550
 * calls 00510530 FUN_00510530
 * calls 0056d500 FUN_0056d500
 * calls 00589300 FUN_00589300
 * calls 006e8df0 FUN_006e8df0
 * calls 00516af0 FUN_00516af0
 * calls 00588570 FUN_00588570
 */

void __fastcall FUN_00529c10(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086edd0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x10) != 0) {
    ExceptionList = &local_c;
    iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10));
    if (iVar2 != 0) {
      iVar2 = FUN_005b8550(0x8007b4c);
      if (((iVar2 != 0) && (*(int *)(iVar2 + 0x18) == 1)) && (*(int *)(iVar2 + 0x24) != 0x4df98fb2))
      {
        *(undefined4 *)(iVar2 + 0x24) = 0x4df98fb2;
        *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x2400000;
      }
    }
  }
  if (*(char *)(param_1 + 0x124) == '\0') {
    uVar4 = 0x1cce8c2;
  }
  else {
    uVar4 = 0x3936d9f8;
  }
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x42adb44c,uVar4);
  cVar1 = FUN_00510530();
  if (cVar1 != '\0') {
    puVar3 = _malloc(0x5c);
    local_4 = 0;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00589300(1);
      *puVar3 = &PTR_FUN_0089bea4;
    }
    local_4 = 0xffffffff;
    FUN_00588570(puVar3,1);
  }
  iVar2 = FUN_006e8df0();
  if (iVar2 != 1) {
    puVar3 = _malloc(0x5c);
    local_4 = 1;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00589300(1);
      *puVar3 = &PTR_FUN_0089bee0;
    }
    local_4 = 0xffffffff;
    FUN_00588570(puVar3,1);
  }
  puVar3 = _malloc(0x5c);
  local_4 = 2;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00589300(1);
    *puVar3 = &PTR_FUN_0089be68;
  }
  local_4 = 0xffffffff;
  FUN_00588570(puVar3,1);
  puVar3 = _malloc(0x5c);
  local_4 = 3;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00589300(1);
    *puVar3 = &PTR_FUN_0089bf1c;
  }
  local_4 = 0xffffffff;
  FUN_00588570(puVar3,1);
  puVar3 = _malloc(0x5c);
  local_4 = 4;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00589300(1);
    *puVar3 = &PTR_FUN_0089bf58;
  }
  local_4 = 0xffffffff;
  FUN_00588570(puVar3,1);
  iVar2 = FUN_006e8df0();
  if ((*(char *)(param_1 + 0x124) == '\0') || (iVar2 != 1)) {
    if (((*(uint *)(DAT_0091cf90 + 300) >> 3 & 1) == 0) &&
       ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0)) {
      puVar3 = _malloc(0x5c);
      local_4 = 5;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        FUN_00589300(1);
        *puVar3 = &PTR_FUN_0089bfd0;
      }
      local_4 = 0xffffffff;
      FUN_00588570(puVar3,1);
    }
    puVar3 = _malloc(0x5c);
    local_4 = 6;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00589300(1);
      *puVar3 = &PTR_FUN_0089bf94;
    }
    local_4 = 0xffffffff;
    FUN_00588570(puVar3,1);
  }
  if (*(int *)(param_1 + 0x138) == 0) {
    puVar3 = _malloc(0x14);
    local_4 = 7;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_0056d500();
    }
    *(undefined4 **)(param_1 + 0x138) = puVar3;
    iVar2 = *(int *)(DAT_0091cf90 + 0x10);
    *puVar3 = *(undefined4 *)(iVar2 + 0x38);
    puVar3[1] = *(undefined4 *)(iVar2 + 0x3c);
    puVar3[2] = *(undefined4 *)(iVar2 + 0x40);
    puVar3[3] = *(undefined4 *)(iVar2 + 0x44);
    puVar3[4] = *(undefined4 *)(iVar2 + 0x48);
  }
  ExceptionList = local_c;
  return;
}

