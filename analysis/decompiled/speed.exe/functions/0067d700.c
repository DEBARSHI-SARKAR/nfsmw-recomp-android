/* speed.exe 0067d700 FUN_0067d700; analysis pseudocode, not buildable source.
 * calls 0067cd40 FUN_0067cd40
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0067d700(undefined4 param_1,byte param_2)

{
  FUN_0067cd40();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

