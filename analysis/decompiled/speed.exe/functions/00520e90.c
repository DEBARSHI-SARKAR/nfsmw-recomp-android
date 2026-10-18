/* speed.exe 00520e90 FUN_00520e90; analysis pseudocode, not buildable source.
 * calls 0056e360 FUN_0056e360
 * calls 00652ad0 _malloc
 * calls 00588280 FUN_00588280
 * calls 0056bc10 FUN_0056bc10
 * calls 00588350 FUN_00588350
 * calls 00520af0 FUN_00520af0
 * calls 005889f0 FUN_005889f0
 * calls 0056e320 FUN_0056e320
 * calls 005890f0 FUN_005890f0
 * calls 00574e30 FUN_00574e30
 * calls 00520c20 FUN_00520c20
 * calls 005a5ea0 FUN_005a5ea0
 */

void __fastcall FUN_00520e90(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086e6c0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0x18c);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar5 = 1;
    uVar4 = 2;
    uVar2 = FUN_0056e320(2,1);
    uVar2 = FUN_00520af0(uVar2,uVar4,uVar5);
  }
  local_4 = 0xffffffff;
  uVar2 = FUN_005889f0(uVar2);
  *(undefined4 *)(param_1 + 0x124) = uVar2;
  pvVar1 = _malloc(0x18c);
  local_4 = 1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar5 = 1;
    uVar4 = 5;
    uVar2 = FUN_0056e360(5,1);
    uVar2 = FUN_00520c20(uVar2,uVar4,uVar5);
  }
  local_4 = 0xffffffff;
  uVar2 = FUN_005889f0(uVar2);
  *(undefined4 *)(param_1 + 0x128) = uVar2;
  puVar3 = _malloc(0x38);
  local_4 = 2;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_005890f0(1);
    *puVar3 = &PTR_FUN_0089c6a4;
  }
  local_4 = 0xffffffff;
  FUN_00588350(puVar3);
  puVar3 = _malloc(0x38);
  local_4 = 3;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_005890f0(1);
    *puVar3 = &PTR_FUN_0089c6dc;
  }
  local_4 = 0xffffffff;
  FUN_00588350(puVar3);
  uVar2 = FUN_00588280(*(undefined4 *)(param_1 + 0x124));
  *(undefined4 *)(param_1 + 0x154) = uVar2;
  uVar2 = FUN_0056bc10(0xb32f2b49);
  FUN_00574e30(uVar2);
  uVar2 = FUN_00588280(*(undefined4 *)(param_1 + 0x128));
  *(undefined4 *)(param_1 + 0x158) = uVar2;
  uVar2 = FUN_0056bc10(0x332c0b6f);
  FUN_00574e30(uVar2);
  FUN_005a5ea0(1);
  ExceptionList = local_c;
  return;
}

