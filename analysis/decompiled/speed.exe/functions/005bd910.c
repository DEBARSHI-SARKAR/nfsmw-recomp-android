/* speed.exe 005bd910 FUN_005bd910; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005bd930 FUN_005bd930
 */

undefined4 __thiscall FUN_005bd910(undefined4 param_1,byte param_2)

{
  FUN_005bd930();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

