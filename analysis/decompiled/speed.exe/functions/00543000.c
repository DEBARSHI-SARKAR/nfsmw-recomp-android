/* speed.exe 00543000 FUN_00543000; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00543020 FUN_00543020
 */

undefined4 __thiscall FUN_00543000(undefined4 param_1,byte param_2)

{
  FUN_00543020();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

