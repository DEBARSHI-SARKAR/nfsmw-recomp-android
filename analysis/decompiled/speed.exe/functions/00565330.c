/* speed.exe 00565330 FUN_00565330; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005652f0 FUN_005652f0
 */

undefined4 __thiscall FUN_00565330(undefined4 param_1,byte param_2)

{
  FUN_005652f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

