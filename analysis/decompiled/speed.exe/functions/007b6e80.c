/* speed.exe 007b6e80 FUN_007b6e80; analysis pseudocode, not buildable source.
 * calls 007b6ea0 FUN_007b6ea0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_007b6e80(undefined4 param_1,byte param_2)

{
  FUN_007b6ea0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

