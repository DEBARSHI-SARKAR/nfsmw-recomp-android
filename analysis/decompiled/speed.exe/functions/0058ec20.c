/* speed.exe 0058ec20 FUN_0058ec20; analysis pseudocode, not buildable source.
 * calls 0058ec40 FUN_0058ec40
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0058ec20(undefined4 param_1,byte param_2)

{
  FUN_0058ec40();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

