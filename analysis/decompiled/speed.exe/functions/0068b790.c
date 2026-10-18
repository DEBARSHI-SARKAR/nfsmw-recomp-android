/* speed.exe 0068b790 FUN_0068b790; analysis pseudocode, not buildable source.
 * calls 0068b750 FUN_0068b750
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0068b790(undefined4 param_1,byte param_2)

{
  FUN_0068b750();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

