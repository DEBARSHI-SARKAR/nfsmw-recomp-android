/* speed.exe 006f4350 FUN_006f4350; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 006f4370 thunk_FUN_0069b810
 */

undefined4 __thiscall FUN_006f4350(undefined4 param_1,byte param_2)

{
  thunk_FUN_0069b810();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

