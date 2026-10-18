/* speed.exe 0069b880 FUN_0069b880; analysis pseudocode, not buildable source.
 * calls 0069b810 FUN_0069b810
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0069b880(undefined4 param_1,byte param_2)

{
  FUN_0069b810();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

