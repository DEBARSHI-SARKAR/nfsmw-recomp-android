/* speed.exe 006d9f70 FUN_006d9f70; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 006ceb00 FUN_006ceb00
 */

undefined4 __thiscall FUN_006d9f70(undefined4 param_1,byte param_2)

{
  FUN_006ceb00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

