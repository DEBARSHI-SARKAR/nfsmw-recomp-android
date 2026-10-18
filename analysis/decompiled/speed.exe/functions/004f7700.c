/* speed.exe 004f7700 FUN_004f7700; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 004f5260 thunk_FUN_004f43f0
 */

undefined4 __thiscall FUN_004f7700(undefined4 param_1,byte param_2)

{
  thunk_FUN_004f43f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

