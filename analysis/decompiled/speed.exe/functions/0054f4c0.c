/* speed.exe 0054f4c0 FUN_0054f4c0; analysis pseudocode, not buildable source.
 * calls 00573960 FUN_00573960
 * calls 00586fa0 FUN_00586fa0
 * calls 005434a0 FUN_005434a0
 * calls 00571e80 FUN_00571e80
 * calls 00652ad0 _malloc
 */

void __fastcall FUN_0054f4c0(int param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870778;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar2 = _malloc(0x4c);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00586fa0(0x43798644,0x55423473,0);
    *puVar2 = &PTR_FUN_0089cc90;
    *(undefined1 *)((int)puVar2 + 0x45) = 1;
  }
  local_4 = 0xffffffff;
  FUN_00573960(puVar2);
  puVar2 = _malloc(0x4c);
  local_4 = 1;
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00586fa0(0xd9035ce,0x9f014666,0);
    *puVar2 = &PTR_FUN_0089cc88;
    *(undefined1 *)((int)puVar2 + 0x45) = 1;
    puVar3 = puVar2;
  }
  local_4 = 0xffffffff;
  FUN_00573960(puVar3);
  uVar1 = FUN_00571e80(*(undefined4 *)(param_1 + 0x10));
  if (*(char *)(param_1 + 0x129) != '\0') {
    *(undefined1 *)(param_1 + 0x11c) = 0;
    *(undefined1 *)(param_1 + 0x119) = 1;
    *(undefined1 *)(param_1 + 0x11a) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  (**(code **)(*(int *)(param_1 + 0x2c) + 0x40))(uVar1);
  FUN_005434a0();
  ExceptionList = puVar2;
  return;
}

