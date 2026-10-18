/* speed.exe 00549a60 FUN_00549a60; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00533b40 FUN_00533b40
 */

undefined4 __thiscall FUN_00549a60(undefined4 param_1,byte param_2)

{
  FUN_00533b40();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

