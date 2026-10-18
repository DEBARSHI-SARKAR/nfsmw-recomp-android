/* speed.exe 005b1650 FUN_005b1650; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005b1640 FUN_005b1640
 */

undefined4 __thiscall FUN_005b1650(undefined4 param_1,byte param_2)

{
  FUN_005b1640();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

