/* speed.exe 00535390 FUN_00535390; analysis pseudocode, not buildable source.
 * calls 005353b0 FUN_005353b0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00535390(undefined4 param_1,byte param_2)

{
  FUN_005353b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

