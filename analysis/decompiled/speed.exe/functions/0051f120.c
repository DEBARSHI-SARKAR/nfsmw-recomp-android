/* speed.exe 0051f120 FUN_0051f120; analysis pseudocode, not buildable source.
 * calls 0059bd30 FUN_0059bd30
 * calls 00652ad0 _malloc
 * calls 0056e090 FUN_0056e090
 * calls 005881c0 FUN_005881c0
 * calls 005faa20 FUN_005faa20
 * calls 0056e010 FUN_0056e010
 */

undefined4 FUN_0051f120(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086e544;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_005faa20();
  if ((8 < iVar1) && (iVar1 < 0xb)) {
    ExceptionList = local_c;
    return 0;
  }
  puVar2 = _malloc(0x1c);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    uVar3 = FUN_005faa20();
    uVar3 = FUN_0056e010(uVar3);
    uVar4 = FUN_005faa20();
    uVar4 = FUN_0056e090(uVar4);
    FUN_005881c0(uVar4,uVar3);
    *puVar2 = &PTR_FUN_0089c33c;
    puVar2[6] = param_1;
  }
  local_4 = 0xffffffff;
  FUN_0059bd30(puVar2);
  ExceptionList = local_c;
  return 1;
}

