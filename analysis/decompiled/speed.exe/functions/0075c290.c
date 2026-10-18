/* speed.exe 0075c290 FUN_0075c290; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0075c1e0 FUN_0075c1e0
 */

undefined4 __thiscall FUN_0075c290(undefined4 param_1,byte param_2)

{
  FUN_0075c1e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

