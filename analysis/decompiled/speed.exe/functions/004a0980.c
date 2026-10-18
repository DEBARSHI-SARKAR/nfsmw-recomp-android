/* speed.exe 004a0980 FUN_004a0980; analysis pseudocode, not buildable source.
 * calls 004a08a0 FUN_004a08a0
 * calls 00491360 FUN_00491360
 */

undefined4 __thiscall FUN_004a0980(undefined4 param_1,byte param_2)

{
  FUN_004a08a0();
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_008ee4d4)(param_1,0x18);
  }
  return param_1;
}

