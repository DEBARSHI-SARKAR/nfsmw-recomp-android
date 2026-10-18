/* speed.exe 006a3de0 FUN_006a3de0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00693cf0 FUN_00693cf0
 */

undefined4 __thiscall FUN_006a3de0(undefined4 param_1,byte param_2)

{
  FUN_00693cf0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

