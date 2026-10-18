/* speed.exe 007aa730 FUN_007aa730; analysis pseudocode, not buildable source.
 * calls 00571e80 FUN_00571e80
 * calls 00652ad0 _malloc
 * calls 005a3b60 FUN_005a3b60
 * calls 00573960 FUN_00573960
 * calls 00586fa0 FUN_00586fa0
 * calls 0056e2b0 FUN_0056e2b0
 */

void __fastcall FUN_007aa730(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00882b3c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_0056e2b0();
  if (iVar2 == 0) {
    puVar3 = _malloc(0x4c);
    local_4 = 1;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00586fa0(0xe6313967,0xb5e8f82f,0);
      *puVar3 = &PTR_FUN_008b7588;
    }
    local_4 = 0xffffffff;
    FUN_00573960(puVar3);
    puVar3 = _malloc(0x4c);
    local_4 = 2;
    local_10 = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      FUN_00586fa0(0x2a49b5e2,0x25bbd4c3,0);
      *puVar3 = &PTR_FUN_008b7590;
      goto LAB_007aa811;
    }
  }
  else {
    puVar3 = _malloc(0x4c);
    local_4 = 0;
    local_10 = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      FUN_00586fa0(0x2a49b5e2,0x25bbd4c3,0);
      *puVar3 = &PTR_FUN_008b7590;
      goto LAB_007aa811;
    }
  }
  puVar3 = (undefined4 *)0x0;
LAB_007aa811:
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
  FUN_005a3b60();
  ExceptionList = local_10;
  return;
}

