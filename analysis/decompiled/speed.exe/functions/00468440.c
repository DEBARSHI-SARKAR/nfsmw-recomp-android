/* speed.exe 00468440 FUN_00468440; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00468400 FUN_00468400
 */

undefined4 __thiscall FUN_00468440(undefined4 param_1,byte param_2)

{
  FUN_00468400();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

