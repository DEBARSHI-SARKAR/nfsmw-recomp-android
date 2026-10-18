/* speed.exe 004a7560 FUN_004a7560; analysis pseudocode, not buildable source.
 * calls 0049bda0 FUN_0049bda0
 * calls 00491360 FUN_00491360
 */

undefined4 __thiscall FUN_004a7560(undefined4 param_1,byte param_2)

{
  FUN_0049bda0();
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_008ee4d4)(param_1,0x18);
  }
  return param_1;
}

