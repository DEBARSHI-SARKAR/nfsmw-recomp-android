/* speed.exe 006b6710 FUN_006b6710; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 006b6680 FUN_006b6680
 */

undefined4 __thiscall FUN_006b6710(undefined4 param_1,byte param_2)

{
  FUN_006b6680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

