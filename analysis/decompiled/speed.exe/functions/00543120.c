/* speed.exe 00543120 FUN_00543120; analysis pseudocode, not buildable source.
 * calls 00543140 FUN_00543140
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00543120(undefined4 param_1,byte param_2)

{
  FUN_00543140();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

