/* speed.exe 0067d780 FUN_0067d780; analysis pseudocode, not buildable source.
 * calls 0067ce20 FUN_0067ce20
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0067d780(undefined4 param_1,byte param_2)

{
  FUN_0067ce20();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

