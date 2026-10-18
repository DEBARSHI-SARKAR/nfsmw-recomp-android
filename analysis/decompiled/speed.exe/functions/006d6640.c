/* speed.exe 006d6640 FUN_006d6640; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 006d6660 FUN_006d6660
 */

undefined4 __thiscall FUN_006d6640(undefined4 param_1,byte param_2)

{
  FUN_006d6660();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

