/* speed.exe 005201c0 FUN_005201c0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00512340 thunk_FUN_007916d0
 */

undefined4 __thiscall FUN_005201c0(undefined4 param_1,byte param_2)

{
  thunk_FUN_007916d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

