/* speed.exe 0068b250 FUN_0068b250; analysis pseudocode, not buildable source.
 * calls 0068b210 FUN_0068b210
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0068b250(undefined4 param_1,byte param_2)

{
  FUN_0068b210();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

