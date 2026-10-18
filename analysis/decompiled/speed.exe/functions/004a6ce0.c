/* speed.exe 004a6ce0 FUN_004a6ce0; analysis pseudocode, not buildable source.
 * calls 00491360 FUN_00491360
 * calls 0049ae60 FUN_0049ae60
 */

undefined4 __thiscall FUN_004a6ce0(undefined4 param_1,byte param_2)

{
  FUN_0049ae60();
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_008ee4d4)(param_1,0x18);
  }
  return param_1;
}

