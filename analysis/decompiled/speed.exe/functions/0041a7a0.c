/* speed.exe 0041a7a0 FUN_0041a7a0; analysis pseudocode, not buildable source.
 * calls 00410d30 thunk_FUN_00501480
 * calls 00463ca0 FUN_00463ca0
 */

undefined4 __thiscall FUN_0041a7a0(undefined4 param_1,byte param_2)

{
  thunk_FUN_00501480();
  if ((param_2 & 1) != 0) {
    FUN_00463ca0(DAT_00915fb4,param_1);
  }
  return param_1;
}

