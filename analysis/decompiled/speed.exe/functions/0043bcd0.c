/* speed.exe 0043bcd0 FUN_0043bcd0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0043bd00 FUN_0043bd00
 */

int __thiscall FUN_0043bcd0(int param_1,byte param_2)

{
  FUN_0043bd00();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x18,0);
  }
  return param_1;
}

