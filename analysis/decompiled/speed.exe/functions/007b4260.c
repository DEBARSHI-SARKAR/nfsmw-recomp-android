/* speed.exe 007b4260 FUN_007b4260; analysis pseudocode, not buildable source.
 * calls 007aa060 FUN_007aa060
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_007b4260(undefined4 param_1,byte param_2)

{
  FUN_007aa060();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

