/* speed.exe 00565860 FUN_00565860; analysis pseudocode, not buildable source.
 * calls 00565820 FUN_00565820
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00565860(undefined4 param_1,byte param_2)

{
  FUN_00565820();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

