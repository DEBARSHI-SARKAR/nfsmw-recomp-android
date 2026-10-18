/* speed.exe 007f772a FUN_007f772a; analysis pseudocode, not buildable source.
 * calls 007f75f3 FUN_007f75f3
 * calls 007f4093 FUN_007f4093
 */

undefined4 __thiscall FUN_007f772a(undefined4 param_1,byte param_2)

{
  FUN_007f75f3();
  if ((param_2 & 1) != 0) {
    FUN_007f4093(param_1,0x84);
  }
  return param_1;
}

