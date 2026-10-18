/* speed.exe 004cccb0 FUN_004cccb0; analysis pseudocode, not buildable source.
 * calls 004cc8a0 thunk_FUN_004c9320
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_004cccb0(undefined4 param_1,byte param_2)

{
  thunk_FUN_004c9320();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

