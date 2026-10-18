/* speed.exe 0075a9c0 FUN_0075a9c0; analysis pseudocode, not buildable source.
 * calls 00759140 FUN_00759140
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0075a9c0(undefined4 param_1,byte param_2)

{
  FUN_00759140();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

