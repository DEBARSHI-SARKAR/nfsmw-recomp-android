/* speed.exe 005082d0 FUN_005082d0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00507760 FUN_00507760
 */

undefined4 __thiscall FUN_005082d0(undefined4 param_1,byte param_2)

{
  FUN_00507760();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

