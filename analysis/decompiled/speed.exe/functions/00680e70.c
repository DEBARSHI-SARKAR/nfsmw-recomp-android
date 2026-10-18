/* speed.exe 00680e70 FUN_00680e70; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 006807e0 thunk_FUN_0067cdb0
 */

undefined4 __thiscall FUN_00680e70(undefined4 param_1,byte param_2)

{
  thunk_FUN_0067cdb0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

