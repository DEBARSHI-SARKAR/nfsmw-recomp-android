/* speed.exe 00529310 FUN_00529310; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00525220 FUN_00525220
 * calls 00588860 FUN_00588860
 * calls 005b8550 FUN_005b8550
 * calls 00589300 FUN_00589300
 * calls 00589540 FUN_00589540
 * calls 0056d5e0 FUN_0056d5e0
 * calls 00516af0 FUN_00516af0
 * calls 00588570 FUN_00588570
 */

void __fastcall FUN_00529310(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086ebe4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x10) != 0) {
    ExceptionList = &local_c;
    iVar1 = FUN_00516af0(*(int *)(param_1 + 0x10));
    if (iVar1 != 0) {
      iVar1 = FUN_005b8550(0x8007b4c);
      if (((iVar1 != 0) && (*(int *)(iVar1 + 0x18) == 1)) && (*(int *)(iVar1 + 0x24) != -0xc850ebc))
      {
        *(undefined4 *)(iVar1 + 0x24) = 0xf37af144;
        *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x2400000;
      }
    }
  }
  if (*(char *)(param_1 + 0x124) == '\0') {
    uVar4 = 0x3932c2e4;
  }
  else {
    uVar4 = 0xb1426dfa;
  }
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x42adb44c,uVar4);
  puVar2 = _malloc(0x9c);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00589540(1);
    *puVar2 = &PTR_FUN_0089b910;
  }
  local_4 = 0xffffffff;
  FUN_00588860(puVar2,1);
  puVar2 = _malloc(0x9c);
  local_4 = 1;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00589540(1);
    *puVar2 = &PTR_FUN_0089b9c8;
  }
  local_4 = 0xffffffff;
  FUN_00588860(puVar2,1);
  puVar2 = _malloc(0x9c);
  local_4 = 2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00589540(1);
    *puVar2 = &PTR_FUN_0089ba08;
  }
  local_4 = 0xffffffff;
  FUN_00588860(puVar2,1);
  puVar2 = _malloc(0x9c);
  local_4 = 3;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00589540(1);
    *puVar2 = &PTR_FUN_0089ba48;
  }
  local_4 = 0xffffffff;
  FUN_00588860(puVar2,1);
  puVar2 = _malloc(0x9c);
  local_4 = 4;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00589540(1);
    *puVar2 = &PTR_FUN_0089ba88;
  }
  local_4 = 0xffffffff;
  FUN_00588860(puVar2,1);
  puVar2 = _malloc(0x5c);
  local_4 = 5;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00589300(1);
    *puVar2 = &PTR_FUN_0089b950;
  }
  local_4 = 0xffffffff;
  FUN_00588570(puVar2,1);
  puVar2 = _malloc(0x5c);
  local_4 = 6;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00589300(1);
    *puVar2 = &PTR_FUN_0089b98c;
  }
  local_4 = 0xffffffff;
  FUN_00588570(puVar2,1);
  if (DAT_00925e90 == 3) {
    puVar2 = _malloc(0x5c);
    local_4 = 7;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_00589300(1);
      *puVar2 = &PTR_FUN_0089bac8;
    }
    local_4 = 0xffffffff;
    FUN_00588570(puVar2,1);
  }
  puVar2 = _malloc(0x34);
  local_4 = 8;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_0056d5e0();
  }
  *(undefined4 **)(param_1 + 0x130) = puVar2;
  puVar3 = (undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x4c);
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
  }
  ExceptionList = local_c;
  return;
}

