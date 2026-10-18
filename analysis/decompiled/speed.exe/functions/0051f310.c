/* speed.exe 0051f310 FUN_0051f310; analysis pseudocode, not buildable source.
 * calls 0059bd30 FUN_0059bd30
 * calls 00652ad0 _malloc
 * calls 0057fe40 FUN_0057fe40
 * calls 005e55a0 FUN_005e55a0
 * calls 005881c0 FUN_005881c0
 * calls 0056dea0 FUN_0056dea0
 */

void FUN_0051f310(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086e564;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = _malloc(0x1c);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    uVar3 = *param_1;
    uVar2 = FUN_005e55a0();
    uVar2 = FUN_0057fe40(uVar2);
    uVar3 = FUN_0056dea0(uVar3,1);
    FUN_005881c0(uVar3,uVar2);
    puVar1[6] = param_1;
    *puVar1 = &PTR_FUN_0089c3a4;
  }
  local_4 = 0xffffffff;
  FUN_0059bd30(puVar1);
  ExceptionList = local_c;
  return;
}

