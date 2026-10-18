/* speed.exe 007ae8a0 FUN_007ae8a0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 0056dea0 FUN_0056dea0
 * calls 005881c0 FUN_005881c0
 * calls 005fa9a0 FUN_005fa9a0
 * calls 005fb990 FUN_005fb990
 * calls 0057fdc0 FUN_0057fdc0
 * calls 0059bd30 FUN_0059bd30
 */

void FUN_007ae8a0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00883054;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_005fa9a0();
  if (iVar1 == 0) {
    uVar4 = 0x65818ee8;
  }
  else {
    uVar4 = FUN_0056dea0(iVar1,1);
  }
  puVar2 = _malloc(0x1c);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    uVar3 = FUN_005fb990();
    uVar3 = FUN_0057fdc0(uVar3);
    FUN_005881c0(uVar4,uVar3);
    *puVar2 = &PTR_FUN_008b79d4;
    puVar2[6] = param_1;
  }
  local_4 = 0xffffffff;
  FUN_0059bd30(puVar2);
  ExceptionList = local_c;
  return;
}

