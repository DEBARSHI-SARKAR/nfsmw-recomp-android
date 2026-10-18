/* speed.exe 00565170 FUN_00565170; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00565130 FUN_00565130
 */

undefined4 __thiscall FUN_00565170(undefined4 param_1,byte param_2)

{
  FUN_00565130();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

