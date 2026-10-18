/* speed.exe 0053a590 FUN_0053a590; analysis pseudocode, not buildable source.
 * calls 0053a5b0 FUN_0053a5b0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0053a590(undefined4 param_1,byte param_2)

{
  FUN_0053a5b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

