/* speed.exe 007a9fb0 FUN_007a9fb0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 007a9fd0 FUN_007a9fd0
 */

undefined4 __thiscall FUN_007a9fb0(undefined4 param_1,byte param_2)

{
  FUN_007a9fd0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

