/* speed.exe 0054e730 FUN_0054e730; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0054e750 FUN_0054e750
 */

undefined4 __thiscall FUN_0054e730(undefined4 param_1,byte param_2)

{
  FUN_0054e750();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

