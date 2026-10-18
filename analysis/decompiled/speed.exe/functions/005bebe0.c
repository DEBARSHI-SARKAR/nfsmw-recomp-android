/* speed.exe 005bebe0 FUN_005bebe0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005bec00 FUN_005bec00
 */

undefined4 __thiscall FUN_005bebe0(undefined4 param_1,byte param_2)

{
  FUN_005bec00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

