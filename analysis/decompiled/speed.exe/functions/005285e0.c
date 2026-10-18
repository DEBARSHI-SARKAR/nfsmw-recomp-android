/* speed.exe 005285e0 FUN_005285e0; analysis pseudocode, not buildable source.
 * calls 00528600 FUN_00528600
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_005285e0(undefined4 param_1,byte param_2)

{
  FUN_00528600();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

