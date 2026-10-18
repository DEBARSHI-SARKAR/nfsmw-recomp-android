/* speed.exe 006f6300 FUN_006f6300; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 006f6040 FUN_006f6040
 */

undefined4 __thiscall FUN_006f6300(undefined4 param_1,byte param_2)

{
  FUN_006f6040();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

