/* speed.exe 005b0830 FUN_005b0830; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005b0820 FUN_005b0820
 */

undefined4 __thiscall FUN_005b0830(undefined4 param_1,byte param_2)

{
  FUN_005b0820();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

