/* speed.exe 004a2860 FUN_004a2860; analysis pseudocode, not buildable source.
 * calls 00491360 FUN_00491360
 * calls 00492540 FUN_00492540
 */

void __fastcall FUN_004a2860(int param_1)

{
  FUN_00492540();
  if (*(int *)(param_1 + 8) != 0) {
    (*(code *)PTR_FUN_008ee4d4)(*(int *)(param_1 + 8),*(int *)(param_1 + 4) << 2);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

