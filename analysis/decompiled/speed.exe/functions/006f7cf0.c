/* speed.exe 006f7cf0 FUN_006f7cf0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 006f7c80 FUN_006f7c80
 */

undefined4 __thiscall FUN_006f7cf0(undefined4 param_1,byte param_2)

{
  FUN_006f7c80();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

