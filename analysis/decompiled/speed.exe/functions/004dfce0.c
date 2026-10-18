/* speed.exe 004dfce0 FUN_004dfce0; analysis pseudocode, not buildable source.
 * calls 004b8db0 FUN_004b8db0
 * calls 00831667 FUN_00831667
 * calls 004d7810 FUN_004d7810
 */

void __fastcall FUN_004dfce0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086cd0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004b8db0(param_1);
  iVar1 = FUN_00831667(0x34);
  local_4 = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004d7810(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                         *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
                         *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),
                         *(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                         *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                         *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
  }
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x3c) = 1;
  }
  ExceptionList = local_c;
  return;
}

