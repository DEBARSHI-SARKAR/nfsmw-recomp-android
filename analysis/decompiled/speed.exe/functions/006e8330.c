/* speed.exe 006e8330 FUN_006e8330; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 006e82f0 FUN_006e82f0
 */

undefined4 __thiscall FUN_006e8330(undefined4 param_1,byte param_2)

{
  FUN_006e82f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

