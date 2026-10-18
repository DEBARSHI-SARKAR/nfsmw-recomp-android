/* speed.exe 007f729c FUN_007f729c; analysis pseudocode, not buildable source.
 * calls 007f71d0 FUN_007f71d0
 * calls 007f4093 FUN_007f4093
 */

undefined4 __thiscall FUN_007f729c(undefined4 param_1,byte param_2)

{
  FUN_007f71d0();
  if ((param_2 & 1) != 0) {
    FUN_007f4093(param_1,0x1c);
  }
  return param_1;
}

