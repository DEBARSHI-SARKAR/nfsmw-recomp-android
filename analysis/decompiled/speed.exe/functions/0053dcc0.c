/* speed.exe 0053dcc0 FUN_0053dcc0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0053dce0 FUN_0053dce0
 */

undefined4 __thiscall FUN_0053dcc0(undefined4 param_1,byte param_2)

{
  FUN_0053dce0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

