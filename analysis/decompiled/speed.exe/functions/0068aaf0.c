/* speed.exe 0068aaf0 FUN_0068aaf0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0068aab0 FUN_0068aab0
 */

undefined4 __thiscall FUN_0068aaf0(undefined4 param_1,byte param_2)

{
  FUN_0068aab0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

