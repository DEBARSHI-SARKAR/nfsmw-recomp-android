/* speed.exe 006940d0 FUN_006940d0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00694090 FUN_00694090
 */

undefined4 __thiscall FUN_006940d0(undefined4 param_1,byte param_2)

{
  FUN_00694090();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

