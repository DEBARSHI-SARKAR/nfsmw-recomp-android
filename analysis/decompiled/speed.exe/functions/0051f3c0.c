/* speed.exe 0051f3c0 FUN_0051f3c0; analysis pseudocode, not buildable source.
 * calls 0059bd30 FUN_0059bd30
 * calls 00652ad0 _malloc
 * calls 0056e090 FUN_0056e090
 * calls 005881c0 FUN_005881c0
 */

void FUN_0051f3c0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086e584;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = _malloc(0x20);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    uVar2 = FUN_0056e090(5);
    FUN_005881c0(uVar2,0xf3b3d8dc);
    puVar1[6] = 0;
    *puVar1 = &PTR_FUN_0089c3b0;
    puVar1[7] = param_1;
  }
  local_4 = 0xffffffff;
  FUN_0059bd30(puVar1);
  ExceptionList = local_c;
  return;
}

