/* speed.exe 0043bb70 FUN_0043bb70; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0043bba0 FUN_0043bba0
 */

int __thiscall FUN_0043bb70(int param_1,byte param_2)

{
  FUN_0043bba0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x18,0);
  }
  return param_1;
}

