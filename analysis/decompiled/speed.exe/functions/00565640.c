/* speed.exe 00565640 FUN_00565640; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00565600 FUN_00565600
 */

undefined4 __thiscall FUN_00565640(undefined4 param_1,byte param_2)

{
  FUN_00565600();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

