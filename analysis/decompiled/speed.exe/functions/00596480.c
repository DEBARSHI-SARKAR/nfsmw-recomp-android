/* speed.exe 00596480 FUN_00596480; analysis pseudocode, not buildable source.
 * calls 0058e110 FUN_0058e110
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00596480(undefined4 param_1,byte param_2)

{
  FUN_0058e110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

