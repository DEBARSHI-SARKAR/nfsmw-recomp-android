/* speed.exe 005d9030 FUN_005d9030; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005d8f20 FUN_005d8f20
 */

undefined4 __thiscall FUN_005d9030(undefined4 param_1,byte param_2)

{
  FUN_005d8f20();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

