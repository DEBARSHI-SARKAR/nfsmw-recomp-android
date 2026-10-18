/* speed.exe 0069bf60 FUN_0069bf60; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0068c990 FUN_0068c990
 */

undefined4 __thiscall FUN_0069bf60(undefined4 param_1,byte param_2)

{
  FUN_0068c990();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

