/* speed.exe 0051dba0 FUN_0051dba0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00510a40 FUN_00510a40
 */

undefined4 __thiscall FUN_0051dba0(undefined4 param_1,byte param_2)

{
  FUN_00510a40();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

