/* speed.exe 00834fca FUN_00834fca; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00834de4 FUN_00834de4
 */

undefined4 __thiscall FUN_00834fca(undefined4 param_1,byte param_2)

{
  FUN_00834de4();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

