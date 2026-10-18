/* speed.exe 0052a720 FUN_0052a720; analysis pseudocode, not buildable source.
 * calls 0052a740 FUN_0052a740
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0052a720(undefined4 param_1,byte param_2)

{
  FUN_0052a740();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

