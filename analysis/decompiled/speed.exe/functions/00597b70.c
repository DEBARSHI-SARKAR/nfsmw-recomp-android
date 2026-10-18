/* speed.exe 00597b70 FUN_00597b70; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0058e320 FUN_0058e320
 */

undefined4 __thiscall FUN_00597b70(undefined4 param_1,byte param_2)

{
  FUN_0058e320();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

