/* speed.exe 0050df50 FUN_0050df50; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0050df00 FUN_0050df00
 */

undefined4 __thiscall FUN_0050df50(undefined4 param_1,byte param_2)

{
  FUN_0050df00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

