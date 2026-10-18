/* speed.exe 004914c0 FUN_004914c0; analysis pseudocode, not buildable source.
 * calls 00491360 FUN_00491360
 */

void __fastcall FUN_004914c0(int param_1)

{
  if (*(int *)(param_1 + 0x420) != 0) {
    (*(code *)PTR_FUN_008ee4d4)(*(int *)(param_1 + 0x420),*(int *)(param_1 + 0x10) << 2);
  }
  if (*(int *)(param_1 + 0x424) != 0) {
    (*(code *)PTR_FUN_008ee4d4)(*(int *)(param_1 + 0x424),*(undefined4 *)(param_1 + 0x10));
  }
  return;
}

