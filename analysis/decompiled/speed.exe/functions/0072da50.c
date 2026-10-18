/* speed.exe 0072da50 FUN_0072da50; analysis pseudocode, not buildable source.
 * calls 0072d8c0 FUN_0072d8c0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0072da50(undefined4 param_1,byte param_2)

{
  FUN_0072d8c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

