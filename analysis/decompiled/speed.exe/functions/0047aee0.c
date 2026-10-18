/* speed.exe 0047aee0 FUN_0047aee0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00476680 FUN_00476680
 */

undefined4 __thiscall FUN_0047aee0(undefined4 param_1,byte param_2)

{
  FUN_00476680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

