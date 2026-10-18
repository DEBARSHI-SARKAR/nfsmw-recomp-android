/* speed.exe 004c94d0 FUN_004c94d0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 004c9320 FUN_004c9320
 */

undefined4 __thiscall FUN_004c94d0(undefined4 param_1,byte param_2)

{
  FUN_004c9320();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

