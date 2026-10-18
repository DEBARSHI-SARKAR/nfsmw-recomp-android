/* speed.exe 00696990 FUN_00696990; analysis pseudocode, not buildable source.
 * calls 0068b480 FUN_0068b480
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00696990(undefined4 param_1,byte param_2)

{
  FUN_0068b480();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

