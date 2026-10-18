/* speed.exe 004a8820 FUN_004a8820; analysis pseudocode, not buildable source.
 * calls 00491360 FUN_00491360
 * calls 004a19c0 FUN_004a19c0
 */

undefined4 __thiscall FUN_004a8820(undefined4 param_1,byte param_2)

{
  FUN_004a19c0();
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_008ee4d4)(param_1,0x24);
  }
  return param_1;
}

