/* speed.exe 006803c0 FUN_006803c0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0067ebe0 FUN_0067ebe0
 */

undefined4 __thiscall FUN_006803c0(undefined4 param_1,byte param_2)

{
  FUN_0067ebe0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

