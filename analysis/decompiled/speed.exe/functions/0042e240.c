/* speed.exe 0042e240 FUN_0042e240; analysis pseudocode, not buildable source.
 * calls 0042e1b0 FUN_0042e1b0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0042e240(undefined4 param_1,byte param_2)

{
  FUN_0042e1b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

