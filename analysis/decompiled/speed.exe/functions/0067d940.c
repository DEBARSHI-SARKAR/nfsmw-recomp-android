/* speed.exe 0067d940 FUN_0067d940; analysis pseudocode, not buildable source.
 * calls 0067d150 FUN_0067d150
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0067d940(undefined4 param_1,byte param_2)

{
  FUN_0067d150();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

