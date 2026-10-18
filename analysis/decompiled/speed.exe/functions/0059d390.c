/* speed.exe 0059d390 FUN_0059d390; analysis pseudocode, not buildable source.
 * calls 0059d3b0 FUN_0059d3b0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0059d390(undefined4 param_1,byte param_2)

{
  FUN_0059d3b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

