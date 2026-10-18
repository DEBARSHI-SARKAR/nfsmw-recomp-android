/* speed.exe 006f7a90 FUN_006f7a90; analysis pseudocode, not buildable source.
 * calls 006f6f50 FUN_006f6f50
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_006f7a90(undefined4 param_1,byte param_2)

{
  FUN_006f6f50();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

