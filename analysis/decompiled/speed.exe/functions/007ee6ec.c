/* speed.exe 007ee6ec FUN_007ee6ec; analysis pseudocode, not buildable source.
 * calls 007ee6ad FUN_007ee6ad
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_007ee6ec(undefined4 param_1,byte param_2)

{
  FUN_007ee6ad();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

