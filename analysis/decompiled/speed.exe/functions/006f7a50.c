/* speed.exe 006f7a50 FUN_006f7a50; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 006f6ef0 FUN_006f6ef0
 */

undefined4 __thiscall FUN_006f7a50(undefined4 param_1,byte param_2)

{
  FUN_006f6ef0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

