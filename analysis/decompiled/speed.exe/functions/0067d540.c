/* speed.exe 0067d540 FUN_0067d540; analysis pseudocode, not buildable source.
 * calls 0067ca30 FUN_0067ca30
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0067d540(undefined4 param_1,byte param_2)

{
  FUN_0067ca30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

