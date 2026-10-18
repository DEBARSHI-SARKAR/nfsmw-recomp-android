/* speed.exe 005289a0 FUN_005289a0; analysis pseudocode, not buildable source.
 * calls 005289c0 FUN_005289c0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_005289a0(undefined4 param_1,byte param_2)

{
  FUN_005289c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

