/* speed.exe 004a30e0 FUN_004a30e0; analysis pseudocode, not buildable source.
 * calls 00491360 FUN_00491360
 * calls 004a3110 FUN_004a3110
 */

undefined4 __thiscall FUN_004a30e0(undefined4 param_1,byte param_2)

{
  FUN_004a3110();
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_008ee4d4)(param_1,0x30);
  }
  return param_1;
}

