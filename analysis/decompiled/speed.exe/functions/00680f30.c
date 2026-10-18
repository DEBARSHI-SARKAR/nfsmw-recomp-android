/* speed.exe 00680f30 FUN_00680f30; analysis pseudocode, not buildable source.
 * calls 006807a0 thunk_FUN_0067d050
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00680f30(undefined4 param_1,byte param_2)

{
  thunk_FUN_0067d050();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

