/* speed.exe 00645150 FUN_00645150; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00644b10 thunk_FUN_00643590
 */

undefined4 __thiscall FUN_00645150(undefined4 param_1,byte param_2)

{
  thunk_FUN_00643590();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

