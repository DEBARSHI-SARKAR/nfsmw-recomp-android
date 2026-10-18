/* speed.exe 005ef430 FUN_005ef430; analysis pseudocode, not buildable source.
 * calls 005ee920 FUN_005ee920
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_005ef430(undefined4 param_1,byte param_2)

{
  FUN_005ee920();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

