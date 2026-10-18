/* speed.exe 004a57c0 FUN_004a57c0; analysis pseudocode, not buildable source.
 * calls 00491360 FUN_00491360
 * calls 004970c0 FUN_004970c0
 */

undefined4 __thiscall FUN_004a57c0(undefined4 param_1,byte param_2)

{
  FUN_004970c0();
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_008ee4d4)(param_1,0x40);
  }
  return param_1;
}

