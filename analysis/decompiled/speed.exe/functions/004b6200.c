/* speed.exe 004b6200 FUN_004b6200; analysis pseudocode, not buildable source.
 * calls 004b6140 FUN_004b6140
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_004b6200(undefined4 param_1,byte param_2)

{
  FUN_004b6140();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

