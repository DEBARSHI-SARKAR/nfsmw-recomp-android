/* speed.exe 004ccc90 FUN_004ccc90; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 004cc780 thunk_FUN_004c92b0
 */

undefined4 __thiscall FUN_004ccc90(undefined4 param_1,byte param_2)

{
  thunk_FUN_004c92b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

