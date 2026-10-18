/* speed.exe 0075f0a0 FUN_0075f0a0; analysis pseudocode, not buildable source.
 * calls 0074c540 FUN_0074c540
 * calls 00466340 FUN_00466340
 * calls 0075eee0 FUN_0075eee0
 */

undefined4 * __thiscall FUN_0075f0a0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_0088163e;
  local_c = ExceptionList;
  uStack_3 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b5228;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  uVar5 = 0;
  puVar4 = param_1 + 0xd;
  do {
    local_4 = 0;
    iVar1 = FUN_00466340(DAT_009b0a78);
    local_4 = 1;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0074c540(param_2,uVar5);
    }
    *puVar4 = uVar2;
    uVar5 = uVar5 + 1;
    puVar4 = puVar4 + 1;
  } while (uVar5 < 0x17);
  iVar1 = 0;
  do {
    local_4 = 0;
    iVar3 = FUN_00466340(DAT_009b0a7c);
    local_4 = 2;
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0075eee0(iVar1,&DAT_00904b78);
    }
    param_1[param_1[2] + 3] = uVar2;
    iVar1 = iVar1 + 1;
    param_1[2] = param_1[2] + 1;
  } while (iVar1 < 10);
  ExceptionList = local_c;
  return param_1;
}

