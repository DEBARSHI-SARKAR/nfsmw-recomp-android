/* speed.exe 006a3e00 FUN_006a3e00; analysis pseudocode, not buildable source.
 * calls 00694070 FUN_00694070
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_006a3e00(undefined4 param_1,byte param_2)

{
  FUN_00694070();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

