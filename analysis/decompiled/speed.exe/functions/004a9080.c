/* speed.exe 004a9080 FUN_004a9080; analysis pseudocode, not buildable source.
 * calls 00491360 FUN_00491360
 * calls 00492540 FUN_00492540
 */

void __fastcall FUN_004a9080(int param_1)

{
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
  return;
}

