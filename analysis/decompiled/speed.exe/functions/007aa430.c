/* speed.exe 007aa430 FUN_007aa430; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 007aa450 FUN_007aa450
 */

undefined4 __thiscall FUN_007aa430(undefined4 param_1,byte param_2)

{
  FUN_007aa450();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

