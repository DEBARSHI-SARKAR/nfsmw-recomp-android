/* speed.exe 00565720 FUN_00565720; analysis pseudocode, not buildable source.
 * calls 005656e0 FUN_005656e0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00565720(undefined4 param_1,byte param_2)

{
  FUN_005656e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

