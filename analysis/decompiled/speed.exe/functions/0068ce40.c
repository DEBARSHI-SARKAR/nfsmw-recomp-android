/* speed.exe 0068ce40 FUN_0068ce40; analysis pseudocode, not buildable source.
 * calls 0068ce00 FUN_0068ce00
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0068ce40(undefined4 param_1,byte param_2)

{
  FUN_0068ce00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

