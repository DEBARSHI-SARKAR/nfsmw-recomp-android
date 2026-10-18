/* speed.exe 005beb50 FUN_005beb50; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005beb70 FUN_005beb70
 */

undefined4 __thiscall FUN_005beb50(undefined4 param_1,byte param_2)

{
  FUN_005beb70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

