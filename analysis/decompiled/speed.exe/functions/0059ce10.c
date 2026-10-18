/* speed.exe 0059ce10 FUN_0059ce10; analysis pseudocode, not buildable source.
 * calls 0059ce30 FUN_0059ce30
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0059ce10(undefined4 param_1,byte param_2)

{
  FUN_0059ce30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

