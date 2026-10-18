/* speed.exe 005b3c20 FUN_005b3c20; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005b3c40 FUN_005b3c40
 */

undefined4 __thiscall FUN_005b3c20(undefined4 param_1,byte param_2)

{
  FUN_005b3c40();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

