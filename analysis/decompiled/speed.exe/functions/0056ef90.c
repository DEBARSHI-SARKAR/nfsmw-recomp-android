/* speed.exe 0056ef90 FUN_0056ef90; analysis pseudocode, not buildable source.
 * calls 0056ef80 FUN_0056ef80
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0056ef90(undefined4 param_1,byte param_2)

{
  FUN_0056ef80();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

