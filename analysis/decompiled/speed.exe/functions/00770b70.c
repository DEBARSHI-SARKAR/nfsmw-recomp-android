/* speed.exe 00770b70 FUN_00770b70; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00768560 FUN_00768560
 */

undefined4 __thiscall FUN_00770b70(undefined4 param_1,byte param_2)

{
  FUN_00768560();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

