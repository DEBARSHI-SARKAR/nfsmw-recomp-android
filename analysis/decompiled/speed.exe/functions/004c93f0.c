/* speed.exe 004c93f0 FUN_004c93f0; analysis pseudocode, not buildable source.
 * calls 004c8ff0 FUN_004c8ff0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_004c93f0(undefined4 param_1,byte param_2)

{
  FUN_004c8ff0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

