/* speed.exe 006f62c0 FUN_006f62c0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 006f5cf0 FUN_006f5cf0
 */

undefined4 __thiscall FUN_006f62c0(undefined4 param_1,byte param_2)

{
  FUN_006f5cf0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

