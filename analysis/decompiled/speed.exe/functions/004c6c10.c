/* speed.exe 004c6c10 FUN_004c6c10; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 004c04e0 FUN_004c04e0
 */

undefined4 __thiscall FUN_004c6c10(undefined4 param_1,byte param_2)

{
  FUN_004c04e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

