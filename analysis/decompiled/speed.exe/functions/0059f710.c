/* speed.exe 0059f710 FUN_0059f710; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0059f730 FUN_0059f730
 */

undefined4 __thiscall FUN_0059f710(undefined4 param_1,byte param_2)

{
  FUN_0059f730();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

