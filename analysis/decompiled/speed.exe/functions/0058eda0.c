/* speed.exe 0058eda0 FUN_0058eda0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0058edc0 FUN_0058edc0
 */

undefined4 __thiscall FUN_0058eda0(undefined4 param_1,byte param_2)

{
  FUN_0058edc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

