/* speed.exe 007f1ef6 FUN_007f1ef6; analysis pseudocode, not buildable source.
 * calls 007f1932 FUN_007f1932
 * calls 007f1cf9 FUN_007f1cf9
 */

undefined4 __thiscall FUN_007f1ef6(undefined4 param_1,byte param_2)

{
  FUN_007f1cf9();
  if ((param_2 & 1) != 0) {
    FUN_007f1932(param_1,0xb4);
  }
  return param_1;
}

