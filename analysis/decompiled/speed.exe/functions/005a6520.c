/* speed.exe 005a6520 FUN_005a6520; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0059dac0 FUN_0059dac0
 */

undefined4 __thiscall FUN_005a6520(undefined4 param_1,byte param_2)

{
  FUN_0059dac0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

