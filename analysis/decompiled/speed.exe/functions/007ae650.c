/* speed.exe 007ae650 FUN_007ae650; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 007ae670 FUN_007ae670
 */

undefined4 __thiscall FUN_007ae650(undefined4 param_1,byte param_2)

{
  FUN_007ae670();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

