/* speed.exe 0068a7b0 FUN_0068a7b0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0068a770 FUN_0068a770
 */

undefined4 __thiscall FUN_0068a7b0(undefined4 param_1,byte param_2)

{
  FUN_0068a770();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

