/* speed.exe 004a88b0 FUN_004a88b0; analysis pseudocode, not buildable source.
 * calls 00491360 FUN_00491360
 * calls 004a1390 FUN_004a1390
 */

undefined4 __thiscall FUN_004a88b0(undefined4 param_1,byte param_2)

{
  FUN_004a1390();
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_008ee4d4)(param_1,0x24);
  }
  return param_1;
}

