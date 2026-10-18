/* speed.exe 00556520 FUN_00556520; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0054b230 FUN_0054b230
 */

undefined4 __thiscall FUN_00556520(undefined4 param_1,byte param_2)

{
  FUN_0054b230();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

