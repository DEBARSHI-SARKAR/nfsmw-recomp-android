/* speed.exe 00529f10 FUN_00529f10; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00525220 FUN_00525220
 * calls 005b8550 FUN_005b8550
 * calls 0056d430 FUN_0056d430
 * calls 005b8400 FUN_005b8400
 * calls 005b1360 FUN_005b1360
 * calls 00589300 FUN_00589300
 * calls 00516af0 FUN_00516af0
 * calls 005faa20 FUN_005faa20
 * calls 00588570 FUN_00588570
 */

void __fastcall FUN_00529f10(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086ee80;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((((*(int *)(param_1 + 0x10) != 0) &&
       (ExceptionList = &local_c, iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar2 != 0)) &&
      (iVar2 = FUN_005b8550(0x8007b4c), iVar2 != 0)) &&
     ((*(int *)(iVar2 + 0x18) == 1 && (*(int *)(iVar2 + 0x24) != -0x28f71011)))) {
    *(undefined4 *)(iVar2 + 0x24) = 0xd708efef;
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x2400000;
  }
  if (*(char *)(param_1 + 0x124) == '\0') {
    uVar4 = 0xc055165f;
  }
  else {
    uVar4 = 0xd9dc2f12;
  }
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x42adb44c,uVar4);
  if (((*(int *)(param_1 + 0x10) != 0) &&
      (iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar2 != 0)) &&
     ((iVar2 = FUN_005b8550(0x8a41f5b9), iVar2 != 0 &&
      (iVar2 = FUN_005b1360(0x5079c8f8), iVar2 != 0)))) {
    FUN_005b8400(iVar2,0);
    *(undefined4 *)(iVar2 + 0x10) = 0;
  }
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x53bf826d,(DAT_0091ca24 != 0) + 0x7b070984);
  if (((DAT_0091e000 == 0) || (*(int *)(DAT_0091e000 + 0x1968) == 0)) ||
     (iVar2 = FUN_005faa20(), iVar2 != 2)) {
    puVar3 = _malloc(0x5c);
    local_4 = 0;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00589300(1);
      *puVar3 = &PTR_FUN_0089c00c;
    }
    local_4 = 0xffffffff;
    FUN_00588570(puVar3,1);
  }
  puVar3 = _malloc(0x5c);
  local_4 = 1;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00589300(1);
    *puVar3 = &PTR_FUN_0089c048;
  }
  local_4 = 0xffffffff;
  FUN_00588570(puVar3,1);
  puVar3 = _malloc(0x5c);
  local_4 = 2;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00589300(1);
    *puVar3 = &PTR_FUN_0089c084;
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
    *puVar3 = &PTR_FUN_0089c0c0;
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
    *puVar3 = &PTR_FUN_0089c138;
  }
  local_4 = 0xffffffff;
  FUN_00588570(puVar3,1);
  puVar3 = _malloc(0x5c);
  local_4 = 5;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00589300(1);
    *puVar3 = &PTR_FUN_0089c0fc;
  }
  local_4 = 0xffffffff;
  FUN_00588570(puVar3,1);
  if ((DAT_0091e000 == 0) ||
     (((*(int *)(DAT_0091e000 + 0x1968) == 0 || (iVar2 = FUN_005faa20(), iVar2 != 2)) &&
      ((DAT_0091e000 == 0 ||
       ((*(int *)(DAT_0091e000 + 0x1968) == 0 || (iVar2 = FUN_005faa20(), iVar2 != 4)))))))) {
    puVar3 = _malloc(0x5c);
    local_4 = 6;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00589300(1);
      *puVar3 = &PTR_FUN_0089c174;
    }
    local_4 = 0xffffffff;
    FUN_00588570(puVar3,1);
  }
  puVar3 = _malloc(0x14);
  local_4 = 7;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_0056d430();
  }
  *(undefined4 **)(param_1 + 0x13c) = puVar3;
  puVar1 = (undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x80 + DAT_0091ca24 * 0x14);
  *puVar3 = *puVar1;
  puVar3[1] = puVar1[1];
  puVar3[2] = puVar1[2];
  puVar3[3] = puVar1[3];
  puVar3[4] = puVar1[4];
  ExceptionList = local_c;
  return;
}

