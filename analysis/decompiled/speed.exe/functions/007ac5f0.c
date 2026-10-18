/* speed.exe 007ac5f0 FUN_007ac5f0; analysis pseudocode, not buildable source.
 * calls 00588570 FUN_00588570
 * calls 00589300 FUN_00589300
 * calls 00652ad0 _malloc
 */

void FUN_007ac5f0(char *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00882cc4;
  local_c = ExceptionList;
  if ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0) {
    ExceptionList = &local_c;
    puVar1 = _malloc(0x5c);
    local_4 = 1;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00589300(1);
      *puVar1 = &PTR_FUN_008b761c;
      goto LAB_007ac678;
    }
  }
  else {
    ExceptionList = &local_c;
    puVar1 = _malloc(0x5c);
    local_4 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00589300(0);
      *puVar1 = &PTR_FUN_008b761c;
      goto LAB_007ac678;
    }
  }
  puVar1 = (undefined4 *)0x0;
LAB_007ac678:
  local_4 = 0xffffffff;
  FUN_00588570(puVar1,1);
  if (*param_1 != '\0') {
    puVar1 = _malloc(0x5c);
    local_4 = 2;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      FUN_00589300(1);
      *puVar1 = &PTR_FUN_008b788c;
    }
    local_4 = 0xffffffff;
    FUN_00588570(puVar1,1);
  }
  puVar1 = _malloc(0x5c);
  local_4 = 3;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00589300(1);
    *puVar1 = &PTR_FUN_008b7724;
  }
  local_4 = 0xffffffff;
  FUN_00588570(puVar1,1);
  puVar1 = _malloc(0x5c);
  local_4 = 4;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00589300(1);
    *puVar1 = &PTR_FUN_008b76ac;
  }
  local_4 = 0xffffffff;
  FUN_00588570(puVar1,1);
  puVar1 = _malloc(0x5c);
  local_4 = 5;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00589300(1);
    *puVar1 = &PTR_FUN_008b76e8;
  }
  local_4 = 0xffffffff;
  FUN_00588570(puVar1,1);
  puVar1 = _malloc(100);
  local_4 = 6;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00589300(1);
    *puVar1 = &PTR_FUN_008b7670;
    puVar1[0x17] = (uint)DAT_0089f6fc;
    puVar1[0x18] = (uint)*(byte *)(DAT_0091cf90 + 0x138);
  }
  local_4 = 0xffffffff;
  FUN_00588570(puVar1,1);
  if ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0) {
    puVar1 = _malloc(0x60);
    local_4 = 7;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      FUN_00589300(1);
      *puVar1 = &PTR_FUN_008b7760;
      puVar1[0x17] = *(undefined4 *)(DAT_0091cf90 + 0x164);
      *(undefined4 *)(DAT_0091cf90 + 0x160) = 6;
    }
    local_4 = 0xffffffff;
    FUN_00588570(puVar1,1);
    puVar1 = _malloc(0x5c);
    local_4 = 8;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      FUN_00589300(1);
      *puVar1 = &PTR_FUN_008b75e0;
    }
    local_4 = 0xffffffff;
    FUN_00588570(puVar1,1);
  }
  ExceptionList = local_c;
  return;
}

