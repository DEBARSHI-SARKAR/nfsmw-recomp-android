/* speed.exe 00694130 FUN_00694130; analysis pseudocode, not buildable source.
 * calls 006940f0 FUN_006940f0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00694130(undefined4 param_1,byte param_2)

{
  FUN_006940f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

