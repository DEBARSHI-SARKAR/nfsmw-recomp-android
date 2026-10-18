/* speed.exe 00480f70 FUN_00480f70; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00480f60 FUN_00480f60
 */

undefined4 __thiscall FUN_00480f70(undefined4 param_1,byte param_2)

{
  FUN_00480f60();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

