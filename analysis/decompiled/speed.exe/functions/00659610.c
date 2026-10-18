/* speed.exe 00659610 FUN_00659610; analysis pseudocode, not buildable source.
 * calls 0074d2c0 FUN_0074d2c0
 * calls 007c7250 FUN_007c7250
 */

undefined4 __thiscall FUN_00659610(undefined4 param_1,byte param_2)

{
  FUN_0074d2c0();
  if ((param_2 & 1) != 0) {
    FUN_007c7250(param_1);
  }
  return param_1;
}

