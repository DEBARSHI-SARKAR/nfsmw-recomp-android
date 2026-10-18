/* speed.exe 007b4bf0 FUN_007b4bf0; analysis pseudocode, not buildable source.
 * calls 007b4c10 FUN_007b4c10
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_007b4bf0(undefined4 param_1,byte param_2)

{
  FUN_007b4c10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

