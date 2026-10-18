/* speed.exe 00521e60 FUN_00521e60; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00571e80 FUN_00571e80
 * calls 00573960 FUN_00573960
 * calls 0079e610 FUN_0079e610
 * calls 00794f80 FUN_00794f80
 * calls 00586fa0 FUN_00586fa0
 * calls 007412a0 FUN_007412a0
 */

void __fastcall FUN_00521e60(int *param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086e80c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_009b0fa0 != 1) {
    uVar4 = 1;
    ExceptionList = &pvStack_c;
    FUN_00794f80(1);
    FUN_0079e610(uVar4);
    FUN_007412a0();
  }
  puVar2 = _malloc(0x4c);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00586fa0(0xe9638d3e,0x34fa2c1,0);
    *puVar2 = &PTR_FUN_0089ca08;
    *(undefined1 *)((int)puVar2 + 0x45) = 1;
  }
  local_4 = 0xffffffff;
  FUN_00573960(puVar2);
  puVar2 = _malloc(0x4c);
  local_4 = 1;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00586fa0(0x2521e5eb,0xb94fd70e,0);
    *puVar2 = &PTR_FUN_0089c9f8;
    *(undefined1 *)((int)puVar2 + 0x45) = 1;
  }
  local_4 = 0xffffffff;
  FUN_00573960(puVar2);
  puVar2 = _malloc(0x4c);
  local_4 = 2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00586fa0(0xaaab31e9,0x6f547e4c,0);
    *puVar2 = &PTR_FUN_0089ca00;
    *(undefined1 *)((int)puVar2 + 0x45) = 1;
    puVar3 = puVar2;
  }
  local_4 = 0xffffffff;
  FUN_00573960(puVar3);
  uVar1 = FUN_00571e80(param_1[4]);
  if (*(char *)((int)param_1 + 0x129) != '\0') {
    *(undefined1 *)(param_1 + 0x47) = 0;
    *(undefined1 *)((int)param_1 + 0x119) = 1;
    *(undefined1 *)((int)param_1 + 0x11a) = 0;
    param_1[0x44] = 0;
  }
  (**(code **)(param_1[0xb] + 0x40))(uVar1);
  (**(code **)(*param_1 + 0xc))();
  ExceptionList = puVar2;
  return;
}

