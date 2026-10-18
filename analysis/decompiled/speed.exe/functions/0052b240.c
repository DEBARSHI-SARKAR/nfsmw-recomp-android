/* speed.exe 0052b240 FUN_0052b240; analysis pseudocode, not buildable source.
 * calls 0052b260 FUN_0052b260
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0052b240(undefined4 param_1,byte param_2)

{
  FUN_0052b260();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

