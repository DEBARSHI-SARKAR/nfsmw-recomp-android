/* speed.exe 005b3f10 FUN_005b3f10; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005ada20 FUN_005ada20
 */

undefined4 __thiscall FUN_005b3f10(undefined4 param_1,byte param_2)

{
  FUN_005ada20();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

