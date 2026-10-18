/* speed.exe 00680d70 FUN_00680d70; analysis pseudocode, not buildable source.
 * calls 006807d0 thunk_FUN_00643590
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00680d70(undefined4 param_1,byte param_2)

{
  thunk_FUN_00643590();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

