/* speed.exe 005167c0 FUN_005167c0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00516790 FUN_00516790
 */

undefined4 __thiscall FUN_005167c0(undefined4 param_1,byte param_2)

{
  FUN_00516790();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

