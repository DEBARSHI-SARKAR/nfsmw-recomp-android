/* speed.exe 00677420 FUN_00677420; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00670c70 FUN_00670c70
 */

int __thiscall FUN_00677420(int param_1,byte param_2)

{
  FUN_00670c70();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x4c,0);
  }
  return param_1;
}

