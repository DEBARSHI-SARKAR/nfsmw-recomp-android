/* speed.exe 0053dd20 FUN_0053dd20; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0053dd40 FUN_0053dd40
 */

undefined4 __thiscall FUN_0053dd20(undefined4 param_1,byte param_2)

{
  FUN_0053dd40();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

