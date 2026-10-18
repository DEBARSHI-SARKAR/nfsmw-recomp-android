/* speed.exe 006e8140 FUN_006e8140; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 006e8100 FUN_006e8100
 */

undefined4 __thiscall FUN_006e8140(undefined4 param_1,byte param_2)

{
  FUN_006e8100();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

