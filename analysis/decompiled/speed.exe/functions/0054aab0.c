/* speed.exe 0054aab0 FUN_0054aab0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0054aad0 FUN_0054aad0
 */

undefined4 __thiscall FUN_0054aab0(undefined4 param_1,byte param_2)

{
  FUN_0054aad0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

