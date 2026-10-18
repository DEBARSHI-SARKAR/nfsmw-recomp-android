/* speed.exe 00405290 FUN_00405290; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00405250 FUN_00405250
 */

undefined4 __thiscall FUN_00405290(undefined4 param_1,byte param_2)

{
  FUN_00405250();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

