/* speed.exe 00410290 FUN_00410290; analysis pseudocode, not buildable source.
 * calls 005d5a50 FUN_005d5a50
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 * __thiscall FUN_00410290(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_00890970;
  FUN_005d5a50(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

