/* speed.exe 00598270 FUN_00598270; analysis pseudocode, not buildable source.
 * calls 00598290 FUN_00598290
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00598270(undefined4 param_1,byte param_2)

{
  FUN_00598290();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

