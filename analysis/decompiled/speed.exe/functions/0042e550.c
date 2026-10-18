/* speed.exe 0042e550 FUN_0042e550; analysis pseudocode, not buildable source.
 * calls 0042e540 thunk_FUN_0042c990
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0042e550(undefined4 param_1,byte param_2)

{
  thunk_FUN_0042c990();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

