/* speed.exe 0067d500 FUN_0067d500; analysis pseudocode, not buildable source.
 * calls 0067c9c0 FUN_0067c9c0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0067d500(undefined4 param_1,byte param_2)

{
  FUN_0067c9c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

