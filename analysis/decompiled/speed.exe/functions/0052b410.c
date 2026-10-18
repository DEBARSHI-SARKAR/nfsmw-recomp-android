/* speed.exe 0052b410 FUN_0052b410; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0052b430 FUN_0052b430
 */

undefined4 __thiscall FUN_0052b410(undefined4 param_1,byte param_2)

{
  FUN_0052b430();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

