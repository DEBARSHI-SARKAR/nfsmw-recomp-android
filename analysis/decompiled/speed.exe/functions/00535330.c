/* speed.exe 00535330 FUN_00535330; analysis pseudocode, not buildable source.
 * calls 00535350 FUN_00535350
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00535330(undefined4 param_1,byte param_2)

{
  FUN_00535350();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

