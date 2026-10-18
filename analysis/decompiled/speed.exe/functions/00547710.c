/* speed.exe 00547710 FUN_00547710; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0052f820 FUN_0052f820
 */

undefined4 __thiscall FUN_00547710(undefined4 param_1,byte param_2)

{
  FUN_0052f820();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

