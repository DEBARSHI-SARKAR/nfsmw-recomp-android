/* speed.exe 0044fb90 FUN_0044fb90; analysis pseudocode, not buildable source.
 * calls 0044e4a0 FUN_0044e4a0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0044fb90(undefined4 param_1,byte param_2)

{
  FUN_0044e4a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

