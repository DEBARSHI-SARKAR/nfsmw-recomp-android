/* speed.exe 00556ee0 FUN_00556ee0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0054b680 FUN_0054b680
 */

undefined4 __thiscall FUN_00556ee0(undefined4 param_1,byte param_2)

{
  FUN_0054b680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

