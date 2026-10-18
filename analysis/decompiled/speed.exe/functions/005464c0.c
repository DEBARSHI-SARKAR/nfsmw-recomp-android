/* speed.exe 005464c0 FUN_005464c0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005464e0 FUN_005464e0
 */

undefined4 __thiscall FUN_005464c0(undefined4 param_1,byte param_2)

{
  FUN_005464e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

