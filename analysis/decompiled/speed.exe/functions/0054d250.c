/* speed.exe 0054d250 FUN_0054d250; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005405f0 FUN_005405f0
 */

undefined4 __thiscall FUN_0054d250(undefined4 param_1,byte param_2)

{
  FUN_005405f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

