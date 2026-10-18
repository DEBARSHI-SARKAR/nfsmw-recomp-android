/* speed.exe 005247f0 FUN_005247f0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00514c00 FUN_00514c00
 */

undefined4 __thiscall FUN_005247f0(undefined4 param_1,byte param_2)

{
  FUN_00514c00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

