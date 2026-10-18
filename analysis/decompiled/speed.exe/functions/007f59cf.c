/* speed.exe 007f59cf FUN_007f59cf; analysis pseudocode, not buildable source.
 * calls 007f642b FUN_007f642b
 * calls 007f4093 FUN_007f4093
 */

undefined4 __thiscall FUN_007f59cf(undefined4 param_1,byte param_2)

{
  FUN_007f642b();
  if ((param_2 & 1) != 0) {
    FUN_007f4093(param_1,0x138);
  }
  return param_1;
}

