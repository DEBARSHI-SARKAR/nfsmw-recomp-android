/* speed.exe 004a8f70 FUN_004a8f70; analysis pseudocode, not buildable source.
 * calls 00491360 FUN_00491360
 * calls 00492540 FUN_00492540
 */

int __thiscall FUN_004a8f70(int param_1,byte param_2)

{
  FUN_00492540();
  if (*(int *)(param_1 + 8) != 0) {
    (*(code *)PTR_FUN_008ee4d4)(*(int *)(param_1 + 8),*(int *)(param_1 + 4) << 2);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_008ee4d4)(param_1,0x14);
  }
  return param_1;
}

