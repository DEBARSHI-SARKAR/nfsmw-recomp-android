/* speed.exe 0047aea0 FUN_0047aea0; analysis pseudocode, not buildable source.
 * calls 00475a10 FUN_00475a10
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0047aea0(undefined4 param_1,byte param_2)

{
  FUN_00475a10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

