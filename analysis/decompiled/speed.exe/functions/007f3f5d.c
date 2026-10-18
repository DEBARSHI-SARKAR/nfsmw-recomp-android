/* speed.exe 007f3f5d FUN_007f3f5d; analysis pseudocode, not buildable source.
 * calls 007f4e25 FUN_007f4e25
 * calls 007f4093 FUN_007f4093
 */

undefined4 __thiscall FUN_007f3f5d(undefined4 param_1,byte param_2)

{
  FUN_007f4e25();
  if ((param_2 & 1) != 0) {
    FUN_007f4093(param_1,0x304);
  }
  return param_1;
}

