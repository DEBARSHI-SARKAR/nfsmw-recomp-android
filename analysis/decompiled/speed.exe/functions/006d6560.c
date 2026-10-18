/* speed.exe 006d6560 FUN_006d6560; analysis pseudocode, not buildable source.
 * calls 006d6580 FUN_006d6580
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_006d6560(undefined4 param_1,byte param_2)

{
  FUN_006d6580();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

