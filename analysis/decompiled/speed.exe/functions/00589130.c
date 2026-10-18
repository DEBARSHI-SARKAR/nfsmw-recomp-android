/* speed.exe 00589130 FUN_00589130; analysis pseudocode, not buildable source.
 * calls 0051a490 FUN_0051a490
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00589130(undefined4 param_1,byte param_2)

{
  FUN_0051a490();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

