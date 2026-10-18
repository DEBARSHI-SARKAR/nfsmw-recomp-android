/* speed.exe 00677450 FUN_00677450; analysis pseudocode, not buildable source.
 * calls 00670cf0 FUN_00670cf0
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_00677450(int param_1,byte param_2)

{
  FUN_00670cf0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x148,0);
  }
  return param_1;
}

