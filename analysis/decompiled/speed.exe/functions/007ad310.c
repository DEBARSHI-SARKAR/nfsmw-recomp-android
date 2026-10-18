/* speed.exe 007ad310 FUN_007ad310; analysis pseudocode, not buildable source.
 * calls 005fac80 FUN_005fac80
 * calls 00588570 FUN_00588570
 * calls 00589300 FUN_00589300
 * calls 00652ad0 _malloc
 * calls 007ac5f0 FUN_007ac5f0
 */

void FUN_007ad310(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined1 local_11;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00882fac;
  local_c = ExceptionList;
  if (((*(uint *)(DAT_0091cf90 + 300) >> 3 & 1) == 0) &&
     ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0)) {
    ExceptionList = &local_c;
    cVar1 = FUN_005fac80();
    if (cVar1 != '\0') {
      puVar2 = _malloc(0x5c);
      local_4 = 1;
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
    local_4 = 2;
    local_10 = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00589300(1);
      *puVar2 = &PTR_FUN_008b7850;
      goto LAB_007ad418;
    }
  }
  else {
    local_11 = 0;
    ExceptionList = &local_c;
    FUN_007ac5f0(&local_11);
    cVar1 = FUN_005fac80();
    if (cVar1 == '\0') {
      ExceptionList = local_c;
      return;
    }
    puVar2 = _malloc(0x5c);
    local_4 = 0;
    local_10 = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00589300(1);
      *puVar2 = &PTR_FUN_008b78c8;
      goto LAB_007ad418;
    }
  }
  puVar2 = (undefined4 *)0x0;
LAB_007ad418:
  local_4 = 0xffffffff;
  FUN_00588570(puVar2,1);
  ExceptionList = local_c;
  return;
}

