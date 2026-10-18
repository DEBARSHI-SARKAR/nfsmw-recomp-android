/* speed.exe 006b5760 FUN_006b5760; analysis pseudocode, not buildable source.
 * calls 006b56d0 FUN_006b56d0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_006b5760(undefined4 param_1,byte param_2)

{
  FUN_006b56d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

