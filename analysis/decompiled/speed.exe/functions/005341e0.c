/* speed.exe 005341e0 FUN_005341e0; analysis pseudocode, not buildable source.
 * calls 00534200 FUN_00534200
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_005341e0(undefined4 param_1,byte param_2)

{
  FUN_00534200();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

