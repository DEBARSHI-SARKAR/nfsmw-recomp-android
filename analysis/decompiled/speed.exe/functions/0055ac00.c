/* speed.exe 0055ac00 FUN_0055ac00; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0055ac20 FUN_0055ac20
 */

undefined4 __thiscall FUN_0055ac00(undefined4 param_1,byte param_2)

{
  FUN_0055ac20();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

