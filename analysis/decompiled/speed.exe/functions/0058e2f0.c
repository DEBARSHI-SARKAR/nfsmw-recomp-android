/* speed.exe 0058e2f0 FUN_0058e2f0; analysis pseudocode, not buildable source.
 * calls 0058e310 FUN_0058e310
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0058e2f0(undefined4 param_1,byte param_2)

{
  FUN_0058e310();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

