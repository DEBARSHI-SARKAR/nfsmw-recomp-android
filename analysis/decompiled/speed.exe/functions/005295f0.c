/* speed.exe 005295f0 FUN_005295f0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00525220 FUN_00525220
 * calls 00588860 FUN_00588860
 * calls 005b8550 FUN_005b8550
 * calls 00589300 FUN_00589300
 * calls 00589540 FUN_00589540
 * calls 0050efb0 FUN_0050efb0
 * calls 00516af0 FUN_00516af0
 * calls 00588570 FUN_00588570
 */

void __fastcall FUN_005295f0(int param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086ed1c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((((*(int *)(param_1 + 0x10) != 0) &&
       (ExceptionList = &local_c, iVar1 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar1 != 0)) &&
      (iVar1 = FUN_005b8550(0x8007b4c), iVar1 != 0)) &&
     ((*(int *)(iVar1 + 0x18) == 1 && (*(int *)(iVar1 + 0x24) != -0x75ff9cd8)))) {
    *(undefined4 *)(iVar1 + 0x24) = 0x8a006328;
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x2400000;
  }
  if (*(char *)(param_1 + 0x124) == '\0') {
    uVar5 = 0x48478029;
  }
  else {
    uVar5 = 0xd94ea03f;
  }
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x42adb44c,uVar5);
  if (*(int *)(param_1 + 0x144) == 0) {
    pvVar2 = _malloc(0x84);
    if (pvVar2 == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)FUN_0050efb0();
    }
    *(undefined4 **)(param_1 + 0x144) = puVar3;
    puVar4 = &DAT_009017b0;
    for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)(param_1 + 0x148) = DAT_00982c00;
  }
  if (*(int *)(param_1 + 0x14c) == 0) {
    pvVar2 = _malloc(0x84);
    if (pvVar2 == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)FUN_0050efb0();
    }
    *(undefined4 **)(param_1 + 0x14c) = puVar3;
    puVar4 = &DAT_009017b0;
    for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)(param_1 + 0x150) = DAT_00982c00;
  }
  if (((*(int *)(param_1 + 0x10) == 0) ||
      (iVar1 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar1 == 0)) ||
     ((iVar1 = FUN_005b8550(0xce757c8a), iVar1 == 0 || (*(int *)(iVar1 + 0x18) != 2)))) {
    iVar1 = 0;
  }
  if (*(char *)(param_1 + 0x154) == '\0') {
    puVar3 = _malloc(0x9c);
    local_4 = 0;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00589540(1);
      *puVar3 = &PTR_FUN_0089bb40;
    }
    local_4 = 0xffffffff;
    FUN_00588860(puVar3,1);
    puVar3 = _malloc(0x5c);
    local_4 = 1;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00589300(1);
      *puVar3 = &PTR_FUN_0089bb04;
    }
    local_4 = 0xffffffff;
    FUN_00588570(puVar3,1);
    if (iVar1 == 0) {
      ExceptionList = local_c;
      return;
    }
    *(undefined4 *)(iVar1 + 0x60) = 0x1459065c;
  }
  else {
    puVar3 = _malloc(0x5c);
    local_4 = 2;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00589300(1);
      *puVar3 = &PTR_FUN_0089bb04;
    }
    local_4 = 0xffffffff;
    FUN_00588570(puVar3,1);
    puVar3 = _malloc(0x9c);
    local_4 = 3;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00589540(0 < DAT_00901890);
      *puVar3 = &PTR_FUN_0089bc78;
    }
    local_4 = 0xffffffff;
    FUN_00588860(puVar3,1);
    puVar3 = _malloc(0x9c);
    local_4 = 4;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00589540(0 < DAT_009018a0);
      *puVar3 = &PTR_FUN_0089bcb8;
    }
    local_4 = 0xffffffff;
    FUN_00588860(puVar3,1);
    puVar3 = _malloc(0x5c);
    local_4 = 5;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00589300(1);
      *puVar3 = &PTR_FUN_0089bd34;
    }
    local_4 = 0xffffffff;
    FUN_00588570(puVar3,1);
    puVar3 = _malloc(0x9c);
    local_4 = 6;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00589540(0 < DAT_0090187c);
      *puVar3 = &PTR_FUN_0089bc38;
    }
    local_4 = 0xffffffff;
    FUN_00588860(puVar3,1);
    puVar3 = _malloc(0x9c);
    local_4 = 7;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00589540(0 < DAT_0090185c);
      *puVar3 = &PTR_FUN_0089bd70;
    }
    local_4 = 0xffffffff;
    FUN_00588860(puVar3,1);
    puVar3 = _malloc(0x9c);
    local_4 = 8;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00589540(0 < DAT_009018b8);
      *puVar3 = &PTR_FUN_0089be28;
    }
    local_4 = 0xffffffff;
    FUN_00588860(puVar3,1);
    puVar3 = _malloc(0x5c);
    local_4 = 9;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00589300(0 < DAT_00901880);
      *puVar3 = &PTR_FUN_0089bbfc;
    }
    local_4 = 0xffffffff;
    FUN_00588570(puVar3,1);
    puVar3 = _malloc(0x5c);
    local_4 = 10;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00589300(0 < DAT_00901840);
      *puVar3 = &PTR_FUN_0089bbc0;
    }
    local_4 = 0xffffffff;
    FUN_00588570(puVar3,1);
    puVar3 = _malloc(0x9c);
    local_4 = 0xb;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00589540(0 < DAT_00901844);
      *puVar3 = &PTR_FUN_0089bb80;
    }
    local_4 = 0xffffffff;
    FUN_00588860(puVar3,1);
    puVar3 = _malloc(0x5c);
    local_4 = 0xc;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00589300(0 < DAT_00901898);
      *puVar3 = &PTR_FUN_0089bdb0;
    }
    local_4 = 0xffffffff;
    FUN_00588570(puVar3,1);
    puVar3 = _malloc(0x5c);
    local_4 = 0xd;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00589300(0 < DAT_00901884);
      *puVar3 = &PTR_FUN_0089bcf8;
    }
    local_4 = 0xffffffff;
    FUN_00588570(puVar3,1);
    puVar3 = _malloc(0x5c);
    local_4 = 0xe;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00589300(0 < DAT_009018b0);
      *puVar3 = &PTR_FUN_0089bdec;
    }
    local_4 = 0xffffffff;
    FUN_00588570(puVar3,1);
    if (iVar1 == 0) {
      ExceptionList = local_c;
      return;
    }
    *(undefined4 *)(iVar1 + 0x60) = 0x9c88b5c8;
  }
  *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
  if (DAT_0091dd08 != (undefined4 *)0x0) {
    (**(code **)*DAT_0091dd08)(iVar1);
  }
  *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffd | 0x400000;
  ExceptionList = local_c;
  return;
}

