/* speed.exe 004947e0 FUN_004947e0; analysis pseudocode, not buildable source.
 * calls 00491360 FUN_00491360
 * calls 00494810 FUN_00494810
 */

undefined4 __thiscall FUN_004947e0(undefined4 param_1,byte param_2)

{
  FUN_00494810();
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_008ee4d4)(param_1,0x18);
  }
  return param_1;
}

