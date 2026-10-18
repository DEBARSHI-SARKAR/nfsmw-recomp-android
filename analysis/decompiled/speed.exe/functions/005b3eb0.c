/* speed.exe 005b3eb0 FUN_005b3eb0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005ada10 FUN_005ada10
 */

undefined4 __thiscall FUN_005b3eb0(undefined4 param_1,byte param_2)

{
  FUN_005ada10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

