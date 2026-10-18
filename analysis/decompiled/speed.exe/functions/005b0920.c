/* speed.exe 005b0920 FUN_005b0920; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005b0910 FUN_005b0910
 */

undefined4 __thiscall FUN_005b0920(undefined4 param_1,byte param_2)

{
  FUN_005b0910();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

