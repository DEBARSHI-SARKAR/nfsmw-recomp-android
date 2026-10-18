/* speed.exe 0067ea20 FUN_0067ea20; analysis pseudocode, not buildable source.
 * calls 0067e9b0 FUN_0067e9b0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0067ea20(undefined4 param_1,byte param_2)

{
  FUN_0067e9b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

