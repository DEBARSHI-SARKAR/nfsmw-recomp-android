/* speed.exe 0052edc0 FUN_0052edc0; analysis pseudocode, not buildable source.
 * calls 0052ede0 FUN_0052ede0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0052edc0(undefined4 param_1,byte param_2)

{
  FUN_0052ede0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

