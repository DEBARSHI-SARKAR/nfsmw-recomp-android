/* speed.exe 004a5d30 FUN_004a5d30; analysis pseudocode, not buildable source.
 * calls 00491360 FUN_00491360
 * calls 004977e0 FUN_004977e0
 */

undefined4 __thiscall FUN_004a5d30(undefined4 param_1,byte param_2)

{
  FUN_004977e0();
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_008ee4d4)(param_1,0x30);
  }
  return param_1;
}

