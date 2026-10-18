/* speed.exe 0058e920 FUN_0058e920; analysis pseudocode, not buildable source.
 * calls 0057d970 FUN_0057d970
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0058e920(undefined4 param_1,byte param_2)

{
  FUN_0057d970();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

