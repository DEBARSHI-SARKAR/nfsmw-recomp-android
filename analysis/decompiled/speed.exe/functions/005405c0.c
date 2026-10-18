/* speed.exe 005405c0 FUN_005405c0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005405e0 FUN_005405e0
 */

undefined4 __thiscall FUN_005405c0(undefined4 param_1,byte param_2)

{
  FUN_005405e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

