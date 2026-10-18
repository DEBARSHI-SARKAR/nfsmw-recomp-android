/* speed.exe 0059bae0 FUN_0059bae0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00528120 FUN_00528120
 */

undefined4 __thiscall FUN_0059bae0(undefined4 param_1,byte param_2)

{
  FUN_00528120();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

