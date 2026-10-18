/* speed.exe 00595250 FUN_00595250; analysis pseudocode, not buildable source.
 * calls 0057ade0 FUN_0057ade0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00595250(undefined4 param_1,byte param_2)

{
  FUN_0057ade0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

