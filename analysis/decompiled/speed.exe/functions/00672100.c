/* speed.exe 00672100 FUN_00672100; analysis pseudocode, not buildable source.
 * calls 0066ada0 FUN_0066ada0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00672100(undefined4 param_1,byte param_2)

{
  FUN_0066ada0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

