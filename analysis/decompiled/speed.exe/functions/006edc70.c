/* speed.exe 006edc70 FUN_006edc70; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 006edc00 FUN_006edc00
 */

undefined4 __thiscall FUN_006edc70(undefined4 param_1,byte param_2)

{
  FUN_006edc00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

