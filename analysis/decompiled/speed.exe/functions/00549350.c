/* speed.exe 00549350 FUN_00549350; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00549370 FUN_00549370
 */

undefined4 __thiscall FUN_00549350(undefined4 param_1,byte param_2)

{
  FUN_00549370();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

