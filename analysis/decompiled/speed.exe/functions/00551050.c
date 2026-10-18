/* speed.exe 00551050 FUN_00551050; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00547690 FUN_00547690
 */

undefined4 __thiscall FUN_00551050(undefined4 param_1,byte param_2)

{
  FUN_00547690();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

