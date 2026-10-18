/* speed.exe 0067d600 FUN_0067d600; analysis pseudocode, not buildable source.
 * calls 0067cb80 FUN_0067cb80
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0067d600(undefined4 param_1,byte param_2)

{
  FUN_0067cb80();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

