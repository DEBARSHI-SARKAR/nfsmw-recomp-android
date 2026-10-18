/* speed.exe 00565250 FUN_00565250; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00565210 FUN_00565210
 */

undefined4 __thiscall FUN_00565250(undefined4 param_1,byte param_2)

{
  FUN_00565210();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

