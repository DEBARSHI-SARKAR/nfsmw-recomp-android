/* speed.exe 00591f40 FUN_00591f40; analysis pseudocode, not buildable source.
 * calls 00585d00 FUN_00585d00
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00591f40(undefined4 param_1,byte param_2)

{
  FUN_00585d00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

