/* speed.exe 00463df0 FUN_00463df0; analysis pseudocode, not buildable source.
 * calls 007c7250 FUN_007c7250
 * calls 00463da0 FUN_00463da0
 */

undefined4 __thiscall FUN_00463df0(undefined4 param_1,byte param_2)

{
  FUN_00463da0();
  if ((param_2 & 1) != 0) {
    FUN_007c7250(param_1);
  }
  return param_1;
}

