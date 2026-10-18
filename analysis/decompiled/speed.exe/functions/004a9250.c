/* speed.exe 004a9250 FUN_004a9250; analysis pseudocode, not buildable source.
 * calls 00491360 FUN_00491360
 * calls 004a2030 FUN_004a2030
 * calls 004915e0 FUN_004915e0
 */

void __fastcall FUN_004a9250(int param_1)

{
  FUN_004a2030();
  FUN_004915e0();
  if (*(int *)(param_1 + 0x28) != 0) {
    (*(code *)PTR_FUN_008ee4d4)(*(int *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x24));
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}

