/* speed.exe 00565560 FUN_00565560; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00565520 FUN_00565520
 */

undefined4 __thiscall FUN_00565560(undefined4 param_1,byte param_2)

{
  FUN_00565520();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

