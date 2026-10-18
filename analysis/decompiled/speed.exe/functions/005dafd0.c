/* speed.exe 005dafd0 FUN_005dafd0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005daec0 FUN_005daec0
 */

undefined4 __thiscall FUN_005dafd0(undefined4 param_1,byte param_2)

{
  FUN_005daec0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

