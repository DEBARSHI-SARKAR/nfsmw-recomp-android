/* speed.exe 00647450 FUN_00647450; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00646a90 FUN_00646a90
 */

int __thiscall FUN_00647450(int param_1,byte param_2)

{
  FUN_00646a90();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x2c,0);
  }
  return param_1;
}

