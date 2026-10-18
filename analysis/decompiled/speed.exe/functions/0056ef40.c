/* speed.exe 0056ef40 FUN_0056ef40; analysis pseudocode, not buildable source.
 * calls 0056ef30 FUN_0056ef30
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0056ef40(undefined4 param_1,byte param_2)

{
  FUN_0056ef30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

