/* speed.exe 0059e370 FUN_0059e370; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0059e390 FUN_0059e390
 */

undefined4 __thiscall FUN_0059e370(undefined4 param_1,byte param_2)

{
  FUN_0059e390();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

