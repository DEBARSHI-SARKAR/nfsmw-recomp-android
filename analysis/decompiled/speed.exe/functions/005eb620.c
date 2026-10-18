/* speed.exe 005eb620 FUN_005eb620; analysis pseudocode, not buildable source.
 * calls 005eb5d0 FUN_005eb5d0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_005eb620(undefined4 param_1,byte param_2)

{
  FUN_005eb5d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

