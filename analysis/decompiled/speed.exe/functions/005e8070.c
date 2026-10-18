/* speed.exe 005e8070 FUN_005e8070; analysis pseudocode, not buildable source.
 * calls 00452bd0 FUN_00452bd0
 * calls 00454c30 FUN_00454c30
 * calls 00452c50 FUN_00452c50
 * calls 005e7210 FUN_005e7210
 */

undefined1 FUN_005e8070(undefined4 *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 local_1c [12];
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008753f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005e7210(local_1c,0xe43b2ccc);
  uVar2 = 0;
  local_4 = 0;
  cVar1 = FUN_00452c50();
  if (cVar1 != '\0') {
    if (local_10 == (undefined4 *)0x0) {
      local_10 = (undefined4 *)FUN_00454c30(0);
      if (local_10 == (undefined4 *)0x0) goto LAB_005e80cb;
    }
    *local_10 = *param_1;
    uVar2 = 1;
  }
LAB_005e80cb:
  local_4 = 0xffffffff;
  FUN_00452bd0();
  ExceptionList = local_c;
  return uVar2;
}

