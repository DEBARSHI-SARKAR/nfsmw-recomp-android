/* speed.exe 00421b00 FUN_00421b00; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00421b30 FUN_00421b30
 */

int __thiscall FUN_00421b00(int param_1,byte param_2)

{
  FUN_00421b30();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x48,0);
  }
  return param_1;
}

