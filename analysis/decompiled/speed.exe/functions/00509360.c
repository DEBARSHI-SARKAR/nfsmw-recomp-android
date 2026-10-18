/* speed.exe 00509360 FUN_00509360; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00508310 FUN_00508310
 */

undefined4 __thiscall FUN_00509360(undefined4 param_1,byte param_2)

{
  FUN_00508310();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

