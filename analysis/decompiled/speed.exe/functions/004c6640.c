/* speed.exe 004c6640 FUN_004c6640; analysis pseudocode, not buildable source.
 * calls 004c6540 FUN_004c6540
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_004c6640(undefined4 param_1,byte param_2)

{
  FUN_004c6540();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

