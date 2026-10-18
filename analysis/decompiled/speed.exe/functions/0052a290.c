/* speed.exe 0052a290 FUN_0052a290; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00525220 FUN_00525220
 * calls 0057fe80 FUN_0057fe80
 * calls 00589300 FUN_00589300
 * calls 00588570 FUN_00588570
 */

void __fastcall FUN_0052a290(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086eeb8;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x124) == '\0') {
    uVar4 = 0xe463b5f7;
  }
  else {
    uVar4 = 0x966c856d;
  }
  ExceptionList = &local_c;
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x42adb44c,uVar4);
  puVar1 = _malloc(0x5c);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00589300(1);
    *puVar1 = &PTR_FUN_0089c1b0;
  }
  local_4 = 0xffffffff;
  FUN_00588570(puVar1,1);
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x42adb44c,0x22b1c2e6);
  puVar1 = _malloc(0x100);
  local_4 = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_0057fe80();
  }
  *(undefined4 **)(param_1 + 0x140) = puVar1;
  puVar3 = (undefined4 *)(DAT_0091cf90 + 0x134);
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar1 = puVar1 + 1;
  }
  ExceptionList = local_c;
  return;
}

