/* speed.exe 004cb990 FUN_004cb990; analysis pseudocode, not buildable source.
 * calls 004caed0 FUN_004caed0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_004cb990(undefined4 param_1,byte param_2)

{
  FUN_004caed0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

