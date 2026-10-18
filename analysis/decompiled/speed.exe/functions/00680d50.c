/* speed.exe 00680d50 FUN_00680d50; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 006807c0 thunk_FUN_0067ca30
 */

undefined4 __thiscall FUN_00680d50(undefined4 param_1,byte param_2)

{
  thunk_FUN_0067ca30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

