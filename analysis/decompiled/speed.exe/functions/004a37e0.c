/* speed.exe 004a37e0 FUN_004a37e0; analysis pseudocode, not buildable source.
 * calls 00491360 FUN_00491360
 * calls 004a3810 FUN_004a3810
 */

undefined4 __thiscall FUN_004a37e0(undefined4 param_1,byte param_2)

{
  FUN_004a3810();
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_008ee4d4)(param_1,0x30);
  }
  return param_1;
}

