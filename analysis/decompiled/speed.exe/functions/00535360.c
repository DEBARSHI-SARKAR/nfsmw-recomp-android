/* speed.exe 00535360 FUN_00535360; analysis pseudocode, not buildable source.
 * calls 00535380 FUN_00535380
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00535360(undefined4 param_1,byte param_2)

{
  FUN_00535380();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

