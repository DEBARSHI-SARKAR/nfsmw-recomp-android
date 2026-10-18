/* speed.exe 006e82d0 FUN_006e82d0; analysis pseudocode, not buildable source.
 * calls 006e8290 FUN_006e8290
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_006e82d0(undefined4 param_1,byte param_2)

{
  FUN_006e8290();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

