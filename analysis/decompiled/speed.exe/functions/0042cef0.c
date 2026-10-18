/* speed.exe 0042cef0 FUN_0042cef0; analysis pseudocode, not buildable source.
 * calls 0042cbf0 FUN_0042cbf0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0042cef0(undefined4 param_1,byte param_2)

{
  FUN_0042cbf0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

