/* speed.exe 00543770 FUN_00543770; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00543790 FUN_00543790
 */

undefined4 __thiscall FUN_00543770(undefined4 param_1,byte param_2)

{
  FUN_00543790();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

