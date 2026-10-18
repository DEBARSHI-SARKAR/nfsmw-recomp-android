/* speed.exe 0044de20 FUN_0044de20; analysis pseudocode, not buildable source.
 * calls 00652b10 thunk_FUN_007c7250
 * calls 00491360 FUN_00491360
 * calls 0044c580 FUN_0044c580
 */

void __fastcall FUN_0044de20(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00869adb;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0044c580();
  local_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    thunk_FUN_007c7250(*(int *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    (*(code *)PTR_FUN_008ee4d4)(*(int *)(param_1 + 0x2c),0x40);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  ExceptionList = local_c;
  return;
}

