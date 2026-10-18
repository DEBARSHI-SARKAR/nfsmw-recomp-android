/* speed.exe 00742110 FUN_00742110; analysis pseudocode, not buildable source.
 * calls 00736700 FUN_00736700
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00742110(undefined4 param_1,byte param_2)

{
  FUN_00736700();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

