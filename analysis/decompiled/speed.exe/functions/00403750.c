/* speed.exe 00403750 FUN_00403750; analysis pseudocode, not buildable source.
 * calls 00403710 FUN_00403710
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00403750(undefined4 param_1,byte param_2)

{
  FUN_00403710();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

