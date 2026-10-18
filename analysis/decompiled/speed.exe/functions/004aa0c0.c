/* speed.exe 004aa0c0 FUN_004aa0c0; analysis pseudocode, not buildable source.
 * calls 00491360 FUN_00491360
 * calls 00492540 FUN_00492540
 */

void __fastcall FUN_004aa0c0(int param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0086afc3;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  FUN_00492540();
  if (*(int *)(param_1 + 8) != 0) {
    (*(code *)PTR_FUN_008ee4d4)(*(int *)(param_1 + 8),*(int *)(param_1 + 4) << 2);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  FUN_00492540();
  if (*(int *)(param_1 + 0x1c) != 0) {
    (*(code *)PTR_FUN_008ee4d4)(*(int *)(param_1 + 0x1c),*(int *)(param_1 + 0x18) << 2);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00492540();
  if (*(int *)(param_1 + 0x1c) != 0) {
    (*(code *)PTR_FUN_008ee4d4)(*(int *)(param_1 + 0x1c),*(int *)(param_1 + 0x18) << 2);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00492540();
  if (*(int *)(param_1 + 8) != 0) {
    (*(code *)PTR_FUN_008ee4d4)(*(int *)(param_1 + 8),*(int *)(param_1 + 4) << 2);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  ExceptionList = pvStack_c;
  return;
}

