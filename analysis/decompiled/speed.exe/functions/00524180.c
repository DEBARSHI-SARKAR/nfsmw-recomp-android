/* speed.exe 00524180 FUN_00524180; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005142f0 FUN_005142f0
 */

undefined4 __thiscall FUN_00524180(undefined4 param_1,byte param_2)

{
  FUN_005142f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

