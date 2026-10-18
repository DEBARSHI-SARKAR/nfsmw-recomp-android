/* speed.exe 004b8bb0 FUN_004b8bb0; analysis pseudocode, not buildable source.
 * calls 004ae660 FUN_004ae660
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_004b8bb0(undefined4 param_1,byte param_2)

{
  FUN_004ae660();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

