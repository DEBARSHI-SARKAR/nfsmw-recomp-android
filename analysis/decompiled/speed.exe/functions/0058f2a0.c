/* speed.exe 0058f2a0 FUN_0058f2a0; analysis pseudocode, not buildable source.
 * calls 0057e390 FUN_0057e390
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0058f2a0(undefined4 param_1,byte param_2)

{
  FUN_0057e390();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

