/* speed.exe 007b4b90 FUN_007b4b90; analysis pseudocode, not buildable source.
 * calls 007b4bb0 FUN_007b4bb0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_007b4b90(undefined4 param_1,byte param_2)

{
  FUN_007b4bb0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

