/* speed.exe 0068a9c0 FUN_0068a9c0; analysis pseudocode, not buildable source.
 * calls 0068a980 FUN_0068a980
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0068a9c0(undefined4 param_1,byte param_2)

{
  FUN_0068a980();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

