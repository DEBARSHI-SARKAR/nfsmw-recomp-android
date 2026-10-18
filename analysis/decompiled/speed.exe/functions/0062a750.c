/* speed.exe 0062a750 FUN_0062a750; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00620450 FUN_00620450
 */

undefined4 __thiscall FUN_0062a750(undefined4 param_1,byte param_2)

{
  FUN_00620450();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

