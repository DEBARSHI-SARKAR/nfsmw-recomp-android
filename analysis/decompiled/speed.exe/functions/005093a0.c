/* speed.exe 005093a0 FUN_005093a0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005083c0 FUN_005083c0
 */

undefined4 __thiscall FUN_005093a0(undefined4 param_1,byte param_2)

{
  FUN_005083c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

