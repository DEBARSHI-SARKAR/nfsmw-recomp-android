/* speed.exe 006342f0 FUN_006342f0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00634310 FUN_00634310
 */

undefined4 __thiscall FUN_006342f0(undefined4 param_1,byte param_2)

{
  FUN_00634310();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

