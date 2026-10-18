/* speed.exe 00515ca0 FUN_00515ca0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00515c90 FUN_00515c90
 */

undefined4 __thiscall FUN_00515ca0(undefined4 param_1,byte param_2)

{
  FUN_00515c90();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

