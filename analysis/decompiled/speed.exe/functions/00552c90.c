/* speed.exe 00552c90 FUN_00552c90; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00548600 FUN_00548600
 */

undefined4 __thiscall FUN_00552c90(undefined4 param_1,byte param_2)

{
  FUN_00548600();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

