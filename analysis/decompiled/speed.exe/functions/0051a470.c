/* speed.exe 0051a470 FUN_0051a470; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0051a400 FUN_0051a400
 */

undefined4 __thiscall FUN_0051a470(undefined4 param_1,byte param_2)

{
  FUN_0051a400();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

