/* speed.exe 0058c620 FUN_0058c620; analysis pseudocode, not buildable source.
 * calls 0058c610 FUN_0058c610
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0058c620(undefined4 param_1,byte param_2)

{
  FUN_0058c610();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

