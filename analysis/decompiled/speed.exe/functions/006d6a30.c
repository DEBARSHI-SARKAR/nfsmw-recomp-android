/* speed.exe 006d6a30 FUN_006d6a30; analysis pseudocode, not buildable source.
 * calls 006d6a50 FUN_006d6a50
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_006d6a30(undefined4 param_1,byte param_2)

{
  FUN_006d6a50();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

