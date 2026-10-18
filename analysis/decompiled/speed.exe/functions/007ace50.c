/* speed.exe 007ace50 FUN_007ace50; analysis pseudocode, not buildable source.
 * calls 005fac80 FUN_005fac80
 * calls 00588570 FUN_00588570
 * calls 00589300 FUN_00589300
 * calls 00652ad0 _malloc
 * calls 005af1c0 FUN_005af1c0
 * calls 007ac5f0 FUN_007ac5f0
 * calls 00588280 FUN_00588280
 */

void FUN_007ace50(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined1 local_11;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00882ed0;
  pvStack_c = ExceptionList;
  if (((*(uint *)(DAT_0091cf90 + 300) >> 3 & 1) == 0) &&
     ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0)) {
    ExceptionList = &pvStack_c;
    cVar1 = FUN_005fac80();
    if (cVar1 != '\0') {
      puVar2 = _malloc(0x5c);
      local_4 = 2;
      local_10 = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        FUN_00589300(1);
        *puVar2 = &PTR_FUN_008b78c8;
      }
      local_4 = 0xffffffff;
      FUN_00588570(puVar2,1);
    }
    puVar2 = _malloc(0x5c);
    local_4 = 3;
    local_10 = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_00589300(1);
      *puVar2 = &PTR_FUN_008b779c;
    }
    local_4 = 0xffffffff;
    FUN_00588570(puVar2,1);
    puVar2 = _malloc(0x5c);
    local_4 = 4;
    local_10 = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_00589300(1);
      *puVar2 = &PTR_FUN_008b788c;
    }
    local_4 = 0xffffffff;
    uVar3 = FUN_00588570(puVar2,1);
    uVar4 = FUN_005af1c0(&DAT_008a0bb0);
    iVar5 = FUN_00588280(uVar3);
    *(undefined4 *)(iVar5 + 0x58) = uVar4;
    piVar6 = (int *)FUN_00588280(uVar3);
    (**(code **)(*piVar6 + 0x20))();
    puVar2 = _malloc(0x5c);
    local_4 = 5;
    local_10 = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_00589300(1);
      *puVar2 = &PTR_FUN_008b7850;
    }
    local_4 = 0xffffffff;
    FUN_00588570(puVar2,1);
    puVar2 = _malloc(0x5c);
    local_4 = 6;
    if (puVar2 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
      local_10 = puVar2;
    }
    else {
      local_10 = puVar2;
      FUN_00589300(1);
      *puVar2 = &PTR_FUN_008b77d8;
      puVar7 = puVar2;
    }
    local_4 = 0xffffffff;
    FUN_00588570(puVar7,1);
    puVar2 = _malloc(0x5c);
    local_4 = 7;
    local_10 = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00589300(1);
      *puVar2 = &PTR_FUN_008b7814;
      goto LAB_007ad0c4;
    }
  }
  else {
    local_11 = 0;
    ExceptionList = &pvStack_c;
    FUN_007ac5f0(&local_11);
    cVar1 = FUN_005fac80();
    if (cVar1 != '\0') {
      puVar2 = _malloc(0x5c);
      local_4 = 0;
      local_10 = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        FUN_00589300(1);
        *puVar2 = &PTR_FUN_008b78c8;
      }
      local_4 = 0xffffffff;
      FUN_00588570(puVar2,1);
    }
    puVar2 = _malloc(0x5c);
    local_4 = 1;
    local_10 = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00589300(1);
      *puVar2 = &PTR_FUN_008b788c;
      goto LAB_007ad0c4;
    }
  }
  puVar2 = (undefined4 *)0x0;
LAB_007ad0c4:
  local_4 = 0xffffffff;
  FUN_00588570(puVar2,1);
  ExceptionList = pvStack_c;
  return;
}

