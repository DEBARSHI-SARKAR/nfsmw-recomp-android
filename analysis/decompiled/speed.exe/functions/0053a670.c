/* speed.exe 0053a670 FUN_0053a670; analysis pseudocode, not buildable source.
 * calls 0053a690 FUN_0053a690
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0053a670(undefined4 param_1,byte param_2)

{
  FUN_0053a690();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

