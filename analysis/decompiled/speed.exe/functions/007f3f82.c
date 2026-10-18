/* speed.exe 007f3f82 FUN_007f3f82; analysis pseudocode, not buildable source.
 * calls 007f3e62 FUN_007f3e62
 * calls 007f4093 FUN_007f4093
 */

undefined4 __thiscall FUN_007f3f82(undefined4 param_1,byte param_2)

{
  FUN_007f3e62();
  if ((param_2 & 1) != 0) {
    FUN_007f4093(param_1,4);
  }
  return param_1;
}

