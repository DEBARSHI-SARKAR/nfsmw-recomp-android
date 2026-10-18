/* speed.exe 0042e3a0 FUN_0042e3a0; analysis pseudocode, not buildable source.
 * calls 0042e310 FUN_0042e310
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0042e3a0(undefined4 param_1,byte param_2)

{
  FUN_0042e310();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

