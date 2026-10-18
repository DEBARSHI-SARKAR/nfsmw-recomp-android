/* speed.exe 0059e040 FUN_0059e040; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0059e060 FUN_0059e060
 */

undefined4 __thiscall FUN_0059e040(undefined4 param_1,byte param_2)

{
  FUN_0059e060();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

