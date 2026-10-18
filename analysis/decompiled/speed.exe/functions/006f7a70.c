/* speed.exe 006f7a70 FUN_006f7a70; analysis pseudocode, not buildable source.
 * calls 006f6f20 FUN_006f6f20
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_006f7a70(undefined4 param_1,byte param_2)

{
  FUN_006f6f20();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

