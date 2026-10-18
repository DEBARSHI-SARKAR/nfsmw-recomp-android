/* speed.exe 0068a880 FUN_0068a880; analysis pseudocode, not buildable source.
 * calls 0068a840 FUN_0068a840
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0068a880(undefined4 param_1,byte param_2)

{
  FUN_0068a840();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

