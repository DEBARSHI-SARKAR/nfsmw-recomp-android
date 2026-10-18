/* speed.exe 007b4280 FUN_007b4280; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 007b42a0 FUN_007b42a0
 */

undefined4 __thiscall FUN_007b4280(undefined4 param_1,byte param_2)

{
  FUN_007b42a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

