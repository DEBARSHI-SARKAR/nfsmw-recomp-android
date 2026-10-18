/* speed.exe 00509380 FUN_00509380; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005083b0 FUN_005083b0
 */

undefined4 __thiscall FUN_00509380(undefined4 param_1,byte param_2)

{
  FUN_005083b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

