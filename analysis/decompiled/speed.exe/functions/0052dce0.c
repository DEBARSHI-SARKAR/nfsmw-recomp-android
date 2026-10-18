/* speed.exe 0052dce0 FUN_0052dce0; analysis pseudocode, not buildable source.
 * calls 0052dd00 FUN_0052dd00
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0052dce0(undefined4 param_1,byte param_2)

{
  FUN_0052dd00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

