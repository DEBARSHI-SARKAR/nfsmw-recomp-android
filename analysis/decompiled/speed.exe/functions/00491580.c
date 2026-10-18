/* speed.exe 00491580 FUN_00491580; analysis pseudocode, not buildable source.
 * calls 00491360 FUN_00491360
 */

int __thiscall FUN_00491580(int param_1,byte param_2)

{
  if (*(int *)(param_1 + 0x420) != 0) {
    (*(code *)PTR_FUN_008ee4d4)(*(int *)(param_1 + 0x420),*(int *)(param_1 + 0x10) << 2);
  }
  if (*(int *)(param_1 + 0x424) != 0) {
    (*(code *)PTR_FUN_008ee4d4)(*(int *)(param_1 + 0x424),*(undefined4 *)(param_1 + 0x10));
  }
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_008ee4d4)(param_1,0x430);
  }
  return param_1;
}

